#include <iostream>
using namespace std;
int main()
{
    int a[4][4] = {1, 2, 3, 4,
                   5, 6, 7, 8,
                   9, 0, 9, 8,
                   7, 6, 5, 4};
    int n = 4;
    int top = 0;
    int left = 0;
    int down = n - 1;
    int right = n - 1;
    int ans=0;
    while (top <= down && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans+=a[top][i];           
        }
        top++;
        for (int i = top; i <= down; i++)
        {
            ans+=a[i][right];         
        }
         right--;
        if (top <= down)
        {
            for (int i = right; i >= left; i--)
            {
                ans+=a[down][i];             
            }
             down--;
        }
        if (left <= right)
        {
            for (int i = down; i >= top; i--)
            {
                ans+=a[i][left];               
            }
            left++;
        }
    }
    cout<<ans;
    return 0;
}