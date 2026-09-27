#pragma once
// IWYU pragma private; include "KID/Model/SetChallengeStatusRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__SetChallengeStatusRequest_StatusEnum_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetChallengeStatusRequest)
namespace GlobalNamespace {
struct SetChallengeStatusRequest_StatusEnum;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class SetChallengeStatusRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::SetChallengeStatusRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::SetChallengeStatusRequest*, "KID.Model", "SetChallengeStatusRequest");
// [DataContract(Name = "SetChallengeStatusRequest")]
// Dependencies KID.Model.SetChallengeStatusRequest::StatusEnum, System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.SetChallengeStatusRequest
class CORDL_TYPE SetChallengeStatusRequest : public ::System::Object {
public:
// Declarations
using StatusEnum = ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum;

/// @brief [DataMember(Name = "age", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Age, put=set_Age)) int32_t  Age;

/// @brief [DataMember(Name = "approverEmail", EmitDefaultValue = false)]
 __declspec(property(get=get_ApproverEmail, put=set_ApproverEmail)) ::StringW  ApproverEmail;

/// @brief [DataMember(Name = "challengeId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ChallengeId, put=set_ChallengeId)) ::System::Guid  ChallengeId;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  Status;

/// @brief Field <Age>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Age_k__BackingField, put=__cordl_internal_set__Age_k__BackingField)) int32_t  _Age_k__BackingField;

/// @brief Field <ApproverEmail>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ApproverEmail_k__BackingField, put=__cordl_internal_set__ApproverEmail_k__BackingField)) ::StringW  _ApproverEmail_k__BackingField;

/// @brief Field <ChallengeId>k__BackingField, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get__ChallengeId_k__BackingField, put=__cordl_internal_set__ChallengeId_k__BackingField)) ::System::Guid  _ChallengeId_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  _Status_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::SetChallengeStatusRequest* New_ctor() ;

static inline ::KID::Model::SetChallengeStatusRequest* New_ctor(::System::Guid  challengeId, ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  status, int32_t  age, ::StringW  jurisdiction, ::StringW  approverEmail) ;

/// @brief Method ToJson, addr 0x9cd9e4c, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd9bc0, size 0x28c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__Age_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Age_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ApproverEmail_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ApproverEmail_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__ChallengeId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ChallengeId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__Age_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ApproverEmail_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd9aac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd9ab4, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  challengeId, ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  status, int32_t  age, ::StringW  jurisdiction, ::StringW  approverEmail) ;

/// [CompilerGenerated]
/// @brief Method get_Age, addr 0x9cd9b90, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Age() ;

/// [CompilerGenerated]
/// @brief Method get_ApproverEmail, addr 0x9cd9bb0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ApproverEmail() ;

/// [CompilerGenerated]
/// @brief Method get_ChallengeId, addr 0x9cd9b74, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_ChallengeId() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd9ba0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cd9a9c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_Age, addr 0x9cd9b98, size 0x8, virtual false, abstract: false, final false
inline void set_Age(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ApproverEmail, addr 0x9cd9bb8, size 0x8, virtual false, abstract: false, final false
inline void set_ApproverEmail(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ChallengeId, addr 0x9cd9b84, size 0xc, virtual false, abstract: false, final false
inline void set_ChallengeId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd9ba8, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cd9aa4, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetChallengeStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetChallengeStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetChallengeStatusRequest(SetChallengeStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetChallengeStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetChallengeStatusRequest(SetChallengeStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31101};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChallengeId>k__BackingField, offset: 0x14, size: 0x10, def value: None
 ::System::Guid  ____ChallengeId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Age>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____Age_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ApproverEmail>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____ApproverEmail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::SetChallengeStatusRequest, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::SetChallengeStatusRequest, ____ChallengeId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::SetChallengeStatusRequest, ____Age_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::KID::Model::SetChallengeStatusRequest, ____Jurisdiction_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::KID::Model::SetChallengeStatusRequest, ____ApproverEmail_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::KID::Model::SetChallengeStatusRequest) == 0x38, "Size mismatch!");

} // namespace end def KID::Model
