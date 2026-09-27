#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_StreamingStartedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LckEvents_StreamingStartedEvent)
namespace Liv::Lck {
template<typename TResult>
class LckEvents_IEventWithResult_1;
}
namespace Liv::Lck {
class LckResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEvents_StreamingStartedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_StreamingStartedEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_StreamingStartedEvent, "Liv.Lck", "LckEvents/StreamingStartedEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/StreamingStartedEvent
struct CORDL_TYPE LckEvents_StreamingStartedEvent {
public:
// Declarations
 __declspec(property(get=get_Result)) ::Liv::Lck::LckResult*  Result;

/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr operator  ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*() ;

/// @brief Method .ctor, addr 0x9ce18b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::LckResult*  result) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x9ce18b0, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* get_Result() ;

/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>* i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult__() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_StreamingStartedEvent() ;

// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult*", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_StreamingStartedEvent(::Liv::Lck::LckResult*  _Result_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24720};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::LckResult*  _Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_StreamingStartedEvent, _Result_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_StreamingStartedEvent) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
