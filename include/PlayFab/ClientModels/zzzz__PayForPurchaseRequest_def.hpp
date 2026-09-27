#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PayForPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PayForPurchaseRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class PayForPurchaseRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PayForPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PayForPurchaseRequest*, "PlayFab.ClientModels", "PayForPurchaseRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PayForPurchaseRequest
class CORDL_TYPE PayForPurchaseRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Currency, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Currency, put=__cordl_internal_set_Currency)) ::StringW  Currency;

/// @brief Field OrderId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

/// @brief Field ProviderName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderName, put=__cordl_internal_set_ProviderName)) ::StringW  ProviderName;

/// @brief Field ProviderTransactionId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderTransactionId, put=__cordl_internal_set_ProviderTransactionId)) ::StringW  ProviderTransactionId;

static inline ::PlayFab::ClientModels::PayForPurchaseRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Currency() const;

constexpr ::StringW& __cordl_internal_get_Currency() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr ::StringW const& __cordl_internal_get_ProviderName() const;

constexpr ::StringW& __cordl_internal_get_ProviderName() ;

constexpr ::StringW const& __cordl_internal_get_ProviderTransactionId() const;

constexpr ::StringW& __cordl_internal_get_ProviderTransactionId() ;

constexpr void __cordl_internal_set_Currency(::StringW  value) ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

constexpr void __cordl_internal_set_ProviderName(::StringW  value) ;

constexpr void __cordl_internal_set_ProviderTransactionId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e0e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PayForPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PayForPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PayForPurchaseRequest(PayForPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PayForPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PayForPurchaseRequest(PayForPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20174};

/// @brief Field Currency, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Currency;

/// @brief Field OrderId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___OrderId;

/// @brief Field ProviderName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ProviderName;

/// @brief Field ProviderTransactionId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ProviderTransactionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseRequest, ___Currency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseRequest, ___OrderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseRequest, ___ProviderName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseRequest, ___ProviderTransactionId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PayForPurchaseRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
