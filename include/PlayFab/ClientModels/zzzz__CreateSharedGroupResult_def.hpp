#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CreateSharedGroupResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateSharedGroupResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class CreateSharedGroupResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CreateSharedGroupResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CreateSharedGroupResult*, "PlayFab.ClientModels", "CreateSharedGroupResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CreateSharedGroupResult
class CORDL_TYPE CreateSharedGroupResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field SharedGroupId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SharedGroupId, put=__cordl_internal_set_SharedGroupId)) ::StringW  SharedGroupId;

static inline ::PlayFab::ClientModels::CreateSharedGroupResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_SharedGroupId() const;

constexpr ::StringW& __cordl_internal_get_SharedGroupId() ;

constexpr void __cordl_internal_set_SharedGroupId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84db28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateSharedGroupResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateSharedGroupResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateSharedGroupResult(CreateSharedGroupResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateSharedGroupResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateSharedGroupResult(CreateSharedGroupResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19984};

/// @brief Field SharedGroupId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SharedGroupId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CreateSharedGroupResult, ___SharedGroupId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CreateSharedGroupResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
