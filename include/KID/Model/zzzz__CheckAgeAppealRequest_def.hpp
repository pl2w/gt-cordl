#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeAppealRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CheckAgeAppealRequest)
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class CheckAgeAppealRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CheckAgeAppealRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CheckAgeAppealRequest*, "KID.Model", "CheckAgeAppealRequest");
// [DataContract(Name = "CheckAgeAppealRequest")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CheckAgeAppealRequest
class CORDL_TYPE CheckAgeAppealRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "email", EmitDefaultValue = false)]
 __declspec(property(get=get_Email, put=set_Email)) ::StringW  Email;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief [DataMember(Name = "playerId", EmitDefaultValue = false)]
 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::System::Guid  PlayerId;

/// @brief Field <Email>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Email_k__BackingField, put=__cordl_internal_set__Email_k__BackingField)) ::StringW  _Email_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief Field <PlayerId>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__PlayerId_k__BackingField, put=__cordl_internal_set__PlayerId_k__BackingField)) ::System::Guid  _PlayerId_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CheckAgeAppealRequest* New_ctor() ;

static inline ::KID::Model::CheckAgeAppealRequest* New_ctor(::StringW  email, ::System::Guid  playerId, ::StringW  jurisdiction) ;

/// @brief Method ToJson, addr 0x9cd3ef0, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd3d1c, size 0x1d4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Email_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Email_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__PlayerId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__PlayerId_k__BackingField() ;

constexpr void __cordl_internal_set__Email_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayerId_k__BackingField(::System::Guid  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd3c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd3c40, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::StringW  email, ::System::Guid  playerId, ::StringW  jurisdiction) ;

/// [CompilerGenerated]
/// @brief Method get_Email, addr 0x9cd3ce8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Email() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd3d0c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method get_PlayerId, addr 0x9cd3cf8, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_PlayerId() ;

/// [CompilerGenerated]
/// @brief Method set_Email, addr 0x9cd3cf0, size 0x8, virtual false, abstract: false, final false
inline void set_Email(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd3d14, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayerId, addr 0x9cd3d04, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerId(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckAgeAppealRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeAppealRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckAgeAppealRequest(CheckAgeAppealRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeAppealRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckAgeAppealRequest(CheckAgeAppealRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31063};

/// [CompilerGenerated]
/// @brief Field <Email>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Email_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlayerId>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  ____PlayerId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CheckAgeAppealRequest, ____Email_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CheckAgeAppealRequest, ____PlayerId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CheckAgeAppealRequest, ____Jurisdiction_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CheckAgeAppealRequest) == 0x30, "Size mismatch!");

} // namespace end def KID::Model
