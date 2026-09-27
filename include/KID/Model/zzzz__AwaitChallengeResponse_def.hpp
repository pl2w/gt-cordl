#pragma once
// IWYU pragma private; include "KID/Model/AwaitChallengeResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AwaitChallengeResponse_StatusEnum_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AwaitChallengeResponse)
namespace GlobalNamespace {
struct AwaitChallengeResponse_StatusEnum;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class AwaitChallengeResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::AwaitChallengeResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::AwaitChallengeResponse*, "KID.Model", "AwaitChallengeResponse");
// [DataContract(Name = "AwaitChallengeResponse")]
// Dependencies KID.Model.AwaitChallengeResponse::StatusEnum, System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.AwaitChallengeResponse
class CORDL_TYPE AwaitChallengeResponse : public ::System::Object {
public:
// Declarations
using StatusEnum = ::GlobalNamespace::AwaitChallengeResponse_StatusEnum;

/// @brief [DataMember(Name = "approverEmail", EmitDefaultValue = false)]
 __declspec(property(get=get_ApproverEmail, put=set_ApproverEmail)) ::StringW  ApproverEmail;

/// @brief [DataMember(Name = "sessionId", EmitDefaultValue = false)]
 __declspec(property(get=get_SessionId, put=set_SessionId)) ::System::Guid  SessionId;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::AwaitChallengeResponse_StatusEnum  Status;

/// @brief Field <ApproverEmail>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ApproverEmail_k__BackingField, put=__cordl_internal_set__ApproverEmail_k__BackingField)) ::StringW  _ApproverEmail_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get__SessionId_k__BackingField, put=__cordl_internal_set__SessionId_k__BackingField)) ::System::Guid  _SessionId_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::GlobalNamespace::AwaitChallengeResponse_StatusEnum  _Status_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::AwaitChallengeResponse* New_ctor() ;

static inline ::KID::Model::AwaitChallengeResponse* New_ctor(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  status, ::System::Guid  sessionId, ::StringW  approverEmail) ;

/// @brief Method ToJson, addr 0x9cd381c, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd3618, size 0x204, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__ApproverEmail_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ApproverEmail_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__SessionId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__SessionId_k__BackingField() ;

constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::GlobalNamespace::AwaitChallengeResponse_StatusEnum& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__ApproverEmail_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__SessionId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd3594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd359c, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  status, ::System::Guid  sessionId, ::StringW  approverEmail) ;

/// [CompilerGenerated]
/// @brief Method get_ApproverEmail, addr 0x9cd3608, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ApproverEmail() ;

/// [CompilerGenerated]
/// @brief Method get_SessionId, addr 0x9cd35ec, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_SessionId() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cd3584, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AwaitChallengeResponse_StatusEnum get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_ApproverEmail, addr 0x9cd3610, size 0x8, virtual false, abstract: false, final false
inline void set_ApproverEmail(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_SessionId, addr 0x9cd35fc, size 0xc, virtual false, abstract: false, final false
inline void set_SessionId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cd358c, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::AwaitChallengeResponse_StatusEnum  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AwaitChallengeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AwaitChallengeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AwaitChallengeResponse(AwaitChallengeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AwaitChallengeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AwaitChallengeResponse(AwaitChallengeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31060};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AwaitChallengeResponse_StatusEnum  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SessionId>k__BackingField, offset: 0x14, size: 0x10, def value: None
 ::System::Guid  ____SessionId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ApproverEmail>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____ApproverEmail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::AwaitChallengeResponse, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AwaitChallengeResponse, ____SessionId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AwaitChallengeResponse, ____ApproverEmail_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::KID::Model::AwaitChallengeResponse) == 0x30, "Size mismatch!");

} // namespace end def KID::Model
