#define CATCH_CONFIG_MAIN
#include "program.h"
#include "catch.hpp"
TEST_CASE("dwadwa","[simple]") {
    REQUIRE(program(2,2)==4);
}
