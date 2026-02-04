
public class FindSmallestElement {
    public static void main(String[] args) {
        int arr[] = { 22, 55, 98, 11, 55, 11 };
        int Smallest = arr[0];
        int SecondSmallest = 0;

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < Smallest) {

                SecondSmallest = Smallest;
                Smallest = arr[i];
            }
        }
        System.out.println("Smallest element: " + Smallest);
        System.out.println("Smallest element: " + SecondSmallest);

    }
}
