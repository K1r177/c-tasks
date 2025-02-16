/// Здесь напишите только класс tNumber. Больше ничего здесь описывать не надо.
class tfrac
{
   public:
   int chislitel, znamenatel;
   tfrac(int a, int b);
   void sokr();
   int gcd(int a, int b);
};

tfrac::tfrac(int a, int b) : chislitel(a), znamenatel(b)
{
    sokr();
}

void tfrac::sokr()
{
    int c = gcd(chislitel, znamenatel);
    chislitel /= c;
    znamenatel /= c;
}

int tfrac::gcd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}