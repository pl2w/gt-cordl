#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/MouseButtonModel_ImplementationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MouseButtonModel_ImplementationData)
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct MouseButtonModel_ImplementationData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MouseButtonModel_ImplementationData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MouseButtonModel_ImplementationData, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseButtonModel/ImplementationData");
// Dependencies UnityEngine.EventSystems.RaycastResult, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.MouseButtonModel/ImplementationData
struct CORDL_TYPE MouseButtonModel_ImplementationData {
public:
// Declarations
 __declspec(property(get=get_draggedGameObject, put=set_draggedGameObject)) ::UnityW<::UnityEngine::GameObject>  draggedGameObject;

 __declspec(property(get=get_isDragging, put=set_isDragging)) bool  isDragging;

 __declspec(property(get=get_pressedGameObject, put=set_pressedGameObject)) ::UnityW<::UnityEngine::GameObject>  pressedGameObject;

 __declspec(property(get=get_pressedGameObjectRaw, put=set_pressedGameObjectRaw)) ::UnityW<::UnityEngine::GameObject>  pressedGameObjectRaw;

 __declspec(property(get=get_pressedPosition, put=set_pressedPosition)) ::UnityEngine::Vector2  pressedPosition;

 __declspec(property(get=get_pressedRaycast, put=set_pressedRaycast)) ::UnityEngine::EventSystems::RaycastResult  pressedRaycast;

 __declspec(property(get=get_pressedTime, put=set_pressedTime)) float_t  pressedTime;

/// @brief Method Reset, addr 0xb4323c4, size 0xa4, virtual false, abstract: false, final false
inline void Reset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_draggedGameObject, addr 0xb432604, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_draggedGameObject() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isDragging, addr 0xb432580, size 0x8, virtual false, abstract: false, final false
inline bool get_isDragging() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedGameObject, addr 0xb4325e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObject() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedGameObjectRaw, addr 0xb4325f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObjectRaw() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedPosition, addr 0xb4325a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_pressedPosition() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedRaycast, addr 0xb4325b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::RaycastResult get_pressedRaycast() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pressedTime, addr 0xb432590, size 0x8, virtual false, abstract: false, final false
inline float_t get_pressedTime() ;

/// [CompilerGenerated]
/// @brief Method set_draggedGameObject, addr 0xb43260c, size 0x8, virtual false, abstract: false, final false
inline void set_draggedGameObject(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isDragging, addr 0xb432588, size 0x8, virtual false, abstract: false, final false
inline void set_isDragging(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedGameObject, addr 0xb4325ec, size 0x8, virtual false, abstract: false, final false
inline void set_pressedGameObject(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedGameObjectRaw, addr 0xb4325fc, size 0x8, virtual false, abstract: false, final false
inline void set_pressedGameObjectRaw(::UnityEngine::GameObject*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedPosition, addr 0xb4325a8, size 0x8, virtual false, abstract: false, final false
inline void set_pressedPosition(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedRaycast, addr 0xb4325c0, size 0x24, virtual false, abstract: false, final false
inline void set_pressedRaycast(::UnityEngine::EventSystems::RaycastResult  value) ;

/// [CompilerGenerated]
/// @brief Method set_pressedTime, addr 0xb432598, size 0x8, virtual false, abstract: false, final false
inline void set_pressedTime(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MouseButtonModel_ImplementationData() ;

// Ctor Parameters [CppParam { name: "_isDragging_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedRaycast_k__BackingField", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pressedGameObjectRaw_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_draggedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }]
constexpr MouseButtonModel_ImplementationData(bool  _isDragging_k__BackingField, float_t  _pressedTime_k__BackingField, ::UnityEngine::Vector2  _pressedPosition_k__BackingField, ::UnityEngine::EventSystems::RaycastResult  _pressedRaycast_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pressedGameObject_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pressedGameObjectRaw_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _draggedGameObject_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// [CompilerGenerated]
/// @brief Field <isDragging>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _isDragging_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedTime>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _pressedTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedPosition>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  _pressedPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedRaycast>k__BackingField, offset: 0x10, size: 0x70, def value: None
 ::UnityEngine::EventSystems::RaycastResult  _pressedRaycast_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedGameObject>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _pressedGameObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pressedGameObjectRaw>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _pressedGameObjectRaw_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <draggedGameObject>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _draggedGameObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MouseButtonModel_ImplementationData, _isDragging_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseButtonModel_ImplementationData, _pressedTime_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseButtonModel_ImplementationData, _pressedPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseButtonModel_ImplementationData, _pressedRaycast_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseButtonModel_ImplementationData, _pressedGameObject_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseButtonModel_ImplementationData, _pressedGameObjectRaw_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouseButtonModel_ImplementationData, _draggedGameObject_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MouseButtonModel_ImplementationData) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
