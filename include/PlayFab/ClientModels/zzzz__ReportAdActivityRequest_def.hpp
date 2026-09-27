#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ReportAdActivityRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__AdActivity_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReportAdActivityRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class ReportAdActivityRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ReportAdActivityRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ReportAdActivityRequest*, "PlayFab.ClientModels", "ReportAdActivityRequest");
// Dependencies PlayFab.ClientModels.AdActivity, PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ReportAdActivityRequest
class CORDL_TYPE ReportAdActivityRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Activity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Activity, put=__cordl_internal_set_Activity)) ::PlayFab::ClientModels::AdActivity  Activity;

/// @brief Field PlacementId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlacementId, put=__cordl_internal_set_PlacementId)) ::StringW  PlacementId;

/// @brief Field RewardId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RewardId, put=__cordl_internal_set_RewardId)) ::StringW  RewardId;

static inline ::PlayFab::ClientModels::ReportAdActivityRequest* New_ctor() ;

constexpr ::PlayFab::ClientModels::AdActivity const& __cordl_internal_get_Activity() const;

constexpr ::PlayFab::ClientModels::AdActivity& __cordl_internal_get_Activity() ;

constexpr ::StringW const& __cordl_internal_get_PlacementId() const;

constexpr ::StringW& __cordl_internal_get_PlacementId() ;

constexpr ::StringW const& __cordl_internal_get_RewardId() const;

constexpr ::StringW& __cordl_internal_get_RewardId() ;

constexpr void __cordl_internal_set_Activity(::PlayFab::ClientModels::AdActivity  value) ;

constexpr void __cordl_internal_set_PlacementId(::StringW  value) ;

constexpr void __cordl_internal_set_RewardId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e1d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportAdActivityRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportAdActivityRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportAdActivityRequest(ReportAdActivityRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportAdActivityRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportAdActivityRequest(ReportAdActivityRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20205};

/// @brief Field Activity, offset: 0x18, size: 0x4, def value: None
 ::PlayFab::ClientModels::AdActivity  ___Activity;

/// @brief Field PlacementId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlacementId;

/// @brief Field RewardId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___RewardId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ReportAdActivityRequest, ___Activity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ReportAdActivityRequest, ___PlacementId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ReportAdActivityRequest, ___RewardId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ReportAdActivityRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
