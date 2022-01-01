## 依赖关系 Dependency
![image](https://user-images.githubusercontent.com/41529680/147849292-269beac5-dba1-41ad-a1ca-343651391c0f.png)


```java
public class Dependency {
    public static void main(String[] args){
        Driver driver = new Driver();
        Car car = new Car();
        driver.drive(car);
        driver.drive1();
        driver.drive2();

    }
}

class Driver{
    public void drive(Car car){
        car.run();//通过形参方式发生依赖关系
        System.out.println("driving");
    }

    public void drive1(){
        Car car = new Car();
        car.run();//通过局部变量发生依赖关系
        System.out.println("driving 1");
    }

    public void drive2(){
        Car.run(); //通过静态变量发生依赖关系
        System.out.println("driving 2");
    }
}

class Car{
    public static void run(){ //之所以加static是为了满足Car.run()的调用要求
        System.out.println("Runing");
    }
}
```
