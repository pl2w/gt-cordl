#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Button_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_ButtonsState_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Type_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEvent)
namespace GlobalNamespace {
struct PointerEvent_Button;
}
namespace GlobalNamespace {
struct PointerEvent_ButtonsState;
}
namespace GlobalNamespace {
struct PointerEvent_Type;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct PointerEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::PointerEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::PointerEvent, "UnityEngine.InputForUI", "PointerEvent");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource, UnityEngine.InputForUI.PointerEvent::Button, UnityEngine.InputForUI.PointerEvent::ButtonsState, UnityEngine.InputForUI.PointerEvent::Type, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.PointerEvent
struct CORDL_TYPE PointerEvent {
public:
// Declarations
using Button = ::GlobalNamespace::PointerEvent_Button;

using ButtonsState = ::GlobalNamespace::PointerEvent_ButtonsState;

using Type = ::GlobalNamespace::PointerEvent_Type;

 __declspec(property(get=get_altitude)) float_t  altitude;

 __declspec(property(get=get_azimuth)) float_t  azimuth;

 __declspec(property(get=get_eventModifiers, put=set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers  eventModifiers;

 __declspec(property(get=get_eventSource, put=set_eventSource)) ::UnityEngine::InputForUI::EventSource  eventSource;

 __declspec(property(get=get_isPrimaryPointer)) bool  isPrimaryPointer;

 __declspec(property(put=set_playerId)) uint32_t  playerId;

 __declspec(property(get=get_timestamp, put=set_timestamp)) ::Unity::IntegerTime::DiscreteTime  timestamp;

 __declspec(property(get=get_worldRay)) ::UnityEngine::Ray  worldRay;

/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr operator  ::UnityEngine::InputForUI::IEventProperties*() ;

/// @brief Method ButtonFromButtonIndex, addr 0xb65fbb0, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PointerEvent_Button ButtonFromButtonIndex(int32_t  index) ;

/// @brief Method ToString, addr 0xb65ef94, size 0xc1c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_altitude, addr 0xb65eee4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_altitude() ;

/// @brief Method get_azimuth, addr 0xb65ee34, size 0x8, virtual false, abstract: false, final false
inline float_t get_azimuth() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_eventModifiers, addr 0xb65ef84, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_eventSource, addr 0xb65ef6c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventSource get_eventSource() ;

/// @brief Method get_isPrimaryPointer, addr 0xb65ecc0, size 0x10, virtual false, abstract: false, final false
inline bool get_isPrimaryPointer() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_timestamp, addr 0xb65ef5c, size 0x8, virtual true, abstract: false, final true
inline ::Unity::IntegerTime::DiscreteTime get_timestamp() ;

/// @brief Method get_worldRay, addr 0xb65ecd0, size 0x164, virtual false, abstract: false, final false
inline ::UnityEngine::Ray get_worldRay() ;

/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties() ;

/// [CompilerGenerated]
/// @brief Method set_eventModifiers, addr 0xb65ef8c, size 0x8, virtual false, abstract: false, final false
inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers  value) ;

/// [CompilerGenerated]
/// @brief Method set_eventSource, addr 0xb65ef74, size 0x8, virtual false, abstract: false, final false
inline void set_eventSource(::UnityEngine::InputForUI::EventSource  value) ;

/// [CompilerGenerated]
/// @brief Method set_playerId, addr 0xb65ef7c, size 0x8, virtual false, abstract: false, final false
inline void set_playerId(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_timestamp, addr 0xb65ef64, size 0x8, virtual false, abstract: false, final false
inline void set_timestamp(::Unity::IntegerTime::DiscreteTime  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerEvent() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::PointerEvent_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "pointerIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "deltaPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isInverted", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "button", ty: "::GlobalNamespace::PointerEvent_Button", modifiers: "", def_value: None, comment: None }, CppParam { name: "buttonsState", ty: "::GlobalNamespace::PointerEvent_ButtonsState", modifiers: "", def_value: None, comment: None }, CppParam { name: "clickCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: None, comment: None }]
constexpr PointerEvent(::GlobalNamespace::PointerEvent_Type  type, int32_t  pointerIndex, ::UnityEngine::Vector2  position, ::UnityEngine::Vector2  deltaPosition, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldOrientation, float_t  maxDistance, ::UnityEngine::Vector2  scroll, int32_t  displayIndex, ::UnityEngine::Vector2  tilt, float_t  twist, float_t  pressure, bool  isInverted, ::GlobalNamespace::PointerEvent_Button  button, ::GlobalNamespace::PointerEvent_ButtonsState  buttonsState, int32_t  clickCount, ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField, uint32_t  _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31877};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PointerEvent_Type  type;

/// @brief Field pointerIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  pointerIndex;

/// @brief Field position, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  position;

/// @brief Field deltaPosition, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  deltaPosition;

/// @brief Field worldPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  worldPosition;

/// @brief Field worldOrientation, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Quaternion  worldOrientation;

/// @brief Field maxDistance, offset: 0x34, size: 0x4, def value: None
 float_t  maxDistance;

/// @brief Field scroll, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  scroll;

/// @brief Field displayIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  displayIndex;

/// @brief Field tilt, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  tilt;

/// @brief Field twist, offset: 0x4c, size: 0x4, def value: None
 float_t  twist;

/// @brief Field pressure, offset: 0x50, size: 0x4, def value: None
 float_t  pressure;

/// @brief Field isInverted, offset: 0x54, size: 0x1, def value: None
 bool  isInverted;

/// @brief Field button, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::PointerEvent_Button  button;

/// @brief Field buttonsState, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::PointerEvent_ButtonsState  buttonsState;

/// @brief Field clickCount, offset: 0x60, size: 0x4, def value: None
 int32_t  clickCount;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <timestamp>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <eventSource>k__BackingField, offset: 0x70, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <playerId>k__BackingField, offset: 0x74, size: 0x4, def value: None
 uint32_t  _playerId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <eventModifiers>k__BackingField, offset: 0x78, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, pointerIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, deltaPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, worldPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, worldOrientation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, maxDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, scroll) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, displayIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, tilt) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, twist) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, pressure) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, isInverted) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, button) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, buttonsState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, clickCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _timestamp_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _eventSource_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _playerId_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::PointerEvent, _eventModifiers_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputForUI::PointerEvent) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
