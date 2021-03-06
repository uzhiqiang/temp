# 策略模式

## 设计原则

### 原则一

找出应用中可能需要变化之处，把它们独立出来，不要和那些不需要变化的代码混在一起。

把会变化的部分取出并封装起来，以便以后可以很方便地改动或扩展此部分，而不影响不需要变化的其他部分。

### 原则二

针对接口编程，而不是针对实现编程。

这里所谓的“接口”有多个含义，”针对接口编程“真正的意思是“针对超类型编程”，关键就在多态。利用多态，程序可以针对超类型编程，执行时会根据实际状况执行到真正的行为，不好被绑定死在超类的行为上。“针对超类型编程”的意思是指变量的声明类型应该是超类型，通常是一个超类型或者是一个接口。

将会变化的部分封装起来，例如一个应用可能需要用到排序，具体的排序算法有很多，按照原则一，我们会将每一个排序算法的实现取出并封装起来，如果我们可以让这些排序算法共同继承自一个基类或实现一个接口，那么用户程序就可以利用多态的特性，使用基类提供的方法来完成排序，至于排序的具体算法，用户程序可以自己选择，而不受限于具体的算法实现，换一个算法就要重新实现一个类。初始化实例变量不够弹性。

### 原则三

多用组合，少用继承。

继承是is-a的关系，而组合则是has-a的关系。

## 模式定义

策略模式定义了算法族，分别封装起来，让它们之间可以互相替换，此模式让算法的变化独立于使用算法的客户。



## Demo

### 需求

某游戏公司要开发一款鸭子的游戏，要求如下：

- 鸭子应该具有鸭子的通用特点，并且要求品种可以扩展，例如：绿头野鸭、小黄鸭等
- 鸭子的发声可以随意改变，例如：不叫、呱呱叫、吱吱叫等
- 鸭子的飞行可以随意改变：例如：不飞、带着翅膀飞、坐着火箭飞等

### 需求分析及设计思路

- 考虑鸭子有一些共性行为，定义一个抽象类`Duck`，然后让具体的鸭子品种，例如绿头鸭`MallardDuck`、小黄鸭`YellowDuck`继承自`Duck`类。

- 考虑原则三和原则二，由于鸭子的发声和飞行动作可以随意改变，因此分别将这两个行为单独取出封装起来。不同的飞行行为均要实现`FlyBehavior`接口，不同的发声行为均要实现`QuackBehavior`接口。

![strategy](/Users/uzhiqiang/CLionProjects/DesignPattern/Strategy/doc/out/strategy/strategy.svg)

### 代码实现





