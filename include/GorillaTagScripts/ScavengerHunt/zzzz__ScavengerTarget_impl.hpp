#pragma once
// IWYU pragma private; include "GorillaTagScripts/ScavengerHunt/ScavengerTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/ScavengerHunt/zzzz__ScavengerTarget_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__IGorillaGrabable_def.hpp"
#include "GorillaTagScripts/ScavengerHunt/zzzz__ScavengerManager_def.hpp"
#include "GorillaTagScripts/ScavengerHunt/zzzz__ScavengerTarget_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c14fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.ConnectToScavengerManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::ConnectToScavengerManager)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c14fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"ConnectToScavengerManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.Collect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::Collect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c1505c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"Collect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.MomentaryGrabOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::MomentaryGrabOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c15074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::CanBeGrabbed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c1507c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"CanBeGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)(::GlobalNamespace::GorillaGrabber*, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::OnGrabbed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c150a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.OnGrabReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::OnGrabReleased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c15138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1513c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget.GorillaLocomotion_Gameplay_IGorillaGrabable_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::ScavengerHunt::ScavengerTarget::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c15144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_HuntName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HuntName;
}
constexpr ::StringW const& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_HuntName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HuntName;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_set_HuntName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HuntName = value;
}
constexpr ::StringW& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_TargetName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetName;
}
constexpr ::StringW const& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_TargetName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetName;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_set_TargetName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetName = value;
}
constexpr ::StringW& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_TargetCollected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollected;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_TargetCollected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollected;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_set_TargetCollected(::ArrayW<::UnityEngine::Events::UnityEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetCollected = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_TargetCollectedArg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollectedArg;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*> const& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get_TargetCollectedArg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCollectedArg;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_set_TargetCollectedArg(::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetCollectedArg = value;
}
constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get__manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager;
}
constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> const& GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_get__manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget::__cordl_internal_set__manager(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manager = value;
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::ScavengerHunt::ScavengerTarget::ConnectToScavengerManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"ConnectToScavengerManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget::Collect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"Collect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerTarget::MomentaryGrabOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerTarget::CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"CanBeGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabber);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget::OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber, grabbedTransform, localGrabbedPosition);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget::OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::ScavengerHunt::ScavengerTarget::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GorillaTagScripts::ScavengerHunt::ScavengerTarget* GorillaTagScripts::ScavengerHunt::ScavengerTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ScavengerHunt::ScavengerTarget*>());
}
/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr  GorillaTagScripts::ScavengerHunt::ScavengerTarget::operator ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* GorillaTagScripts::ScavengerHunt::ScavengerTarget::i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerTarget::ScavengerTarget()   {
}
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::*)(int32_t)>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c15034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c1514c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c15150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c15358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c15360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::*)()>(&::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c15398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget> const& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7* GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ScavengerHunt::ScavengerTarget__ConnectToScavengerManager_d__7::ScavengerTarget__ConnectToScavengerManager_d__7()   {
}
