// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height)
{
    int max = 0;
    for (int i = 0; i < height.size(); i++)
    {

        if (height[i] > k)
        {
            if (height[i] > max)
                max = height[i];
        }
    }

    if (max > 0)
        return max - k;

    return 0;
}