#pragma once
// IWYU pragma private; include "Fusion/UnityMultilineAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__UnityMultilineAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::UnityMultilineAttribute.get_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::UnityMultilineAttribute::*)()>(&::Fusion::UnityMultilineAttribute::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7045c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityMultilineAttribute*>(),
                        {"get_order", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityMultilineAttribute.set_order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityMultilineAttribute::*)(int32_t)>(&::Fusion::UnityMultilineAttribute::set_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityMultilineAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityMultilineAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityMultilineAttribute::*)()>(&::Fusion::UnityMultilineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7046c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityMultilineAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::UnityMultilineAttribute::__cordl_internal_get__order_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr int32_t const& Fusion::UnityMultilineAttribute::__cordl_internal_get__order_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____order_k__BackingField;
}
constexpr void Fusion::UnityMultilineAttribute::__cordl_internal_set__order_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____order_k__BackingField = value;
}
inline int32_t Fusion::UnityMultilineAttribute::get_order()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityMultilineAttribute*>(),
                        {"get_order", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::UnityMultilineAttribute::set_order(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityMultilineAttribute*>(),
                        {"set_order", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::UnityMultilineAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityMultilineAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::UnityMultilineAttribute* Fusion::UnityMultilineAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityMultilineAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::UnityMultilineAttribute::UnityMultilineAttribute()   {
}
