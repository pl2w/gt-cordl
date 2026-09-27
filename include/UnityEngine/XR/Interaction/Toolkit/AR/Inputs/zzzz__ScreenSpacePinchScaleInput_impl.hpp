#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/ScreenSpacePinchScaleInput.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/zzzz__ScreenSpacePinchScaleInput_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.get_useRotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_useRotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cf6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_useRotationThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.set_useRotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_useRotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cf6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_useRotationThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.get_rotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_rotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cf704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_rotationThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.set_rotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_rotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cf70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_rotationThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.get_pinchGapDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_pinchGapDeltaInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cf714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_pinchGapDeltaInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.set_pinchGapDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_pinchGapDeltaInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4cf71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_pinchGapDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.get_twistDeltaRotationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_twistDeltaRotationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cf778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_twistDeltaRotationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.set_twistDeltaRotationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_twistDeltaRotationInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4cf780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_twistDeltaRotationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4cf7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4cf804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::ReadValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4cf82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"ReadValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput.TryReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)(::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::TryReadValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4cf848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"TryReadValue", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb4cf938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_UseRotationThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseRotationThreshold;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_UseRotationThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseRotationThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_set_m_UseRotationThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseRotationThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_RotationThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_RotationThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_set_m_RotationThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotationThreshold = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_PinchGapDeltaInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchGapDeltaInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_PinchGapDeltaInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchGapDeltaInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_set_m_PinchGapDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PinchGapDeltaInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_TwistDeltaRotationInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistDeltaRotationInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_get_m_TwistDeltaRotationInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistDeltaRotationInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::__cordl_internal_set_m_TwistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TwistDeltaRotationInput = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_useRotationThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_useRotationThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_useRotationThreshold(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_useRotationThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_rotationThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_rotationThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_rotationThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_rotationThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_pinchGapDeltaInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_pinchGapDeltaInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_pinchGapDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_pinchGapDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::get_twistDeltaRotationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"get_twistDeltaRotationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::set_twistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"set_twistDeltaRotationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::ReadValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"ReadValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::TryReadValue(::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {"TryReadValue", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr  UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr  UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput::ScreenSpacePinchScaleInput()   {
}
