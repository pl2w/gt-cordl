#pragma once
// IWYU pragma private; include "KID/Model/CreateParentalConsentChallengeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateParentalConsentChallengeRequest)
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class CreateParentalConsentChallengeRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateParentalConsentChallengeRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateParentalConsentChallengeRequest*, "KID.Model", "CreateParentalConsentChallengeRequest");
// [DataContract(Name = "CreateParentalConsentChallengeRequest")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateParentalConsentChallengeRequest
class CORDL_TYPE CreateParentalConsentChallengeRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "scenarioId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ScenarioId, put=set_ScenarioId)) ::System::Guid  ScenarioId;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <ScenarioId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__ScenarioId_k__BackingField, put=__cordl_internal_set__ScenarioId_k__BackingField)) ::System::Guid  _ScenarioId_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateParentalConsentChallengeRequest* New_ctor() ;

static inline ::KID::Model::CreateParentalConsentChallengeRequest* New_ctor(::System::Guid  scenarioId, ::StringW  jurisdiction) ;

/// @brief Method ToJson, addr 0x9cd64fc, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd636c, size 0x190, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__ScenarioId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ScenarioId_k__BackingField() ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ScenarioId_k__BackingField(::System::Guid  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd62b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd62b8, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  scenarioId, ::StringW  jurisdiction) ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd635c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_ScenarioId, addr 0x9cd6348, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_ScenarioId() ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd6364, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ScenarioId, addr 0x9cd6354, size 0x8, virtual false, abstract: false, final false
inline void set_ScenarioId(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateParentalConsentChallengeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateParentalConsentChallengeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateParentalConsentChallengeRequest(CreateParentalConsentChallengeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateParentalConsentChallengeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateParentalConsentChallengeRequest(CreateParentalConsentChallengeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31078};

/// [CompilerGenerated]
/// @brief Field <ScenarioId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____ScenarioId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateParentalConsentChallengeRequest, ____ScenarioId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateParentalConsentChallengeRequest, ____Jurisdiction_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateParentalConsentChallengeRequest) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
