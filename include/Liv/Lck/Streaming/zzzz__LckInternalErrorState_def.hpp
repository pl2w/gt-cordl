#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckInternalErrorState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckInternalErrorState)
namespace GlobalNamespace {
struct LckInternalErrorState__CheckInternalError_d__2;
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
class LckInternalErrorState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckInternalErrorState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckInternalErrorState*, "Liv.Lck.Streaming", "LckInternalErrorState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckInternalErrorState
class CORDL_TYPE LckInternalErrorState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _CheckInternalError_d__2 = ::GlobalNamespace::LckInternalErrorState__CheckInternalError_d__2;

/// @brief Field _enterInternalErrorStateCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__enterInternalErrorStateCount, put=setStaticF__enterInternalErrorStateCount)) int32_t  _enterInternalErrorStateCount;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckInternalErrorState::<CheckInternalError>d__2))]
/// @brief Method CheckInternalError, addr 0x9d36c64, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CheckInternalError(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method EnterState, addr 0x9d36bbc, size 0x90, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckInternalErrorState* New_ctor() ;

/// @brief Method .ctor, addr 0x9d36d58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__enterInternalErrorStateCount() ;

static inline void setStaticF__enterInternalErrorStateCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckInternalErrorState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckInternalErrorState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckInternalErrorState(LckInternalErrorState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckInternalErrorState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckInternalErrorState(LckInternalErrorState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckInternalErrorState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
