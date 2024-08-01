#include <iostream>
#include <algorithm>
#include <numeric>

int solution(std::vector<int>& A, std::vector<int>& B)
{
  int counter = 0;
  for (int K = 1; K < std::size(A); K++)
  {
    std::vector<int> A_first = std::vector<int>(A.begin(), A.begin() + K);
    std::vector<int> A_second = std::vector<int>(A.begin() + K, A.end());
    std::vector<int> B_first = std::vector<int>(B.begin(), B.begin() + K);
    std::vector<int> B_second = std::vector<int>(B.begin() + K, B.end());

    int A_first_sum = std::accumulate(A_first.begin(), A_first.end(), 0);
    int A_second_sum = std::accumulate(A_second.begin(), A_second.end(), 0);
    int B_first_sum = std::accumulate(B_first.begin(), B_first.end(), 0);
    int B_second_sum = std::accumulate(B_second.begin(), B_second.end(), 0);

    if ((A_first_sum == A_second_sum) && (B_first_sum == B_second_sum) && (A_first_sum == B_first_sum))
    {
      counter++;
    }
  }

  return counter;
}

int main()
{
  std::vector<int> A = { 4, -1, 0, 3 };
  std::vector<int> B = { -2, 5, 0, 3 };

  std::cout << solution(A, B) << std::endl;

  // debugging
  //  int K = 1;
  //     std::vector<int> A_first  = std::vector<int>(A.begin(),A.begin()+K);
  //     std::vector<int> A_second = std::vector<int>(A.begin()+K,A.end());

  //     for (int i:A_first)
  //     {std::cout << i << " ";}
  //     std::cout << std::endl;

  //     for (int i:A_second)
  //     {std::cout << i << " ";}
  //     std::cout << std::endl;
}