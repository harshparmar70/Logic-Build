import java.util.Arrays;

public class FindLargestElement {

    public static void main(String[] args) {
        int arr[] = { 10, 55, 42, 78, 60 };
        int Largest = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > Largest) {
                Largest = arr[i];
            }
        }
        System.out.println("Largest element: " + Largest);

        Arrays.sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println("");
        System.out.println("Largest element: " + arr[arr.length - 1]);
    }
}
