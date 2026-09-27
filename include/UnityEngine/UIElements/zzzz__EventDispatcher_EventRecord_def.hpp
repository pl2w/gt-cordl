#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatcher_EventRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EventDispatcher_EventRecord)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace GlobalNamespace {
struct EventDispatcher_EventRecord;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventDispatcher_EventRecord);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventDispatcher_EventRecord, "UnityEngine.UIElements", "EventDispatcher/EventRecord");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventDispatcher/EventRecord
struct CORDL_TYPE EventDispatcher_EventRecord {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EventDispatcher_EventRecord() ;

// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Panel", ty: "::UnityEngine::UIElements::BaseVisualElementPanel*", modifiers: "", def_value: None, comment: None }]
constexpr EventDispatcher_EventRecord(::UnityEngine::UIElements::EventBase*  m_Event, ::UnityEngine::UIElements::BaseVisualElementPanel*  m_Panel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Event, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::EventBase*  m_Event;

/// @brief Field m_Panel, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVisualElementPanel*  m_Panel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventDispatcher_EventRecord, m_Event) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventDispatcher_EventRecord, m_Panel) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventDispatcher_EventRecord) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
