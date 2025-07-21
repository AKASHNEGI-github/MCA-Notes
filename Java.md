# JAVA
---

---

### First Java Program
```java
public class Main{
    public static void main(String[] args){
        System.out.println("Hello World!"); // Hello World!
    }
}
```

### Explain Input - Output in Java
```java
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter First Number: ");
        int num1 = input.nextInt();
        System.out.print("Enter Second Number: ");
        int num2 = input.nextInt();
        System.out.println("Sum : " + (num1 + num2)); // Sum : 7
        input.close();
    }
}
```

### Explain Conditional Statements in Java
- If-Else
```java
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int num = input.nextInt();
        if(num > 0){
            System.out.println("Positive");
        }
        else if(num < 0){
            System.out.println("Negative");
        }
        else{
            System.out.println("Zero");
        }
        input.close();
    }
}
```

- Switch
```java
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int num = input.nextInt();
        String day;
        switch(num){
            case 1:
                day = "Sunday";
                break;
            case 2:
                day = "Monday";
                break;
            case 3:
                day = "Tuesday";
                break;
            case 4:
                day = "Wednesday";
                break;
            case 5:
                day = "Thursday";
                break;
            case 6:
                day = "Friday";
                break;
            case 7:
                day = "Saturday";
                break;
            default:
                day = "Invalid day";
        }
        input.close();
        System.out.println("Day : " + day);
    }
}
```

### Explain Loops in Java
- For Loop
```java

```

- While Loop
```java

```

- Do-While Loop
```java

```

### Explain Functions in Java
```java

```









