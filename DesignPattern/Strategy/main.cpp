#include <iostream>
#include "Duck/Duck.h"
#include "Duck/FlyBehavior.h"
#include "Duck/QuackBehavior.h"

int main() {
    FlyNoWay flyNoWay;
    FlyWithWings flyWithWings;
    FlyWithRocket flyWithRocket;

    Quack quack;
    Squeak squeak;
    MuteQuack muteQuack;


    MallardDuck mallardDuck;
    mallardDuck.SetFlyBehavior(&flyNoWay);
    mallardDuck.SetQuackBehavior(&quack);
    mallardDuck.display();
    mallardDuck.PerformSwim();
    mallardDuck.PerformFly();
    mallardDuck.PerformQuack();

    std::cout << "-----------" << std::endl;

    YellowDuck yellowDuck;
    yellowDuck.SetFlyBehavior(&flyNoWay);
    yellowDuck.SetQuackBehavior(&muteQuack);
    yellowDuck.display();
    yellowDuck.PerformSwim();
    yellowDuck.PerformFly();
    yellowDuck.PerformQuack();
    yellowDuck.SetFlyBehavior(&flyWithWings);
    yellowDuck.SetQuackBehavior(&quack);
    yellowDuck.PerformFly();
    yellowDuck.PerformQuack();
    yellowDuck.SetFlyBehavior(&flyWithRocket);
    yellowDuck.SetQuackBehavior(&squeak);
    yellowDuck.PerformFly();
    yellowDuck.PerformQuack();

    return 0;
}