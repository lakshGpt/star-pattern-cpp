#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// pattern 1
/*
****
****
****
****
*/

void pattern1(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            cout<<"*";
        }
        cout<<endl;        
    }
}

// pattern2
/*
111
222
333
*/

void pattern2(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            cout<<i+1;
        }
        cout<<endl;        
    }
}

// pattern3
/*
1234
1234
1234
1234
*/

void pattern3(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            cout<<j+1;
        }
        cout<<endl;        
    }
}

// pattern4
/*
4321
4321
4321
4321
*/

void pattern4(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            cout<<row-j;
        }
        cout<<endl;        
    }
}

// pattern5
/*
123
456
789
*/

void pattern5(int row){
    int k=1;
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;        
    }
}

// pattern6
/*
*
**
***
****
*****
*/

void pattern6(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j <=i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;        
    }
}

// pattern7
/*
1
22
333
4444
55555
*/

void pattern7(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j <= i; j++)
        {
            cout<<i+1;
        }
        cout<<endl;        
    }
}

// pattern8
/*
1
2 3
3 4 5
4 5 6 7
*/

void pattern8(int row){
    for(int i=0;i<row;i++){
        // int k=i+1;
        for (int j = 0; j <= i; j++)
        {
            cout<<i+j+1<<" ";
            // k++;
        }
        cout<<endl;        
    }
}

// pattern9
/*
1
21
321
4321
*/

void pattern9(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j <= i; j++)
        {
            cout<<i-j+1;
        }
        cout<<endl;        
    }
}

// pattern10
/*
AAA
BBB
CCC
*/

void pattern10(int row){
    char c = 'A';
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            cout<<char(c+i);
        }
        cout<<endl;        
    }
}

// pattern11
/*
ABC
ABC
ABC
*/

void pattern11(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            char c = 'A'+j;
            cout<<c;
        }
        cout<<endl;        
    }
}

// pattern12
/*
ABC
DEF
GHI
*/

void pattern12(int row){
    int k=0;
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            char c = 'A'+k;
            k++;
            cout<<c;
        }
        cout<<endl;        
    }
}

// patter13
/*
ABC
BCD
CDE
*/

void pattern13(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            char c = 'A'+i+j;
            cout<<c;
        }
        cout<<endl;        
    }
}

// pattern14
/*
A
BB
CCC
*/

void pattern14(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j <= i; j++)
        {
            char c = 'A'+i;
            cout<<c;
        }
        cout<<endl;        
    }
}

// pattern15
/*
A
BC
DEF
GHIJ
*/

void pattern15(int row){
    int k=0;
    for(int i=0;i<row;i++){
        for (int j = 0; j <= i; j++)
        {
            char c = 'A'+k;
            k++;
            cout<<c;
        }
        cout<<endl;        
    }
}

// pattern16
/*
A
BC
CDE
DEFG
*/

void pattern16(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j <= i; j++)
        {
            char c = 'A'+i+j;
            cout<<c;
        }
        cout<<endl;        
    }
}

// pattern17
/*
D
CD
BCD
ABCD
*/

void pattern17(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j <=i; j++)
        {
            char c = 'A'+row-i+j-1;
            cout<<c;
        }
        cout<<endl;        
    }
}

// pattern18
/*
   *
  **
 ***
****
*/

void pattern18(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            if(j>=row-i-1)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;        
    }
}

// pattern19
/*
****
***
**
*
*/

void pattern19(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            if(j<row-i)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;        
    }
}

// pattern20
/*
****
 ***
  **
   *
*/

void pattern20(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            if(j>=i)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;        
    }
}

// pattern21
/*
1111
 222
  33
   4
*/

void pattern21(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            if(j>=i)cout<<i+1;
            else cout<<" ";
        }
        cout<<endl;        
    }
}

// pattern22
/*
   1
  22
 333
4444
*/

void pattern22(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            if(j>=row-i-1)cout<<i+1;
            else cout<<" ";
        }
        cout<<endl;        
    }
}

// pattern23
/*
1234
 234
  34
   4
*/

void pattern23(int row){
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            if(j>=i)cout<<j+1;
            else cout<<" ";
        }
        cout<<endl;        
    }
}

// pattern24
/*
      1
    2 3
  4 5 6
7 8 9 10
*/

void pattern24(int row){
    int k = 1;
    for(int i=0;i<row;i++){
        for (int j = 0; j < row; j++)
        {
            if(j>=row-i-1){
                cout<<k<<" ";
                k++;
            }
            else cout<<"  ";
        }
        cout<<endl;        
    }
}

// pattern25
/*
   1
  121
 12321
1234321
*/

