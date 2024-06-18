class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        // Calculation of formula to find the maximum volume
        double ans =
            (pow((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12, 2) *
             ((perimeter / 4) -
              (2 * ((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12))));

        // Returning the maximum volume
        return ans;
    }
};