#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetAssetUploadUrlResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetAssetUploadUrlResponse)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetAssetUploadUrlResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse*, "PlayFab.MultiplayerModels", "GetAssetUploadUrlResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetAssetUploadUrlResponse
class CORDL_TYPE GetAssetUploadUrlResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AssetUploadUrl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AssetUploadUrl, put=__cordl_internal_set_AssetUploadUrl)) ::StringW  AssetUploadUrl;

/// @brief Field FileName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileName, put=__cordl_internal_set_FileName)) ::StringW  FileName;

static inline ::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AssetUploadUrl() const;

constexpr ::StringW& __cordl_internal_get_AssetUploadUrl() ;

constexpr ::StringW const& __cordl_internal_get_FileName() const;

constexpr ::StringW& __cordl_internal_get_FileName() ;

constexpr void __cordl_internal_set_AssetUploadUrl(::StringW  value) ;

constexpr void __cordl_internal_set_FileName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840960, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAssetUploadUrlResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAssetUploadUrlResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAssetUploadUrlResponse(GetAssetUploadUrlResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAssetUploadUrlResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAssetUploadUrlResponse(GetAssetUploadUrlResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19646};

/// @brief Field AssetUploadUrl, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AssetUploadUrl;

/// @brief Field FileName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___FileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse, ___AssetUploadUrl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse, ___FileName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
