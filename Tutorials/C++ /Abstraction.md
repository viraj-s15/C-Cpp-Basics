<b> <font size="6"> What is Abstraction? </b></font>

---

<font size = "4"> 
Abstraction is a term that you may have seen in the very first file that you read. It is one of the pillars of Object Oriented Programming, it is an extremely important feature of the same. It refers to the hiding of unnecessary data from the user. Let's consider a real life example. Imagine a person using a mobile phone, he clicks the google chrome app and it opens. The user knows that he has clicked an icon and the app has opened. However, the user does not know the process that goes on behind the opening of the app. All he knows is that pressing the icon will open the app. That is the only thing a user needs to know. 
</font>

<b> <font size="6"> How is abstraction implemented in C++? </b></font>

---

<font size = "4">
Abstraction is implemented in C++, mainly using access modifiers.
These modifiers help us hide the data that is not useful to the user of the application. This kind of data mainly includes data types used in the application. Let's take the previous code as an example. We defined a human and we gave it attributes, these attributes that we defined as user data types, are not very useful for the user of the application. All the user needs to know is how to set the data. He doesn't have to know about how the data is being handled. 
<br>
There are three types of access modifiers:<br>
- Private <br>
- Public<br>
- Protected <br>
Data memebrs such as the attributes of the human inthe previous file should be put under the private access modifier. Everything else goes under public. Here is an example:

```c++
Class Human {
private:
    string name:
    int age;
    string gender:
    string city:
public:

//  All functions that are responsible for handling the data are put here
};
```

Now you are probbaly wondering how we are gonna access the data once it is inside the private access modifier. This includes another concept that we will be going through in the next section.

</font>
