#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPaymentTokenResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPaymentTokenResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPaymentTokenResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPaymentTokenResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPaymentTokenResult*, "PlayFab.ClientModels", "GetPaymentTokenResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPaymentTokenResult
class CORDL_TYPE GetPaymentTokenResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field OrderId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

/// @brief Field ProviderToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderToken, put=__cordl_internal_set_ProviderToken)) ::StringW  ProviderToken;

static inline ::PlayFab::ClientModels::GetPaymentTokenResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr ::StringW const& __cordl_internal_get_ProviderToken() const;

constexpr ::StringW& __cordl_internal_get_ProviderToken() ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

constexpr void __cordl_internal_set_ProviderToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dca8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPaymentTokenResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPaymentTokenResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPaymentTokenResult(GetPaymentTokenResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPaymentTokenResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPaymentTokenResult(GetPaymentTokenResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20036};

/// @brief Field OrderId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___OrderId;

/// @brief Field ProviderToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ProviderToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPaymentTokenResult, ___OrderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPaymentTokenResult, ___ProviderToken) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPaymentTokenResult) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
