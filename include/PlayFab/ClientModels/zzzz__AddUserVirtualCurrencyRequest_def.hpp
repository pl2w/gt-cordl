#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddUserVirtualCurrencyRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddUserVirtualCurrencyRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddUserVirtualCurrencyRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddUserVirtualCurrencyRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddUserVirtualCurrencyRequest*, "PlayFab.ClientModels", "AddUserVirtualCurrencyRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddUserVirtualCurrencyRequest
class CORDL_TYPE AddUserVirtualCurrencyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Amount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Amount, put=__cordl_internal_set_Amount)) int32_t  Amount;

/// @brief Field VirtualCurrency, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrency, put=__cordl_internal_set_VirtualCurrency)) ::StringW  VirtualCurrency;

static inline ::PlayFab::ClientModels::AddUserVirtualCurrencyRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Amount() const;

constexpr int32_t& __cordl_internal_get_Amount() ;

constexpr ::StringW const& __cordl_internal_get_VirtualCurrency() const;

constexpr ::StringW& __cordl_internal_get_VirtualCurrency() ;

constexpr void __cordl_internal_set_Amount(int32_t  value) ;

constexpr void __cordl_internal_set_VirtualCurrency(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84da40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddUserVirtualCurrencyRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddUserVirtualCurrencyRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddUserVirtualCurrencyRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19951};

/// @brief Field Amount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Amount;

/// @brief Field VirtualCurrency, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___VirtualCurrency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AddUserVirtualCurrencyRequest, ___Amount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AddUserVirtualCurrencyRequest, ___VirtualCurrency) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AddUserVirtualCurrencyRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
