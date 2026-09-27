#pragma once
// IWYU pragma private; include "KID/Model/CreateAgeVerificationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateAgeVerificationRequest)
namespace KID::Model {
class AgeCriteria;
}
namespace KID::Model {
class VerificationOptions;
}
namespace KID::Model {
class VerificationSubject;
}
// Forward declare root types
namespace KID::Model {
class CreateAgeVerificationRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateAgeVerificationRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateAgeVerificationRequest*, "KID.Model", "CreateAgeVerificationRequest");
// [DataContract(Name = "CreateAgeVerificationRequest")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateAgeVerificationRequest
class CORDL_TYPE CreateAgeVerificationRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "criteria", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Criteria, put=set_Criteria)) ::KID::Model::AgeCriteria*  Criteria;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "locale", EmitDefaultValue = false)]
 __declspec(property(get=get_Locale, put=set_Locale)) ::StringW  Locale;

/// @brief [DataMember(Name = "options", EmitDefaultValue = false)]
 __declspec(property(get=get_Options, put=set_Options)) ::KID::Model::VerificationOptions*  Options;

/// @brief [DataMember(Name = "subject", EmitDefaultValue = false)]
 __declspec(property(get=get_Subject, put=set_Subject)) ::KID::Model::VerificationSubject*  Subject;

/// @brief Field <Criteria>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Criteria_k__BackingField, put=__cordl_internal_set__Criteria_k__BackingField)) ::KID::Model::AgeCriteria*  _Criteria_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <Locale>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locale_k__BackingField, put=__cordl_internal_set__Locale_k__BackingField)) ::StringW  _Locale_k__BackingField;

/// @brief Field <Options>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) ::KID::Model::VerificationOptions*  _Options_k__BackingField;

/// @brief Field <Subject>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Subject_k__BackingField, put=__cordl_internal_set__Subject_k__BackingField)) ::KID::Model::VerificationSubject*  _Subject_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateAgeVerificationRequest* New_ctor() ;

static inline ::KID::Model::CreateAgeVerificationRequest* New_ctor(::StringW  jurisdiction, ::StringW  locale, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria, ::KID::Model::VerificationOptions*  options) ;

/// @brief Method ToJson, addr 0x9cd5a10, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd57f0, size 0x220, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::AgeCriteria* const& __cordl_internal_get__Criteria_k__BackingField() const;

constexpr ::KID::Model::AgeCriteria*& __cordl_internal_get__Criteria_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Locale_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Locale_k__BackingField() ;

constexpr ::KID::Model::VerificationOptions* const& __cordl_internal_get__Options_k__BackingField() const;

constexpr ::KID::Model::VerificationOptions*& __cordl_internal_get__Options_k__BackingField() ;

constexpr ::KID::Model::VerificationSubject* const& __cordl_internal_get__Subject_k__BackingField() const;

constexpr ::KID::Model::VerificationSubject*& __cordl_internal_get__Subject_k__BackingField() ;

constexpr void __cordl_internal_set__Criteria_k__BackingField(::KID::Model::AgeCriteria*  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Locale_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Options_k__BackingField(::KID::Model::VerificationOptions*  value) ;

constexpr void __cordl_internal_set__Subject_k__BackingField(::KID::Model::VerificationSubject*  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd5698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd56a0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::StringW  jurisdiction, ::StringW  locale, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria, ::KID::Model::VerificationOptions*  options) ;

/// [CompilerGenerated]
/// @brief Method get_Criteria, addr 0x9cd57d0, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeCriteria* get_Criteria() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd57a0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_Locale, addr 0x9cd57b0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Locale() ;

/// [CompilerGenerated]
/// @brief Method get_Options, addr 0x9cd57e0, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::VerificationOptions* get_Options() ;

/// [CompilerGenerated]
/// @brief Method get_Subject, addr 0x9cd57c0, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::VerificationSubject* get_Subject() ;

/// [CompilerGenerated]
/// @brief Method set_Criteria, addr 0x9cd57d8, size 0x8, virtual false, abstract: false, final false
inline void set_Criteria(::KID::Model::AgeCriteria*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd57a8, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Locale, addr 0x9cd57b8, size 0x8, virtual false, abstract: false, final false
inline void set_Locale(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Options, addr 0x9cd57e8, size 0x8, virtual false, abstract: false, final false
inline void set_Options(::KID::Model::VerificationOptions*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Subject, addr 0x9cd57c8, size 0x8, virtual false, abstract: false, final false
inline void set_Subject(::KID::Model::VerificationSubject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateAgeVerificationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateAgeVerificationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateAgeVerificationRequest(CreateAgeVerificationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateAgeVerificationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateAgeVerificationRequest(CreateAgeVerificationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31074};

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Locale>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Locale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Subject>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::KID::Model::VerificationSubject*  ____Subject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Criteria>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::KID::Model::AgeCriteria*  ____Criteria_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Options>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::KID::Model::VerificationOptions*  ____Options_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateAgeVerificationRequest, ____Jurisdiction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeVerificationRequest, ____Locale_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeVerificationRequest, ____Subject_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeVerificationRequest, ____Criteria_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAgeVerificationRequest, ____Options_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateAgeVerificationRequest) == 0x38, "Size mismatch!");

} // namespace end def KID::Model
