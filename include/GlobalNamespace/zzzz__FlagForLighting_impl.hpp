#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForLighting.hpp"
#include "GlobalNamespace/zzzz__FlagForLighting_TimeOfDay_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlagForLighting_def.hpp"
#include "GlobalNamespace/zzzz__FlagForLighting_TimeOfDay_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlagForLighting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlagForLighting::*)()>(&::GlobalNamespace::FlagForLighting::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b07c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagForLighting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay& GlobalNamespace::FlagForLighting::__cordl_internal_get_myTimeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTimeOfDay;
}
constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay const& GlobalNamespace::FlagForLighting::__cordl_internal_get_myTimeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTimeOfDay;
}
constexpr void GlobalNamespace::FlagForLighting::__cordl_internal_set_myTimeOfDay(::GlobalNamespace::FlagForLighting_TimeOfDay  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myTimeOfDay = value;
}
inline void GlobalNamespace::FlagForLighting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlagForLighting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlagForLighting* GlobalNamespace::FlagForLighting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlagForLighting*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlagForLighting::FlagForLighting()   {
}
