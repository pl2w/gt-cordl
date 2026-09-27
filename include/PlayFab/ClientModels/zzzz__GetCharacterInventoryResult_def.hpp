#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterInventoryResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetCharacterInventoryResult)
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace PlayFab::ClientModels {
class VirtualCurrencyRechargeTime;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCharacterInventoryResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCharacterInventoryResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCharacterInventoryResult*, "PlayFab.ClientModels", "GetCharacterInventoryResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCharacterInventoryResult
class CORDL_TYPE GetCharacterInventoryResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field Inventory, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Inventory, put=__cordl_internal_set_Inventory)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  Inventory;

/// @brief Field VirtualCurrency, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrency, put=__cordl_internal_set_VirtualCurrency)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  VirtualCurrency;

/// @brief Field VirtualCurrencyRechargeTimes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrencyRechargeTimes, put=__cordl_internal_set_VirtualCurrencyRechargeTimes)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  VirtualCurrencyRechargeTimes;

static inline ::PlayFab::ClientModels::GetCharacterInventoryResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_Inventory() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_Inventory() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_VirtualCurrency() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_VirtualCurrency() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>* const& __cordl_internal_get_VirtualCurrencyRechargeTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*& __cordl_internal_get_VirtualCurrencyRechargeTimes() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_Inventory(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrencyRechargeTimes(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  value) ;

/// @brief Method .ctor, addr 0xa84dc00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCharacterInventoryResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterInventoryResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCharacterInventoryResult(GetCharacterInventoryResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterInventoryResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCharacterInventoryResult(GetCharacterInventoryResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20015};

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field Inventory, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___Inventory;

/// @brief Field VirtualCurrency, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___VirtualCurrency;

/// @brief Field VirtualCurrencyRechargeTimes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  ___VirtualCurrencyRechargeTimes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCharacterInventoryResult, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterInventoryResult, ___Inventory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterInventoryResult, ___VirtualCurrency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterInventoryResult, ___VirtualCurrencyRechargeTimes) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCharacterInventoryResult) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
