// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z)
{
    string ans;
    int pos1 = abs(z - x); //2
    int pos2 = abs(z - y); //1
    if (pos1 < pos2)
        ans = "Cat A";
    else if (pos1 > pos2)
        ans = "Cat B";
    else
        ans = "Mouse C";
    return ans;
}