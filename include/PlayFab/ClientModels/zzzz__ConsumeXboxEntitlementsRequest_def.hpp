#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConsumeXboxEntitlementsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConsumeXboxEntitlementsRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class ConsumeXboxEntitlementsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ConsumeXboxEntitlementsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ConsumeXboxEntitlementsRequest*, "PlayFab.ClientModels", "ConsumeXboxEntitlementsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ConsumeXboxEntitlementsRequest
class CORDL_TYPE ConsumeXboxEntitlementsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field XboxToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxToken, put=__cordl_internal_set_XboxToken)) ::StringW  XboxToken;

static inline ::PlayFab::ClientModels::ConsumeXboxEntitlementsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_XboxToken() const;

constexpr ::StringW& __cordl_internal_get_XboxToken() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_XboxToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84db00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsumeXboxEntitlementsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsumeXboxEntitlementsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsumeXboxEntitlementsRequest(ConsumeXboxEntitlementsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsumeXboxEntitlementsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsumeXboxEntitlementsRequest(ConsumeXboxEntitlementsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19977};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field XboxToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___XboxToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ConsumeXboxEntitlementsRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ConsumeXboxEntitlementsRequest, ___XboxToken) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ConsumeXboxEntitlementsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
