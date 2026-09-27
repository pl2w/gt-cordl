#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingConfiguredCorrectlyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
CORDL_MODULE_EXPORT(LckStreamingConfiguredCorrectlyState)
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class LckStreamingConfiguredCorrectlyState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*, "Liv.Lck.Streaming", "LckStreamingConfiguredCorrectlyState");
// Dependencies Liv.Lck.Streaming.LckStreamingBaseState
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamingConfiguredCorrectlyState
class CORDL_TYPE LckStreamingConfiguredCorrectlyState : public ::Liv::Lck::Streaming::LckStreamingBaseState {
public:
// Declarations
/// @brief Method EnterState, addr 0x9d39738, size 0x20, virtual true, abstract: false, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState* New_ctor() ;

/// @brief Method .ctor, addr 0x9d39770, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingConfiguredCorrectlyState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingConfiguredCorrectlyState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamingConfiguredCorrectlyState(LckStreamingConfiguredCorrectlyState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingConfiguredCorrectlyState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamingConfiguredCorrectlyState(LckStreamingConfiguredCorrectlyState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
