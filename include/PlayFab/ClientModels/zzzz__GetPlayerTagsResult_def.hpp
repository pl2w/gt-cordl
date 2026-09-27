#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerTagsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerTagsResult)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerTagsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerTagsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerTagsResult*, "PlayFab.ClientModels", "GetPlayerTagsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerTagsResult
class CORDL_TYPE GetPlayerTagsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field PlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field Tags, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::List_1<::StringW>*  Tags;

static inline ::PlayFab::ClientModels::GetPlayerTagsResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Tags() ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dd28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerTagsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTagsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerTagsResult(GetPlayerTagsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTagsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerTagsResult(GetPlayerTagsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20052};

/// @brief Field PlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field Tags, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Tags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerTagsResult, ___PlayFabId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerTagsResult, ___Tags) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerTagsResult) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
