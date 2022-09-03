enum nation
{
India=1, Nepal
};
enum States
{
Delhi, Katmandu
};
int main()
{
enum States n=Delhi;
enum States n1=India;
// Value 1 is stored in n1 which is of type enum States
enum nation n2=Katmandu;
printf("%d\n",n);
printf("%d\n",n1);
printf("%d",n2);
}