package searching_algos;

public class InterpolationSearch {

	public static void main(String[] args) {
		int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21,
                22, 23, 24, 33, 35, 42, 47 };
		int x = 18;
        int index = interpolation(arr, 0, arr.length - 1, x);
        if (index != -1)
            System.out.println("Element found at index "
                               + index);
        else
            System.out.println("Element not found.");
	}
	
	static int interpolation(int arr[],int lo,int hi, int x) {
		int pos;
		if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
			 pos = lo+ (((hi - lo) * (x - arr[lo]) / (arr[hi] - arr[lo])));
            if (arr[pos] == x)
                return pos;
            if (arr[pos] < x)
                return interpolation(arr, pos + 1, hi,x);
            if (arr[pos] > x)
                return interpolation(arr, lo, pos - 1, x);
        }
        return -1;
	}

}
