#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerProfileRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerProfileRequest)
namespace PlayFab::ClientModels {
class PlayerProfileViewConstraints;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerProfileRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerProfileRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerProfileRequest*, "PlayFab.ClientModels", "GetPlayerProfileRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerProfileRequest
class CORDL_TYPE GetPlayerProfileRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field ProfileConstraints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileConstraints, put=__cordl_internal_set_ProfileConstraints)) ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ProfileConstraints;

static inline ::PlayFab::ClientModels::GetPlayerProfileRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& __cordl_internal_get_ProfileConstraints() const;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& __cordl_internal_get_ProfileConstraints() ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value) ;

/// @brief Method .ctor, addr 0xa84dce0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerProfileRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerProfileRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerProfileRequest(GetPlayerProfileRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerProfileRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerProfileRequest(GetPlayerProfileRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20043};

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field ProfileConstraints, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ___ProfileConstraints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerProfileRequest, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerProfileRequest, ___ProfileConstraints) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerProfileRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
