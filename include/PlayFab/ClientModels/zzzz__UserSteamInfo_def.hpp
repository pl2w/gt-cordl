#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserSteamInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__Currency_def.hpp"
#include "PlayFab/ClientModels/zzzz__TitleActivationStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserSteamInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserSteamInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserSteamInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserSteamInfo*, "PlayFab.ClientModels", "UserSteamInfo");
// Dependencies PlayFab.ClientModels.Currency, PlayFab.ClientModels.TitleActivationStatus, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserSteamInfo
class CORDL_TYPE UserSteamInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field SteamActivationStatus, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_SteamActivationStatus, put=__cordl_internal_set_SteamActivationStatus)) ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus>  SteamActivationStatus;

/// @brief Field SteamCountry, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamCountry, put=__cordl_internal_set_SteamCountry)) ::StringW  SteamCountry;

/// @brief Field SteamCurrency, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_SteamCurrency, put=__cordl_internal_set_SteamCurrency)) ::System::Nullable_1<::PlayFab::ClientModels::Currency>  SteamCurrency;

/// @brief Field SteamId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamId, put=__cordl_internal_set_SteamId)) ::StringW  SteamId;

/// @brief Field SteamName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SteamName, put=__cordl_internal_set_SteamName)) ::StringW  SteamName;

static inline ::PlayFab::ClientModels::UserSteamInfo* New_ctor() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus> const& __cordl_internal_get_SteamActivationStatus() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus>& __cordl_internal_get_SteamActivationStatus() ;

constexpr ::StringW const& __cordl_internal_get_SteamCountry() const;

constexpr ::StringW& __cordl_internal_get_SteamCountry() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Currency> const& __cordl_internal_get_SteamCurrency() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Currency>& __cordl_internal_get_SteamCurrency() ;

constexpr ::StringW const& __cordl_internal_get_SteamId() const;

constexpr ::StringW& __cordl_internal_get_SteamId() ;

constexpr ::StringW const& __cordl_internal_get_SteamName() const;

constexpr ::StringW& __cordl_internal_get_SteamName() ;

constexpr void __cordl_internal_set_SteamActivationStatus(::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus>  value) ;

constexpr void __cordl_internal_set_SteamCountry(::StringW  value) ;

constexpr void __cordl_internal_set_SteamCurrency(::System::Nullable_1<::PlayFab::ClientModels::Currency>  value) ;

constexpr void __cordl_internal_set_SteamId(::StringW  value) ;

constexpr void __cordl_internal_set_SteamName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e4e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserSteamInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserSteamInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserSteamInfo(UserSteamInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserSteamInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserSteamInfo(UserSteamInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20310};

/// @brief Field SteamActivationStatus, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus>  ___SteamActivationStatus;

/// @brief Field SteamCountry, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SteamCountry;

/// @brief Field SteamCurrency, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::Currency>  ___SteamCurrency;

/// @brief Field SteamId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SteamId;

/// @brief Size padding 0x38 - 0x48 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field SteamName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___SteamName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserSteamInfo, ___SteamActivationStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserSteamInfo, ___SteamCountry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserSteamInfo, ___SteamCurrency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserSteamInfo, ___SteamId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserSteamInfo, ___SteamName) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserSteamInfo) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
