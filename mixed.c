#include<bits/stdc++.h>
using namespace std;

//alphabet check
bool alphabetcheck(char alphabet){
        if (alphabet >= 'a' && alphabet <= 'z')
            return true;
        return false;
    }

//vowel check
int vowelcheck(char vowel)
{
        if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u')
            return 0;
        return 1;
}

    
int main(void) {
    //the two sequences
    //string X = "waytocrack";// ----  GOOD
    //string X = "waaaaaaytocrack";//--BAD
    string X = "wayt?arack";  // mixed
    //length of the sequences
    int XLen = X.size();
    int Arr[2][20];
    memset(Arr, 0, sizeof(Arr[0][0]) * 2 * 20);
    int max0 = 0;
    int max1 = 0;
    int index;
    bool mixed_value = false;
    for (size_t i = 0; i < XLen; i++)
    {
        //alphabet check
        if (alphabetcheck(X[i]))
        {
            //vowel check fucntion:
            if ((vowelcheck(X[i])) == 0)
            {
                Arr[0][i+1] = Arr[0][i] + 1;
                if (Arr[0][i + 1] > max0)
                    max0 = Arr[0][i + 1]; //check for max 0
                if ((mixed_value == true) && (max0 >= 5) && (Arr[0][i + 1] >= 5)) 
// Arr[0][i + 1] >= 5 when current value is greater than 5
                {
                    if ((i - index >= 5 || (Arr[1][index] + Arr[0][index + 5] == 7)))
                     mixed_value = false;
                }
            }
            else
            {
                Arr[1][i + 1] = Arr[1][i] + 1;
                if (Arr[1][i + 1] > max1)
                    max1 = Arr[1][i + 1]; //check for max 1
                if (mixed_value == true && max1 >= 3 && Arr[1][i + 1] >= 3 ) 
 // Arr[0][i + 1] >= 5 when current value is greater than 3
                {
                    if ((i - index >= 3 || (Arr[0][index] + Arr[1][index + 3] == 7)) )
                        mixed_value = false;
                }
            }
            if (mixed_value == false && (max0 >= 5 || max1 >= 3)){
//checking the count value GREATER than  or 3
                cout << " BAD " << endl;
                exit(0);
            }
        }
        
        else if (X[i] == '?'){
            //increament both o count and 1 count.
            Arr[0][i + 1] = Arr[0][i] + 1;
            if (Arr[0][i + 1] > max0)
                max0 = Arr[0][i + 1]; //check for max 1
            Arr[1][i + 1] = Arr[1][i] + 1;
            if (Arr[1][i + 1] > max1)
                max1 = Arr[1][i + 1]; //check for max 1
            index = i;
            mixed_value = true;
        }
    }

    
    if (mixed_value & (max0 >= 5 || max1 >= 3))
        cout << " MIXED " << endl;
    else cout << " GOOD " << endl;
    
    return 0;
}