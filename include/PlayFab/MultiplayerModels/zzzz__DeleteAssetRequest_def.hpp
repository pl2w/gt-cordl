#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteAssetRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteAssetRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DeleteAssetRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DeleteAssetRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DeleteAssetRequest*, "PlayFab.MultiplayerModels", "DeleteAssetRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DeleteAssetRequest
class CORDL_TYPE DeleteAssetRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FileName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileName, put=__cordl_internal_set_FileName)) ::StringW  FileName;

static inline ::PlayFab::MultiplayerModels::DeleteAssetRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FileName() const;

constexpr ::StringW& __cordl_internal_get_FileName() ;

constexpr void __cordl_internal_set_FileName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8408d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteAssetRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteAssetRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteAssetRequest(DeleteAssetRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteAssetRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteAssetRequest(DeleteAssetRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19629};

/// @brief Field FileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteAssetRequest, ___FileName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DeleteAssetRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
