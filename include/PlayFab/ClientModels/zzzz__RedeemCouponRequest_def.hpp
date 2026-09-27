#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RedeemCouponRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RedeemCouponRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class RedeemCouponRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RedeemCouponRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RedeemCouponRequest*, "PlayFab.ClientModels", "RedeemCouponRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RedeemCouponRequest
class CORDL_TYPE RedeemCouponRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field CouponCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CouponCode, put=__cordl_internal_set_CouponCode)) ::StringW  CouponCode;

static inline ::PlayFab::ClientModels::RedeemCouponRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_CouponCode() const;

constexpr ::StringW& __cordl_internal_get_CouponCode() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_CouponCode(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e148, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RedeemCouponRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RedeemCouponRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RedeemCouponRequest(RedeemCouponRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RedeemCouponRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RedeemCouponRequest(RedeemCouponRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20187};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field CouponCode, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___CouponCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RedeemCouponRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RedeemCouponRequest, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RedeemCouponRequest, ___CouponCode) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RedeemCouponRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
