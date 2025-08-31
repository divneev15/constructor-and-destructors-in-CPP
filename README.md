
# **EXP-13 Constructors and Destructors in C++**

## **Aim**

To understand and implement the concept of constructors and destructors in C++ by exploring their types—default, parameterized, copy constructors, and destructors—and to learn how they manage object initialization and memory cleanup throughout the object lifecycle.

---

## **Software Used**

* **IDE:** Visual Studio Code
* **Operating System:** Windows/Linux

---

## **Theory**

### **What is a Constructor?**

A constructor is a **special member function of a class** that is automatically invoked when an object is created. It initializes the data members of the class with either default or user-defined values.

#### **Key Characteristics of a Constructor:**

* It has the **same name as the class**.
* It does **not return any value**, not even `void`.
* It is called **automatically during object creation**.
* Constructors can be **overloaded** to provide multiple ways of object initialization.

#### **Types of Constructors:**

1. **Default Constructor**

   * Used to initialize objects with default or pre-set values.
   * Automatically provided by the compiler if not explicitly defined.

2. **Parameterized Constructor**

   * Used when the object must be initialized with specific values at the time of creation.
   * Accepts arguments to set data members.

3. **Copy Constructor**

   * Used to create a new object as an **exact copy** of an existing object.
   * Especially useful when objects contain dynamically allocated resources.

4. **Constructor Defined Outside the Class**

   * Illustrates that constructor declaration can be inside the class and defined outside using the scope resolution operator `::`.

---

### **What is a Destructor?**

A destructor is a **special member function** that is automatically called when an object goes out of scope or is explicitly deleted. Its main job is to release resources such as dynamic memory, file handles, or network connections.

#### **Key Characteristics of a Destructor:**

* Its name is the **same as the class name but preceded by a tilde (\~)**.
* **Takes no arguments** and **returns no value**.
* There can be **only one destructor** in a class.
* Called **automatically** at the end of the object's lifetime.

---

### **Importance of Constructors and Destructors**

* They help in **automating the process of initialization and cleanup**.
* Reduce repetitive code and improve **readability and maintainability**.
* Ensure **resource safety**, preventing memory leaks and dangling pointers.
* Enhance **encapsulation and abstraction**, as users do not need to worry about initialization or destruction details.

---

## **Algorithms**

Each algorithm describes the **step-by-step process** of how each type works conceptually, without actual code.


# 1) Default Constructor

## Stepwise Algorithm

1. Start.
2. Define a class named `Student`.
3. Declare private data members: `rollno`, `name`, `fee`.
4. Define a default constructor `Student()` that:
   4.1 Prompts “Enter Roll No:” and reads `rollno`.
   4.2 Prompts “Enter Name:” and reads `name`.
   4.3 Prompts “Enter Fee:” and reads `fee`.
5. Define a `display()` function to print `rollno`, `name`, `fee`.
6. In `main`, create object `s1` → default constructor runs automatically.
7. Call `s1.display()` to show stored details.
8. End.

## Sample Output

Enter Roll No: 101
Enter Name: Raj
Enter Fee: 15000

Student Details:
Roll No: 101
Name: Raj
Fee: 15000

---

# 2) Constructor Defined Outside the Class

## Stepwise Algorithm

1. Start.
2. Define a class `Cuboid`.
3. Declare private data members: `length`, `width`, `height`.
4. Inside the class, **declare** a default constructor `Cuboid()` (no body here).
5. Inside the class, define a function `volume()` that returns `length × width × height`.
6. **Outside** the class, **define** the constructor `Cuboid()` that:
   6.1 Prompts and reads `length`.
   6.2 Prompts and reads `width`.
   6.3 Prompts and reads `height`.
7. In `main`, create object `c1` → constructor (defined outside) runs.
8. Compute `vol = c1.volume()`.
9. Print `vol`.
10. End.

## Sample Output

Enter Length: 5
Enter Width: 4
Enter Height: 3

Volume of Cuboid: 60

---

# 3) Parameterized Constructor

## Stepwise Algorithm

1. Start.
2. Define a class `Cuboid`.
3. Declare private data members: `height`, `width`, `length`.
4. Define a parameterized constructor `Cuboid(h, w, l)` that assigns:
   4.1 `height = h`
   4.2 `width  = w`
   4.3 `length = l`
5. Define a function `volume()` that returns `height × width × length`.
6. In `main`, create object `c1` using specific values, e.g., `(5, 4, 3)`.
7. Compute `vol = c1.volume()`.
8. Print `vol`.
9. End.

## Sample Output

Volume of Cuboid: 60

---

# 4) Copy Constructor

## Stepwise Algorithm

1. Start.
2. Define a class `Subjects`.
3. Declare private data members: `sub1`, `sub2`, `sub3`.
4. Define a parameterized constructor `Subjects(s1, s2, s3)` to set all three subjects.
5. Define a **copy constructor** `Subjects(Subjects &obj)` that copies:
   5.1 `sub1 = obj.sub1`
   5.2 `sub2 = obj.sub2`
   5.3 `sub3 = obj.sub3`
6. Define `display()` to print `sub1`, `sub2`, `sub3`.
7. In `main`, create `s1` using parameterized constructor (e.g., “Math”, “Physics”, “Chemistry”).
8. Create `s2` using the copy constructor with `s1`.
9. Call `s1.display()` and `s2.display()` to verify identical values.
10. End.

## Sample Output

Original Object:
Subjects: Math, Physics, Chemistry

Copied Object:
Subjects: Math, Physics, Chemistry

---

# 5) Destructor

## Stepwise Algorithm

1. Start.
2. Declare a global counter `count = 0`.
3. Define a class `Books`.
4. Declare private data members: `title`, `author`, `price`.
5. Define a constructor `Books(t, a, p)` that:
   5.1 Assigns `title = t`, `author = a`, `price = p`.
   5.2 Increments `count`.
   5.3 Prints “Constructor called. Objects created: ” + `count`.
6. Define a destructor `~Books()` that:
   6.1 Decrements `count`.
   6.2 Prints “Destructor called. Objects remaining: ” + `count`.
7. In `main`, create object `b1` (constructor message appears).
8. Open a new inner block and create `b2` (constructor message appears).
9. Exit inner block → `b2` is destroyed (destructor message appears).
10. Create `b3` (constructor message appears).
11. End `main` → remaining objects destroyed automatically (destructor messages appear).
12. End.

## Sample Output

Constructor called. Objects created: 1
Constructor called. Objects created: 2
Destructor called. Objects remaining: 1
Constructor called. Objects created: 2
Destructor called. Objects remaining: 1
Destructor called. Objects remaining: 0

## **Conclusion**

This study demonstrated the use of different types of constructors and destructors to manage object lifecycle efficiently in C++.

* **Default constructors** simplify object initialization when no parameters are needed.
* **Parameterized constructors** give flexibility to set custom values during creation.
* **Copy constructors** ensure efficient duplication without re-initializing values manually.
* **Constructors defined outside the class** improve modularity and readability of code.
* **Destructors** automatically clean up memory and resources, preventing memory leaks.

Through this, we understand that constructors and destructors are essential tools for **encapsulation, automation, memory management, and reducing redundancy** in object-oriented programming.


