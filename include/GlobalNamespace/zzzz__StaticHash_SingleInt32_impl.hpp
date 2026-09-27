#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticHash_SingleInt32.hpp"
#include "GlobalNamespace/zzzz__StaticHash_SingleInt32_def.hpp"
constexpr float_t& GlobalNamespace::StaticHash_SingleInt32::__cordl_internal_get_single()  {
return this->___single;
}
constexpr float_t const& GlobalNamespace::StaticHash_SingleInt32::__cordl_internal_get_single() const {
return this->___single;
}
constexpr void GlobalNamespace::StaticHash_SingleInt32::__cordl_internal_set_single(float_t  value)  {
this->___single = value;
}
constexpr int32_t& GlobalNamespace::StaticHash_SingleInt32::__cordl_internal_get_int32()  {
return this->___int32;
}
constexpr int32_t const& GlobalNamespace::StaticHash_SingleInt32::__cordl_internal_get_int32() const {
return this->___int32;
}
constexpr void GlobalNamespace::StaticHash_SingleInt32::__cordl_internal_set_int32(int32_t  value)  {
this->___int32 = value;
}
// Ctor Parameters [CppParam { name: "single", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "int32", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StaticHash_SingleInt32::StaticHash_SingleInt32(float_t  single, int32_t  int32) noexcept  {
this->single = single;
this->int32 = int32;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticHash_SingleInt32::StaticHash_SingleInt32()   {
}
