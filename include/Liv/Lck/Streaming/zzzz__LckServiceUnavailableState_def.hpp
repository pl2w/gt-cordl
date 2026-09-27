#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckServiceUnavailableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckServiceUnavailableState)
namespace GlobalNamespace {
struct LckServiceUnavailableState__CheckServiceStatus_d__2;
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
class LckServiceUnavailableState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckServiceUnavailableState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckServiceUnavailableState*, "Liv.Lck.Streaming", "LckServiceUnavailableState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckServiceUnavailableState
class CORDL_TYPE LckServiceUnavailableState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
using _CheckServiceStatus_d__2 = ::GlobalNamespace::LckServiceUnavailableState__CheckServiceStatus_d__2;

/// @brief Field _enterServiceUnavailableStateCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__enterServiceUnavailableStateCount, put=setStaticF__enterServiceUnavailableStateCount)) int32_t  _enterServiceUnavailableStateCount;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckServiceUnavailableState::<CheckServiceStatus>d__2))]
/// @brief Method CheckServiceStatus, addr 0x9d38c44, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CheckServiceStatus(::Liv::Lck::Streaming::LckStreamingController*  controller, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method EnterState, addr 0x9d38bb4, size 0x90, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckServiceUnavailableState* New_ctor() ;

/// @brief Method .ctor, addr 0x9d38d38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__enterServiceUnavailableStateCount() ;

static inline void setStaticF__enterServiceUnavailableStateCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckServiceUnavailableState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckServiceUnavailableState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckServiceUnavailableState(LckServiceUnavailableState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckServiceUnavailableState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckServiceUnavailableState(LckServiceUnavailableState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24830};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckServiceUnavailableState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
