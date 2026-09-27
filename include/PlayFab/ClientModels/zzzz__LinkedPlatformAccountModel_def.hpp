#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkedPlatformAccountModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__LoginIdentityProvider_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkedPlatformAccountModel)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkedPlatformAccountModel;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkedPlatformAccountModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkedPlatformAccountModel*, "PlayFab.ClientModels", "LinkedPlatformAccountModel");
// Dependencies PlayFab.ClientModels.LoginIdentityProvider, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkedPlatformAccountModel
class CORDL_TYPE LinkedPlatformAccountModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Email, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field Platform, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>  Platform;

/// @brief Field PlatformUserId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlatformUserId, put=__cordl_internal_set_PlatformUserId)) ::StringW  PlatformUserId;

/// @brief Field Username, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::PlayFab::ClientModels::LinkedPlatformAccountModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider> const& __cordl_internal_get_Platform() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>& __cordl_internal_get_Platform() ;

constexpr ::StringW const& __cordl_internal_get_PlatformUserId() const;

constexpr ::StringW& __cordl_internal_get_PlatformUserId() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_Platform(::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>  value) ;

constexpr void __cordl_internal_set_PlatformUserId(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84df10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkedPlatformAccountModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkedPlatformAccountModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedPlatformAccountModel(LinkedPlatformAccountModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedPlatformAccountModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedPlatformAccountModel(LinkedPlatformAccountModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20113};

/// @brief Field Email, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field Platform, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>  ___Platform;

/// @brief Field PlatformUserId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PlatformUserId;

/// @brief Field Username, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkedPlatformAccountModel, ___Email) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkedPlatformAccountModel, ___Platform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkedPlatformAccountModel, ___PlatformUserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkedPlatformAccountModel, ___Username) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkedPlatformAccountModel) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
