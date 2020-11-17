class Solution {
public:
    int mirrorReflection(int p, int q) {
        int k = 1;
     while( p*k % q != 0) 
         k += 1 ;
	if( k % 2 ==0 ) 
        return 0;
	
	int r =  p*k /q;
	if(r % 2 ==0) return 2;
	if(r % 2 ==1) return 1;
    return -1;
    }
};
/*https://leetcode.com/problems/mirror-reflection/discuss/313520/most-detailed-explanation-rather-than-code-of-course-including-code*/
We should let laser ray keep straight to draw it's trajectory, as blowed:

image ![hii](https://assets.leetcode.com/users/turnhead/image_1560506889.png)

We can get the triangle(x, y) from the triangle(p, q) if the laser ray is straight，so x/p = y/q. Because the result of x/p is interger, so the result of y/q is interger. In order to find the minimum number that satisfies y, we can start a variable k at one, so y = pk, as pieces of code blowed
k = 1 while( p*k % q != 0) k += 1 ;
So, we can get k, so we know x and y. Next we can find the answer easily, as the second picture belowed,

if we want to make laser ray meet the receptor 0:
image
as showed above, if we want to make laser ray meet the receptor 0, the numbers of reflection must be even numbers, so k is even number：
if( k % 2 ==0 ) return 0;

if we want to make laser ray meet the receptor 1 or 2:
image
we can get : X1/p = 2m + 1 , X2/p = 2m:
int r = p*k /q; if(r % 2 ==0) return 2; if(r % 2 ==1) return 1;
