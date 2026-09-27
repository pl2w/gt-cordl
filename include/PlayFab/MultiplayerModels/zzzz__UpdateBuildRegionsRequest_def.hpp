#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UpdateBuildRegionsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateBuildRegionsRequest)
namespace PlayFab::MultiplayerModels {
class BuildRegionParams;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class UpdateBuildRegionsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*, "PlayFab.MultiplayerModels", "UpdateBuildRegionsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.UpdateBuildRegionsRequest
class CORDL_TYPE UpdateBuildRegionsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field BuildRegions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildRegions, put=__cordl_internal_set_BuildRegions)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  BuildRegions;

static inline ::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>* const& __cordl_internal_get_BuildRegions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*& __cordl_internal_get_BuildRegions() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_BuildRegions(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  value) ;

/// @brief Method .ctor, addr 0xa840c78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateBuildRegionsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateBuildRegionsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateBuildRegionsRequest(UpdateBuildRegionsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateBuildRegionsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateBuildRegionsRequest(UpdateBuildRegionsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19749};

/// @brief Field BuildId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field BuildRegions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegionParams*>*  ___BuildRegions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest, ___BuildId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest, ___BuildRegions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
