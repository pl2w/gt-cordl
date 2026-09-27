#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetContentDownloadUrlResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetContentDownloadUrlResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetContentDownloadUrlResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetContentDownloadUrlResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetContentDownloadUrlResult*, "PlayFab.ClientModels", "GetContentDownloadUrlResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetContentDownloadUrlResult
class CORDL_TYPE GetContentDownloadUrlResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field URL, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_URL, put=__cordl_internal_set_URL)) ::StringW  URL;

static inline ::PlayFab::ClientModels::GetContentDownloadUrlResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_URL() const;

constexpr ::StringW& __cordl_internal_get_URL() ;

constexpr void __cordl_internal_set_URL(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dc30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetContentDownloadUrlResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetContentDownloadUrlResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetContentDownloadUrlResult(GetContentDownloadUrlResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetContentDownloadUrlResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetContentDownloadUrlResult(GetContentDownloadUrlResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20021};

/// @brief Field URL, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___URL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetContentDownloadUrlResult, ___URL) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetContentDownloadUrlResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
