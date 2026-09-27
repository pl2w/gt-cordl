#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserGoogleInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UserGoogleInfo)
// Forward declare root types
namespace PlayFab::ClientModels {
class UserGoogleInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UserGoogleInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserGoogleInfo*, "PlayFab.ClientModels", "UserGoogleInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UserGoogleInfo
class CORDL_TYPE UserGoogleInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field GoogleEmail, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleEmail, put=__cordl_internal_set_GoogleEmail)) ::StringW  GoogleEmail;

/// @brief Field GoogleGender, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleGender, put=__cordl_internal_set_GoogleGender)) ::StringW  GoogleGender;

/// @brief Field GoogleId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleId, put=__cordl_internal_set_GoogleId)) ::StringW  GoogleId;

/// @brief Field GoogleLocale, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleLocale, put=__cordl_internal_set_GoogleLocale)) ::StringW  GoogleLocale;

/// @brief Field GoogleName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoogleName, put=__cordl_internal_set_GoogleName)) ::StringW  GoogleName;

static inline ::PlayFab::ClientModels::UserGoogleInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_GoogleEmail() const;

constexpr ::StringW& __cordl_internal_get_GoogleEmail() ;

constexpr ::StringW const& __cordl_internal_get_GoogleGender() const;

constexpr ::StringW& __cordl_internal_get_GoogleGender() ;

constexpr ::StringW const& __cordl_internal_get_GoogleId() const;

constexpr ::StringW& __cordl_internal_get_GoogleId() ;

constexpr ::StringW const& __cordl_internal_get_GoogleLocale() const;

constexpr ::StringW& __cordl_internal_get_GoogleLocale() ;

constexpr ::StringW const& __cordl_internal_get_GoogleName() const;

constexpr ::StringW& __cordl_internal_get_GoogleName() ;

constexpr void __cordl_internal_set_GoogleEmail(::StringW  value) ;

constexpr void __cordl_internal_set_GoogleGender(::StringW  value) ;

constexpr void __cordl_internal_set_GoogleId(::StringW  value) ;

constexpr void __cordl_internal_set_GoogleLocale(::StringW  value) ;

constexpr void __cordl_internal_set_GoogleName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e498, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserGoogleInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserGoogleInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserGoogleInfo(UserGoogleInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserGoogleInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserGoogleInfo(UserGoogleInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20300};

/// @brief Field GoogleEmail, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___GoogleEmail;

/// @brief Field GoogleGender, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___GoogleGender;

/// @brief Field GoogleId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___GoogleId;

/// @brief Field GoogleLocale, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___GoogleLocale;

/// @brief Field GoogleName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___GoogleName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserGoogleInfo, ___GoogleEmail) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserGoogleInfo, ___GoogleGender) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserGoogleInfo, ___GoogleId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserGoogleInfo, ___GoogleLocale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::UserGoogleInfo, ___GoogleName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserGoogleInfo) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
