#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckMissingTrackingIdState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
CORDL_MODULE_EXPORT(LckMissingTrackingIdState)
namespace GlobalNamespace {
struct LckMissingTrackingIdState__SwitchStateAfterDelay_d__1;
}
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class LckMissingTrackingIdState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckMissingTrackingIdState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckMissingTrackingIdState*, "Liv.Lck.Streaming", "LckMissingTrackingIdState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckMissingTrackingIdState
class CORDL_TYPE LckMissingTrackingIdState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _SwitchStateAfterDelay_d__1 = ::GlobalNamespace::LckMissingTrackingIdState__SwitchStateAfterDelay_d__1;

/// @brief Method EnterState, addr 0x9d38034, size 0x44, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckMissingTrackingIdState* New_ctor() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckMissingTrackingIdState::<SwitchStateAfterDelay>d__1))]
/// @brief Method SwitchStateAfterDelay, addr 0x9d38078, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SwitchStateAfterDelay(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x9d38170, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMissingTrackingIdState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMissingTrackingIdState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMissingTrackingIdState(LckMissingTrackingIdState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMissingTrackingIdState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMissingTrackingIdState(LckMissingTrackingIdState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckMissingTrackingIdState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
