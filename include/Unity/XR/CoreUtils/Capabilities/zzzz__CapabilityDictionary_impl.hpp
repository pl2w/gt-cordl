#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/CapabilityDictionary.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__SerializableDictionary_2_impl.hpp"
#include "Unity/XR/CoreUtils/Capabilities/zzzz__CapabilityDictionary_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary.ForceSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::*)()>(&::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::ForceSerialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3fd6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>(),
                        {"ForceSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::*)()>(&::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3fd738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::*)()>(&::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3fd73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::ForceSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>(),
                        {"ForceSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::OnBeforeSerialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary* Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary::CapabilityDictionary()   {
}
