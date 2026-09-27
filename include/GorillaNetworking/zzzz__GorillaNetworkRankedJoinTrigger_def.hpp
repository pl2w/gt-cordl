#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkRankedJoinTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaNetworkRankedJoinTrigger)
// Forward declare root types
namespace GorillaNetworking {
class GorillaNetworkRankedJoinTrigger;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaNetworkRankedJoinTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaNetworkRankedJoinTrigger*, "GorillaNetworking", "GorillaNetworkRankedJoinTrigger");
// Dependencies GorillaNetworking.GorillaNetworkJoinTrigger
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaNetworkRankedJoinTrigger
class CORDL_TYPE GorillaNetworkRankedJoinTrigger : public ::GorillaNetworking::GorillaNetworkJoinTrigger {
public:
// Declarations
/// @brief Method GetFullDesiredGameModeString, addr 0x5c8bff4, size 0x90, virtual true, abstract: false, final false
inline ::StringW GetFullDesiredGameModeString() ;

static inline ::GorillaNetworking::GorillaNetworkRankedJoinTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5c8c084, size 0xd8, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method .ctor, addr 0x5c8c23c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkRankedJoinTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkRankedJoinTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkRankedJoinTrigger(GorillaNetworkRankedJoinTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkRankedJoinTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkRankedJoinTrigger(GorillaNetworkRankedJoinTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::GorillaNetworkRankedJoinTrigger) == 0x78, "Size mismatch!");

} // namespace end def GorillaNetworking
