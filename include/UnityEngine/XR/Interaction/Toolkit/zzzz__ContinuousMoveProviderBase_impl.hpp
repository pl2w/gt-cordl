#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ContinuousMoveProviderBase.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_GravityApplicationMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_GravityApplicationMode_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_moveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_moveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_moveSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_moveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_moveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_moveSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_enableStrafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableStrafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_enableStrafe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_enableStrafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableStrafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_enableStrafe", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_enableFly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableFly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_enableFly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_enableFly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableFly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_enableFly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_useGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_useGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_useGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_useGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_useGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_useGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_gravityApplicationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_gravityApplicationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_gravityApplicationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_gravityApplicationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_gravityApplicationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_gravityApplicationMode", {}, {::i2c::type_of<::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_forwardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_forwardSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_forwardSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_forwardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_forwardSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_forwardSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::Update)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb417a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ReadInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.ComputeDesiredMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ComputeDesiredMove)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xb417c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.MoveRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::MoveRig)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb4180dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.FindCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::FindCharacterController)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb418390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"FindCharacterController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4168b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_MoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_MoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_MoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MoveSpeed = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableStrafe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableStrafe;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableStrafe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableStrafe;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_EnableStrafe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableStrafe = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableFly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableFly;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableFly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableFly;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_EnableFly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableFly = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_UseGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_UseGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_UseGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseGravity = value;
}
constexpr ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_GravityApplicationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityApplicationMode;
}
constexpr ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_GravityApplicationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityApplicationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_GravityApplicationMode(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityApplicationMode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_ForwardSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForwardSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_ForwardSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForwardSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_ForwardSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ForwardSource = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_CharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_CharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CharacterController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_AttemptedGetCharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttemptedGetCharacterController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_AttemptedGetCharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttemptedGetCharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_AttemptedGetCharacterController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttemptedGetCharacterController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_IsMovingXROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMovingXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_IsMovingXROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMovingXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_IsMovingXROrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsMovingXROrigin = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_VerticalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_VerticalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_VerticalVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VerticalVelocity = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_moveSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_moveSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_moveSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_moveSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableStrafe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_enableStrafe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableStrafe(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_enableStrafe", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableFly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_enableFly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableFly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_enableFly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_useGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_useGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_useGravity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_useGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_gravityApplicationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_gravityApplicationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_gravityApplicationMode(::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_gravityApplicationMode", {}, {::i2c::type_of<::GlobalNamespace::ContinuousMoveProviderBase_GravityApplicationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_forwardSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"get_forwardSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_forwardSource(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"set_forwardSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ReadInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ComputeDesiredMove(::UnityEngine::Vector2  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, input);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::MoveRig(::UnityEngine::Vector3  translationInWorldSpace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translationInWorldSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::FindCharacterController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {"FindCharacterController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase* UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ContinuousMoveProviderBase()   {
}
