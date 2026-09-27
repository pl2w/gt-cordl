#pragma once
// IWYU pragma private; include "KID/Model/CreateAdultVerificationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateAdultVerificationRequest)
namespace KID::Model {
struct VerificationMethod;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace KID::Model {
class CreateAdultVerificationRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateAdultVerificationRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateAdultVerificationRequest*, "KID.Model", "CreateAdultVerificationRequest");
// [DataContract(Name = "CreateAdultVerificationRequest")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateAdultVerificationRequest
class CORDL_TYPE CreateAdultVerificationRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "allowedMethods", EmitDefaultValue = false)]
 __declspec(property(get=get_AllowedMethods, put=set_AllowedMethods)) ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  AllowedMethods;

/// @brief [DataMember(Name = "email", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Email, put=set_Email)) ::StringW  Email;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "locale", EmitDefaultValue = false)]
 __declspec(property(get=get_Locale, put=set_Locale)) ::StringW  Locale;

/// @brief Field <AllowedMethods>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__AllowedMethods_k__BackingField, put=__cordl_internal_set__AllowedMethods_k__BackingField)) ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  _AllowedMethods_k__BackingField;

/// @brief Field <Email>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Email_k__BackingField, put=__cordl_internal_set__Email_k__BackingField)) ::StringW  _Email_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <Locale>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locale_k__BackingField, put=__cordl_internal_set__Locale_k__BackingField)) ::StringW  _Locale_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateAdultVerificationRequest* New_ctor() ;

static inline ::KID::Model::CreateAdultVerificationRequest* New_ctor(::StringW  email, ::StringW  jurisdiction, ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  allowedMethods, ::StringW  locale) ;

/// @brief Method ToJson, addr 0x9cd4cb4, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd4ad8, size 0x1dc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>* const& __cordl_internal_get__AllowedMethods_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*& __cordl_internal_get__AllowedMethods_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Email_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Email_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Locale_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Locale_k__BackingField() ;

constexpr void __cordl_internal_set__AllowedMethods_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  value) ;

constexpr void __cordl_internal_set__Email_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Locale_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd49ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd49b4, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::StringW  email, ::StringW  jurisdiction, ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  allowedMethods, ::StringW  locale) ;

/// [CompilerGenerated]
/// @brief Method get_AllowedMethods, addr 0x9cd4ab8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>* get_AllowedMethods() ;

/// [CompilerGenerated]
/// @brief Method get_Email, addr 0x9cd4a98, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Email() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd4aa8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_Locale, addr 0x9cd4ac8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Locale() ;

/// [CompilerGenerated]
/// @brief Method set_AllowedMethods, addr 0x9cd4ac0, size 0x8, virtual false, abstract: false, final false
inline void set_AllowedMethods(::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Email, addr 0x9cd4aa0, size 0x8, virtual false, abstract: false, final false
inline void set_Email(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd4ab0, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Locale, addr 0x9cd4ad0, size 0x8, virtual false, abstract: false, final false
inline void set_Locale(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateAdultVerificationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateAdultVerificationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateAdultVerificationRequest(CreateAdultVerificationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateAdultVerificationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateAdultVerificationRequest(CreateAdultVerificationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31070};

/// [CompilerGenerated]
/// @brief Field <Email>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Email_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllowedMethods>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::KID::Model::VerificationMethod>*  ____AllowedMethods_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Locale>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Locale_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateAdultVerificationRequest, ____Email_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAdultVerificationRequest, ____Jurisdiction_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAdultVerificationRequest, ____AllowedMethods_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAdultVerificationRequest, ____Locale_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateAdultVerificationRequest) == 0x30, "Size mismatch!");

} // namespace end def KID::Model
