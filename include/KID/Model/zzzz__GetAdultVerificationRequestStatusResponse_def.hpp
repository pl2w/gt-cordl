#pragma once
// IWYU pragma private; include "KID/Model/GetAdultVerificationRequestStatusResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__VerificationStatus_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetAdultVerificationRequestStatusResponse)
namespace KID::Model {
class AgeRange;
}
namespace KID::Model {
struct VerificationStatus;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class GetAdultVerificationRequestStatusResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::GetAdultVerificationRequestStatusResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::GetAdultVerificationRequestStatusResponse*, "KID.Model", "GetAdultVerificationRequestStatusResponse");
// [DataContract(Name = "GetAdultVerificationRequestStatusResponse")]
// Dependencies KID.Model.VerificationStatus, System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.GetAdultVerificationRequestStatusResponse
class CORDL_TYPE GetAdultVerificationRequestStatusResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "ageRange", EmitDefaultValue = false)]
 __declspec(property(get=get_AgeRange, put=set_AgeRange)) ::KID::Model::AgeRange*  AgeRange;

/// @brief [DataMember(Name = "id", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Id, put=set_Id)) ::System::Guid  Id;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::KID::Model::VerificationStatus  Status;

/// @brief Field <AgeRange>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__AgeRange_k__BackingField, put=__cordl_internal_set__AgeRange_k__BackingField)) ::KID::Model::AgeRange*  _AgeRange_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) ::System::Guid  _Id_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::KID::Model::VerificationStatus  _Status_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::GetAdultVerificationRequestStatusResponse* New_ctor() ;

static inline ::KID::Model::GetAdultVerificationRequestStatusResponse* New_ctor(::System::Guid  id, ::KID::Model::VerificationStatus  status, ::KID::Model::AgeRange*  ageRange) ;

/// @brief Method ToJson, addr 0x9cd7630, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd742c, size 0x204, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::AgeRange* const& __cordl_internal_get__AgeRange_k__BackingField() const;

constexpr ::KID::Model::AgeRange*& __cordl_internal_get__AgeRange_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__Id_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::KID::Model::VerificationStatus const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::KID::Model::VerificationStatus& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__AgeRange_k__BackingField(::KID::Model::AgeRange*  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::KID::Model::VerificationStatus  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd73a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd73b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  id, ::KID::Model::VerificationStatus  status, ::KID::Model::AgeRange*  ageRange) ;

/// [CompilerGenerated]
/// @brief Method get_AgeRange, addr 0x9cd741c, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeRange* get_AgeRange() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0x9cd7400, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cd7398, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::VerificationStatus get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_AgeRange, addr 0x9cd7424, size 0x8, virtual false, abstract: false, final false
inline void set_AgeRange(::KID::Model::AgeRange*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0x9cd7410, size 0xc, virtual false, abstract: false, final false
inline void set_Id(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cd73a0, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::KID::Model::VerificationStatus  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAdultVerificationRequestStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAdultVerificationRequestStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAdultVerificationRequestStatusResponse(GetAdultVerificationRequestStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAdultVerificationRequestStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAdultVerificationRequestStatusResponse(GetAdultVerificationRequestStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31084};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::KID::Model::VerificationStatus  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x14, size: 0x10, def value: None
 ::System::Guid  ____Id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeRange>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::KID::Model::AgeRange*  ____AgeRange_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::GetAdultVerificationRequestStatusResponse, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAdultVerificationRequestStatusResponse, ____Id_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAdultVerificationRequestStatusResponse, ____AgeRange_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::KID::Model::GetAdultVerificationRequestStatusResponse) == 0x30, "Size mismatch!");

} // namespace end def KID::Model
