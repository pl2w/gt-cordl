#pragma once
// IWYU pragma private; include "GorillaNetworking/CustomMapNetworkJoinTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapNetworkJoinTrigger)
// Forward declare root types
namespace GorillaNetworking {
class CustomMapNetworkJoinTrigger;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CustomMapNetworkJoinTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CustomMapNetworkJoinTrigger*, "GorillaNetworking", "CustomMapNetworkJoinTrigger");
// Dependencies GorillaNetworking.GorillaNetworkJoinTrigger
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CustomMapNetworkJoinTrigger
class CORDL_TYPE CustomMapNetworkJoinTrigger : public ::GorillaNetworking::GorillaNetworkJoinTrigger {
public:
// Declarations
/// @brief Method GetFullDesiredGameModeString, addr 0x5c8817c, size 0x1c4, virtual true, abstract: false, final false
inline ::StringW GetFullDesiredGameModeString() ;

/// @brief Method GetRoomSize, addr 0x5c883ac, size 0x50, virtual true, abstract: false, final false
inline uint8_t GetRoomSize(bool  subscribed) ;

static inline ::GorillaNetworking::CustomMapNetworkJoinTrigger* New_ctor() ;

/// @brief Method .ctor, addr 0x5c883fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapNetworkJoinTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapNetworkJoinTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapNetworkJoinTrigger(CustomMapNetworkJoinTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapNetworkJoinTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapNetworkJoinTrigger(CustomMapNetworkJoinTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::CustomMapNetworkJoinTrigger) == 0x78, "Size mismatch!");

} // namespace end def GorillaNetworking
