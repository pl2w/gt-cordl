#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaHandClimber.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaHandClimber_def.hpp"
#include "GlobalNamespace/zzzz__EquipmentInteractor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.get_isClimbingOrGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Climbing::GorillaHandClimber::*)()>(&::GorillaLocomotion::Climbing::GorillaHandClimber::get_isClimbingOrGrabbing)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cf3604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"get_isClimbingOrGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaHandClimber::*)()>(&::GorillaLocomotion::Climbing::GorillaHandClimber::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cf362c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.CheckHandClimber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaHandClimber::*)()>(&::GorillaLocomotion::Climbing::GorillaHandClimber::CheckHandClimber)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5cf36bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"CheckHandClimber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.CanInitiateClimb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Climbing::GorillaHandClimber::*)()>(&::GorillaLocomotion::Climbing::GorillaHandClimber::CanInitiateClimb)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cf3e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"CanInitiateClimb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.SetCanRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaHandClimber::*)(bool)>(&::GorillaLocomotion::Climbing::GorillaHandClimber::SetCanRelease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf3f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"SetCanRelease", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.GetClosestClimbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> (::GorillaLocomotion::Climbing::GorillaHandClimber::*)()>(&::GorillaLocomotion::Climbing::GorillaHandClimber::GetClosestClimbable)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5cf3a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"GetClosestClimbable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaHandClimber::*)(::UnityEngine::Collider*)>(&::GorillaLocomotion::Climbing::GorillaHandClimber::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5cf3f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaHandClimber::*)(::UnityEngine::Collider*)>(&::GorillaLocomotion::Climbing::GorillaHandClimber::OnTriggerExit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cf40a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber.ForceStopClimbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaHandClimber::*)(bool, bool)>(&::GorillaLocomotion::Climbing::GorillaHandClimber::ForceStopClimbing)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cedf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"ForceStopClimbing", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaHandClimber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaHandClimber::*)()>(&::GorillaLocomotion::Climbing::GorillaHandClimber::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cf4174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_player(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor>& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_equipmentInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipmentInteractor;
}
constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor> const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_equipmentInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipmentInteractor;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_equipmentInteractor(::UnityW<::GlobalNamespace::EquipmentInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equipmentInteractor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>*& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_potentialClimbables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialClimbables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>* const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_potentialClimbables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialClimbables;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_potentialClimbables(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialClimbables = value;
}
constexpr ::UnityEngine::XR::XRNode& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_xrNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr ::UnityEngine::XR::XRNode const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_xrNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrNode = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_isClimbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClimbing;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_isClimbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClimbing;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_isClimbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isClimbing = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_queuedToBecomeValidToGrabAgain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedToBecomeValidToGrabAgain;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_queuedToBecomeValidToGrabAgain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedToBecomeValidToGrabAgain;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_queuedToBecomeValidToGrabAgain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedToBecomeValidToGrabAgain = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_dontReclimbLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontReclimbLast;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_dontReclimbLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontReclimbLast;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_dontReclimbLast(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontReclimbLast = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_lastAutoReleasePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAutoReleasePos;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_lastAutoReleasePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAutoReleasePos;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_lastAutoReleasePos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAutoReleasePos = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGrabber>& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_grabber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabber;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGrabber> const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_grabber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabber;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_grabber(::UnityW<::GlobalNamespace::GorillaGrabber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabber = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_handRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_handRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRoot;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_handRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handRoot = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_col()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___col;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_col() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___col;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_col(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___col = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_canRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canRelease;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_get_canRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canRelease;
}
constexpr void GorillaLocomotion::Climbing::GorillaHandClimber::__cordl_internal_set_canRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canRelease = value;
}
inline bool GorillaLocomotion::Climbing::GorillaHandClimber::get_isClimbingOrGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"get_isClimbingOrGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaHandClimber::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaHandClimber::CheckHandClimber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"CheckHandClimber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Climbing::GorillaHandClimber::CanInitiateClimb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"CanInitiateClimb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaHandClimber::SetCanRelease(bool  canRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"SetCanRelease", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canRelease);
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> GorillaLocomotion::Climbing::GorillaHandClimber::GetClosestClimbable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"GetClosestClimbable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaHandClimber::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaLocomotion::Climbing::GorillaHandClimber::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaLocomotion::Climbing::GorillaHandClimber::ForceStopClimbing(bool  startingNewClimb, bool  doDontReclimb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {"ForceStopClimbing", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startingNewClimb, doDontReclimb);
}
inline void GorillaLocomotion::Climbing::GorillaHandClimber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaHandClimber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Climbing::GorillaHandClimber* GorillaLocomotion::Climbing::GorillaHandClimber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Climbing::GorillaHandClimber*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Climbing::GorillaHandClimber::GorillaHandClimber()   {
}
