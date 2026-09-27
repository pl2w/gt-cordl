#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceVector3ValueReader.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceVector3ValueReader_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::ReadValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4ca314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader.TryReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::TryReadValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4ca35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4ca3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::ReadValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::TryReadValue(::by_ref<::UnityEngine::Vector3>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector3ValueReader::XRInputDeviceVector3ValueReader()   {
}
