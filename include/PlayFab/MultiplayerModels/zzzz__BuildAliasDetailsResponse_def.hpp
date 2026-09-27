#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildAliasDetailsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuildAliasDetailsResponse)
namespace PlayFab::MultiplayerModels {
class BuildSelectionCriterion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class BuildAliasDetailsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*, "PlayFab.MultiplayerModels", "BuildAliasDetailsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.BuildAliasDetailsResponse
class CORDL_TYPE BuildAliasDetailsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AliasId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AliasId, put=__cordl_internal_set_AliasId)) ::StringW  AliasId;

/// @brief Field AliasName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AliasName, put=__cordl_internal_set_AliasName)) ::StringW  AliasName;

/// @brief Field BuildSelectionCriteria, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildSelectionCriteria, put=__cordl_internal_set_BuildSelectionCriteria)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*  BuildSelectionCriteria;

/// @brief Field PageSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageSize, put=__cordl_internal_set_PageSize)) int32_t  PageSize;

/// @brief Field SkipToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkipToken, put=__cordl_internal_set_SkipToken)) ::StringW  SkipToken;

static inline ::PlayFab::MultiplayerModels::BuildAliasDetailsResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AliasId() const;

constexpr ::StringW& __cordl_internal_get_AliasId() ;

constexpr ::StringW const& __cordl_internal_get_AliasName() const;

constexpr ::StringW& __cordl_internal_get_AliasName() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>* const& __cordl_internal_get_BuildSelectionCriteria() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*& __cordl_internal_get_BuildSelectionCriteria() ;

constexpr int32_t const& __cordl_internal_get_PageSize() const;

constexpr int32_t& __cordl_internal_get_PageSize() ;

constexpr ::StringW const& __cordl_internal_get_SkipToken() const;

constexpr ::StringW& __cordl_internal_get_SkipToken() ;

constexpr void __cordl_internal_set_AliasId(::StringW  value) ;

constexpr void __cordl_internal_set_AliasName(::StringW  value) ;

constexpr void __cordl_internal_set_BuildSelectionCriteria(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*  value) ;

constexpr void __cordl_internal_set_PageSize(int32_t  value) ;

constexpr void __cordl_internal_set_SkipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8407b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildAliasDetailsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildAliasDetailsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildAliasDetailsResponse(BuildAliasDetailsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildAliasDetailsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildAliasDetailsResponse(BuildAliasDetailsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19590};

/// @brief Field AliasId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AliasId;

/// @brief Field AliasName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___AliasName;

/// @brief Field BuildSelectionCriteria, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>*  ___BuildSelectionCriteria;

/// @brief Field PageSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ___PageSize;

/// @brief Field SkipToken, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___SkipToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse, ___AliasId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse, ___AliasName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse, ___BuildSelectionCriteria) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse, ___PageSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse, ___SkipToken) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::BuildAliasDetailsResponse) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
