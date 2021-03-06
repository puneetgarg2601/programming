// Copyright 2019 Aman Mehara
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cmath>
#include <unordered_set>

bool is_happy(int number) {
    std::unordered_set<int> generated;
    while (generated.insert(number).second) {
        auto _sum = 0;
        while (number > 0) {
            _sum += std::pow(number % 10, 2);
            number = number / 10;
        }
        number = _sum;
    }
    return number == 1;
}
