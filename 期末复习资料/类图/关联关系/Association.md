## 关联关系Association
关联关系分为单向关联和双向关联：
1. 在 Java 中，单向关联表现为：类 A 当中使用了 类 B，其中类 B 是作为类 A 的成员变量。
2. 双向关联表现为: 类 A 当中使用类 B 作为成员变量，同时类 B 中也使用了类 A 作为成员变量。

比依赖关系关联性更强  
![image](https://user-images.githubusercontent.com/41529680/147849697-d144d79b-46c8-4a07-9e16-3116339dd74f.png)

  
```java
public class Association {
    public static void main(String[] args)
    {
        Driver panda = new Driver();//司机是我
        panda.drive(); //我开车
    }
}

class Driver{
    private Car car = new Car();
    public void drive(){
        car.run();
    }
}

class Car{
    public void run(){
        System.out.println("running");
    }
}
```
