#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoResultPayload.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetPlayerCombinedInfoResultPayload)
namespace PlayFab::ClientModels {
class CharacterInventory;
}
namespace PlayFab::ClientModels {
class CharacterResult;
}
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace PlayFab::ClientModels {
class PlayerProfileModel;
}
namespace PlayFab::ClientModels {
class StatisticValue;
}
namespace PlayFab::ClientModels {
class UserAccountInfo;
}
namespace PlayFab::ClientModels {
class UserDataRecord;
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
class GetPlayerCombinedInfoResultPayload;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*, "PlayFab.ClientModels", "GetPlayerCombinedInfoResultPayload");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerCombinedInfoResultPayload
class CORDL_TYPE GetPlayerCombinedInfoResultPayload : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field AccountInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AccountInfo, put=__cordl_internal_set_AccountInfo)) ::PlayFab::ClientModels::UserAccountInfo*  AccountInfo;

/// @brief Field CharacterInventories, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterInventories, put=__cordl_internal_set_CharacterInventories)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>*  CharacterInventories;

/// @brief Field CharacterList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterList, put=__cordl_internal_set_CharacterList)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  CharacterList;

/// @brief Field PlayerProfile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerProfile, put=__cordl_internal_set_PlayerProfile)) ::PlayFab::ClientModels::PlayerProfileModel*  PlayerProfile;

/// @brief Field PlayerStatistics, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerStatistics, put=__cordl_internal_set_PlayerStatistics)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  PlayerStatistics;

/// @brief Field TitleData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleData, put=__cordl_internal_set_TitleData)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  TitleData;

/// @brief Field UserData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserData, put=__cordl_internal_set_UserData)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  UserData;

/// @brief Field UserDataVersion, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_UserDataVersion, put=__cordl_internal_set_UserDataVersion)) uint32_t  UserDataVersion;

/// @brief Field UserInventory, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserInventory, put=__cordl_internal_set_UserInventory)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  UserInventory;

/// @brief Field UserReadOnlyData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserReadOnlyData, put=__cordl_internal_set_UserReadOnlyData)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  UserReadOnlyData;

/// @brief Field UserReadOnlyDataVersion, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_UserReadOnlyDataVersion, put=__cordl_internal_set_UserReadOnlyDataVersion)) uint32_t  UserReadOnlyDataVersion;

/// @brief Field UserVirtualCurrency, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserVirtualCurrency, put=__cordl_internal_set_UserVirtualCurrency)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  UserVirtualCurrency;

/// @brief Field UserVirtualCurrencyRechargeTimes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserVirtualCurrencyRechargeTimes, put=__cordl_internal_set_UserVirtualCurrencyRechargeTimes)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  UserVirtualCurrencyRechargeTimes;

static inline ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload* New_ctor() ;

constexpr ::PlayFab::ClientModels::UserAccountInfo* const& __cordl_internal_get_AccountInfo() const;

constexpr ::PlayFab::ClientModels::UserAccountInfo*& __cordl_internal_get_AccountInfo() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>* const& __cordl_internal_get_CharacterInventories() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>*& __cordl_internal_get_CharacterInventories() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>* const& __cordl_internal_get_CharacterList() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*& __cordl_internal_get_CharacterList() ;

constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& __cordl_internal_get_PlayerProfile() const;

constexpr ::PlayFab::ClientModels::PlayerProfileModel*& __cordl_internal_get_PlayerProfile() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>* const& __cordl_internal_get_PlayerStatistics() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*& __cordl_internal_get_PlayerStatistics() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_TitleData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_TitleData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& __cordl_internal_get_UserData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& __cordl_internal_get_UserData() ;

constexpr uint32_t const& __cordl_internal_get_UserDataVersion() const;

constexpr uint32_t& __cordl_internal_get_UserDataVersion() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_UserInventory() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_UserInventory() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& __cordl_internal_get_UserReadOnlyData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& __cordl_internal_get_UserReadOnlyData() ;

constexpr uint32_t const& __cordl_internal_get_UserReadOnlyDataVersion() const;

constexpr uint32_t& __cordl_internal_get_UserReadOnlyDataVersion() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_UserVirtualCurrency() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_UserVirtualCurrency() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>* const& __cordl_internal_get_UserVirtualCurrencyRechargeTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*& __cordl_internal_get_UserVirtualCurrencyRechargeTimes() ;

constexpr void __cordl_internal_set_AccountInfo(::PlayFab::ClientModels::UserAccountInfo*  value) ;

constexpr void __cordl_internal_set_CharacterInventories(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>*  value) ;

constexpr void __cordl_internal_set_CharacterList(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  value) ;

constexpr void __cordl_internal_set_PlayerProfile(::PlayFab::ClientModels::PlayerProfileModel*  value) ;

constexpr void __cordl_internal_set_PlayerStatistics(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  value) ;

constexpr void __cordl_internal_set_TitleData(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_UserData(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value) ;

constexpr void __cordl_internal_set_UserDataVersion(uint32_t  value) ;

constexpr void __cordl_internal_set_UserInventory(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

constexpr void __cordl_internal_set_UserReadOnlyData(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value) ;

constexpr void __cordl_internal_set_UserReadOnlyDataVersion(uint32_t  value) ;

constexpr void __cordl_internal_set_UserVirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_UserVirtualCurrencyRechargeTimes(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  value) ;

/// @brief Method .ctor, addr 0xa84dcd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerCombinedInfoResultPayload() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoResultPayload", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerCombinedInfoResultPayload(GetPlayerCombinedInfoResultPayload && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoResultPayload", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerCombinedInfoResultPayload(GetPlayerCombinedInfoResultPayload const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20042};

/// @brief Field AccountInfo, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::UserAccountInfo*  ___AccountInfo;

/// @brief Field CharacterInventories, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterInventory*>*  ___CharacterInventories;

/// @brief Field CharacterList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  ___CharacterList;

/// @brief Field PlayerProfile, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileModel*  ___PlayerProfile;

/// @brief Field PlayerStatistics, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  ___PlayerStatistics;

/// @brief Field TitleData, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___TitleData;

/// @brief Field UserData, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  ___UserData;

/// @brief Field UserDataVersion, offset: 0x48, size: 0x4, def value: None
 uint32_t  ___UserDataVersion;

/// @brief Field UserInventory, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___UserInventory;

/// @brief Field UserReadOnlyData, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  ___UserReadOnlyData;

/// @brief Field UserReadOnlyDataVersion, offset: 0x60, size: 0x4, def value: None
 uint32_t  ___UserReadOnlyDataVersion;

/// @brief Field UserVirtualCurrency, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___UserVirtualCurrency;

/// @brief Field UserVirtualCurrencyRechargeTimes, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  ___UserVirtualCurrencyRechargeTimes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___AccountInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___CharacterInventories) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___CharacterList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___PlayerProfile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___PlayerStatistics) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___TitleData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___UserData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___UserDataVersion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___UserInventory) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___UserReadOnlyData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___UserReadOnlyDataVersion) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___UserVirtualCurrency) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload, ___UserVirtualCurrencyRechargeTimes) == 0x70, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload) == 0x78, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
