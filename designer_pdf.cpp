int designerPdfViewer(vector<int> h, string word) {

int size=word.size();
int count=0;
for(int i=0;i<word.size();i++)
{
    int x=(word.at(i)-'0');
    int y=x-49;
    if(h[y]>count)
    count=h[y];

}

return (size*count);

}
