#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event_MapAsEventSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Event_MapAsEventSource)
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
template<typename TOutputType>
class Event_IMapFn_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Event_MapAsEventSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Event_MapAsEventSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Event_MapAsEventSource, "UnityEngine.InputForUI", "Event/MapAsEventSource");
// Dependencies UnityEngine.InputForUI.IEventProperties
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event/MapAsEventSource
#pragma pack(push, 0)
struct CORDL_TYPE Event_MapAsEventSource {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr operator  ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*() ;

/// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::InputForUI::IEventProperties*>)
inline ::UnityEngine::InputForUI::EventSource Map(::by_ref<TEventType>  ev) ;

/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>* i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventSource_() ;

// Ctor Parameters []
// @brief default ctor
constexpr Event_MapAsEventSource() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31858};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Event_MapAsEventSource) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
