## 说明

tree是一款开源工具，支持Linux/Unix/MacOS以及Windows等多种操作系统平台，在Linux中可以直接运行`sudo apt install tree`命令安装。在Windows平台该命令发布在Cygwin环境中，可以通过Cygwin的安装程序，在选择Package时选中并安装到Cygwin的bin路径下。

###### 修改内容：
由于在Windows平台这个tree命令只能在Cygwin环境下运行，而且在GBK中文环境下显示的效果较差。所以Fork了之后做了一些修改：
1. 在Windows环境下tree脱离Cygwin环境可以独立运行（例如将tree命令复制到Git bash bin目录使用）
2. 支持GBK（CP936）字符更好的显示目录文件的树形结构

###### 开发和编译环境：
* 操作系统：Windows 10
* 开发工具：VS Code & C/C++ Extension
* 编译器：MINGW-W64 8.1.0 GCC

顺便推荐下，VS Code真是一款牛X闪闪的轻量级IDE工具啊！微软大法好！long live Microsoft!

## 运行效果示例：

下面分别展示在Windows平台原生tree命令、Windows自带的tree.com命令、修改后的命令执行后的效果。

##### 1. Cygwin环境原来的tree命令效果
在Cygwin的终端（Terminal）中运行tree命令，会以可视化的树形结构展现指定文件夹下面的所有目录和文件。在GBK字符集环境下（Windows 10中文默认的字符集），该程序只能以标准ASCII字符来显示目录文件的树形结构。Cygwin终端运行`tree`命令运行效果如下：
```shell
$ tree
.
|-- CHANGES
|-- color.c
|-- doc
|   |-- tree.1
|   |-- tree.1.fr
|   `-- xml.dtd
|-- file.c
|-- hash.c
|-- html.c
|-- INSTALL
|-- json.c
|-- LICENSE
|-- Makefile
|-- mingw-w64
|   |-- include
|   |   |-- grp.h
|   |   |-- langinfo.h
|   |   |-- pwd.h
|   |   |-- stat.h
|   |   |-- types.h
|   |   `-- unistd.h
|   |-- mingw-w64-grp.c
|   |-- mingw-w64-langinfo.c
|   |-- mingw-w64-pwd.c
|   `-- mingw-w64-unistd.c
|-- README
|-- README.md
|-- strverscmp.c
|-- TODO
|-- tree.c
|-- tree.exe
|-- tree.h
|-- unix.c
`-- xml.c

3 directories, 31 files

```

##### 2. Windows自带的tree.com命令效果
Windows自带了tree.com命令，不过显示的效果和功能都比较弱鸡，在PowerShell中使用`tree.com /f`（默认只显示目录，加`/f`参数显示文件）命令看下运行效果：
```shell
Folder PATH listing for volume Windows
Volume serial number is 6AA8-4173
C:.
│  CHANGES
│  color.c
│  file.c
│  hash.c
│  html.c
│  INSTALL
│  json.c
│  LICENSE
│  Makefile
│  README
│  README.md
│  strverscmp.c
│  TODO
│  tree.c
│  tree.exe
│  tree.h
│  unix.c
│  xml.c
│
├─.vscode
│      c_cpp_properties.json
│      launch.json
│      tasks.json
│
├─doc
│      tree.1
│      tree.1.fr
│      xml.dtd
│
└─mingw-w64
    │  mingw-w64-grp.c
    │  mingw-w64-langinfo.c
    │  mingw-w64-pwd.c
    │  mingw-w64-unistd.c
    │
    └─include
            grp.h
            langinfo.h
            pwd.h
            stat.h
            types.h
            unistd.h



```
##### 3. 修改后的tree命令效果
这次修改是源于在使用Git Bash时，发现Git bash中没有在windows环境中实现tree命令。因此打算将这个开源的tree命令移植到Git bash环境中。
出于可以在脱离Cygwin环境独立使tree命令，以及在Windows中文环境加强显示效果的目的，做了本次修改。修改后的tree，在PowerShell中运行`tree.exe`命令后效果如下：
```shell
$ tree
.
├── CHANGES
├── color.c
├── doc
│   ├── tree.1
│   ├── tree.1.fr
│   └── xml.dtd
├── file.c
├── hash.c
├── html.c
├── INSTALL
├── json.c
├── LICENSE
├── Makefile
├── mingw-w64
│   ├── include
│   │   ├── grp.h
│   │   ├── langinfo.h
│   │   ├── pwd.h
│   │   ├── stat.h
│   │   ├── types.h
│   │   └── unistd.h
│   ├── mingw-w64-grp.c
│   ├── mingw-w64-langinfo.c
│   ├── mingw-w64-pwd.c
│   └── mingw-w64-unistd.c
├── README
├── README.md
├── strverscmp.c
├── TODO
├── tree.c
├── tree.exe
├── tree.h
├── unix.c
└── xml.c

3 directories, 31 files
```

查看修改后的版本信息：
```shell

$ tree --version
tree v1.8.0 (c) 1996 - 2018 by Steve Baker, Thomas Moore, Francesc Rocher, Florian Sesser, Kyosuke Tokoro
MINGW-W64 & GBK support added by Efrey Kong
```

