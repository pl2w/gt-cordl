#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoRequestParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerCombinedInfoRequestParams)
namespace PlayFab::ClientModels {
class PlayerProfileViewConstraints;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*, "PlayFab.ClientModels", "GetPlayerCombinedInfoRequestParams");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerCombinedInfoRequestParams
class CORDL_TYPE GetPlayerCombinedInfoRequestParams : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GetCharacterInventories, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetCharacterInventories, put=__cordl_internal_set_GetCharacterInventories)) bool  GetCharacterInventories;

/// @brief Field GetCharacterList, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetCharacterList, put=__cordl_internal_set_GetCharacterList)) bool  GetCharacterList;

/// @brief Field GetPlayerProfile, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetPlayerProfile, put=__cordl_internal_set_GetPlayerProfile)) bool  GetPlayerProfile;

/// @brief Field GetPlayerStatistics, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetPlayerStatistics, put=__cordl_internal_set_GetPlayerStatistics)) bool  GetPlayerStatistics;

/// @brief Field GetTitleData, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetTitleData, put=__cordl_internal_set_GetTitleData)) bool  GetTitleData;

/// @brief Field GetUserAccountInfo, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetUserAccountInfo, put=__cordl_internal_set_GetUserAccountInfo)) bool  GetUserAccountInfo;

/// @brief Field GetUserData, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetUserData, put=__cordl_internal_set_GetUserData)) bool  GetUserData;

/// @brief Field GetUserInventory, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetUserInventory, put=__cordl_internal_set_GetUserInventory)) bool  GetUserInventory;

/// @brief Field GetUserReadOnlyData, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetUserReadOnlyData, put=__cordl_internal_set_GetUserReadOnlyData)) bool  GetUserReadOnlyData;

/// @brief Field GetUserVirtualCurrency, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_GetUserVirtualCurrency, put=__cordl_internal_set_GetUserVirtualCurrency)) bool  GetUserVirtualCurrency;

/// @brief Field PlayerStatisticNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerStatisticNames, put=__cordl_internal_set_PlayerStatisticNames)) ::System::Collections::Generic::List_1<::StringW>*  PlayerStatisticNames;

/// @brief Field ProfileConstraints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileConstraints, put=__cordl_internal_set_ProfileConstraints)) ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ProfileConstraints;

/// @brief Field TitleDataKeys, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleDataKeys, put=__cordl_internal_set_TitleDataKeys)) ::System::Collections::Generic::List_1<::StringW>*  TitleDataKeys;

/// @brief Field UserDataKeys, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserDataKeys, put=__cordl_internal_set_UserDataKeys)) ::System::Collections::Generic::List_1<::StringW>*  UserDataKeys;

/// @brief Field UserReadOnlyDataKeys, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserReadOnlyDataKeys, put=__cordl_internal_set_UserReadOnlyDataKeys)) ::System::Collections::Generic::List_1<::StringW>*  UserReadOnlyDataKeys;

static inline ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* New_ctor() ;

constexpr bool const& __cordl_internal_get_GetCharacterInventories() const;

constexpr bool& __cordl_internal_get_GetCharacterInventories() ;

constexpr bool const& __cordl_internal_get_GetCharacterList() const;

constexpr bool& __cordl_internal_get_GetCharacterList() ;

constexpr bool const& __cordl_internal_get_GetPlayerProfile() const;

constexpr bool& __cordl_internal_get_GetPlayerProfile() ;

constexpr bool const& __cordl_internal_get_GetPlayerStatistics() const;

constexpr bool& __cordl_internal_get_GetPlayerStatistics() ;

constexpr bool const& __cordl_internal_get_GetTitleData() const;

constexpr bool& __cordl_internal_get_GetTitleData() ;

constexpr bool const& __cordl_internal_get_GetUserAccountInfo() const;

constexpr bool& __cordl_internal_get_GetUserAccountInfo() ;

constexpr bool const& __cordl_internal_get_GetUserData() const;

constexpr bool& __cordl_internal_get_GetUserData() ;

constexpr bool const& __cordl_internal_get_GetUserInventory() const;

