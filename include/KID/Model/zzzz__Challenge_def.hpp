#pragma once
// IWYU pragma private; include "KID/Model/Challenge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__ChallengeType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Challenge)
namespace KID::Model {
struct ChallengeType;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class Challenge;
}
// Write type traits
MARK_REF_T(::KID::Model::Challenge*);
DEFINE_IL2CPP_CLASS(::KID::Model::Challenge*, "KID.Model", "Challenge");
// [DataContract(Name = "Challenge")]
// Dependencies KID.Model.ChallengeType, System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.Challenge
class CORDL_TYPE Challenge : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "challengeId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ChallengeId, put=set_ChallengeId)) ::System::Guid  ChallengeId;

/// @brief [DataMember(Name = "childLiteAccessEnabled", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ChildLiteAccessEnabled, put=set_ChildLiteAccessEnabled)) bool  ChildLiteAccessEnabled;

/// @brief [DataMember(Name = "oneTimePassword", EmitDefaultValue = false)]
 __declspec(property(get=get_OneTimePassword, put=set_OneTimePassword)) ::StringW  OneTimePassword;

/// @brief [DataMember(Name = "type", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Type, put=set_Type)) ::KID::Model::ChallengeType  Type;

/// @brief [DataMember(Name = "url", EmitDefaultValue = false)]
 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

/// @brief Field <ChallengeId>k__BackingField, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get__ChallengeId_k__BackingField, put=__cordl_internal_set__ChallengeId_k__BackingField)) ::System::Guid  _ChallengeId_k__BackingField;

/// @brief Field <ChildLiteAccessEnabled>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__ChildLiteAccessEnabled_k__BackingField, put=__cordl_internal_set__ChildLiteAccessEnabled_k__BackingField)) bool  _ChildLiteAccessEnabled_k__BackingField;

/// @brief Field <OneTimePassword>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__OneTimePassword_k__BackingField, put=__cordl_internal_set__OneTimePassword_k__BackingField)) ::StringW  _OneTimePassword_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::KID::Model::ChallengeType  _Type_k__BackingField;

/// @brief Field <Url>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Url_k__BackingField, put=__cordl_internal_set__Url_k__BackingField)) ::StringW  _Url_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::Challenge* New_ctor() ;

static inline ::KID::Model::Challenge* New_ctor(::System::Guid  challengeId, ::KID::Model::ChallengeType  type, ::StringW  url, ::StringW  oneTimePassword, bool  childLiteAccessEnabled) ;

/// @brief Method ToJson, addr 0x9cd3bdc, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd3950, size 0x28c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Guid const& __cordl_internal_get__ChallengeId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ChallengeId_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ChildLiteAccessEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__ChildLiteAccessEnabled_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__OneTimePassword_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__OneTimePassword_k__BackingField() ;

constexpr ::KID::Model::ChallengeType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::KID::Model::ChallengeType& __cordl_internal_get__Type_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Url_k__BackingField() ;

constexpr void __cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__ChildLiteAccessEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OneTimePassword_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::KID::Model::ChallengeType  value) ;

constexpr void __cordl_internal_set__Url_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd3888, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd3890, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  challengeId, ::KID::Model::ChallengeType  type, ::StringW  url, ::StringW  oneTimePassword, bool  childLiteAccessEnabled) ;

/// [CompilerGenerated]
/// @brief Method get_ChallengeId, addr 0x9cd3904, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_ChallengeId() ;

/// [CompilerGenerated]
/// @brief Method get_ChildLiteAccessEnabled, addr 0x9cd3940, size 0x8, virtual false, abstract: false, final false
inline bool get_ChildLiteAccessEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_OneTimePassword, addr 0x9cd3930, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_OneTimePassword() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x9cd3878, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::ChallengeType get_Type() ;

/// [CompilerGenerated]
/// @brief Method get_Url, addr 0x9cd3920, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Url() ;

/// [CompilerGenerated]
/// @brief Method set_ChallengeId, addr 0x9cd3914, size 0xc, virtual false, abstract: false, final false
inline void set_ChallengeId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_ChildLiteAccessEnabled, addr 0x9cd3948, size 0x8, virtual false, abstract: false, final false
inline void set_ChildLiteAccessEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_OneTimePassword, addr 0x9cd3938, size 0x8, virtual false, abstract: false, final false
inline void set_OneTimePassword(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0x9cd3880, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::KID::Model::ChallengeType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Url, addr 0x9cd3928, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Challenge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Challenge(Challenge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Challenge(Challenge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31061};

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::KID::Model::ChallengeType  ____Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChallengeId>k__BackingField, offset: 0x14, size: 0x10, def value: None
 ::System::Guid  ____ChallengeId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Url>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Url_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OneTimePassword>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____OneTimePassword_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChildLiteAccessEnabled>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____ChildLiteAccessEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::Challenge, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Challenge, ____ChallengeId_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Challenge, ____Url_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Challenge, ____OneTimePassword_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::KID::Model::Challenge, ____ChildLiteAccessEnabled_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::KID::Model::Challenge) == 0x40, "Size mismatch!");

} // namespace end def KID::Model
