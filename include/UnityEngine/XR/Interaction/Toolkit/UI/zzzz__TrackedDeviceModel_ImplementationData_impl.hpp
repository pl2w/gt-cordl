#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceModel_ImplementationData.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_ImplementationData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_hoverTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_hoverTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_hoverTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_hoverTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_hoverTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_hoverTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_pointerTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pointerTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pointerTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_pointerTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pointerTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pointerTarget", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_isDragging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_isDragging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_isDragging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_isDragging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(bool)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_isDragging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_isDragging", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_pressedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_pressedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(float_t)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_pressedPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_pressedPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_pressedWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedWorldPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb439aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedWorldPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_pressedWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedWorldPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb439ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_pressedRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedRaycast)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb439ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedRaycast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_pressedRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::EventSystems::RaycastResult)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedRaycast)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb439ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedRaycast", {}, {::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_pressedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_pressedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_pressedGameObjectRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedGameObjectRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedGameObjectRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_pressedGameObjectRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedGameObjectRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedGameObjectRaw", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.get_draggedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::get_draggedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_draggedGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.set_draggedGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::set_draggedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb439b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_draggedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedDeviceModel_ImplementationData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedDeviceModel_ImplementationData::*)()>(&::GlobalNamespace::TrackedDeviceModel_ImplementationData::Reset)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb439470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::TrackedDeviceModel_ImplementationData::get_hoverTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_hoverTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_hoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_hoverTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pointerTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pointerTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pointerTarget(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pointerTarget", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::TrackedDeviceModel_ImplementationData::get_isDragging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_isDragging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_isDragging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_isDragging", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::TrackedDeviceModel_ImplementationData::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_position(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedPosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedWorldPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedWorldPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedWorldPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::RaycastResult GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedRaycast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedRaycast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedRaycast(::UnityEngine::EventSystems::RaycastResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedRaycast", {}, {::i2c::type_of<::UnityEngine::EventSystems::RaycastResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedGameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::TrackedDeviceModel_ImplementationData::get_pressedGameObjectRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_pressedGameObjectRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_pressedGameObjectRaw(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_pressedGameObjectRaw", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::TrackedDeviceModel_ImplementationData::get_draggedGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"get_draggedGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::set_draggedGameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"set_draggedGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::TrackedDeviceModel_ImplementationData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedDeviceModel_ImplementationData>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_hoverTargets_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pointerTarget_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isDragging_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pressedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pressedPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pressedWorldPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pressedRaycast_k__BackingField", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pressedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pressedGameObjectRaw_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_draggedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackedDeviceModel_ImplementationData::TrackedDeviceModel_ImplementationData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hoverTargets_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pointerTarget_k__BackingField, bool  _isDragging_k__BackingField, float_t  _pressedTime_k__BackingField, ::UnityEngine::Vector2  _position_k__BackingField, ::UnityEngine::Vector2  _pressedPosition_k__BackingField, ::UnityEngine::Vector3  _pressedWorldPosition_k__BackingField, ::UnityEngine::EventSystems::RaycastResult  _pressedRaycast_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pressedGameObject_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pressedGameObjectRaw_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _draggedGameObject_k__BackingField) noexcept  {
this->_hoverTargets_k__BackingField = _hoverTargets_k__BackingField;
this->_pointerTarget_k__BackingField = _pointerTarget_k__BackingField;
this->_isDragging_k__BackingField = _isDragging_k__BackingField;
this->_pressedTime_k__BackingField = _pressedTime_k__BackingField;
this->_position_k__BackingField = _position_k__BackingField;
this->_pressedPosition_k__BackingField = _pressedPosition_k__BackingField;
this->_pressedWorldPosition_k__BackingField = _pressedWorldPosition_k__BackingField;
this->_pressedRaycast_k__BackingField = _pressedRaycast_k__BackingField;
this->_pressedGameObject_k__BackingField = _pressedGameObject_k__BackingField;
this->_pressedGameObjectRaw_k__BackingField = _pressedGameObjectRaw_k__BackingField;
this->_draggedGameObject_k__BackingField = _draggedGameObject_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedDeviceModel_ImplementationData::TrackedDeviceModel_ImplementationData()   {
}
