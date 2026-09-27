#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RewardAdActivityRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RewardAdActivityRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class RewardAdActivityRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RewardAdActivityRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RewardAdActivityRequest*, "PlayFab.ClientModels", "RewardAdActivityRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RewardAdActivityRequest
class CORDL_TYPE RewardAdActivityRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field PlacementId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlacementId, put=__cordl_internal_set_PlacementId)) ::StringW  PlacementId;

/// @brief Field RewardId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RewardId, put=__cordl_internal_set_RewardId)) ::StringW  RewardId;

static inline ::PlayFab::ClientModels::RewardAdActivityRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlacementId() const;

constexpr ::StringW& __cordl_internal_get_PlacementId() ;

constexpr ::StringW const& __cordl_internal_get_RewardId() const;

constexpr ::StringW& __cordl_internal_get_RewardId() ;

constexpr void __cordl_internal_set_PlacementId(::StringW  value) ;

constexpr void __cordl_internal_set_RewardId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e200, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewardAdActivityRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewardAdActivityRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RewardAdActivityRequest(RewardAdActivityRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewardAdActivityRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewardAdActivityRequest(RewardAdActivityRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20211};

/// @brief Field PlacementId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlacementId;

/// @brief Field RewardId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___RewardId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityRequest, ___PlacementId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityRequest, ___RewardId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RewardAdActivityRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
