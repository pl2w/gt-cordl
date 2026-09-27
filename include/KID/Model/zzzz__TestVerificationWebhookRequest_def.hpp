#pragma once
// IWYU pragma private; include "KID/Model/TestVerificationWebhookRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__TestVerificationWebhookRequest_EventTypeEnum_def.hpp"
#include "KID/Model/zzzz__VerificationStatus_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TestVerificationWebhookRequest)
namespace GlobalNamespace {
struct TestVerificationWebhookRequest_EventTypeEnum;
}
namespace KID::Model {
class AgeRange;
}
namespace KID::Model {
struct VerificationStatus;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace KID::Model {
class TestVerificationWebhookRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::TestVerificationWebhookRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::TestVerificationWebhookRequest*, "KID.Model", "TestVerificationWebhookRequest");
// [DataContract(Name = "TestVerificationWebhookRequest")]
// Dependencies KID.Model.TestVerificationWebhookRequest::EventTypeEnum, KID.Model.VerificationStatus, System.Guid, System.Nullable`1<T>, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.TestVerificationWebhookRequest
class CORDL_TYPE TestVerificationWebhookRequest : public ::System::Object {
public:
// Declarations
using EventTypeEnum = ::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum;

/// @brief [DataMember(Name = "ageRange", EmitDefaultValue = false)]
 __declspec(property(get=get_AgeRange, put=set_AgeRange)) ::KID::Model::AgeRange*  AgeRange;

/// @brief [DataMember(Name = "eventType", EmitDefaultValue = false)]
 __declspec(property(get=get_EventType, put=set_EventType)) ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  EventType;

/// @brief [DataMember(Name = "id", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Id, put=set_Id)) ::System::Guid  Id;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::KID::Model::VerificationStatus  Status;

/// @brief Field <AgeRange>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__AgeRange_k__BackingField, put=__cordl_internal_set__AgeRange_k__BackingField)) ::KID::Model::AgeRange*  _AgeRange_k__BackingField;

/// @brief Field <EventType>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__EventType_k__BackingField, put=__cordl_internal_set__EventType_k__BackingField)) ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  _EventType_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) ::System::Guid  _Id_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::KID::Model::VerificationStatus  _Status_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::TestVerificationWebhookRequest* New_ctor() ;

static inline ::KID::Model::TestVerificationWebhookRequest* New_ctor(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  eventType, ::System::Guid  id, ::KID::Model::AgeRange*  ageRange, ::KID::Model::VerificationStatus  status) ;

/// @brief Method ToJson, addr 0x9cda9e8, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cda770, size 0x278, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::AgeRange* const& __cordl_internal_get__AgeRange_k__BackingField() const;

constexpr ::KID::Model::AgeRange*& __cordl_internal_get__AgeRange_k__BackingField() ;

constexpr ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum> const& __cordl_internal_get__EventType_k__BackingField() const;

constexpr ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>& __cordl_internal_get__EventType_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__Id_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::KID::Model::VerificationStatus const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::KID::Model::VerificationStatus& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__AgeRange_k__BackingField(::KID::Model::AgeRange*  value) ;

constexpr void __cordl_internal_set__EventType_k__BackingField(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::KID::Model::VerificationStatus  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cda6dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cda6e4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  eventType, ::System::Guid  id, ::KID::Model::AgeRange*  ageRange, ::KID::Model::VerificationStatus  status) ;

/// [CompilerGenerated]
/// @brief Method get_AgeRange, addr 0x9cda760, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeRange* get_AgeRange() ;

/// [CompilerGenerated]
/// @brief Method get_EventType, addr 0x9cda6bc, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum> get_EventType() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0x9cda744, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cda6cc, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::VerificationStatus get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_AgeRange, addr 0x9cda768, size 0x8, virtual false, abstract: false, final false
inline void set_AgeRange(::KID::Model::AgeRange*  value) ;

/// [CompilerGenerated]
/// @brief Method set_EventType, addr 0x9cda6c4, size 0x8, virtual false, abstract: false, final false
inline void set_EventType(::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0x9cda754, size 0xc, virtual false, abstract: false, final false
inline void set_Id(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cda6d4, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::KID::Model::VerificationStatus  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestVerificationWebhookRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestVerificationWebhookRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestVerificationWebhookRequest(TestVerificationWebhookRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestVerificationWebhookRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestVerificationWebhookRequest(TestVerificationWebhookRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31106};

/// [CompilerGenerated]
/// @brief Field <EventType>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum>  ____EventType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::KID::Model::VerificationStatus  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x24, size: 0x10, def value: None
 ::System::Guid  ____Id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeRange>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::KID::Model::AgeRange*  ____AgeRange_k__BackingField;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::TestVerificationWebhookRequest, ____EventType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::TestVerificationWebhookRequest, ____Status_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::TestVerificationWebhookRequest, ____Id_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::KID::Model::TestVerificationWebhookRequest, ____AgeRange_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::KID::Model::TestVerificationWebhookRequest) == 0x38, "Size mismatch!");

} // namespace end def KID::Model
