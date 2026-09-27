#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatcher_DispatchContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatcher_DispatchContext)
namespace GlobalNamespace {
struct EventDispatcher_EventRecord;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct EventDispatcher_DispatchContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventDispatcher_DispatchContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventDispatcher_DispatchContext, "UnityEngine.UIElements", "EventDispatcher/DispatchContext");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventDispatcher/DispatchContext
struct CORDL_TYPE EventDispatcher_DispatchContext {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EventDispatcher_DispatchContext() ;

// Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Queue", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*", modifiers: "", def_value: None, comment: None }]
constexpr EventDispatcher_DispatchContext(uint32_t  m_GateCount, ::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*  m_Queue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7573};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_GateCount, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_GateCount;

/// @brief Field m_Queue, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*  m_Queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventDispatcher_DispatchContext, m_GateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventDispatcher_DispatchContext, m_Queue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventDispatcher_DispatchContext) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
