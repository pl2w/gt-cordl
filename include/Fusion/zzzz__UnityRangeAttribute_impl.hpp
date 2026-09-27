#pragma once
// IWYU pragma private; include "Fusion/UnityRangeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnityRangeAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::UnityRangeAttribute.get_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::UnityRangeAttribute::*)()>(&::Fusion::UnityRangeAttribute::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityRangeAttribute*>(),
                        {"get_order", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityRangeAttribute.set_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityRangeAttribute::*)(int32_t)>(&::Fusion::UnityRangeAttribute::set_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityRangeAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityRangeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityRangeAttribute::*)(float_t, float_t)>(&::Fusion::UnityRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7049c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::UnityRangeAttribute::__cordl_internal_get__order_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr int32_t const& Fusion::UnityRangeAttribute::__cordl_internal_get__order_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr void Fusion::UnityRangeAttribute::__cordl_internal_set__order_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_k__BackingField = value;
}
inline int32_t Fusion::UnityRangeAttribute::get_order()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityRangeAttribute*>(),
                        {"get_order", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::UnityRangeAttribute::set_order(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityRangeAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::UnityRangeAttribute::_ctor(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityRangeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::Fusion::UnityRangeAttribute* Fusion::UnityRangeAttribute::New_ctor(float_t  min, float_t  max)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityRangeAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::Fusion::UnityRangeAttribute::UnityRangeAttribute()   {
}
