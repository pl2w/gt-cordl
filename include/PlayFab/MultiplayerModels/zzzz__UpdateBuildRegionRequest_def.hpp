#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UpdateBuildRegionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateBuildRegionRequest)
namespace PlayFab::MultiplayerModels {
class BuildRegionParams;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class UpdateBuildRegionRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::UpdateBuildRegionRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::UpdateBuildRegionRequest*, "PlayFab.MultiplayerModels", "UpdateBuildRegionRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.UpdateBuildRegionRequest
class CORDL_TYPE UpdateBuildRegionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field BuildRegion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildRegion, put=__cordl_internal_set_BuildRegion)) ::PlayFab::MultiplayerModels::BuildRegionParams*  BuildRegion;

static inline ::PlayFab::MultiplayerModels::UpdateBuildRegionRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::PlayFab::MultiplayerModels::BuildRegionParams* const& __cordl_internal_get_BuildRegion() const;

constexpr ::PlayFab::MultiplayerModels::BuildRegionParams*& __cordl_internal_get_BuildRegion() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_BuildRegion(::PlayFab::MultiplayerModels::BuildRegionParams*  value) ;

/// @brief Method .ctor, addr 0xa840c70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateBuildRegionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateBuildRegionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateBuildRegionRequest(UpdateBuildRegionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateBuildRegionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateBuildRegionRequest(UpdateBuildRegionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19748};

/// @brief Field BuildId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field BuildRegion, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::BuildRegionParams*  ___BuildRegion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::UpdateBuildRegionRequest, ___BuildId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::UpdateBuildRegionRequest, ___BuildRegion) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::UpdateBuildRegionRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
