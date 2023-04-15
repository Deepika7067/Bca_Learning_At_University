//Convert an decimal to its binary equivalent using a bitwise operator

int binary(int n)
{
    for (int i = 6; i >= 0; i--) {
        int k = n >> i; 
        if (k & 1) 
              printf("1");
        else printf("0");
    }
}
 
int main()
{
    int n = 7;
    binary(n);
  return 0;
}
