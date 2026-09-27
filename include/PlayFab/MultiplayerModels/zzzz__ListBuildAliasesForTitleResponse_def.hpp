#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListBuildAliasesForTitleResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListBuildAliasesForTitleResponse)
namespace PlayFab::MultiplayerModels {
class BuildAliasDetailsResponse;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListBuildAliasesForTitleResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*, "PlayFab.MultiplayerModels", "ListBuildAliasesForTitleResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListBuildAliasesForTitleResponse
class CORDL_TYPE ListBuildAliasesForTitleResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field BuildAliases, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildAliases, put=__cordl_internal_set_BuildAliases)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  BuildAliases;

static inline ::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>* const& __cordl_internal_get_BuildAliases() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*& __cordl_internal_get_BuildAliases() ;

constexpr void __cordl_internal_set_BuildAliases(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  value) ;

/// @brief Method .ctor, addr 0xa840a88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListBuildAliasesForTitleResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListBuildAliasesForTitleResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListBuildAliasesForTitleResponse(ListBuildAliasesForTitleResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListBuildAliasesForTitleResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListBuildAliasesForTitleResponse(ListBuildAliasesForTitleResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19683};

/// @brief Field BuildAliases, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  ___BuildAliases;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse, ___BuildAliases) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
