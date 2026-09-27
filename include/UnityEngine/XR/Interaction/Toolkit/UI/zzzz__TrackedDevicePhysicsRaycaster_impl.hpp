#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDevicePhysicsRaycaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDevicePhysicsRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDevicePhysicsRaycaster_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.get_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.set_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)(::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::set_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.get_eventMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"get_eventMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.set_eventMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::set_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"set_eventMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.get_maxRayIntersections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_maxRayIntersections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"get_maxRayIntersections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.set_maxRayIntersections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::set_maxRayIntersections)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb439b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"set_maxRayIntersections", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.get_eventCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb439bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.SetEventCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)(::UnityEngine::Camera*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::SetEventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"SetEventCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb439cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb439f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.PerformRaycasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::PerformRaycasts)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xb439d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"PerformRaycasts", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster.PerformRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::PerformRaycast)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0xb43a084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"PerformRaycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb43a768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastTriggerInteraction = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_EventMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_EventMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_EventMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EventMask = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_MaxRayIntersections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxRayIntersections;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_MaxRayIntersections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxRayIntersections;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_MaxRayIntersections(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxRayIntersections = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_EventCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_EventCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventCamera;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_EventCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EventCamera = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_HasWarnedEventCameraNull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasWarnedEventCameraNull;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_HasWarnedEventCameraNull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasWarnedEventCameraNull;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_HasWarnedEventCameraNull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasWarnedEventCameraNull = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHits = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastHitComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitComparer;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastHitComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitComparer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHitComparer = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastArrayWrapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastArrayWrapper;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastArrayWrapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastArrayWrapper;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_RaycastArrayWrapper(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastArrayWrapper = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastResultsCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastResultsCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_RaycastResultsCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastResultsCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_RaycastResultsCache(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastResultsCache = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_raycastTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_eventMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"get_eventMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::set_eventMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"set_eventMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_maxRayIntersections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"get_maxRayIntersections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::set_maxRayIntersections(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"set_maxRayIntersections", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::get_eventCamera()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::SetEventCamera(::UnityEngine::Camera*  newEventCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"SetEventCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEventCamera);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::PerformRaycasts(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"PerformRaycasts", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::PerformRaycast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::Camera*  currentEventCamera, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList, ::by_ref<float_t>  existingHitLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {"PerformRaycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, layerMask, currentEventCamera, resultAppendList, existingHitLength);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster::TrackedDevicePhysicsRaycaster()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb43a94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::Compare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitComparer::TrackedDevicePhysicsRaycaster_RaycastHitComparer()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.set_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::set_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43a858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"set_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb43a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb43a8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)(::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb43a048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::MoveNext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb43a904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43a924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb43a930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43a934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_get_m_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_get_m_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_set_m_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Count = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_get_m_Hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_get_m_Hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_set_m_Hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Hits = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_get_m_CurrentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_get_m_CurrentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::__cordl_internal_set_m_CurrentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentIndex = value;
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::set_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"set_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::_ctor(::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raycastHits, count);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::New_ctor(::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment*>(raycastHits, count));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::i___System__Collections__Generic__IEnumerable_1___UnityEngine__RaycastHit_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::i___System__Collections__Generic__IEnumerator_1___UnityEngine__RaycastHit_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment::TrackedDevicePhysicsRaycaster_RaycastHitArraySegment()   {
}
