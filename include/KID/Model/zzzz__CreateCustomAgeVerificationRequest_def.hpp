#pragma once
// IWYU pragma private; include "KID/Model/CreateCustomAgeVerificationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateCustomAgeVerificationRequest)
namespace KID::Model {
class AgeCriteria;
}
namespace KID::Model {
class VerificationSubject;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class CreateCustomAgeVerificationRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateCustomAgeVerificationRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateCustomAgeVerificationRequest*, "KID.Model", "CreateCustomAgeVerificationRequest");
// [DataContract(Name = "CreateCustomAgeVerificationRequest")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateCustomAgeVerificationRequest
class CORDL_TYPE CreateCustomAgeVerificationRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "criteria", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Criteria, put=set_Criteria)) ::KID::Model::AgeCriteria*  Criteria;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "scenarioId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ScenarioId, put=set_ScenarioId)) ::System::Guid  ScenarioId;

/// @brief [DataMember(Name = "subject", EmitDefaultValue = false)]
 __declspec(property(get=get_Subject, put=set_Subject)) ::KID::Model::VerificationSubject*  Subject;

/// @brief Field <Criteria>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Criteria_k__BackingField, put=__cordl_internal_set__Criteria_k__BackingField)) ::KID::Model::AgeCriteria*  _Criteria_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <ScenarioId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__ScenarioId_k__BackingField, put=__cordl_internal_set__ScenarioId_k__BackingField)) ::System::Guid  _ScenarioId_k__BackingField;

/// @brief Field <Subject>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Subject_k__BackingField, put=__cordl_internal_set__Subject_k__BackingField)) ::KID::Model::VerificationSubject*  _Subject_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateCustomAgeVerificationRequest* New_ctor() ;

static inline ::KID::Model::CreateCustomAgeVerificationRequest* New_ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria) ;

/// @brief Method ToJson, addr 0x9cd6254, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd603c, size 0x218, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::AgeCriteria* const& __cordl_internal_get__Criteria_k__BackingField() const;

constexpr ::KID::Model::AgeCriteria*& __cordl_internal_get__Criteria_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__ScenarioId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ScenarioId_k__BackingField() ;

constexpr ::KID::Model::VerificationSubject* const& __cordl_internal_get__Subject_k__BackingField() const;

constexpr ::KID::Model::VerificationSubject*& __cordl_internal_get__Subject_k__BackingField() ;

constexpr void __cordl_internal_set__Criteria_k__BackingField(::KID::Model::AgeCriteria*  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ScenarioId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Subject_k__BackingField(::KID::Model::VerificationSubject*  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd5f0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd5f14, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  scenarioId, ::StringW  jurisdiction, ::KID::Model::VerificationSubject*  subject, ::KID::Model::AgeCriteria*  criteria) ;

/// [CompilerGenerated]
/// @brief Method get_Criteria, addr 0x9cd602c, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeCriteria* get_Criteria() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd600c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_ScenarioId, addr 0x9cd5ff8, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_ScenarioId() ;

/// [CompilerGenerated]
/// @brief Method get_Subject, addr 0x9cd601c, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::VerificationSubject* get_Subject() ;

/// [CompilerGenerated]
/// @brief Method set_Criteria, addr 0x9cd6034, size 0x8, virtual false, abstract: false, final false
inline void set_Criteria(::KID::Model::AgeCriteria*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd6014, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ScenarioId, addr 0x9cd6004, size 0x8, virtual false, abstract: false, final false
inline void set_ScenarioId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Subject, addr 0x9cd6024, size 0x8, virtual false, abstract: false, final false
inline void set_Subject(::KID::Model::VerificationSubject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateCustomAgeVerificationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateCustomAgeVerificationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateCustomAgeVerificationRequest(CreateCustomAgeVerificationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateCustomAgeVerificationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateCustomAgeVerificationRequest(CreateCustomAgeVerificationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31077};

/// [CompilerGenerated]
/// @brief Field <ScenarioId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____ScenarioId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Subject>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::KID::Model::VerificationSubject*  ____Subject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Criteria>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::KID::Model::AgeCriteria*  ____Criteria_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateCustomAgeVerificationRequest, ____ScenarioId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateCustomAgeVerificationRequest, ____Jurisdiction_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateCustomAgeVerificationRequest, ____Subject_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateCustomAgeVerificationRequest, ____Criteria_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateCustomAgeVerificationRequest) == 0x38, "Size mismatch!");

} // namespace end def KID::Model
