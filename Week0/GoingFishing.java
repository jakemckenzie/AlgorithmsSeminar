import java.util.*;
public class GoingFishing{
    public static void main(String args[]) {
        System.out.println(fishing(10,5,2,3,0,0,8,0));
    }
    public static int fishing(int F1, int F2, int D1, int D2, int i, int j, int k, int sum) { 
        if (k <= 0) return sum;
        if (F1 > 0 || F2 > 0) {
            if (F1 >= F2) {
                return fishing(F1 - D1, F2, D1, D2, ++i, j, --k, sum + F1);
            } else {
                return fishing(F2 - D2, F1, D2, D1, ++j, i, (k - Math.abs(i - j)), sum + F2);
            }
        }
        if (F1 < 0) return sum + F2;
        if (F2 < 0) return sum + F1;
        return sum;    
    }
}

