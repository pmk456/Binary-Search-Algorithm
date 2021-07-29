public class binary_search{
  private static int binary_search(int[] arr, int n){
    int lower = 0;
    int upper = arr.length - 1;
    while(lower<=upper){
      int mid = (lower+upper) / 2;
      if(arr[mid] == n) return mid;
      else if(arr[mid] < n) lower = mid + 1;
      else upper = mid - 1;
    }
    return -1;
 }public static void main(String[] args){
  int[] arr = {1, 3, 6, 9, 12, 24, 45, 66, 99, 128};
  int result = binary_search(arr, 45);
  if(result != -1) System.out.print("Found At index "+result);
  else System.out.print("Not Found");
}
}
