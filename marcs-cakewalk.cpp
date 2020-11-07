long marcsCakewalk(vector<int> calorie) {
long miles=0;
sort(calorie.begin(),calorie.end(),greater<int>());
for(int j=0;j<(int)calorie.size();j++)
{
miles=miles+(long)(calorie[j]*pow(2,j));
      }
return miles;
}