#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/ICapabilityModifier.hpp"
#include "Unity/XR/CoreUtils/Capabilities/zzzz__ICapabilityModifier_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier.TryGetCapabilityValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier::*)(::StringW, ::by_ref<bool>)>(&::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier::TryGetCapabilityValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Unity::XR::CoreUtils::Capabilities::ICapabilityModifier::TryGetCapabilityValue(::StringW  capabilityKey, ::by_ref<bool>  capabilityValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::ICapabilityModifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capabilityKey, capabilityValue);
}
