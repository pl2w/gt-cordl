#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckRateLimiterBackoffState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
CORDL_MODULE_EXPORT(LckRateLimiterBackoffState)
namespace GlobalNamespace {
struct LckRateLimiterBackoffState__WaitForRateLimiter_d__1;
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
class LckRateLimiterBackoffState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckRateLimiterBackoffState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckRateLimiterBackoffState*, "Liv.Lck.Streaming", "LckRateLimiterBackoffState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckRateLimiterBackoffState
class CORDL_TYPE LckRateLimiterBackoffState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _WaitForRateLimiter_d__1 = ::GlobalNamespace::LckRateLimiterBackoffState__WaitForRateLimiter_d__1;

/// @brief Method EnterState, addr 0x9d38460, size 0x44, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckRateLimiterBackoffState* New_ctor() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckRateLimiterBackoffState::<WaitForRateLimiter>d__1))]
/// @brief Method WaitForRateLimiter, addr 0x9d384a4, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForRateLimiter(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x9d38598, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckRateLimiterBackoffState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRateLimiterBackoffState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRateLimiterBackoffState(LckRateLimiterBackoffState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRateLimiterBackoffState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRateLimiterBackoffState(LckRateLimiterBackoffState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckRateLimiterBackoffState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
