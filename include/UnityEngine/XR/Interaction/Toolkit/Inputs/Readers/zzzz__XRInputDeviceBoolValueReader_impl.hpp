#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceBoolValueReader.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceBoolValueReader_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::ReadValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4c9a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader.TryReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::*)(::by_ref<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::TryReadValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4c9ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4c9b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::ReadValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::TryReadValue(::by_ref<bool>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader::XRInputDeviceBoolValueReader()   {
}
