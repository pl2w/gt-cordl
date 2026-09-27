#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/CommandEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_Command_def.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_Type_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandEvent)
namespace GlobalNamespace {
struct CommandEvent_Command;
}
namespace GlobalNamespace {
struct CommandEvent_Type;
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
// Forward declare root types
namespace UnityEngine::InputForUI {
struct CommandEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputForUI::CommandEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::CommandEvent, "UnityEngine.InputForUI", "CommandEvent");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.InputForUI.CommandEvent::Command, UnityEngine.InputForUI.CommandEvent::Type, UnityEngine.InputForUI.EventModifiers, UnityEngine.InputForUI.EventSource
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.CommandEvent
struct CORDL_TYPE CommandEvent {
public:
// Declarations
using Command = ::GlobalNamespace::CommandEvent_Command;

using Type = ::GlobalNamespace::CommandEvent_Type;

 __declspec(property(get=get_eventModifiers, put=set_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers  eventModifiers;

 __declspec(property(get=get_eventSource, put=set_eventSource)) ::UnityEngine::InputForUI::EventSource  eventSource;

 __declspec(property(put=set_playerId)) uint32_t  playerId;

 __declspec(property(put=set_timestamp)) ::Unity::IntegerTime::DiscreteTime  timestamp;

/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr operator  ::UnityEngine::InputForUI::IEventProperties*() ;

/// @brief Method ToString, addr 0xb65d3ec, size 0xbc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_eventModifiers, addr 0xb65d3dc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_eventSource, addr 0xb65d3c4, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventSource get_eventSource() ;

/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties() ;

/// [CompilerGenerated]
/// @brief Method set_eventModifiers, addr 0xb65d3e4, size 0x8, virtual false, abstract: false, final false
inline void set_eventModifiers(::UnityEngine::InputForUI::EventModifiers  value) ;

/// [CompilerGenerated]
/// @brief Method set_eventSource, addr 0xb65d3cc, size 0x8, virtual false, abstract: false, final false
inline void set_eventSource(::UnityEngine::InputForUI::EventSource  value) ;

/// [CompilerGenerated]
/// @brief Method set_playerId, addr 0xb65d3d4, size 0x8, virtual false, abstract: false, final false
inline void set_playerId(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_timestamp, addr 0xb65d3bc, size 0x8, virtual false, abstract: false, final false
inline void set_timestamp(::Unity::IntegerTime::DiscreteTime  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandEvent() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::CommandEvent_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "command", ty: "::GlobalNamespace::CommandEvent_Command", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: None, comment: None }]
constexpr CommandEvent(::GlobalNamespace::CommandEvent_Type  type, ::GlobalNamespace::CommandEvent_Command  command, ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField, uint32_t  _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::CommandEvent_Type  type;

/// @brief Field command, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::CommandEvent_Command  command;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <timestamp>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <eventSource>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <playerId>k__BackingField, offset: 0x14, size: 0x4, def value: None
 uint32_t  _playerId_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <eventModifiers>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, command) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _timestamp_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _eventSource_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _playerId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputForUI::CommandEvent, _eventModifiers_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputForUI::CommandEvent) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
