#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateAvatarUrlRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateAvatarUrlRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdateAvatarUrlRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdateAvatarUrlRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdateAvatarUrlRequest*, "PlayFab.ClientModels", "UpdateAvatarUrlRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdateAvatarUrlRequest
class CORDL_TYPE UpdateAvatarUrlRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ImageUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImageUrl, put=__cordl_internal_set_ImageUrl)) ::StringW  ImageUrl;

static inline ::PlayFab::ClientModels::UpdateAvatarUrlRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ImageUrl() const;

constexpr ::StringW& __cordl_internal_get_ImageUrl() ;

constexpr void __cordl_internal_set_ImageUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e3f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateAvatarUrlRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateAvatarUrlRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateAvatarUrlRequest(UpdateAvatarUrlRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateAvatarUrlRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateAvatarUrlRequest(UpdateAvatarUrlRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20278};

/// @brief Field ImageUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ImageUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UpdateAvatarUrlRequest, ___ImageUrl) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UpdateAvatarUrlRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
