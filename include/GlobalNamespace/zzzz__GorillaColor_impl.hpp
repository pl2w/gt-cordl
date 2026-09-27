#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColor.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaColor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColor::*)()>(&::GlobalNamespace::GorillaColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5904204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaColor::__cordl_internal_get_setRandomly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setRandomly;
}
constexpr bool const& GlobalNamespace::GorillaColor::__cordl_internal_get_setRandomly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setRandomly;
}
constexpr void GlobalNamespace::GorillaColor::__cordl_internal_set_setRandomly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setRandomly = value;
}
inline void GlobalNamespace::GorillaColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaColor* GlobalNamespace::GorillaColor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaColor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaColor::GorillaColor()   {
}
