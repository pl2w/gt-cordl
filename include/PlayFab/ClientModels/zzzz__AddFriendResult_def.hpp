#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddFriendResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(AddFriendResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddFriendResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddFriendResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddFriendResult*, "PlayFab.ClientModels", "AddFriendResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddFriendResult
class CORDL_TYPE AddFriendResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Created, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Created, put=__cordl_internal_set_Created)) bool  Created;

static inline ::PlayFab::ClientModels::AddFriendResult* New_ctor() ;

constexpr bool const& __cordl_internal_get_Created() const;

constexpr bool& __cordl_internal_get_Created() ;

constexpr void __cordl_internal_set_Created(bool  value) ;

/// @brief Method .ctor, addr 0xa84d9f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddFriendResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddFriendResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddFriendResult(AddFriendResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddFriendResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddFriendResult(AddFriendResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19942};

/// @brief Field Created, offset: 0x20, size: 0x1, def value: None
 bool  ___Created;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AddFriendResult, ___Created) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AddFriendResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
