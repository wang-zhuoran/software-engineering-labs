## 聚合Aggregation
整体与部分之间的关系  
![image](https://user-images.githubusercontent.com/41529680/147849814-d909d69a-2b32-4636-a6f2-9d720c31a300.png)
  
```java
public class Aggregation {
    public static void main(String[] args){
        Driver driver = new Driver();
        driver.setCar(new Car());
        driver.drive();
    }

}

class Driver{
    private Car car = new Car();
    public void drive(){
        car.run();
    }
    public void setCar(Car newCar){
        car = newCar;
        System.out.println("new car set!");
    }
}

class Car{
    public void run(){
        System.out.println("running");
    }
}

```
