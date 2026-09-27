#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckInvalidArgumentState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
CORDL_MODULE_EXPORT(LckInvalidArgumentState)
namespace GlobalNamespace {
struct LckInvalidArgumentState__SwitchStateAfterDelay_d__1;
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
class LckInvalidArgumentState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckInvalidArgumentState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckInvalidArgumentState*, "Liv.Lck.Streaming", "LckInvalidArgumentState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckInvalidArgumentState
class CORDL_TYPE LckInvalidArgumentState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _SwitchStateAfterDelay_d__1 = ::GlobalNamespace::LckInvalidArgumentState__SwitchStateAfterDelay_d__1;

/// @brief Method EnterState, addr 0x9d37c08, size 0x44, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckInvalidArgumentState* New_ctor() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckInvalidArgumentState::<SwitchStateAfterDelay>d__1))]
/// @brief Method SwitchStateAfterDelay, addr 0x9d37c4c, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SwitchStateAfterDelay(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x9d37d44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckInvalidArgumentState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckInvalidArgumentState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckInvalidArgumentState(LckInvalidArgumentState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckInvalidArgumentState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckInvalidArgumentState(LckInvalidArgumentState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckInvalidArgumentState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
