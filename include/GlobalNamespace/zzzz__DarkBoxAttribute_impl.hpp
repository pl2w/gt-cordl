#pragma once
// IWYU pragma private; include "GlobalNamespace/DarkBoxAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__DarkBoxAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DarkBoxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DarkBoxAttribute::*)()>(&::GlobalNamespace::DarkBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5646674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DarkBoxAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DarkBoxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DarkBoxAttribute::*)(bool)>(&::GlobalNamespace::DarkBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x564667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DarkBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DarkBoxAttribute::__cordl_internal_get_withBorders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___withBorders;
}
constexpr bool const& GlobalNamespace::DarkBoxAttribute::__cordl_internal_get_withBorders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___withBorders;
}
constexpr void GlobalNamespace::DarkBoxAttribute::__cordl_internal_set_withBorders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___withBorders = value;
}
inline void GlobalNamespace::DarkBoxAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DarkBoxAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DarkBoxAttribute::_ctor(bool  withBorders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DarkBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withBorders);
}
inline ::GlobalNamespace::DarkBoxAttribute* GlobalNamespace::DarkBoxAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DarkBoxAttribute*>());
}
inline ::GlobalNamespace::DarkBoxAttribute* GlobalNamespace::DarkBoxAttribute::New_ctor(bool  withBorders)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DarkBoxAttribute*>(withBorders));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DarkBoxAttribute::DarkBoxAttribute()   {
}
