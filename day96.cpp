class Solution {
  public:
   // Function to calculate GCD of two numbers
    long long calculateGCD(long long number1, long long number2) {
        while (number2 != 0) {
            long long temp = number2;
            number2 = number1 % number2;
            number1 = temp;
        }
        return number1;
    }

    // Function to calculate twice the area of the triangle
    long long calculateTriangleArea2(long long pointA[], long long pointB[], long long pointC[]) {
        return abs(pointA[0] * (pointB[1] - pointC[1]) + 
                   pointB[0] * (pointC[1] - pointA[1]) + 
                   pointC[0] * (pointA[1] - pointB[1]));
    }

    // Function to calculate the number of boundary points on the triangle
    long long calculateBoundaryPoints(long long pointA[], long long pointB[], long long pointC[]) {
        return calculateGCD(abs(pointA[0] - pointB[0]), abs(pointA[1] - pointB[1])) + 
               calculateGCD(abs(pointB[0] - pointC[0]), abs(pointB[1] - pointC[1])) + 
               calculateGCD(abs(pointC[0] - pointA[0]), abs(pointC[1] - pointA[1]));
    }

    // Function to calculate the number of interior points in the triangle
    long long InternalCount(long long pointA[], long long pointB[], long long pointC[]) {
        long long area2 = calculateTriangleArea2(pointA, pointB, pointC);
        long long boundaryPoints = calculateBoundaryPoints(pointA, pointB, pointC);
        return (area2 - boundaryPoints + 2) / 2;
    }

};