void pattern25(int row){
    for(int i=0;i<row;i++){
        int k = 1;
        int j=0;
        for (; j < row; j++)        // for j=0 -> j=3 increment of k
        {
            if(j>=row-i-1){
                cout<<k<<" ";
                k++;
            }
            else{
                cout<<"  ";
            }
        }
        k--;
        for(;j<2*row-1;j++)         // for j=4 -> j=6 decrement of k
        {
            if(j>=row+i){
                cout<<"  ";
            }
            else{
                k--;
                cout<<k<<" ";
            }
        }
        cout<<endl;        
    }
}


// pattern26
/*
1234554321
1234**4321
123****321
12******21
1********1
*/

void pattern26(int row){
    for(int i=0;i<row;i++){
        int j=0;
        for(;j<row;j++){
            if(j<row-i) cout<<j+1<<" ";
            else cout<<"* ";
        }
        for(;j<2*row;j++){
            if(j-i>=row) cout<<2*row-j<<" ";
            else cout<<"* ";
        }
        cout<<endl;
    }
}

// pattern27
/*
*****
*   *
*   *
*   *
*****
*/

void pattern27(int row){
    for(int i=0;i<row;i++){
        if(i==0 || i==row-1){       // for 1st and last row 
            for(int j=0;j<row;j++)
                cout<<"* ";
        }
        else{
            for(int j=0;j<row;j++){         // for all middle rows
                if(j==0 || j==row-1 || i==j || i==row-j-1)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern28
/*
* * * * *
* *   * *
*   *   *
* *   * *
* * * * *
*/

void pattern28(int row){
    for(int i=0;i<row;i++){
        if(i==0 || i==row-1){       // for 1st and last row 
            for(int j=0;j<row;j++)
                cout<<"* ";
        }
        else{
            for(int j=0;j<row;j++){         // for all middle rows
                if(j==0 || j==row-1 || i==j || i==row-j-1)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern29
/*
      1
    2   2
  3   3   3
4   4   4   4
*/

void pattern29(int row){
    for(int i=0;i<row;i++){
        int flag = 1;
        for(int j=0;j<2*row-1;j++){
            if(j>=row-i-1 && j<row+i){
                if(flag == 1){
                    cout<<i+1<<"";
                    flag = 0;
                }
                else{
                    cout<<" ";
                    flag = 1;
                }
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

// pattern30
/*
1
12
123
1234
12345
*/

void pattern30(int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// pattern31
/*
1234
123
12
1
*/

void pattern31(int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<=row-i-1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// pattern32
/*
1
0 1
1 0 1
0 1 0 1
*/

void pattern32(int row){
    int k;
    for(int i=0;i<row;i++){
        k = i%2==0?1:0;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k = k==0?1:0;
        }
        cout<<endl;
    }
}

// pattern33
/*
*****
****
***
**
*
**
***
****
*****
*/

void pattern33(int row)
{
    for(int i=0;i<2*row-1;i++){
        if(i<row){
            for(int j=0;j<row;j++){
                if(j<row-i)cout<<"* ";
                else cout<<" ";
            }
        }
        else{
            for(int j=0;j<row;j++){
                if(j<=i-row+1)cout<<"* ";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
}

// pattern34
/*
   1
  212
 32123
4321234
*/
void pattern34(int row)
{
    for(int i=0;i<row;i++){
        int k=i+1;
        for(int j=0;j<row;j++){
            if(j>=row-i-1){
                cout<<k<<" ";
                k--;
            }
            else cout<<"  ";
        }
        k+=2;
        for(int j=row;j<2*row-1;j++){
            if(j<row+i){
                cout<<k<<" ";
                k++;
            }
            else cout<<"  ";
        }
        cout<<endl;
    }    
}

// pattern35 
/*
****
 ****
  ****
   ****
    ****
*/

void pattern35(int row)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<2*row-1;j++){
            if(j>=i && j<i+4)cout<<"* ";
            else cout<<" ";
        }
        cout<<endl;
    }
}

// pattern36 - for row = 4 only
/*
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
*/

void pattern36(int row)
{
    // for upper half
    for(int i=0;i<row;i++){
        int flag = 1;
        for(int j=0;j<2*row-1;j++){
            if((j>=row-i-1 && j<row+i) ){
                if(flag){
                    cout<<"* ";
                    flag =0;
                }
                else {
                    cout<<"  ";
                    flag = 1;
                }
            }
            else cout<<"  ";
        }
        cout<<endl;
    }

    // for lower half 
    for(int i=row;i<2*row-1;i++){
        int flag = 1;
        for(int j=0;j<2*row-1;j++){
            if(j>=i-row+1 && j<=2*row-i+1){
                if(flag){
                    cout<<"* ";
                    flag =0;
                }
                else {
                    cout<<"  ";
                    flag = 1;
                }
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}

// pattern37
/*
*         *
* *     * *
* * * * * *
* * * * * *
* *     * *
*         *
*/

void pattern37(int row)
{
    for(int i=0;i<2*row;i++){
        if(i<=row){
            for(int j=0;j<2*row;j++){
                if(j<=i || j>=2*row-i-1)cout<<"* ";
                else cout<<"  ";
            }
        }
        else{
            for(int j=0;j<2*row;j++){
                if(j<=2*row-i-1 || j>=i)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern38
/*
*           *
* *       * *
* * *   * * *
* * * * * * *
* * *   * * *
* *       * *
*           *
*/

void pattern38(int row)
{
    for(int i=0;i<2*row;i++){
        if(i<row){
            for(int j=0;j<2*row-1;j++){
                if(j<=i || j>=2*row-i-2)cout<<"* ";
                else cout<<"  ";
            }
        }
        else{
            for(int j=0;j<2*row-1;j++){
                if(j<2*row-i-1 || j>=i)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern39
/*
*               *
* *           * *
* * *       * * *  
* * * *   * * * *
* * * * * * * * *
*/

void pattern39(int row)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<2*row-1;j++){
            if(j<=i || j>=2*row-i-2)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;   
    }
}

// pattern40
/*
*****
****
***
**
*
**
***
****
*****
*/

void pattern40(int row)
{
    for(int i=0;i<2*row;i++){
        if(i<row){
            for(int j=0;j<row;j++){
                if(j<=row-i-1)cout<<"* ";
                else cout<<"  ";
            }
        }
        else{
            for(int j=0;j<row;j++){
                if(j>i-row)cout<<"  ";
                else cout<<"* ";
            }
        }
        cout<<endl;
    }
}

// pattern41
/*
    *
   * *
  * * *
 * * * *
* * * * *
*/

void pattern41(int row)
{
    int flag ;
    for(int i=0;i<row;i++){
        flag= 1;
        for(int j=0;j<2*row-1;j++){
            if(j>=row-i-1 && j<row+i){
                if(flag){
                    cout<<"* ";
                    flag = 0;
                }
                else{
                    cout<<"  ";
                    flag =1;
                }
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}

// pattern42
/*
1 2 3 4
 2 3 4
  3 4
   4
*/

void pattern42(int row)
{
    for(int i=0;i<row;i++){
        int flag = 1, k=i+1;
        for(int j=0;j<2*row-1;j++){
            if(j>=i && j<2*row-i-1){
                if(flag){
                    cout<<k<<" ";
                    k++;
                    flag = 0;
                }
                else{
                    cout<<"  ";
                    flag = 1;
                }
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}

// pattern43
/*
    * 
   * *
  *   * 
 *     *
* * * * *
*/

void pattern43(int row)
{
    int flag ;
    for(int i=0;i<row;i++){
        if(i==row-1){       // for last row of triangle
            flag = 1;
            for(int j=0;j<2*row-1;j++){
                if(flag){
                    cout<<"* ";
                    flag = 0;
                }
                else{
                    cout<<"  ";
                    flag = 1;
                }
            }
        }
        else{               // for remaining structure
            for(int j=0;j<2*row-1;j++){
                if(j==row-i-1 || j==row+i-1)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern44
/*
* * * * *
 *     *
  *   *
   * *
    * 
*/

void pattern44(int row)
{
    int flag ;
    for(int i=0;i<row;i++){
        if(i==0){       // for last row of triangle
            flag = 1;
            for(int j=0;j<2*row-1;j++){
                if(flag){
                    cout<<"* ";
                    flag = 0;
                }
                else{
                    cout<<"  ";
                    flag = 1;
                }
            }
        }
        else{               // for remaining structure
            for(int j=0;j<2*row-1;j++){
                if(j==i || j==2*row-i-2)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern45
/*
\ * * * * * /
* \ * * * / *
* * \ * / * *
* * * / * * *
* * / * \ * *
* / * * * \ *
/ * * * * * \
*/

void pattern45(int row)
{
    for(int i=0;i<2*row-1;i++){
            for(int j=0;j<2*row-1;j++){
                if(j==i)cout<<"\\";
                if(j==2*row-i-2 && i!=row-1)cout<<"/";
                if(i<row){
                    if(j<i || (j>i && j<2*row-i-2) || j>2*row-i-2)cout<<"*";
                }
                else{
                    if(j>i || (j>2*row-i-2 && j<i) || j<2*row-i-2)cout<<"*";
                }
            }
        cout<<endl;
    }
}

// pattern46
/*
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * * 
* * * * * * * * *
*/

void pattern46(int row)
{
    for(int i=0;i<2*row-1;i++){
        for(int j=0;j<2*row-1;j++){
            if(i<row){
                if(j<=row-i-1 || j>=row+i-1)cout<<"* ";
                else cout<<"  ";
            }
            else{
                if(j<=i-row+1 || j>2*row-i+1)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern47
/*
ABCDEFG
ABC EFG
AB   FG
A     G
*/
void pattern47(int row)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<2*row-1;j++){
            if(j<row-i || j>=row+i-1){
                char c = 'A'+j;
                cout<<c<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}

// pattern48
/*
*   * 
 * *
  * 
 * *
*   *
*/

void pattern48(int row)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if(i==j || j==row-i-1)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

// pattern49
/*
   1
  A B
 1 2 3
A B C D
*/

void pattern49(int row)
{
    for(int i=0;i<row;i++){
        int k = 1, flag = 1;
        for(int j=0;j<2*row-1;j++){
            if(j>=row-i-1 && j<row+i){
                if(flag){
                    if(i%2 == 0){
                        cout<<k<<" ";
                    }
                    else{
                        char c = 'A'+k-1;
                        cout<<c<<" ";
                    }
                    k++;
                    flag = 0;
                }
                else{
                    cout<<"  ";
                    flag = 1;
                }
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}

// pattern50 - n = 3
/*     
        *
      * *
    * * *
      * *
    |   *
*   | 
* * |
* * * 
* *
*
*/

void pattern50(int n)       
{
    int k ;
    for(int i=0;i<3*n;i++){
        for(int j=0;j<2*n-1;j++){
            if(i<n){    
                if(j>=2*n-i-2)cout<<"* ";
                else cout<<"  ";
            }
            else if(i<2*n){
                k =0;
                if(j==n-1){k=1;cout<<"| ";}
                if(j<=i-n-1){k=1;cout<<"* ";}
                if(j>=i){k=1;cout<<"* ";}
                if(k==0) cout<<"  ";
            }
            else if(i<3*n){
                if(j<3*n-i)cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// pattern51
/*
1
3 * 2
4 * 5 * 6
10 * 9 * 8 * 7
11 * 12 * 13 * 14 * 15
*/
void pattern51(int row)
{
    int flag=1,k=1;
    for(int i=0;i<row;i++){
        if(flag){
            for(int j=0;j<2*row;j++){
                if(j<=i){
                    cout<<k<<" ";
                    if(j+1 <= i)cout<<"* ";
                    k++;
                }
                else{
                    cout<<"  ";
                }               
            }
            flag = 0;
        }
        else{
            int temp =k+i;
            for(int j=0;j<2*row;j++){
                if(j<=i){
                    cout<<temp<<" ";
                    if(j+1 <= i)cout<<"* ";
                    temp--;
                }
                else{
                    cout<<"  ";
                }
            }
            k += (i+1);
            flag = 1;
        }
        cout<<endl;
    }
}

// pattern52
/*
* * * * * * *
*           *   
*   * * *   * 
*   *   *   * 
*   * * *   *
*           *  
* * * * * * * 
*/
void pattern52(int row)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if((i==0 || i==row-1 || j==0 || j==row-1) || (i>=2 && i<=4 && j>=2 && j<=4) && (i==2 || i==4 || j==2 || j==4))
                cout<<"* ";
            else
                 cout<<"  ";
        }            
        cout<<endl;
    }
}


int main(){
    int row ;
    cout<<"enter number of rows: ";
    cin>>row;
    // pattern1(row);
    // pattern2(row);
    // pattern3(row);
    // pattern4(row);
    // pattern5(row);
    // pattern6(row);
    // pattern7(row);
    // pattern8(row);
    // pattern9(row);
    // pattern10(row);
    // pattern11(row);
    // pattern12(row);
    // pattern13(row);
    // pattern14(row);
    // pattern15(row);
    // pattern16(row);
    // pattern17(row);
    // pattern18(row);
    // pattern19(row);
    // pattern20(row);
    // pattern21(row);
    // pattern22(row);
    // pattern23(row);
    // pattern24(row);
    // pattern25(row);
    // pattern26(row);
    // pattern27(row);
    // pattern28(row);
    // pattern29(row);
    // pattern30(row);
    // pattern31(row);
    // pattern32(row);
    // pattern33(row);
    // pattern34(row);
    // pattern35(row);
    // pattern36(row);
    // pattern37(row);
    // pattern38(row);
    // pattern39(row);
    // pattern40(row);
    // pattern41(row);
    // pattern42(row);
    // pattern43(row);
    // pattern44(row);
    // pattern45(row);
    // pattern46(row);
    // pattern47(row);
    // pattern48(row);
    // pattern49(row);
    // pattern50(row);
    // pattern51(row);
    pattern52(row);
    return 0;
}