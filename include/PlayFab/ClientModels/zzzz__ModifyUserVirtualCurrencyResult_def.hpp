#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ModifyUserVirtualCurrencyResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModifyUserVirtualCurrencyResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class ModifyUserVirtualCurrencyResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult*, "PlayFab.ClientModels", "ModifyUserVirtualCurrencyResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ModifyUserVirtualCurrencyResult
class CORDL_TYPE ModifyUserVirtualCurrencyResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Balance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Balance, put=__cordl_internal_set_Balance)) int32_t  Balance;

/// @brief Field BalanceChange, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_BalanceChange, put=__cordl_internal_set_BalanceChange)) int32_t  BalanceChange;

/// @brief Field PlayFabId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field VirtualCurrency, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrency, put=__cordl_internal_set_VirtualCurrency)) ::StringW  VirtualCurrency;

static inline ::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Balance() const;

constexpr int32_t& __cordl_internal_get_Balance() ;

constexpr int32_t const& __cordl_internal_get_BalanceChange() const;

constexpr int32_t& __cordl_internal_get_BalanceChange() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_VirtualCurrency() const;

constexpr ::StringW& __cordl_internal_get_VirtualCurrency() ;

constexpr void __cordl_internal_set_Balance(int32_t  value) ;

constexpr void __cordl_internal_set_BalanceChange(int32_t  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_VirtualCurrency(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e0c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModifyUserVirtualCurrencyResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModifyUserVirtualCurrencyResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModifyUserVirtualCurrencyResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20169};

/// @brief Field Balance, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Balance;

/// @brief Field BalanceChange, offset: 0x24, size: 0x4, def value: None
 int32_t  ___BalanceChange;

/// @brief Field PlayFabId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field VirtualCurrency, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___VirtualCurrency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult, ___Balance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult, ___BalanceChange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult, ___PlayFabId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult, ___VirtualCurrency) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ModifyUserVirtualCurrencyResult) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
