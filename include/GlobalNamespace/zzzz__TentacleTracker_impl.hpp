#pragma once
// IWYU pragma private; include "GlobalNamespace/TentacleTracker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TentacleTracker_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.get_currentTargetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::TentacleTracker::*)()>(&::GlobalNamespace::TentacleTracker::get_currentTargetRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56428c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"get_currentTargetRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.set_currentTargetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::TentacleTracker::set_currentTargetRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56428c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"set_currentTargetRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)()>(&::GlobalNamespace::TentacleTracker::OnEnable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56428d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.BeginGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::TentacleTracker::BeginGrab)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56420e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"BeginGrab", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.Anim_OnReachEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)()>(&::GlobalNamespace::TentacleTracker::Anim_OnReachEnded)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x564297c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"Anim_OnReachEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)()>(&::GlobalNamespace::TentacleTracker::Update)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5642af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.TestDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)()>(&::GlobalNamespace::TentacleTracker::TestDrop)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5642f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"TestDrop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker.TestDisappear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)()>(&::GlobalNamespace::TentacleTracker::TestDisappear)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5643070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"TestDisappear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TentacleTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TentacleTracker::*)()>(&::GlobalNamespace::TentacleTracker::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5643094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TentacleTracker::__cordl_internal_get_anchorPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TentacleTracker::__cordl_internal_get_anchorPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorPoint;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_anchorPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TentacleTracker::__cordl_internal_get_anchorRefPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorRefPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TentacleTracker::__cordl_internal_get_anchorRefPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorRefPoint;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_anchorRefPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorRefPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TentacleTracker::__cordl_internal_get_playerRefPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRefPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TentacleTracker::__cordl_internal_get_playerRefPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRefPoint;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_playerRefPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRefPoint = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::TentacleTracker::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::TentacleTracker::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& GlobalNamespace::TentacleTracker::__cordl_internal_get_climbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbable;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& GlobalNamespace::TentacleTracker::__cordl_internal_get_climbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbable;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_climbable(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___climbable = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::TentacleTracker::__cordl_internal_get_testTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTriggers;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::TentacleTracker::__cordl_internal_get_testTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTriggers;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_testTriggers(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testTriggers = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::TentacleTracker::__cordl_internal_get_testTriggersRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTriggersRemaining;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::TentacleTracker::__cordl_internal_get_testTriggersRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testTriggersRemaining;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_testTriggersRemaining(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testTriggersRemaining = value;
}
constexpr bool& GlobalNamespace::TentacleTracker::__cordl_internal_get_tracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tracking;
}
constexpr bool const& GlobalNamespace::TentacleTracker::__cordl_internal_get_tracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tracking;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_tracking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tracking = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::TentacleTracker::__cordl_internal_get__currentTargetRig_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTargetRig_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::TentacleTracker::__cordl_internal_get__currentTargetRig_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTargetRig_k__BackingField;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set__currentTargetRig_k__BackingField(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTargetRig_k__BackingField = value;
}
constexpr bool& GlobalNamespace::TentacleTracker::__cordl_internal_get_currentTargetIsLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetIsLocal;
}
constexpr bool const& GlobalNamespace::TentacleTracker::__cordl_internal_get_currentTargetIsLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetIsLocal;
}
constexpr void GlobalNamespace::TentacleTracker::__cordl_internal_set_currentTargetIsLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTargetIsLocal = value;
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::TentacleTracker::get_currentTargetRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"get_currentTargetRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GlobalNamespace::TentacleTracker::set_currentTargetRig(::GlobalNamespace::VRRig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"set_currentTargetRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TentacleTracker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TentacleTracker::BeginGrab(::GlobalNamespace::VRRig*  targetRig, bool  isLocalPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"BeginGrab", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetRig, isLocalPlayer);
}
inline void GlobalNamespace::TentacleTracker::Anim_OnReachEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"Anim_OnReachEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TentacleTracker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TentacleTracker::TestDrop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"TestDrop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TentacleTracker::TestDisappear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {"TestDisappear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TentacleTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TentacleTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TentacleTracker* GlobalNamespace::TentacleTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TentacleTracker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TentacleTracker::TentacleTracker()   {
}
