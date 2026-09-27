#pragma once
// IWYU pragma private; include "KID/Model/CreateParentalConsentChallengeResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateParentalConsentChallengeResponse)
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class CreateParentalConsentChallengeResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateParentalConsentChallengeResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateParentalConsentChallengeResponse*, "KID.Model", "CreateParentalConsentChallengeResponse");
// [DataContract(Name = "CreateParentalConsentChallengeResponse")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateParentalConsentChallengeResponse
class CORDL_TYPE CreateParentalConsentChallengeResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "challengeId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ChallengeId, put=set_ChallengeId)) ::System::Guid  ChallengeId;

/// @brief [DataMember(Name = "longUrl", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_LongUrl, put=set_LongUrl)) ::StringW  LongUrl;

/// @brief Field <ChallengeId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__ChallengeId_k__BackingField, put=__cordl_internal_set__ChallengeId_k__BackingField)) ::System::Guid  _ChallengeId_k__BackingField;

/// @brief Field <LongUrl>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__LongUrl_k__BackingField, put=__cordl_internal_set__LongUrl_k__BackingField)) ::StringW  _LongUrl_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateParentalConsentChallengeResponse* New_ctor() ;

static inline ::KID::Model::CreateParentalConsentChallengeResponse* New_ctor(::System::Guid  challengeId, ::StringW  longUrl) ;

/// @brief Method ToJson, addr 0x9cd67a4, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd6614, size 0x190, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Guid const& __cordl_internal_get__ChallengeId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ChallengeId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__LongUrl_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LongUrl_k__BackingField() ;

constexpr void __cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__LongUrl_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd6558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd6560, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  challengeId, ::StringW  longUrl) ;

/// [CompilerGenerated]
/// @brief Method get_ChallengeId, addr 0x9cd65f0, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_ChallengeId() ;

/// [CompilerGenerated]
/// @brief Method get_LongUrl, addr 0x9cd6604, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LongUrl() ;

/// [CompilerGenerated]
/// @brief Method set_ChallengeId, addr 0x9cd65fc, size 0x8, virtual false, abstract: false, final false
inline void set_ChallengeId(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_LongUrl, addr 0x9cd660c, size 0x8, virtual false, abstract: false, final false
inline void set_LongUrl(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateParentalConsentChallengeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateParentalConsentChallengeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateParentalConsentChallengeResponse(CreateParentalConsentChallengeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateParentalConsentChallengeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateParentalConsentChallengeResponse(CreateParentalConsentChallengeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31079};

/// [CompilerGenerated]
/// @brief Field <ChallengeId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____ChallengeId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LongUrl>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____LongUrl_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateParentalConsentChallengeResponse, ____ChallengeId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateParentalConsentChallengeResponse, ____LongUrl_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateParentalConsentChallengeResponse) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
