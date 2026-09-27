#pragma once
// IWYU pragma private; include "Fusion/UnitySpaceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnitySpaceAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::UnitySpaceAttribute.get_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::UnitySpaceAttribute::*)()>(&::Fusion::UnitySpaceAttribute::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySpaceAttribute*>(),
                        {"get_order", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnitySpaceAttribute.set_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnitySpaceAttribute::*)(int32_t)>(&::Fusion::UnitySpaceAttribute::set_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySpaceAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnitySpaceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnitySpaceAttribute::*)(float_t)>(&::Fusion::UnitySpaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySpaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::UnitySpaceAttribute::__cordl_internal_get__order_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr int32_t const& Fusion::UnitySpaceAttribute::__cordl_internal_get__order_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr void Fusion::UnitySpaceAttribute::__cordl_internal_set__order_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_k__BackingField = value;
}
inline int32_t Fusion::UnitySpaceAttribute::get_order()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySpaceAttribute*>(),
                        {"get_order", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::UnitySpaceAttribute::set_order(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySpaceAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::UnitySpaceAttribute::_ctor(float_t  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnitySpaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space);
}
inline ::Fusion::UnitySpaceAttribute* Fusion::UnitySpaceAttribute::New_ctor(float_t  space)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnitySpaceAttribute*>(space));
}
// Ctor Parameters []
constexpr ::Fusion::UnitySpaceAttribute::UnitySpaceAttribute()   {
}
