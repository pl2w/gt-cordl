#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Direction_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Type_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationEvent)
namespace GlobalNamespace {
struct NavigationEvent_Direction;
}
namespace GlobalNamespace {
struct NavigationEvent_Type;
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
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
struct NavigationEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::NavigationEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::NavigationEvent, "UnityEngine.InputForUI", "NavigationEvent");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource, UnityEngine.InputForUI.NavigationEvent::Direction, UnityEngine.InputForUI.NavigationEvent::Type
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.NavigationEvent
struct CORDL_TYPE NavigationEvent {
public:
// Declarations
using Direction = ::GlobalNamespace::NavigationEvent_Direction;

using Type = ::GlobalNamespace::NavigationEvent_Type;

 __declspec(property(get=get_eventModifiers, put=set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers  eventModifiers;

 __declspec(property(get=get_eventSource, put=set_eventSource)) ::UnityEngine::InputForUI::EventSource  eventSource;

 __declspec(property(put=set_playerId)) uint32_t  playerId;

 __declspec(property(put=set_timestamp)) ::Unity::IntegerTime::DiscreteTime  timestamp;

/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr operator  ::UnityEngine::InputForUI::IEventProperties*() ;

/// @brief Method DetermineMoveDirection, addr 0xb65ec6c, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NavigationEvent_Direction DetermineMoveDirection(::UnityEngine::Vector2  vec, float_t  deadZone) ;

/// @brief Method ToString, addr 0xb65eb00, size 0x16c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_eventModifiers, addr 0xb65eaf0, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_eventSource, addr 0xb65ead8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventSource get_eventSource() ;

/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties() ;

/// [CompilerGenerated]
/// @brief Method set_eventModifiers, addr 0xb65eaf8, size 0x8, virtual false, abstract: false, final false
inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers  value) ;

/// [CompilerGenerated]
/// @brief Method set_eventSource, addr 0xb65eae0, size 0x8, virtual false, abstract: false, final false
inline void set_eventSource(::UnityEngine::InputForUI::EventSource  value) ;

/// [CompilerGenerated]
/// @brief Method set_playerId, addr 0xb65eae8, size 0x8, virtual false, abstract: false, final false
inline void set_playerId(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_timestamp, addr 0xb65ead0, size 0x8, virtual false, abstract: false, final false
inline void set_timestamp(::Unity::IntegerTime::DiscreteTime  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavigationEvent() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::NavigationEvent_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "::GlobalNamespace::NavigationEvent_Direction", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldBeUsed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: None, comment: None }]
constexpr NavigationEvent(::GlobalNamespace::NavigationEvent_Type  type, ::GlobalNamespace::NavigationEvent_Direction  direction, bool  shouldBeUsed, ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField, uint32_t  _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::NavigationEvent_Type  type;

/// @brief Field direction, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::NavigationEvent_Direction  direction;

/// @brief Field shouldBeUsed, offset: 0x8, size: 0x1, def value: None
 bool  shouldBeUsed;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <timestamp>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <eventSource>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <playerId>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 uint32_t  _playerId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <eventModifiers>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, direction) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, shouldBeUsed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _timestamp_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _eventSource_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _playerId_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::NavigationEvent, _eventModifiers_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputForUI::NavigationEvent) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
