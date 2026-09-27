#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/PointerModel_ButtonState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_FramePressState_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerModel_ButtonState)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct PointerModel_ButtonState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerModel_ButtonState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerModel_ButtonState, "UnityEngine.InputSystem.UI", "PointerModel/ButtonState");
// Dependencies UnityEngine.EventSystems.PointerEventData::FramePressState, UnityEngine.EventSystems.RaycastResult, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.PointerModel/ButtonState
struct CORDL_TYPE PointerModel_ButtonState {
public:
// Declarations
 __declspec(property(get=get_clickedOnSameGameObject, put=set_clickedOnSameGameObject)) bool  clickedOnSameGameObject;

 __declspec(property(get=get_ignoreNextClick, put=set_ignoreNextClick)) bool  ignoreNextClick;

 __declspec(property(get=get_isPressed, put=set_isPressed)) bool  isPressed;

 __declspec(property(get=get_pressTime, put=set_pressTime)) float_t  pressTime;

 __declspec(property(get=get_wasPressedThisFrame)) bool  wasPressedThisFrame;

 __declspec(property(get=get_wasReleasedThisFrame)) bool  wasReleasedThisFrame;

/// @brief Method CopyPressStateFrom, addr 0xafd4d88, size 0xa4, virtual false, abstract: false, final false
inline void CopyPressStateFrom(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method CopyPressStateTo, addr 0xafd34a8, size 0xb4, virtual false, abstract: false, final false
inline void CopyPressStateTo(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnEndFrame, addr 0xafd7e20, size 0xc, virtual false, abstract: false, final false
inline void OnEndFrame() ;

/// @brief Method get_clickedOnSameGameObject, addr 0xafd99a0, size 0x8, virtual false, abstract: false, final false
inline bool get_clickedOnSameGameObject() ;

/// @brief Method get_ignoreNextClick, addr 0xafd9980, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreNextClick() ;

/// @brief Method get_isPressed, addr 0xafd9978, size 0x8, virtual false, abstract: false, final false
inline bool get_isPressed() ;

/// @brief Method get_pressTime, addr 0xafd9990, size 0x8, virtual false, abstract: false, final false
inline float_t get_pressTime() ;

/// @brief Method get_wasPressedThisFrame, addr 0xafd4d78, size 0x10, virtual false, abstract: false, final false
inline bool get_wasPressedThisFrame() ;

/// @brief Method get_wasReleasedThisFrame, addr 0xafd4458, size 0x14, virtual false, abstract: false, final false
inline bool get_wasReleasedThisFrame() ;

/// @brief Method set_clickedOnSameGameObject, addr 0xafd99a8, size 0x8, virtual false, abstract: false, final false
inline void set_clickedOnSameGameObject(bool  value) ;

/// @brief Method set_ignoreNextClick, addr 0xafd9988, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreNextClick(bool  value) ;

/// @brief Method set_isPressed, addr 0xafd8544, size 0x54, virtual false, abstract: false, final false
inline void set_isPressed(bool  value) ;

/// @brief Method set_pressTime, addr 0xafd9998, size 0x8, virtual false, abstract: false, final false
inline void set_pressTime(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerModel_ButtonState() ;

// Ctor Parameters [CppParam { name: "m_IsPressed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FramePressState", ty: "::GlobalNamespace::PointerEventData_FramePressState", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PressTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PressRaycast", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RawPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastPressObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DragObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PressPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ClickTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ClickCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Dragging", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ClickedOnSameGameObject", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IgnoreNextClick", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr PointerModel_ButtonState(bool  m_IsPressed, ::GlobalNamespace::PointerEventData_FramePressState  m_FramePressState, float_t  m_PressTime, ::UnityEngine::EventSystems::RaycastResult  m_PressRaycast, ::UnityW<::UnityEngine::GameObject>  m_PressObject, ::UnityW<::UnityEngine::GameObject>  m_RawPressObject, ::UnityW<::UnityEngine::GameObject>  m_LastPressObject, ::UnityW<::UnityEngine::GameObject>  m_DragObject, ::UnityEngine::Vector2  m_PressPosition, float_t  m_ClickTime, int32_t  m_ClickCount, bool  m_Dragging, bool  m_ClickedOnSameGameObject, bool  m_IgnoreNextClick) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13599};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field m_IsPressed, offset: 0x0, size: 0x1, def value: None
 bool  m_IsPressed;

/// @brief Field m_FramePressState, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::PointerEventData_FramePressState  m_FramePressState;

/// @brief Field m_PressTime, offset: 0x8, size: 0x4, def value: None
 float_t  m_PressTime;

/// @brief Field m_PressRaycast, offset: 0x10, size: 0x70, def value: None
 ::UnityEngine::EventSystems::RaycastResult  m_PressRaycast;

/// @brief Field m_PressObject, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  m_PressObject;

/// @brief Field m_RawPressObject, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  m_RawPressObject;

/// @brief Field m_LastPressObject, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  m_LastPressObject;

/// @brief Field m_DragObject, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  m_DragObject;

/// @brief Field m_PressPosition, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_PressPosition;

/// @brief Field m_ClickTime, offset: 0xa8, size: 0x4, def value: None
 float_t  m_ClickTime;

/// @brief Field m_ClickCount, offset: 0xac, size: 0x4, def value: None
 int32_t  m_ClickCount;

/// @brief Field m_Dragging, offset: 0xb0, size: 0x1, def value: None
 bool  m_Dragging;

/// @brief Field m_ClickedOnSameGameObject, offset: 0xb1, size: 0x1, def value: None
 bool  m_ClickedOnSameGameObject;

/// @brief Field m_IgnoreNextClick, offset: 0xb2, size: 0x1, def value: None
 bool  m_IgnoreNextClick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_IsPressed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_FramePressState) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_PressTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_PressRaycast) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_PressObject) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_RawPressObject) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_LastPressObject) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_DragObject) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_PressPosition) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_ClickTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_ClickCount) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_Dragging) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_ClickedOnSameGameObject) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_ButtonState, m_IgnoreNextClick) == 0xb2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerModel_ButtonState) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
