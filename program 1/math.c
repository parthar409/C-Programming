Lagrange's method is a technique for finding general solutions of linear partial differential equations of order one, i.e.
equations of the form Pp + Qq = R, where P, Q, and R are functions of x, y, and z and p and q are partial derivatives of the
unknown function z with respect to x and y, respectively.

The basic idea of Lagrange's method is to introduce a new function F(x,y,z) such that

F(x,y,z) = P(x,y,z)p(x,y,z) + Q(x,y,z)q(x,y,z) - R(x,y,z)

Taking partial derivatives of F with respect to x and y, we get:

F/x = P/x p + P p/x + Q/x q + Q q/x

F/y = P/y p + P p/y + Q/y q + Q q/y

Now, if we substitute p = xz and q = yz into these equations, we can simplify them to:

F/x = (P/x - P)x + Q/x y

F/y = (P/y - Q)y + Q/y x

Since F(x,y,z) = 0 is a necessary condition for a solution of Pp + Qq = R, we can set F/x = 0 and F/y = 0, which gives us two
equations for finding the general solution of the partial differential equation:

P/x - P = 0

Q/y - Q = 0

These equations can be solved for P and Q to obtain the general solution of the partial differential equation.

In summary, Lagrange's method of solving linear partial differential equations of order one involves introducing a new function
F(x,y,z) and taking partial derivatives of F with respect to x and y.
The resulting equations, F/x = 0 and F/y = 0, are used to find the general solution of the original partial differential equation.