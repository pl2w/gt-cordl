#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/PointerModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_ButtonState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PointerModel)
namespace GlobalNamespace {
struct PointerModel_ButtonState;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::PointerModel);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::UI::PointerModel, "UnityEngine.InputSystem.UI", "PointerModel");
// Dependencies UnityEngine.InputSystem.UI.PointerModel::ButtonState, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.PointerModel
struct CORDL_TYPE PointerModel {
public:
// Declarations
using ButtonState = ::GlobalNamespace::PointerModel_ButtonState;

 __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle)) float_t  altitudeAngle;

 __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle)) float_t  azimuthAngle;

 __declspec(property(get=get_pointerType)) ::UnityEngine::InputSystem::UI::UIPointerType  pointerType;

 __declspec(property(get=get_pressure, put=set_pressure)) float_t  pressure;

 __declspec(property(get=get_radius, put=set_radius)) ::UnityEngine::Vector2  radius;

 __declspec(property(get=get_screenPosition, put=set_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_scrollDelta, put=set_scrollDelta)) ::UnityEngine::Vector2  scrollDelta;

 __declspec(property(get=get_twist, put=set_twist)) float_t  twist;

 __declspec(property(get=get_worldOrientation, put=set_worldOrientation)) ::UnityEngine::Quaternion  worldOrientation;

 __declspec(property(get=get_worldPosition, put=set_worldPosition)) ::UnityEngine::Vector3  worldPosition;

/// @brief Method CopyTouchOrPenStateFrom, addr 0xafd8dc8, size 0xc4, virtual false, abstract: false, final false
inline void CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnFrameFinished, addr 0xafd9028, size 0x44, virtual false, abstract: false, final false
inline void OnFrameFinished() ;

/// @brief Method .ctor, addr 0xafd7e6c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData) ;

/// @brief Method get_altitudeAngle, addr 0xafd98dc, size 0x8, virtual false, abstract: false, final false
inline float_t get_altitudeAngle() ;

/// @brief Method get_azimuthAngle, addr 0xafd98b4, size 0x8, virtual false, abstract: false, final false
inline float_t get_azimuthAngle() ;

/// @brief Method get_pointerType, addr 0xafd35a4, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType() ;

/// @brief Method get_pressure, addr 0xafd988c, size 0x8, virtual false, abstract: false, final false
inline float_t get_pressure() ;

/// @brief Method get_radius, addr 0xafd992c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_radius() ;

/// @brief Method get_screenPosition, addr 0xafd9850, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_scrollDelta, addr 0xafd9880, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_scrollDelta() ;

/// @brief Method get_twist, addr 0xafd9904, size 0x8, virtual false, abstract: false, final false
inline float_t get_twist() ;

/// @brief Method get_worldOrientation, addr 0xafd986c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_worldOrientation() ;

/// @brief Method get_worldPosition, addr 0xafd985c, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_worldPosition() ;

/// @brief Method set_altitudeAngle, addr 0xafd98e4, size 0x20, virtual false, abstract: false, final false
inline void set_altitudeAngle(float_t  value) ;

/// @brief Method set_azimuthAngle, addr 0xafd98bc, size 0x20, virtual false, abstract: false, final false
inline void set_azimuthAngle(float_t  value) ;

/// @brief Method set_pressure, addr 0xafd9894, size 0x20, virtual false, abstract: false, final false
inline void set_pressure(float_t  value) ;

/// @brief Method set_radius, addr 0xafd9938, size 0x40, virtual false, abstract: false, final false
inline void set_radius(::UnityEngine::Vector2  value) ;

/// @brief Method set_screenPosition, addr 0xafd7e2c, size 0x40, virtual false, abstract: false, final false
inline void set_screenPosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_scrollDelta, addr 0xafd8894, size 0x40, virtual false, abstract: false, final false
inline void set_scrollDelta(::UnityEngine::Vector2  value) ;

/// @brief Method set_twist, addr 0xafd990c, size 0x20, virtual false, abstract: false, final false
inline void set_twist(float_t  value) ;

/// @brief Method set_worldOrientation, addr 0xafd8a8c, size 0x58, virtual false, abstract: false, final false
inline void set_worldOrientation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_worldPosition, addr 0xafd8bd4, size 0x54, virtual false, abstract: false, final false
inline void set_worldPosition(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerModel() ;

// Ctor Parameters [CppParam { name: "changedThisFrame", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftButton", ty: "::GlobalNamespace::PointerModel_ButtonState", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightButton", ty: "::GlobalNamespace::PointerModel_ButtonState", modifiers: "", def_value: None, comment: None }, CppParam { name: "middleButton", ty: "::GlobalNamespace::PointerModel_ButtonState", modifiers: "", def_value: None, comment: None }, CppParam { name: "eventData", ty: "::UnityEngine::InputSystem::UI::ExtendedPointerEventData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ScreenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WorldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WorldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Twist", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr PointerModel(bool  changedThisFrame, ::GlobalNamespace::PointerModel_ButtonState  leftButton, ::GlobalNamespace::PointerModel_ButtonState  rightButton, ::GlobalNamespace::PointerModel_ButtonState  middleButton, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData, ::UnityEngine::Vector2  m_ScreenPosition, ::UnityEngine::Vector2  m_ScrollDelta, ::UnityEngine::Vector3  m_WorldPosition, ::UnityEngine::Quaternion  m_WorldOrientation, float_t  m_Pressure, float_t  m_AzimuthAngle, float_t  m_AltitudeAngle, float_t  m_Twist, ::UnityEngine::Vector2  m_Radius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13600};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x280};

/// @brief Field changedThisFrame, offset: 0x0, size: 0x1, def value: None
 bool  changedThisFrame;

/// @brief Field leftButton, offset: 0x8, size: 0xb8, def value: None
 ::GlobalNamespace::PointerModel_ButtonState  leftButton;

/// @brief Field rightButton, offset: 0xc0, size: 0xb8, def value: None
 ::GlobalNamespace::PointerModel_ButtonState  rightButton;

/// @brief Field middleButton, offset: 0x178, size: 0xb8, def value: None
 ::GlobalNamespace::PointerModel_ButtonState  middleButton;

/// @brief Field eventData, offset: 0x230, size: 0x8, def value: None
 ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*  eventData;

/// @brief Field m_ScreenPosition, offset: 0x238, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_ScreenPosition;

/// @brief Field m_ScrollDelta, offset: 0x240, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_ScrollDelta;

/// @brief Field m_WorldPosition, offset: 0x248, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_WorldPosition;

/// @brief Field m_WorldOrientation, offset: 0x254, size: 0x10, def value: None
 ::UnityEngine::Quaternion  m_WorldOrientation;

/// @brief Field m_Pressure, offset: 0x264, size: 0x4, def value: None
 float_t  m_Pressure;

/// @brief Field m_AzimuthAngle, offset: 0x268, size: 0x4, def value: None
 float_t  m_AzimuthAngle;

/// @brief Field m_AltitudeAngle, offset: 0x26c, size: 0x4, def value: None
 float_t  m_AltitudeAngle;

/// @brief Field m_Twist, offset: 0x270, size: 0x4, def value: None
 float_t  m_Twist;

/// @brief Field m_Radius, offset: 0x274, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, changedThisFrame) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, leftButton) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, rightButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, middleButton) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, eventData) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_ScreenPosition) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_ScrollDelta) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_WorldPosition) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_WorldOrientation) == 0x254, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Pressure) == 0x264, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_AzimuthAngle) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_AltitudeAngle) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Twist) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::PointerModel, m_Radius) == 0x274, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::UI::PointerModel) == 0x280, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
