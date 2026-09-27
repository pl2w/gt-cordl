#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingWaitingForConfigureState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
CORDL_MODULE_EXPORT(LckStreamingWaitingForConfigureState)
namespace GlobalNamespace {
struct LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1;
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
class LckStreamingWaitingForConfigureState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*, "Liv.Lck.Streaming", "LckStreamingWaitingForConfigureState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamingWaitingForConfigureState
class CORDL_TYPE LckStreamingWaitingForConfigureState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _CheckConfiguredState_d__1 = ::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamingWaitingForConfigureState::<CheckConfiguredState>d__1))]
/// @brief Method CheckConfiguredState, addr 0x9d3b868, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CheckConfiguredState(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method EnterState, addr 0x9d3b824, size 0x44, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState* New_ctor() ;

/// @brief Method .ctor, addr 0x9d3b95c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingWaitingForConfigureState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingWaitingForConfigureState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamingWaitingForConfigureState(LckStreamingWaitingForConfigureState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingWaitingForConfigureState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamingWaitingForConfigureState(LckStreamingWaitingForConfigureState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
