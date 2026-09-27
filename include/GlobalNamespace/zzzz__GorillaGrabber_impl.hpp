#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGrabber.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__IGorillaGrabable_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.get_isGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::get_isGrabbing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x595a2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_isGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.get_XrNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::get_XrNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595a304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_XrNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.get_IsLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::get_IsLeftHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x594f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_IsLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.get_IsRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::get_IsRightHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x595a30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_IsRightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.get_Player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::GTPlayer> (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::get_Player)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595a31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_Player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::Start)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x595a324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.CheckGrabber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGrabber::*)(bool)>(&::GlobalNamespace::GorillaGrabber::CheckGrabber)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x595a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"CheckGrabber", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.GrabDistanceOverCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::GrabDistanceOverCheck)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x595a638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"GrabDistanceOverCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.Ungrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGrabber::*)(::GorillaLocomotion::Gameplay::IGorillaGrabable*)>(&::GlobalNamespace::GorillaGrabber::Ungrab)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x594f344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"Ungrab", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.TryGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable* (::GlobalNamespace::GorillaGrabber::*)(bool)>(&::GlobalNamespace::GorillaGrabber::TryGrab)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x595a774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"TryGrab", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.FindClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GorillaGrabber::*)(::UnityEngine::Collider*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGrabber::FindClosestPoint)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x595ac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"FindClosestPoint", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber.Inject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGrabber::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGrabber::Inject)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x595ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"Inject", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGrabber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGrabber::*)()>(&::GlobalNamespace::GorillaGrabber::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x595aed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GlobalNamespace::GorillaGrabber::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_player(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::GorillaGrabber::__cordl_internal_get_xrNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_xrNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrNode = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GorillaGrabber::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaGrabber::__cordl_internal_get_currentGrabbedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGrabbedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_currentGrabbedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGrabbedTransform;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_currentGrabbedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGrabbedTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaGrabber::__cordl_internal_get_localGrabbedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localGrabbedPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_localGrabbedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localGrabbedPosition;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_localGrabbedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localGrabbedPosition = value;
}
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable*& GlobalNamespace::GorillaGrabber::__cordl_internal_get_currentGrabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGrabbable;
}
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_currentGrabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGrabbable;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_currentGrabbable(::GorillaLocomotion::Gameplay::IGorillaGrabable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGrabbable = value;
}
constexpr float_t& GlobalNamespace::GorillaGrabber::__cordl_internal_get_grabRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr float_t const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_grabRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_grabRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabRadius = value;
}
constexpr float_t& GlobalNamespace::GorillaGrabber::__cordl_internal_get_breakDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr float_t const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_breakDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_breakDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakDistance = value;
}
constexpr float_t& GlobalNamespace::GorillaGrabber::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaGrabber::__cordl_internal_get_hapticStrengthActual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrengthActual;
}
constexpr float_t const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_hapticStrengthActual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrengthActual;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_hapticStrengthActual(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrengthActual = value;
}
constexpr float_t& GlobalNamespace::GorillaGrabber::__cordl_internal_get_hapticDecay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDecay;
}
constexpr float_t const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_hapticDecay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDecay;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_hapticDecay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDecay = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GorillaGrabber::__cordl_internal_get_gripEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripEffects;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_gripEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripEffects;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_gripEffects(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripEffects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::GorillaGrabber::__cordl_internal_get_grabCastResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabCastResults;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_grabCastResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabCastResults;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_grabCastResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabCastResults = value;
}
constexpr float_t& GlobalNamespace::GorillaGrabber::__cordl_internal_get_grabTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabTimeStamp;
}
constexpr float_t const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_grabTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabTimeStamp;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_grabTimeStamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabTimeStamp = value;
}
constexpr float_t& GlobalNamespace::GorillaGrabber::__cordl_internal_get_coyoteTimeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coyoteTimeDuration;
}
constexpr float_t const& GlobalNamespace::GorillaGrabber::__cordl_internal_get_coyoteTimeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coyoteTimeDuration;
}
constexpr void GlobalNamespace::GorillaGrabber::__cordl_internal_set_coyoteTimeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coyoteTimeDuration = value;
}
inline bool GlobalNamespace::GorillaGrabber::get_isGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_isGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRNode GlobalNamespace::GorillaGrabber::get_XrNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_XrNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaGrabber::get_IsLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_IsLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaGrabber::get_IsRightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_IsRightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::GTPlayer> GlobalNamespace::GorillaGrabber::get_Player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"get_Player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::GTPlayer>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGrabber::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGrabber::CheckGrabber(bool  initiateGrab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"CheckGrabber", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initiateGrab);
}
inline bool GlobalNamespace::GorillaGrabber::GrabDistanceOverCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"GrabDistanceOverCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGrabber::Ungrab(::GorillaLocomotion::Gameplay::IGorillaGrabable*  specificGrabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"Ungrab", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, specificGrabbable);
}
inline ::GorillaLocomotion::Gameplay::IGorillaGrabable* GlobalNamespace::GorillaGrabber::TryGrab(bool  momentary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"TryGrab", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(this, ___internal_method, momentary);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GorillaGrabber::FindClosestPoint(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"FindClosestPoint", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, collider, position);
}
inline void GlobalNamespace::GorillaGrabber::Inject(::UnityEngine::Transform*  currentGrabbableTransform, ::UnityEngine::Vector3  localGrabbedPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {"Inject", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentGrabbableTransform, localGrabbedPosition);
}
inline void GlobalNamespace::GorillaGrabber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGrabber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaGrabber* GlobalNamespace::GorillaGrabber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGrabber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGrabber::GorillaGrabber()   {
}