constexpr bool& __cordl_internal_get_GetUserInventory() ;

constexpr bool const& __cordl_internal_get_GetUserReadOnlyData() const;

constexpr bool& __cordl_internal_get_GetUserReadOnlyData() ;

constexpr bool const& __cordl_internal_get_GetUserVirtualCurrency() const;

constexpr bool& __cordl_internal_get_GetUserVirtualCurrency() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_PlayerStatisticNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_PlayerStatisticNames() ;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& __cordl_internal_get_ProfileConstraints() const;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& __cordl_internal_get_ProfileConstraints() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_TitleDataKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_TitleDataKeys() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_UserDataKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_UserDataKeys() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_UserReadOnlyDataKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_UserReadOnlyDataKeys() ;

constexpr void __cordl_internal_set_GetCharacterInventories(bool  value) ;

constexpr void __cordl_internal_set_GetCharacterList(bool  value) ;

constexpr void __cordl_internal_set_GetPlayerProfile(bool  value) ;

constexpr void __cordl_internal_set_GetPlayerStatistics(bool  value) ;

constexpr void __cordl_internal_set_GetTitleData(bool  value) ;

constexpr void __cordl_internal_set_GetUserAccountInfo(bool  value) ;

constexpr void __cordl_internal_set_GetUserData(bool  value) ;

constexpr void __cordl_internal_set_GetUserInventory(bool  value) ;

constexpr void __cordl_internal_set_GetUserReadOnlyData(bool  value) ;

constexpr void __cordl_internal_set_GetUserVirtualCurrency(bool  value) ;

constexpr void __cordl_internal_set_PlayerStatisticNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value) ;

constexpr void __cordl_internal_set_TitleDataKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_UserDataKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_UserReadOnlyDataKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dcc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerCombinedInfoRequestParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoRequestParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoRequestParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20040};

/// @brief Field GetCharacterInventories, offset: 0x10, size: 0x1, def value: None
 bool  ___GetCharacterInventories;

/// @brief Field GetCharacterList, offset: 0x11, size: 0x1, def value: None
 bool  ___GetCharacterList;

/// @brief Field GetPlayerProfile, offset: 0x12, size: 0x1, def value: None
 bool  ___GetPlayerProfile;

/// @brief Field GetPlayerStatistics, offset: 0x13, size: 0x1, def value: None
 bool  ___GetPlayerStatistics;

/// @brief Field GetTitleData, offset: 0x14, size: 0x1, def value: None
 bool  ___GetTitleData;

/// @brief Field GetUserAccountInfo, offset: 0x15, size: 0x1, def value: None
 bool  ___GetUserAccountInfo;

/// @brief Field GetUserData, offset: 0x16, size: 0x1, def value: None
 bool  ___GetUserData;

/// @brief Field GetUserInventory, offset: 0x17, size: 0x1, def value: None
 bool  ___GetUserInventory;

/// @brief Field GetUserReadOnlyData, offset: 0x18, size: 0x1, def value: None
 bool  ___GetUserReadOnlyData;

/// @brief Field GetUserVirtualCurrency, offset: 0x19, size: 0x1, def value: None
 bool  ___GetUserVirtualCurrency;

/// @brief Field PlayerStatisticNames, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___PlayerStatisticNames;

/// @brief Field ProfileConstraints, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ___ProfileConstraints;

/// @brief Field TitleDataKeys, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___TitleDataKeys;

/// @brief Field UserDataKeys, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___UserDataKeys;

/// @brief Field UserReadOnlyDataKeys, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___UserReadOnlyDataKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetCharacterInventories) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetCharacterList) == 0x11, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetPlayerProfile) == 0x12, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetPlayerStatistics) == 0x13, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetTitleData) == 0x14, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetUserAccountInfo) == 0x15, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetUserData) == 0x16, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetUserInventory) == 0x17, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetUserReadOnlyData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___GetUserVirtualCurrency) == 0x19, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___PlayerStatisticNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___ProfileConstraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___TitleDataKeys) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___UserDataKeys) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams, ___UserReadOnlyDataKeys) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
