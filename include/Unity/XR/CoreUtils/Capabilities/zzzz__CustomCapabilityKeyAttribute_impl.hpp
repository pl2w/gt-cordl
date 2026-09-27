#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/CustomCapabilityKeyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/XR/CoreUtils/Capabilities/zzzz__CustomCapabilityKeyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::*)(int32_t)>(&::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb3fd784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::__cordl_internal_get_Order()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Order;
}
constexpr int32_t const& Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::__cordl_internal_get_Order() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Order;
}
constexpr void Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::__cordl_internal_set_Order(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Order = value;
}
inline void Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::_ctor(int32_t  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order);
}
inline ::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute* Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::New_ctor(int32_t  order)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute*>(order));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute::CustomCapabilityKeyAttribute()   {
}
