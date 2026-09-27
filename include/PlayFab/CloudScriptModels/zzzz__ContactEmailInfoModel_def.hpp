#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ContactEmailInfoModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/CloudScriptModels/zzzz__EmailVerificationStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ContactEmailInfoModel)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class ContactEmailInfoModel;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::ContactEmailInfoModel*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ContactEmailInfoModel*, "PlayFab.CloudScriptModels", "ContactEmailInfoModel");
// Dependencies PlayFab.CloudScriptModels.EmailVerificationStatus, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.ContactEmailInfoModel
class CORDL_TYPE ContactEmailInfoModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field EmailAddress, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmailAddress, put=__cordl_internal_set_EmailAddress)) ::StringW  EmailAddress;

/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field VerificationStatus, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_VerificationStatus, put=__cordl_internal_set_VerificationStatus)) ::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus>  VerificationStatus;

static inline ::PlayFab::CloudScriptModels::ContactEmailInfoModel* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_EmailAddress() const;

constexpr ::StringW& __cordl_internal_get_EmailAddress() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus> const& __cordl_internal_get_VerificationStatus() const;

constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus>& __cordl_internal_get_VerificationStatus() ;

constexpr void __cordl_internal_set_EmailAddress(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_VerificationStatus(::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus>  value) ;

/// @brief Method .ctor, addr 0xa842f14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContactEmailInfoModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContactEmailInfoModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContactEmailInfoModel(ContactEmailInfoModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContactEmailInfoModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContactEmailInfoModel(ContactEmailInfoModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19871};

/// @brief Field EmailAddress, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___EmailAddress;

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field VerificationStatus, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus>  ___VerificationStatus;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::ContactEmailInfoModel, ___EmailAddress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ContactEmailInfoModel, ___Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ContactEmailInfoModel, ___VerificationStatus) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::ContactEmailInfoModel) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
