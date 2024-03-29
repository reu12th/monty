# The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```bash
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```

#### Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

```bash
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```

## 0. push, pall
Implement the `push` and `pall` opcodes.   

**The push opcode**   

The opcode `push` pushes an element to the stack.


## 1. pint
Implement the `pint` opcode.

**The pint opcode**   

The opcode `pint` prints the value at the top of the stack, followed by a new line.

## 2. pop
Implement the `pop` opcode.

**The pop opcode**

The opcode `pop` removes the top element of the stack.

## 3. swap
Implement the `swap` opcode.

**The swap opcode**

The opcode `swap` swaps the top two elements of the stack.

## 4. add
Implement the `add` opcode.

**The add opcode**

The opcode `add` adds the top two elements of the stack.

## 5. nop
Implement the `nop` opcode.

**The nop opcode**

The opcode `nop` doesn’t do anything.
