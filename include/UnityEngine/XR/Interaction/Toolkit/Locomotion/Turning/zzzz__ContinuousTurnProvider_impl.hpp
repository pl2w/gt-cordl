#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Turning/ContinuousTurnProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Turning/zzzz__ContinuousTurnProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyYawRotation_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.get_turnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_turnSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_turnSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.set_turnSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_turnSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_turnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.get_enableTurnLeftRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_enableTurnLeftRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_enableTurnLeftRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.set_enableTurnLeftRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_enableTurnLeftRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_enableTurnLeftRight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.get_enableTurnAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_enableTurnAround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_enableTurnAround", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.set_enableTurnAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_enableTurnAround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_enableTurnAround", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.get_leftHandTurnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_leftHandTurnInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_leftHandTurnInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.set_leftHandTurnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_leftHandTurnInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb44b258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_leftHandTurnInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.get_rightHandTurnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_rightHandTurnInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_rightHandTurnInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.set_rightHandTurnInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_rightHandTurnInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb44b2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_rightHandTurnInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.get_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.set_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb44b328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb44b358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb44b388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::ReadInput)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb44b440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"ReadInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.GetTurnAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::GetTurnAmount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb44b5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider.TurnRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::TurnRig)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb44b4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"TurnRig", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb44b6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_TurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_TurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set_m_TurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnSpeed = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_EnableTurnLeftRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTurnLeftRight;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_EnableTurnLeftRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTurnLeftRight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set_m_EnableTurnLeftRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableTurnLeftRight = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_EnableTurnAround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTurnAround;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_EnableTurnAround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTurnAround;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set_m_EnableTurnAround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableTurnAround = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_LeftHandTurnInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandTurnInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_LeftHandTurnInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandTurnInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set_m_LeftHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftHandTurnInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_RightHandTurnInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandTurnInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_RightHandTurnInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandTurnInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set_m_RightHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightHandTurnInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get__transformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get__transformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformation_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_IsTurningXROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTurningXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_IsTurningXROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTurningXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set_m_IsTurningXROrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsTurningXROrigin = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_TurnAroundActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnAroundActivated;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_get_m_TurnAroundActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnAroundActivated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::__cordl_internal_set_m_TurnAroundActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnAroundActivated = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_turnSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_turnSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_turnSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_turnSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_enableTurnLeftRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_enableTurnLeftRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_enableTurnLeftRight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_enableTurnLeftRight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_enableTurnAround()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_enableTurnAround", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_enableTurnAround(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_enableTurnAround", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_leftHandTurnInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_leftHandTurnInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_leftHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_leftHandTurnInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_rightHandTurnInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_rightHandTurnInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_rightHandTurnInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_rightHandTurnInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation* UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::get_transformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyYawRotation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::ReadInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"ReadInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::GetTurnAmount(::UnityEngine::Vector2  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, input);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::TurnRig(float_t  turnAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {"TurnRig", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnAmount);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Turning::ContinuousTurnProvider::ContinuousTurnProvider()   {
}
