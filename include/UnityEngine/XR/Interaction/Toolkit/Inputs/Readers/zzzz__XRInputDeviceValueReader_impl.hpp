#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceValueReader.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader.get_characteristics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::get_characteristics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*>(),
                        {"get_characteristics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader.set_characteristics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::*)(::UnityEngine::XR::InputDeviceCharacteristics)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::set_characteristics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*>(),
                        {"set_characteristics", {}, {::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ca224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::__cordl_internal_get_m_Characteristics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Characteristics;
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::__cordl_internal_get_m_Characteristics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Characteristics;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::__cordl_internal_set_m_Characteristics(::UnityEngine::XR::InputDeviceCharacteristics  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Characteristics = value;
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::get_characteristics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*>(),
                        {"get_characteristics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*>(),
                        {"set_characteristics", {}, {::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader::XRInputDeviceValueReader()   {
}
