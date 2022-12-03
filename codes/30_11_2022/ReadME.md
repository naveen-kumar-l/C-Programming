## physics concept for the [Program6_S20220010124](https://github.com/naveen-kumar-l/C-Programming/blob/main/codes/30_11_2022/Program6_20220010124.c)

let <br>
v<sub>1</sub> = speed when ball hits the ground for the first time<br>
v<sub>2</sub> = speed when ball hits the ground for the second time<br>
v<sub>3</sub> = speed when ball hits the ground for the third time<br>

h<sub>1</sub> = distance travelled by the ball when it hits the ground for the first time. <br>
h<sub>2</sub> = distance travelled by the ball between the first and second time hiting the ground. <br>
h<sub>3</sub> = distance travelled by the ball between the second and third time hiting the ground.
g = gravity<br>

<details><summary>h<sub>1</sub> = h</summary>
let assume as h for the time being
</details>

<details><summary>h<sub>2</sub> = h/2</summary>

**lets find the speed when bounce from the ground for the first time<br>**

from v<sup>2</sup> - u<sup>2</sup> = 2as <br>
v<sub>1</sub> = (2gh)<sup>1/2</sup> (since initial velocity u<sub>1</sub> = 0)<br>
given that speed becomes half each time it bounces on the floor<br>
so it will bounce back with velocity u<sub>2</sub> = v<sub>1</sub> * 1/2

**Caluculating the h<sub>2</sub> value<br>**

from v<sup>2</sup> - u<sup>2</sup> = 2as
    
distance travelled in upward journey = u<sub>2</sub><sup>2</sup>/2g<br>
= ( (v<sub>1</sub>/2 )<sup>2</sup> ) / 2g<br>
= (2gh/4) / 2g<br>
= h/4<br>

h<sub>2</sub> = distance travelled in upward journey + distance travelled in downward journey<br>
= distance travelled in upward journey * 2<br>
= (h/8)*2<br>
=h/4

</details>

<details><summary>h<sub>3</sub> = h/8</summary>

**lets find the speed when bounce from the ground for the second time<br>**

from v<sub>2</sub> = u<sub>2</sub> = v<sub>1</sub>/2 <br>
v<sub>2</sub> = (2gh)<sup>1/2</sup>/2 <br>
given that speed becomes half each time it bounces on the floor<br>
so it will bounce back with velocity u<sub>3</sub> = v<sub>2</sub> * 1/2
= (2gh)<sup>1/2</sup>/4

**Caluculating the h<sub>3</sub> value<br>**

from v<sup>2</sup> - u<sup>2</sup> = 2gh
    
distance travelled in upward journey = u<sub>3</sub><sup>2</sup>/2g<br>
= (2gh/16) / 2g<br>
= h/16<br>

h<sub>3</sub> = distance travelled in upward journey + distance travelled in downward journey<br>
= distance travelled in upward journey * 2<br>
= (h/16)*2<br>
=h/8

</details>

Total distance travelled by the ball when it touches the ground for the third time is <br>
h<sub>1</sub> + h<sub>2</sub> + h<sub>3</sub> <br>
= h + h/2 + h/8 <br><br>


![physics concept](./image/physics%20concept.jpg)