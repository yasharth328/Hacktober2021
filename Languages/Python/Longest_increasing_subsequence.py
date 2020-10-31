# This is the classical dp problem in which we are asked to find the longest incresing subsequence in the given array.

#We solve this problem using the concepts of dynamic programming in o(N^2) time complexity .
# This is one of the core dp problem and preapares us for more such problems.


def l_i_s(a):
    n = len(a)

    # we create a list to strore the previous answers.
    dp = [0 for i in range(len(a))]

    #since for the first element , the LIS is one, we fill it with one.
    dp[0] = 1

    # Looping through each element of the given array.
    for i in range(1,len(a)):

        # In the beginning the max length of LIS would be 0.
        c_max = 0
        for j in range(i):

            # We compare the length with the previously stored answer in the dp array if and only if the current element
            # is greater.
            if a[j] < a[i]:
                if dp[j] > c_max:
                    # We update the LIS length.
                    c_max = dp[j]

         # We store the c_max + 1 (for that element itself) in the dp array.
        dp[i] = c_max + 1

    # After we loop through all the elements, we have the length of LIS ending at each element, we return the max length
    # from the dp array.
    return max(dp)




a = [52,9,11,56,23,59,18,91,28,41,1,30]
print(l_i_s(a))
