#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PaymentOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaymentOption)
// Forward declare root types
namespace PlayFab::ClientModels {
class PaymentOption;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PaymentOption*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PaymentOption*, "PlayFab.ClientModels", "PaymentOption");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PaymentOption
class CORDL_TYPE PaymentOption : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Currency, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Currency, put=__cordl_internal_set_Currency)) ::StringW  Currency;

/// @brief Field Price, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Price, put=__cordl_internal_set_Price)) uint32_t  Price;

/// @brief Field ProviderName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderName, put=__cordl_internal_set_ProviderName)) ::StringW  ProviderName;

/// @brief Field StoreCredit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_StoreCredit, put=__cordl_internal_set_StoreCredit)) uint32_t  StoreCredit;

static inline ::PlayFab::ClientModels::PaymentOption* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Currency() const;

constexpr ::StringW& __cordl_internal_get_Currency() ;

constexpr uint32_t const& __cordl_internal_get_Price() const;

constexpr uint32_t& __cordl_internal_get_Price() ;

constexpr ::StringW const& __cordl_internal_get_ProviderName() const;

constexpr ::StringW& __cordl_internal_get_ProviderName() ;

constexpr uint32_t const& __cordl_internal_get_StoreCredit() const;

constexpr uint32_t& __cordl_internal_get_StoreCredit() ;

constexpr void __cordl_internal_set_Currency(::StringW  value) ;

constexpr void __cordl_internal_set_Price(uint32_t  value) ;

constexpr void __cordl_internal_set_ProviderName(::StringW  value) ;

constexpr void __cordl_internal_set_StoreCredit(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa84e0f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaymentOption() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaymentOption", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaymentOption(PaymentOption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaymentOption", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaymentOption(PaymentOption const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20176};

/// @brief Field Currency, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Currency;

/// @brief Field Price, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___Price;

/// @brief Field ProviderName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ProviderName;

/// @brief Field StoreCredit, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___StoreCredit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PaymentOption, ___Currency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PaymentOption, ___Price) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PaymentOption, ___ProviderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PaymentOption, ___StoreCredit) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PaymentOption) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
