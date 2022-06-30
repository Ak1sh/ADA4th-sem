vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
int n=arr.size();
int m=brr.size();
vector<int>answer;
vector<int>freq1(10001,0);
vector<int>freq2(10001,0);
for(int i=0;i<n;i++)
{
    freq1[arr[i]]++;
}

for(int i=0;i<m;i++)
{
    freq2[brr[i]]++;
}
for(int i=0;i<10001;i++)
{
    if(freq1[i]!=freq2[i])
    {
        answer.push_back(i);
    }
}
return answer;
}
