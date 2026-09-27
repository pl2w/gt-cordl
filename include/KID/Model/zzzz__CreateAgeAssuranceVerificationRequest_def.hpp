#pragma once
// IWYU pragma private; include "KID/Model/CreateAgeAssuranceVerificationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeCategory_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateAgeAssuranceVerificationRequest)
namespace KID::Model {
struct AgeCategory;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace KID::Model {
class CreateAgeAssuranceVerificationRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateAgeAssuranceVerificationRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateAgeAssuranceVerificationRequest*, "KID.Model", "CreateAgeAssuranceVerificationRequest");
// [DataContract(Name = "CreateAgeAssuranceVerificationRequest")]
// Dependencies KID.Model.AgeCategory, System.Nullable`1<T>, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateAgeAssuranceVerificationRequest
class CORDL_TYPE CreateAgeAssuranceVerificationRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "age", EmitDefaultValue = false)]
 __declspec(property(get=get_Age, put=set_Age)) int32_t  Age;

/// @brief [DataMember(Name = "ageCategory", EmitDefaultValue = false)]
 __declspec(property(get=get_AgeCategory, put=set_AgeCategory)) ::System::Nullable_1<::KID::Model::AgeCategory>  AgeCategory;

/// @brief [DataMember(Name = "disableInstructions", EmitDefaultValue = true)]
 __declspec(property(get=get_DisableInstructions, put=set_DisableInstructions)) bool  DisableInstructions;

/// @brief [DataMember(Name = "email", EmitDefaultValue = false)]
 __declspec(property(get=get_Email, put=set_Email)) ::StringW  Email;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "locale", EmitDefaultValue = false)]
 __declspec(property(get=get_Locale, put=set_Locale)) ::StringW  Locale;

/// @brief Field <AgeCategory>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__AgeCategory_k__BackingField, put=__cordl_internal_set__AgeCategory_k__BackingField)) ::System::Nullable_1<::KID::Model::AgeCategory>  _AgeCategory_k__BackingField;

/// @brief Field <Age>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__Age_k__BackingField, put=__cordl_internal_set__Age_k__BackingField)) int32_t  _Age_k__BackingField;

/// @brief Field <DisableInstructions>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableInstructions_k__BackingField, put=__cordl_internal_set__DisableInstructions_k__BackingField)) bool  _DisableInstructions_k__BackingField;

/// @brief Field <Email>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Email_k__BackingField, put=__cordl_internal_set__Email_k__BackingField)) ::StringW  _Email_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <Locale>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locale_k__BackingField, put=__cordl_internal_set__Locale_k__BackingField)) ::StringW  _Locale_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateAgeAssuranceVerificationRequest* New_ctor() ;

static inline ::KID::Model::CreateAgeAssuranceVerificationRequest* New_ctor(::StringW  email, ::StringW  jurisdiction, ::StringW  locale, int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory, bool  disableInstructions) ;

/// @brief Method ToJson, addr 0x9cd5394, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd50f4, size 0x2a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Nullable_1<::KID::Model::AgeCategory> const& __cordl_internal_get__AgeCategory_k__BackingField() const;

constexpr ::System::Nullable_1<::KID::Model::AgeCategory>& __cordl_internal_get__AgeCategory_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Age_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Age_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DisableInstructions_k__BackingField() const;

constexpr bool& __cordl_internal_get__DisableInstructions_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Email_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Email_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Locale_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Locale_k__BackingField() ;

constexpr void __cordl_internal_set__AgeCategory_k__BackingField(::System::Nullable_1<::KID::Model::AgeCategory>  value) ;

constexpr void __cordl_internal_set__Age_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__DisableInstructions_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Email_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Locale_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd4fc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd4fd0, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::StringW  email, ::StringW  jurisdiction, ::StringW  locale, int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory, bool  disableInstructions) ;

/// [CompilerGenerated]
/// @brief Method get_Age, addr 0x9cd50d4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Age() ;

/// [CompilerGenerated]
/// @brief Method get_AgeCategory, addr 0x9cd4fb8, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::KID::Model::AgeCategory> get_AgeCategory() ;

/// [CompilerGenerated]
/// @brief Method get_DisableInstructions, addr 0x9cd50e4, size 0x8, virtual false, abstract: false, final false
inline bool get_DisableInstructions() ;

/// [CompilerGenerated]
/// @brief Method get_Email, addr 0x9cd50a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Email() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd50b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_Locale, addr 0x9cd50c4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Locale() ;

/// [CompilerGenerated]
/// @brief Method set_Age, addr 0x9cd50dc, size 0x8, virtual false, abstract: false, final false
inline void set_Age(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_AgeCategory, addr 0x9cd4fc0, size 0x8, virtual false, abstract: false, final false
inline void set_AgeCategory(::System::Nullable_1<::KID::Model::AgeCategory>  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisableInstructions, addr 0x9cd50ec, size 0x8, virtual false, abstract: false, final false
inline void set_DisableInstructions(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Email, addr 0x9cd50ac, size 0x8, virtual false, abstract: false, final false
inline void set_Email(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd50bc, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Locale, addr 0x9cd50cc, size 0x8, virtual false, abstract: false, final false
inline void set_Locale(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateAgeAssuranceVerificationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateAgeAssuranceVerificationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateAgeAssuranceVerificationRequest(CreateAgeAssuranceVerificationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateAgeAssuranceVerificationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateAgeAssuranceVerificationRequest(CreateAgeAssuranceVerificationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31072};

/// [CompilerGenerated]
/// @brief Field <AgeCategory>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::KID::Model::AgeCategory>  ____AgeCategory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Email>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Email_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Locale>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____Locale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Age>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____Age_k__BackingField;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// [CompilerGenerated]
/// @brief Field <DisableInstructions>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  ____DisableInstructions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateAgeAssuranceVerificationRequest, ____AgeCategory_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeAssuranceVerificationRequest, ____Email_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeAssuranceVerificationRequest, ____Jurisdiction_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeAssuranceVerificationRequest, ____Locale_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeAssuranceVerificationRequest, ____Age_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeAssuranceVerificationRequest, ____DisableInstructions_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateAgeAssuranceVerificationRequest) == 0x38, "Size mismatch!");

} // namespace end def KID::Model
