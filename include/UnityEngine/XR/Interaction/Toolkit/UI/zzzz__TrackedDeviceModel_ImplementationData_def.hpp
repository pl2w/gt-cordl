#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceModel_ImplementationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TrackedDeviceModel_ImplementationData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct TrackedDeviceModel_ImplementationData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackedDeviceModel_ImplementationData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedDeviceModel_ImplementationData, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel/ImplementationData");
// Dependencies UnityEngine.EventSystems.RaycastResult, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel/ImplementationData
struct CORDL_TYPE TrackedDeviceModel_ImplementationData {
public:
// Declarations
 __declspec(property(get=get_draggedGameObject, put=set_draggedGameObject)) ::UnityW<::UnityEngine::GameObject>  draggedGameObject;

 __declspec(property(get=get_hoverTargets, put=set_hoverTargets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hoverTargets;

 __declspec(property(get=get_isDragging, put=set_isDragging)) bool  isDragging;

 __declspec(property(get=get_pointerTarget, put=set_pointerTarget)) ::UnityW<::UnityEngine::GameObject>  pointerTarget;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector2  position;

 __declspec(property(get=get_pressedGameObject, put=set_pressedGameObject)) ::UnityW<::UnityEngine::GameObject>  pressedGameObject;

 __declspec(property(get=get_pressedGameObjectRaw, put=set_pressedGameObjectRaw)) ::UnityW<::UnityEngine::GameObject>  pressedGameObjectRaw;

 __declspec(property(get=get_pressedPosition, put=set_pressedPosition)) ::UnityEngine::Vector2  pressedPosition;

 __declspec(property(get=get_pressedRaycast, put=set_pressedRaycast)) ::UnityEngine::EventSystems::RaycastResult  pressedRaycast;

 __declspec(property(get=get_pressedTime, put=set_pressedTime)) float_t  pressedTime;

 __declspec(property(get=get_pressedWorldPosition, put=set_pressedWorldPosition)) ::UnityEngine::Vector3  pressedWorldPosition;

/// @brief Method Reset, addr 0xb439470, size 0x1b8, virtual false, abstract: false, final false
inline void Reset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_draggedGameObject, addr 0xb439b18, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_draggedGameObject() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_hoverTargets, addr 0xb439a4c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_hoverTargets() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isDragging, addr 0xb439a6c, size 0x8, virtual false, abstract: false, final false
inline bool get_isDragging() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pointerTarget, addr 0xb439a5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_pointerTarget() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_position, addr 0xb439a8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_position() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedGameObject, addr 0xb439af8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObject() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedGameObjectRaw, addr 0xb439b08, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObjectRaw() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedPosition, addr 0xb439a9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_pressedPosition() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedRaycast, addr 0xb439ac4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::RaycastResult get_pressedRaycast() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedTime, addr 0xb439a7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_pressedTime() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedWorldPosition, addr 0xb439aac, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_pressedWorldPosition() ;

/// [CompilerGenerated]
/// @brief Method set_draggedGameObject, addr 0xb439b20, size 0x8, virtual false, abstract: false, final false
inline void set_draggedGameObject(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_hoverTargets, addr 0xb439a54, size 0x8, virtual false, abstract: false, final false
inline void set_hoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isDragging, addr 0xb439a74, size 0x8, virtual false, abstract: false, final false
inline void set_isDragging(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_pointerTarget, addr 0xb439a64, size 0x8, virtual false, abstract: false, final false
inline void set_pointerTarget(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_position, addr 0xb439a94, size 0x8, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedGameObject, addr 0xb439b00, size 0x8, virtual false, abstract: false, final false
inline void set_pressedGameObject(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedGameObjectRaw, addr 0xb439b10, size 0x8, virtual false, abstract: false, final false
inline void set_pressedGameObjectRaw(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedPosition, addr 0xb439aa4, size 0x8, virtual false, abstract: false, final false
inline void set_pressedPosition(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedRaycast, addr 0xb439ad4, size 0x24, virtual false, abstract: false, final false
inline void set_pressedRaycast(::UnityEngine::EventSystems::RaycastResult  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedTime, addr 0xb439a84, size 0x8, virtual false, abstract: false, final false
inline void set_pressedTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedWorldPosition, addr 0xb439ab8, size 0xc, virtual false, abstract: false, final false
inline void set_pressedWorldPosition(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TrackedDeviceModel_ImplementationData() ;

// Ctor Parameters [CppParam { name: "_hoverTargets_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pointerTarget_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isDragging_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedWorldPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedRaycast_k__BackingField", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedGameObjectRaw_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_draggedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }]
constexpr TrackedDeviceModel_ImplementationData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hoverTargets_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pointerTarget_k__BackingField, bool  _isDragging_k__BackingField, float_t  _pressedTime_k__BackingField, ::UnityEngine::Vector2  _position_k__BackingField, ::UnityEngine::Vector2  _pressedPosition_k__BackingField, ::UnityEngine::Vector3  _pressedWorldPosition_k__BackingField, ::UnityEngine::EventSystems::RaycastResult  _pressedRaycast_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pressedGameObject_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pressedGameObjectRaw_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _draggedGameObject_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// [CompilerGenerated]
/// @brief Field <hoverTargets>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hoverTargets_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pointerTarget>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _pointerTarget_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isDragging>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _isDragging_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedTime>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  _pressedTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <position>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  _position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedPosition>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  _pressedPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedWorldPosition>k__BackingField, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  _pressedWorldPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedRaycast>k__BackingField, offset: 0x38, size: 0x70, def value: None
 ::UnityEngine::EventSystems::RaycastResult  _pressedRaycast_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedGameObject>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _pressedGameObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedGameObjectRaw>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _pressedGameObjectRaw_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <draggedGameObject>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _draggedGameObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _hoverTargets_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _pointerTarget_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _isDragging_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _pressedTime_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _position_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _pressedPosition_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _pressedWorldPosition_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _pressedRaycast_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _pressedGameObject_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _pressedGameObjectRaw_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceModel_ImplementationData, _draggedGameObject_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedDeviceModel_ImplementationData) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
