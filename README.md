# Advanced-Programming-Final-Project
Our final project for this course. It contains OOP-related codes.
Here's a short description of every code here:

1) Classes:
It's the introductory code  --yet, at the same time, one that contains many things. It contains a basic example of a class, which we called "Employee", with just one method and one constructor. However, this code was used all through the unit, so we kept adding more things. By the end, we had a second class --called Car-- which has getters, copy-constructors, a destructor, friend classes and friend functions. Although we didn't utilise everything in the main() function, it serves as a reference on how things are done.

2) Abstract Classes:
It's a very brief code about how abstract classes are declared. We made an "AbstractCar" with a virtual (or abstract) method called "start"; then, an actual (as in non-virtual) class named "Car" (we didn't struggle with coming up with names) inherits from it and defines the start() function. We make an instance of the Car class and use its only method in the main function.

3) Multiple Inheritance:
Here, we made to parent classes and two additional classes that inherited from both of them. Parents are Jazz and Blues, and the others are rock n' roll (Rnr) and Metal --which, technically speaking, do come from jazz and blues, just aren't their direct "successors". Both Jazz and Blues have a function called "play()", so we had to come up with ways to tell the computer which one should the inheriting classes should use (since they inherit both play() methods). In the Rnr class, we simply use the "::" to tell from which "scope" (or class) the method comes from and then use them one after the other in a method called "playplay()"; in the Metal class, we simply added two methods, play1() and play2(), and implemented one play() in one, and the other one in the other one.

4) Friend Classes:
This code has two classes: Diego and Abraham (who are friends). One has a "default" constructor (to use in case not all of the parameters are given) and the other one's got a copy-constructor. Since Abraham is Diego's friend, he can know which beer Diego drinks, and he uses it in a method. Also, diego has a friend function called "gatherup()", in which he will drink a random amount of beers --yet, he remains sober.

5) Operator Overload:
It is about complex numbers --as we know, they have 2 components: a real one and an imaginary one--, so we have to define how they will be operated. We define how the "=" should work, how the "<<" for cout should display them (they're shown as "a+bi"), how the + operator works with them, and also how division should be done (it ain't as straight-forward as the sum).

6) Templates:
Templates are, like their name implies, templates for creating things. A tamplate is similar to the thing created from it; it just has undefined variable types (they're just called "T" in our code). Here we made a template class and a template function, both intended to making sums. In the main() function, we simply specify which kind of data they will be working with and use them.

And that's a somewhat detailed description of the codes in this repository. Also, the order in which they're presented is the intended order to read them (in case you wish to). Feel free to check them out :)
