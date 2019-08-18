# 命令模式

## 概述

封装方法调用，这样就可以把运算块包装成形。调用此运算的对象不需要关心事情是如何进行的，只要知道如何使用包装成形的方法来完成它即可。通过封装方法调用，也可以做一些例如记录日志的事情。



## 模式定义

将“请求”封装成对象，以便使用不同的请求、队列或者日志来参数化其他对象。命令模式也支持撤销的操作。

命令对象通过在特定的接收者上绑定一组动作来封装一个请求。为了实现这一点，命令对象将动作和接收者包进对象中，并只暴露出一个`execute()`方法，当此方法被调用的时候，接收者就会执行这些动作。从外面看，其他对象不知道是哪个接收者执行了哪些动作，只知道调用了`execute()`达到了目的。

![command](/Users/uzhiqiang/设计模式笔记/out/figure/command/command.svg)

命令模式可以将“动作的请求者”从“动作的执行者”对象中解耦。将“发出请求的对象”和“接受与执行这些请求的对象”分隔开来。

- `Receiver`

  动作的执行者，比如是一个音响类，它可以执行开/关机、调整音量、模式选择、蓝牙连接等功能。

  ```c++
  class Sound
  {
    public:
  		on()
  		off()
  		AdjustVolume() //调整音量
  		SelectMode() //室内、户外、KTV
  		ConnectBluetooth()
  		//其他方法
  }
  ```

- `ConcreteCommand`

  封装具体命令的命令对象，实现了命令的公共接口`Command`，并且包含了命令接收和执行者`Receiver`成员。`ConcreteCommand`命令对象只对外暴露`execute()`方法，并在该方法里面委托`Receiver`执行了一组它的动作以完成这个具体命令，进而封装了一组`Receiver`的方法调用。接上例，你对音响有一个自己喜欢的设置状态，你每次开启音响希望它能够自动把各个参数配置成你喜欢的样子，可能涉及音量、模式等等具体动作，这时候你定义了一个`StartSound`命令对象如下所示：

  ```c++
    class StartSound
    {
    public:
      	void execute() {
          sound.on()
          sound.AdjustVolume(20) //调整音量
          sound.SelectMode("KTV") //室内、户外、KTV
          ConnectBluetooth("HUAWEI P30")
          //其他操作
        }
    private:
    		Sound sound;
    }
  ```

  注意，`ConcreteCommand`可以包含多个不同的`Receiver`成员，这样可以执行复杂的命令。例如，周五下班回家，想唱歌放松一下，这就需要将家里的模式转换成KTV模式，这里涉及灯光、音响、空调、电视、话筒等各种不同的`Receiver`。

- `Client`

  客户负责创建`Receiver`和`ConcreteCommand`，其中`Receiver`即为`ConcreteCommand`这个命令对象的动作接收者和执行者。



## Demo

### 需求

### 需求分析及设计思路

### 代码

