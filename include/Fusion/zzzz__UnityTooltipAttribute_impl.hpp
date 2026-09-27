#pragma once
// IWYU pragma private; include "Fusion/UnityTooltipAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnityTooltipAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::UnityTooltipAttribute.get_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::UnityTooltipAttribute::*)()>(&::Fusion::UnityTooltipAttribute::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityTooltipAttribute*>(),
                        {"get_order", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityTooltipAttribute.set_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityTooltipAttribute::*)(int32_t)>(&::Fusion::UnityTooltipAttribute::set_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityTooltipAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityTooltipAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityTooltipAttribute::*)(::StringW)>(&::Fusion::UnityTooltipAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityTooltipAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::UnityTooltipAttribute::__cordl_internal_get__order_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr int32_t const& Fusion::UnityTooltipAttribute::__cordl_internal_get__order_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr void Fusion::UnityTooltipAttribute::__cordl_internal_set__order_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_k__BackingField = value;
}
inline int32_t Fusion::UnityTooltipAttribute::get_order()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityTooltipAttribute*>(),
                        {"get_order", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::UnityTooltipAttribute::set_order(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityTooltipAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::UnityTooltipAttribute::_ctor(::StringW  tooltip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityTooltipAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tooltip);
}
inline ::Fusion::UnityTooltipAttribute* Fusion::UnityTooltipAttribute::New_ctor(::StringW  tooltip)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityTooltipAttribute*>(tooltip));
}
// Ctor Parameters []
constexpr ::Fusion::UnityTooltipAttribute::UnityTooltipAttribute()   {
}
