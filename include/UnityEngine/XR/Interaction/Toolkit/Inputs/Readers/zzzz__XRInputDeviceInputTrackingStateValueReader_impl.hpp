#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceInputTrackingStateValueReader.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceInputTrackingStateValueReader_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::ReadValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4ca044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader.TryReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::*)(::by_ref<::UnityEngine::XR::InputTrackingState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::TryReadValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4ca08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4ca0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::ReadValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::TryReadValue(::by_ref<::UnityEngine::XR::InputTrackingState>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader::XRInputDeviceInputTrackingStateValueReader()   {
}
