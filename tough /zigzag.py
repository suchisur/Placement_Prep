class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows==1:
            return s
        #arr=[ [] for i in range(numRows)]
        arr=[ "" for i in range(numRows)]
        row=0
        up=False
        i=0
        while(i<len(s)):
            #print(s[i])
            #arr[row].append(s[i])
            #print(arr)
            arr[row]=arr[row]+s[i]
            if up==True:
                row=row-1
                if row==-1:
                    up=False
                    row=row+2
                
            else:
                row=row+1
                if row==numRows:
                    up=True
                    row=row-2
            i=i+1
        t=""
        ans=""
        for i in range(0,numRows):
            t=""
            #ans=ans+t.join(arr[i])

            #print(arr[row])
            ans=ans+arr[i]
            
        return ans