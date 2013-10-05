// Copyright 2013 Daniel Parker
// Distributed under Boost license

#include <boost/test/unit_test.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include "jsoncons/json.hpp"
#include "jsoncons/json_serializer.hpp"
#include "my_custom_data.hpp"
#include <sstream>
#include <vector>
#include <utility>
#include <ctime>

using jsoncons::pretty_print;
using jsoncons::output_format;
using jsoncons::json;
using jsoncons::wjson;
using jsoncons::basic_json_reader;
using std::string;
using boost::numeric::ublas::matrix;

BOOST_AUTO_TEST_CASE(test_one_dim_array)
{
	std::cout << "!!!Test one dim array" <<std::endl;
    json a = json::make_array(10,0);
    //std::cout << pretty_print(a) << std::endl;
    BOOST_CHECK(a.size() == 10);
    BOOST_CHECK(a[0] == 0);
    a[1] = 1;
    a[2] = 2;
    std::cout << pretty_print(a) << std::endl;
}

BOOST_AUTO_TEST_CASE(test_two_dim_array)
{
	std::cout << "!!!Test two dim array" <<std::endl;
    json a = json::make_2d_array(10,8,0);
    BOOST_CHECK(a.size() == 10);
	a[0][2] = 2;
    a[0][3] = 3;
    std::cout << pretty_print(a) << std::endl;
}
