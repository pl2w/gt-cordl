#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingShowCodeState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
CORDL_MODULE_EXPORT(LckStreamingShowCodeState)
namespace GlobalNamespace {
struct LckStreamingShowCodeState__GetCodeFromCore_d__1;
}
namespace GlobalNamespace {
struct LckStreamingShowCodeState__WaitForUserToPairTablet_d__2;
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
class LckStreamingShowCodeState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckStreamingShowCodeState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamingShowCodeState*, "Liv.Lck.Streaming", "LckStreamingShowCodeState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamingShowCodeState
class CORDL_TYPE LckStreamingShowCodeState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _GetCodeFromCore_d__1 = ::GlobalNamespace::LckStreamingShowCodeState__GetCodeFromCore_d__1;

using _WaitForUserToPairTablet_d__2 = ::GlobalNamespace::LckStreamingShowCodeState__WaitForUserToPairTablet_d__2;

/// @brief Method EnterState, addr 0x9d3a100, size 0x90, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamingShowCodeState::<GetCodeFromCore>d__1))]
/// @brief Method GetCodeFromCore, addr 0x9d3a1a8, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* GetCodeFromCore(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LoginAttemptExpired, addr 0x9d3a3c0, size 0x58, virtual false, abstract: false, final false
inline void LoginAttemptExpired(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckStreamingShowCodeState* New_ctor() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamingShowCodeState::<WaitForUserToPairTablet>d__2))]
/// @brief Method WaitForUserToPairTablet, addr 0x9d3a2b4, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForUserToPairTablet(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x9d3a44c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingShowCodeState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingShowCodeState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamingShowCodeState(LckStreamingShowCodeState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingShowCodeState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamingShowCodeState(LckStreamingShowCodeState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckStreamingShowCodeState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
