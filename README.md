# mine-sweeper

经典扫雷游戏，用 Qt 5 实现。

目前使用 XMake 进行构建编译。

XMake 工具太牛逼了，比 CMake 的配置和构建要方便一些，可以学一下。

# 构建流程

安装教程请自行参考[官方文档](https://xmake.io/)，这里假设已经安装好 XMake 工具。

XMake 默认会自动探测 Qt 环境，当然也可以指定 Qt SDK 环境目录：

> 注：以下的命令均在项目根目录执行，XMake 帮我们处理好了目录管理，会自动创建配置缓存目录，例如 .xmake 和 build，不用我们担心。

```bash
xmake f --qt=D:\Qt\5.15.2\
```

如果想要使用 Windows 下 MingW 的 Qt 环境，可以切到 mingw 的平台配置，并且指定下 mingw 编译环境的 sdk 路径即可，例如：

```bash
xmake f -p mingw --sdk=D:\Qt\Tools\mingw810_64\
```

当然我的机器上只安装了 Qt 5.15.2 版本的 Mingw 环境，因此我选择第二个。

另外，xmake f 对应命令 xmake config，代表对当前项目进行配置。如果想要使用全局配置可使用 xmake g，即 xmake global。

全局配置的文件在 Windows 下在 ~\AppData\Local\.xmake\xmake.conf，在 Linux 下在 ~/.xmake/xmake.conf。

配置完毕以后，就可以进行编译构建了。

```bash
xmake build <target>
```

如果没有编译或者依赖错误，就能得到可执行文件了。

```bash
xmake run <target>
```

如果不加 target 参数代表编译和运行所有的 target。

然后，就能看到一个 Qt Widget 程序正确的运行了，比使用 Qt Creator 不知道轻量了多少倍。

# 更多细节

TODO：目前仅放出参考链接，后续继续研究并形成总结文档。

## 使用 Vscode + Qt + Terminal 开发

参考：[https://xmake.io/#/plugin/more_plugins?id=configure-intellsence](https://xmake.io/#/plugin/more_plugins?id=configure-intellsence)

## Windows 无法向控制台输出文字内容

参考：[https://github.com/xmake-io/xmake/issues/3371](https://github.com/xmake-io/xmake/issues/3371)

