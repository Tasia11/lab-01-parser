// Copyright 2020 Alexander <scorpy2013@gmail.com>

#include <student.hpp>
using nlohmann::json;

void from_json(const json& j, Student& s) {
    j.at("name").get_to(s.Name);
    j.at("group").get_to(s.Group);
    j.at("avg").get_to(s.Avg);
    j.at("debt").get_to(s.Debt);
}
