## 组合关系Composition
耦合度和关联性最强的关联关系  
不同关联关系的耦合度：Composition > Aggregation > Association > Dependency  
Unfortunatly, **关联、聚合、组合只能配合语义，结合上下文才能够判断出来，而只给出一段代码让我们判断是关联，聚合，还是组合关系，则是无法判断的。**  
![image](https://user-images.githubusercontent.com/41529680/147850014-46cce1f1-7502-42f6-b5f8-38f736d44201.png)

```java
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
