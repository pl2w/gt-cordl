#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteBuildRegionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteBuildRegionRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DeleteBuildRegionRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DeleteBuildRegionRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DeleteBuildRegionRequest*, "PlayFab.MultiplayerModels", "DeleteBuildRegionRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DeleteBuildRegionRequest
class CORDL_TYPE DeleteBuildRegionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field Region, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

static inline ::PlayFab::MultiplayerModels::DeleteBuildRegionRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8408e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteBuildRegionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteBuildRegionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteBuildRegionRequest(DeleteBuildRegionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteBuildRegionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteBuildRegionRequest(DeleteBuildRegionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19631};

/// @brief Field BuildId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field Region, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Region;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteBuildRegionRequest, ___BuildId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteBuildRegionRequest, ___Region) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DeleteBuildRegionRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
