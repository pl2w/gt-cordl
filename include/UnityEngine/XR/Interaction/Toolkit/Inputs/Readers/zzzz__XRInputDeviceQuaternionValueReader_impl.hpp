#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceQuaternionValueReader.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceQuaternionValueReader_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::ReadValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4ca12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader.TryReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::*)(::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::TryReadValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4ca174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4ca1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::ReadValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::TryReadValue(::by_ref<::UnityEngine::Quaternion>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader::XRInputDeviceQuaternionValueReader()   {
}
