#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UpdateBuildAliasRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateBuildAliasRequest)
namespace PlayFab::MultiplayerModels {
class BuildSelectionCriterion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class UpdateBuildAliasRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest*, "PlayFab.MultiplayerModels", "UpdateBuildAliasRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.UpdateBuildAliasRequest
class CORDL_TYPE UpdateBuildAliasRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AliasId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AliasId, put=__cordl_internal_set_AliasId)) ::StringW  AliasId;

/// @brief Field AliasName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AliasName, put=__cordl_internal_set_AliasName)) ::StringW  AliasName;

/// @brief Field BuildSelectionCriteria, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildSelectionCriteria, put=__cordl_internal_set_BuildSelectionCriteria)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*  BuildSelectionCriteria;

static inline ::PlayFab::MultiplayerModels::UpdateBuildAliasRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AliasId() const;

constexpr ::StringW& __cordl_internal_get_AliasId() ;

constexpr ::StringW const& __cordl_internal_get_AliasName() const;

constexpr ::StringW& __cordl_internal_get_AliasName() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>* const& __cordl_internal_get_BuildSelectionCriteria() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*& __cordl_internal_get_BuildSelectionCriteria() ;

constexpr void __cordl_internal_set_AliasId(::StringW  value) ;

constexpr void __cordl_internal_set_AliasName(::StringW  value) ;

constexpr void __cordl_internal_set_BuildSelectionCriteria(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*  value) ;

/// @brief Method .ctor, addr 0xa840c68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateBuildAliasRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateBuildAliasRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateBuildAliasRequest(UpdateBuildAliasRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateBuildAliasRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateBuildAliasRequest(UpdateBuildAliasRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19747};

/// @brief Field AliasId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AliasId;

/// @brief Field AliasName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AliasName;

/// @brief Field BuildSelectionCriteria, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*  ___BuildSelectionCriteria;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest, ___AliasId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest, ___AliasName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest, ___BuildSelectionCriteria) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
