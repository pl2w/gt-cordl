#pragma once
// IWYU pragma private; include "KID/Model/SendEmailRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SendEmailRequest)
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class SendEmailRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::SendEmailRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::SendEmailRequest*, "KID.Model", "SendEmailRequest");
// [DataContract(Name = "SendEmailRequest")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.SendEmailRequest
class CORDL_TYPE SendEmailRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "challengeId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ChallengeId, put=set_ChallengeId)) ::System::Guid  ChallengeId;

/// @brief [DataMember(Name = "email", EmitDefaultValue = false)]
 __declspec(property(get=get_Email, put=set_Email)) ::StringW  Email;

/// @brief [DataMember(Name = "locale", EmitDefaultValue = false)]
 __declspec(property(get=get_Locale, put=set_Locale)) ::StringW  Locale;

/// @brief Field <ChallengeId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__ChallengeId_k__BackingField, put=__cordl_internal_set__ChallengeId_k__BackingField)) ::System::Guid  _ChallengeId_k__BackingField;

/// @brief Field <Email>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Email_k__BackingField, put=__cordl_internal_set__Email_k__BackingField)) ::StringW  _Email_k__BackingField;

/// @brief Field <Locale>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locale_k__BackingField, put=__cordl_internal_set__Locale_k__BackingField)) ::StringW  _Locale_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::SendEmailRequest* New_ctor() ;

static inline ::KID::Model::SendEmailRequest* New_ctor(::System::Guid  challengeId, ::StringW  email, ::StringW  locale) ;

/// @brief Method ToJson, addr 0x9cd935c, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd9188, size 0x1d4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Guid const& __cordl_internal_get__ChallengeId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ChallengeId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Email_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Email_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Locale_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Locale_k__BackingField() ;

constexpr void __cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Email_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Locale_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd90f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd90fc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  challengeId, ::StringW  email, ::StringW  locale) ;

/// [CompilerGenerated]
/// @brief Method get_ChallengeId, addr 0x9cd9154, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_ChallengeId() ;

/// [CompilerGenerated]
/// @brief Method get_Email, addr 0x9cd9168, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Email() ;

/// [CompilerGenerated]
/// @brief Method get_Locale, addr 0x9cd9178, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Locale() ;

/// [CompilerGenerated]
/// @brief Method set_ChallengeId, addr 0x9cd9160, size 0x8, virtual false, abstract: false, final false
inline void set_ChallengeId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Email, addr 0x9cd9170, size 0x8, virtual false, abstract: false, final false
inline void set_Email(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Locale, addr 0x9cd9180, size 0x8, virtual false, abstract: false, final false
inline void set_Locale(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendEmailRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendEmailRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SendEmailRequest(SendEmailRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendEmailRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendEmailRequest(SendEmailRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31096};

/// [CompilerGenerated]
/// @brief Field <ChallengeId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____ChallengeId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Email>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Email_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Locale>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Locale_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::SendEmailRequest, ____ChallengeId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::SendEmailRequest, ____Email_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::KID::Model::SendEmailRequest, ____Locale_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::KID::Model::SendEmailRequest) == 0x30, "Size mismatch!");

} // namespace end def KID::Model
