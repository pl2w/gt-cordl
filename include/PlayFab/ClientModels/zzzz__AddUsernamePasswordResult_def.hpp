#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddUsernamePasswordResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddUsernamePasswordResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddUsernamePasswordResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddUsernamePasswordResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddUsernamePasswordResult*, "PlayFab.ClientModels", "AddUsernamePasswordResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddUsernamePasswordResult
class CORDL_TYPE AddUsernamePasswordResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Username, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::ClientModels::AddUsernamePasswordResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84da38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddUsernamePasswordResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddUsernamePasswordResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddUsernamePasswordResult(AddUsernamePasswordResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddUsernamePasswordResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddUsernamePasswordResult(AddUsernamePasswordResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19950};

/// @brief Field Username, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AddUsernamePasswordResult, ___Username) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AddUsernamePasswordResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
