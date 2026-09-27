#pragma once
// IWYU pragma private; include "KID/Model/CreateVerificationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateVerificationRequest)
namespace KID::Model {
class AgeCriteria;
}
namespace System {
struct DateTime;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class CreateVerificationRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateVerificationRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateVerificationRequest*, "KID.Model", "CreateVerificationRequest");
// [DataContract(Name = "CreateVerificationRequest")]
// Dependencies System.DateTime, System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateVerificationRequest
class CORDL_TYPE CreateVerificationRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "claimedAge", EmitDefaultValue = false)]
 __declspec(property(get=get_ClaimedAge, put=set_ClaimedAge)) int32_t  ClaimedAge;

/// [DataMember(Name = "claimedDateOfBirth", EmitDefaultValue = false)]
/// @brief [JsonConverter(typeof(KID.Client.OpenAPIDateConverter))]
 __declspec(property(get=get_ClaimedDateOfBirth, put=set_ClaimedDateOfBirth)) ::System::DateTime  ClaimedDateOfBirth;

/// @brief [DataMember(Name = "criteria", EmitDefaultValue = false)]
 __declspec(property(get=get_Criteria, put=set_Criteria)) ::KID::Model::AgeCriteria*  Criteria;

/// @brief [DataMember(Name = "email", EmitDefaultValue = false)]
 __declspec(property(get=get_Email, put=set_Email)) ::StringW  Email;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "scenarioId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ScenarioId, put=set_ScenarioId)) ::System::Guid  ScenarioId;

/// @brief Field <ClaimedAge>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__ClaimedAge_k__BackingField, put=__cordl_internal_set__ClaimedAge_k__BackingField)) int32_t  _ClaimedAge_k__BackingField;

/// @brief Field <ClaimedDateOfBirth>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClaimedDateOfBirth_k__BackingField, put=__cordl_internal_set__ClaimedDateOfBirth_k__BackingField)) ::System::DateTime  _ClaimedDateOfBirth_k__BackingField;

/// @brief Field <Criteria>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Criteria_k__BackingField, put=__cordl_internal_set__Criteria_k__BackingField)) ::KID::Model::AgeCriteria*  _Criteria_k__BackingField;

/// @brief Field <Email>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Email_k__BackingField, put=__cordl_internal_set__Email_k__BackingField)) ::StringW  _Email_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <ScenarioId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__ScenarioId_k__BackingField, put=__cordl_internal_set__ScenarioId_k__BackingField)) ::System::Guid  _ScenarioId_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateVerificationRequest* New_ctor() ;

static inline ::KID::Model::CreateVerificationRequest* New_ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::StringW  email, ::KID::Model::AgeCriteria*  criteria, ::System::DateTime  claimedDateOfBirth, int32_t  claimedAge) ;

/// @brief Method ToJson, addr 0x9cd6c18, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd6948, size 0x2d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__ClaimedAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ClaimedAge_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__ClaimedDateOfBirth_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__ClaimedDateOfBirth_k__BackingField() ;

constexpr ::KID::Model::AgeCriteria* const& __cordl_internal_get__Criteria_k__BackingField() const;

constexpr ::KID::Model::AgeCriteria*& __cordl_internal_get__Criteria_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Email_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Email_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__ScenarioId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ScenarioId_k__BackingField() ;

constexpr void __cordl_internal_set__ClaimedAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ClaimedDateOfBirth_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Criteria_k__BackingField(::KID::Model::AgeCriteria*  value) ;

constexpr void __cordl_internal_set__Email_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ScenarioId_k__BackingField(::System::Guid  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd6800, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd6808, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::StringW  email, ::KID::Model::AgeCriteria*  criteria, ::System::DateTime  claimedDateOfBirth, int32_t  claimedAge) ;

/// [CompilerGenerated]
/// @brief Method get_ClaimedAge, addr 0x9cd6938, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ClaimedAge() ;

/// [CompilerGenerated]
/// @brief Method get_ClaimedDateOfBirth, addr 0x9cd6928, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_ClaimedDateOfBirth() ;

/// [CompilerGenerated]
/// @brief Method get_Criteria, addr 0x9cd6918, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeCriteria* get_Criteria() ;

/// [CompilerGenerated]
/// @brief Method get_Email, addr 0x9cd6908, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Email() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd68f8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_ScenarioId, addr 0x9cd68e4, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_ScenarioId() ;

/// [CompilerGenerated]
/// @brief Method set_ClaimedAge, addr 0x9cd6940, size 0x8, virtual false, abstract: false, final false
inline void set_ClaimedAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ClaimedDateOfBirth, addr 0x9cd6930, size 0x8, virtual false, abstract: false, final false
inline void set_ClaimedDateOfBirth(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Criteria, addr 0x9cd6920, size 0x8, virtual false, abstract: false, final false
inline void set_Criteria(::KID::Model::AgeCriteria*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Email, addr 0x9cd6910, size 0x8, virtual false, abstract: false, final false
inline void set_Email(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd6900, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ScenarioId, addr 0x9cd68f0, size 0x8, virtual false, abstract: false, final false
inline void set_ScenarioId(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateVerificationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateVerificationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateVerificationRequest(CreateVerificationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateVerificationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateVerificationRequest(CreateVerificationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31080};

/// [CompilerGenerated]
/// @brief Field <ScenarioId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____ScenarioId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Email>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Email_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Criteria>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::KID::Model::AgeCriteria*  ____Criteria_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ClaimedDateOfBirth>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ____ClaimedDateOfBirth_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ClaimedAge>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____ClaimedAge_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateVerificationRequest, ____ScenarioId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateVerificationRequest, ____Jurisdiction_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateVerificationRequest, ____Email_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateVerificationRequest, ____Criteria_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateVerificationRequest, ____ClaimedDateOfBirth_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateVerificationRequest, ____ClaimedAge_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateVerificationRequest) == 0x48, "Size mismatch!");

} // namespace end def KID::Model
