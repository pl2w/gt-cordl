#pragma once
// IWYU pragma private; include "GorillaExtensions/GorillaMath_FloatIntUnion.hpp"
#include "GorillaExtensions/zzzz__GorillaMath_FloatIntUnion_def.hpp"
constexpr float_t& GlobalNamespace::GorillaMath_FloatIntUnion::__cordl_internal_get_f()  {
return this->___f;
}
constexpr float_t const& GlobalNamespace::GorillaMath_FloatIntUnion::__cordl_internal_get_f() const {
return this->___f;
}
constexpr void GlobalNamespace::GorillaMath_FloatIntUnion::__cordl_internal_set_f(float_t  value)  {
this->___f = value;
}
constexpr int32_t& GlobalNamespace::GorillaMath_FloatIntUnion::__cordl_internal_get_tmp()  {
return this->___tmp;
}
constexpr int32_t const& GlobalNamespace::GorillaMath_FloatIntUnion::__cordl_internal_get_tmp() const {
return this->___tmp;
}
constexpr void GlobalNamespace::GorillaMath_FloatIntUnion::__cordl_internal_set_tmp(int32_t  value)  {
this->___tmp = value;
}
// Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tmp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaMath_FloatIntUnion::GorillaMath_FloatIntUnion(float_t  f, int32_t  tmp) noexcept  {
this->f = f;
this->tmp = tmp;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaMath_FloatIntUnion::GorillaMath_FloatIntUnion()   {
}
