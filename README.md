# daeshift-demo-repo-02

A hello world as a Windows DLL, used as a code repository by the
[daeshift demo project](https://github.com/daemorgue/daeshift-demo-project).
`hello.dll` exports `hello_world()`, and `hello.exe` calls it.

Build with MinGW-w64, on Windows or from Linux:

```
$ x86_64-w64-mingw32-gcc -shared -o hello.dll hello.c
$ x86_64-w64-mingw32-gcc -o hello.exe main.c hello.dll
```

Or with Microsoft's compiler, in a Developer Command Prompt:

```
> cl /LD hello.c
> cl main.c hello.lib
```

Then run `hello.exe`, with `hello.dll` in the same folder:

```
> hello.exe
Hello, world!
```
