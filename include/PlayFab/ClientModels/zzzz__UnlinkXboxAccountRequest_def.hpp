#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkXboxAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlinkXboxAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkXboxAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkXboxAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkXboxAccountRequest*, "PlayFab.ClientModels", "UnlinkXboxAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkXboxAccountRequest
class CORDL_TYPE UnlinkXboxAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field XboxToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxToken, put=__cordl_internal_set_XboxToken)) ::StringW  XboxToken;

static inline ::PlayFab::ClientModels::UnlinkXboxAccountRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_XboxToken() const;

constexpr ::StringW& __cordl_internal_get_XboxToken() ;

constexpr void __cordl_internal_set_XboxToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e3c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkXboxAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkXboxAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkXboxAccountRequest(UnlinkXboxAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkXboxAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkXboxAccountRequest(UnlinkXboxAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20273};

/// [Obsolete("No longer available", true)]
/// @brief Field XboxToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___XboxToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlinkXboxAccountRequest, ___XboxToken) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlinkXboxAccountRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
