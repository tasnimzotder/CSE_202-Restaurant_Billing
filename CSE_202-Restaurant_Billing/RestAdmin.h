#pragma once
#include "Restaurant.h"
class RestAdmin : public Restaurant {
public:
    void addProduct(string, string, float);
    void deleteProduct(string);
    void updateProduct(string, string, float);
};
