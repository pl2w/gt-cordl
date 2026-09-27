#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingGetCurrentState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
CORDL_MODULE_EXPORT(LckStreamingGetCurrentState)
namespace GlobalNamespace {
struct LckStreamingGetCurrentState__GetCurrentState_d__1;
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
class LckStreamingGetCurrentState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckStreamingGetCurrentState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamingGetCurrentState*, "Liv.Lck.Streaming", "LckStreamingGetCurrentState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamingGetCurrentState
class CORDL_TYPE LckStreamingGetCurrentState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _GetCurrentState_d__1 = ::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1;

/// @brief Method EnterState, addr 0x9d39778, size 0x30, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamingGetCurrentState::<GetCurrentState>d__1))]
/// @brief Method GetCurrentState, addr 0x9d397a8, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* GetCurrentState(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Liv::Lck::Streaming::LckStreamingGetCurrentState* New_ctor() ;

/// @brief Method .ctor, addr 0x9d3989c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingGetCurrentState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingGetCurrentState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamingGetCurrentState(LckStreamingGetCurrentState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingGetCurrentState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamingGetCurrentState(LckStreamingGetCurrentState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckStreamingGetCurrentState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
