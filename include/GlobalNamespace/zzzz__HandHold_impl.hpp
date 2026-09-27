#pragma once
// IWYU pragma private; include "GlobalNamespace/HandHold.hpp"
#include "GlobalNamespace/zzzz__HandHold_HandSnapMethod_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HandHold_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__HandHoldSettings_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GlobalNamespace/zzzz__HandHold_HandSnapMethod_def.hpp"
#include "GlobalNamespace/zzzz__HandHold_def.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__IGorillaGrabable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandHold.add_HandPositionRequestOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HandHold_HandHoldPositionEvent*)>(&::GlobalNamespace::HandHold::add_HandPositionRequestOverride)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x594ef78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"add_HandPositionRequestOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.remove_HandPositionRequestOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HandHold_HandHoldPositionEvent*)>(&::GlobalNamespace::HandHold::remove_HandPositionRequestOverride)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x594f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"remove_HandPositionRequestOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.add_HandPositionReleaseOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HandHold_HandHoldEvent*)>(&::GlobalNamespace::HandHold::add_HandPositionReleaseOverride)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x594f0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"add_HandPositionReleaseOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.remove_HandPositionReleaseOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HandHold_HandHoldEvent*)>(&::GlobalNamespace::HandHold::remove_HandPositionReleaseOverride)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x594f1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"remove_HandPositionReleaseOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold::*)()>(&::GlobalNamespace::HandHold::OnDisable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x594f260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold::*)()>(&::GlobalNamespace::HandHold::Initialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x594f498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandHold::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::HandHold::CanBeGrabbed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594f534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHold*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold::*)(::GlobalNamespace::GorillaGrabber*, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::HandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x594f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::HandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x594fdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.CalculateOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::HandHold::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::HandHold::CalculateOffset)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x594f7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"CalculateOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.MomentaryGrabOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandHold::*)()>(&::GlobalNamespace::HandHold::MomentaryGrabOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59500c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold::*)(::GT_CustomMapSupportRuntime::HandHoldSettings*)>(&::GlobalNamespace::HandHold::CopyProperties)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59500c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::HandHoldSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold::*)()>(&::GlobalNamespace::HandHold::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59500f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold.GorillaLocomotion_Gameplay_IGorillaGrabable_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::HandHold::*)()>(&::GlobalNamespace::HandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59501d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::HandHold::__cordl_internal_get_attached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attached;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::HandHold::__cordl_internal_get_attached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attached;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_attached(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attached = value;
}
constexpr ::GlobalNamespace::HandHold_HandSnapMethod& GlobalNamespace::HandHold::__cordl_internal_get_handSnapMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSnapMethod;
}
constexpr ::GlobalNamespace::HandHold_HandSnapMethod const& GlobalNamespace::HandHold::__cordl_internal_get_handSnapMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSnapMethod;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_handSnapMethod(::GlobalNamespace::HandHold_HandSnapMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSnapMethod = value;
}
constexpr bool& GlobalNamespace::HandHold::__cordl_internal_get_rotatePlayerWhenHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatePlayerWhenHeld;
}
constexpr bool const& GlobalNamespace::HandHold::__cordl_internal_get_rotatePlayerWhenHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatePlayerWhenHeld;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_rotatePlayerWhenHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatePlayerWhenHeld = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GlobalNamespace::HandHold::__cordl_internal_get_OnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrab;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GlobalNamespace::HandHold::__cordl_internal_get_OnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrab;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_OnGrab(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrab = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*& GlobalNamespace::HandHold::__cordl_internal_get_OnGrabHandHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabHandHold;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>* const& GlobalNamespace::HandHold::__cordl_internal_get_OnGrabHandHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabHandHold;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_OnGrabHandHold(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabHandHold = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GlobalNamespace::HandHold::__cordl_internal_get_OnGrabHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabHanded;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GlobalNamespace::HandHold::__cordl_internal_get_OnGrabHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabHanded;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_OnGrabHanded(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabHanded = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HandHold::__cordl_internal_get_OnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRelease;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HandHold::__cordl_internal_get_OnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRelease;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_OnRelease(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRelease = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*& GlobalNamespace::HandHold::__cordl_internal_get_OnReleaseHandHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleaseHandHold;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>* const& GlobalNamespace::HandHold::__cordl_internal_get_OnReleaseHandHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleaseHandHold;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_OnReleaseHandHold(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::HandHold>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReleaseHandHold = value;
}
constexpr bool& GlobalNamespace::HandHold::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::HandHold::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::HandHold::__cordl_internal_get_myCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::HandHold::__cordl_internal_get_myCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::Tappable>& GlobalNamespace::HandHold::__cordl_internal_get_myTappable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTappable;
}
constexpr ::UnityW<::GlobalNamespace::Tappable> const& GlobalNamespace::HandHold::__cordl_internal_get_myTappable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTappable;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_myTappable(::UnityW<::GlobalNamespace::Tappable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myTappable = value;
}
constexpr bool& GlobalNamespace::HandHold::__cordl_internal_get_forceMomentary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceMomentary;
}
constexpr bool const& GlobalNamespace::HandHold::__cordl_internal_get_forceMomentary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceMomentary;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_forceMomentary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceMomentary = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*& GlobalNamespace::HandHold::__cordl_internal_get_currentGrabbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGrabbers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>* const& GlobalNamespace::HandHold::__cordl_internal_get_currentGrabbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGrabbers;
}
constexpr void GlobalNamespace::HandHold::__cordl_internal_set_currentGrabbers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGrabbers = value;
}
inline void GlobalNamespace::HandHold::setStaticF_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandHold_HandHoldPositionEvent*, "HandPositionRequestOverride", ::GlobalNamespace::HandHold*>(std::forward<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(value));
}
inline ::GlobalNamespace::HandHold_HandHoldPositionEvent* GlobalNamespace::HandHold::getStaticF_HandPositionRequestOverride()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandHold_HandHoldPositionEvent*, "HandPositionRequestOverride", ::GlobalNamespace::HandHold*>();
}
inline void GlobalNamespace::HandHold::setStaticF_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandHold_HandHoldEvent*, "HandPositionReleaseOverride", ::GlobalNamespace::HandHold*>(std::forward<::GlobalNamespace::HandHold_HandHoldEvent*>(value));
}
inline ::GlobalNamespace::HandHold_HandHoldEvent* GlobalNamespace::HandHold::getStaticF_HandPositionReleaseOverride()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandHold_HandHoldEvent*, "HandPositionReleaseOverride", ::GlobalNamespace::HandHold*>();
}
inline void GlobalNamespace::HandHold::add_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"add_HandPositionRequestOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HandHold::remove_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"remove_HandPositionRequestOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HandHold::add_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"add_HandPositionReleaseOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HandHold::remove_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"remove_HandPositionReleaseOverride", {}, {::i2c::type_of<::GlobalNamespace::HandHold_HandHoldEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HandHold::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandHold::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HandHold::CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHold*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabber);
}
inline void GlobalNamespace::HandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed(::GlobalNamespace::GorillaGrabber*  g, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, g, grabbedTransform, localGrabbedPosition);
}
inline void GlobalNamespace::HandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased(::GlobalNamespace::GorillaGrabber*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, g);
}
inline ::UnityEngine::Vector3 GlobalNamespace::HandHold::CalculateOffset(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"CalculateOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline bool GlobalNamespace::HandHold::MomentaryGrabOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HandHold::CopyProperties(::GT_CustomMapSupportRuntime::HandHoldSettings*  handHoldSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::HandHoldSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handHoldSettings);
}
inline void GlobalNamespace::HandHold::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::HandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::HandHold* GlobalNamespace::HandHold::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandHold*>());
}
/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr  GlobalNamespace::HandHold::operator ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* GlobalNamespace::HandHold::i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandHold::HandHold()   {
}
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold_HandHoldEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::HandHold_HandHoldEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59503c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold_HandHoldEvent::*)(::GlobalNamespace::HandHold*, bool)>(&::GlobalNamespace::HandHold_HandHoldEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59504d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::HandHold_HandHoldEvent::*)(::GlobalNamespace::HandHold*, bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::HandHold_HandHoldEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59504e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold_HandHoldEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::HandHold_HandHoldEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5950548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HandHold_HandHoldEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::HandHold_HandHoldEvent::Invoke(::GlobalNamespace::HandHold*  hh, bool  lh)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hh, lh);
}
inline ::System::IAsyncResult* GlobalNamespace::HandHold_HandHoldEvent::BeginInvoke(::GlobalNamespace::HandHold*  hh, bool  lh, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hh, lh, callback, object);
}
inline void GlobalNamespace::HandHold_HandHoldEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::HandHold_HandHoldEvent* GlobalNamespace::HandHold_HandHoldEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandHold_HandHoldEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandHold_HandHoldEvent::HandHold_HandHoldEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldPositionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold_HandHoldPositionEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::HandHold_HandHoldPositionEvent::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59501e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldPositionEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold_HandHoldPositionEvent::*)(::GlobalNamespace::HandHold*, bool, ::UnityEngine::Vector3)>(&::GlobalNamespace::HandHold_HandHoldPositionEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59502ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldPositionEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::HandHold_HandHoldPositionEvent::*)(::GlobalNamespace::HandHold*, bool, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::HandHold_HandHoldPositionEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5950300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHold_HandHoldPositionEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHold_HandHoldPositionEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::HandHold_HandHoldPositionEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59503bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HandHold_HandHoldPositionEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::HandHold_HandHoldPositionEvent::Invoke(::GlobalNamespace::HandHold*  hh, bool  lh, ::UnityEngine::Vector3  pos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hh, lh, pos);
}
inline ::System::IAsyncResult* GlobalNamespace::HandHold_HandHoldPositionEvent::BeginInvoke(::GlobalNamespace::HandHold*  hh, bool  lh, ::UnityEngine::Vector3  pos, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, hh, lh, pos, callback, object);
}
inline void GlobalNamespace::HandHold_HandHoldPositionEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::HandHold_HandHoldPositionEvent* GlobalNamespace::HandHold_HandHoldPositionEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandHold_HandHoldPositionEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandHold_HandHoldPositionEvent::HandHold_HandHoldPositionEvent()   {
}
