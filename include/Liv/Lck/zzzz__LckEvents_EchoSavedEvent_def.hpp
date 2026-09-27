#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_EchoSavedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LckEvents_EchoSavedEvent)
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck {
template<typename TResult>
class LckEvents_IEventWithResult_1;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEvents_EchoSavedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_EchoSavedEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_EchoSavedEvent, "Liv.Lck", "LckEvents/EchoSavedEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/EchoSavedEvent
struct CORDL_TYPE LckEvents_EchoSavedEvent {
public:
// Declarations
 __declspec(property(get=get_Result)) ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  Result;

 __declspec(property(get=get_SaveResult)) ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  SaveResult;

/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>"
constexpr operator  ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*() ;

/// @brief Method .ctor, addr 0x9ce1860, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  saveResult) ;

/// @brief Method get_Result, addr 0x9ce1858, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* get_Result() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_SaveResult, addr 0x9ce1850, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* get_SaveResult() ;

/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___Liv__Lck__Recorder__RecordingData___() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_EchoSavedEvent() ;

// Ctor Parameters [CppParam { name: "_SaveResult_k__BackingField", ty: "::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_EchoSavedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  _SaveResult_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24717};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <SaveResult>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  _SaveResult_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_EchoSavedEvent, _SaveResult_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_EchoSavedEvent) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
