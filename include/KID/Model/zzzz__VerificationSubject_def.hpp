#pragma once
// IWYU pragma private; include "KID/Model/VerificationSubject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VerificationSubject)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace KID::Model {
class VerificationSubject;
}
// Write type traits
MARK_REF_T(::KID::Model::VerificationSubject*);
DEFINE_IL2CPP_CLASS(::KID::Model::VerificationSubject*, "KID.Model", "VerificationSubject");
// [DataContract(Name = "VerificationSubject")]
// Dependencies System.DateTime, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.VerificationSubject
class CORDL_TYPE VerificationSubject : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "claimedAge", EmitDefaultValue = false)]
 __declspec(property(get=get_ClaimedAge, put=set_ClaimedAge)) int32_t  ClaimedAge;

/// [DataMember(Name = "claimedDateOfBirth", EmitDefaultValue = false)]
/// @brief [JsonConverter(typeof(KID.Client.OpenAPIDateConverter))]
 __declspec(property(get=get_ClaimedDateOfBirth, put=set_ClaimedDateOfBirth)) ::System::DateTime  ClaimedDateOfBirth;

/// @brief [DataMember(Name = "email", EmitDefaultValue = false)]
 __declspec(property(get=get_Email, put=set_Email)) ::StringW  Email;

/// @brief Field <ClaimedAge>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__ClaimedAge_k__BackingField, put=__cordl_internal_set__ClaimedAge_k__BackingField)) int32_t  _ClaimedAge_k__BackingField;

/// @brief Field <ClaimedDateOfBirth>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClaimedDateOfBirth_k__BackingField, put=__cordl_internal_set__ClaimedDateOfBirth_k__BackingField)) ::System::DateTime  _ClaimedDateOfBirth_k__BackingField;

/// @brief Field <Email>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Email_k__BackingField, put=__cordl_internal_set__Email_k__BackingField)) ::StringW  _Email_k__BackingField;

static inline ::KID::Model::VerificationSubject* New_ctor(::StringW  email, int32_t  claimedAge, ::System::DateTime  claimedDateOfBirth) ;

/// @brief Method ToJson, addr 0x9cdb340, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cdb16c, size 0x1d4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__ClaimedAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ClaimedAge_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__ClaimedDateOfBirth_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__ClaimedDateOfBirth_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Email_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Email_k__BackingField() ;

constexpr void __cordl_internal_set__ClaimedAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ClaimedDateOfBirth_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Email_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9cdb0f0, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::StringW  email, int32_t  claimedAge, ::System::DateTime  claimedDateOfBirth) ;

/// [CompilerGenerated]
/// @brief Method get_ClaimedAge, addr 0x9cdb14c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ClaimedAge() ;

/// [CompilerGenerated]
/// @brief Method get_ClaimedDateOfBirth, addr 0x9cdb15c, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_ClaimedDateOfBirth() ;

/// [CompilerGenerated]
/// @brief Method get_Email, addr 0x9cdb13c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Email() ;

/// [CompilerGenerated]
/// @brief Method set_ClaimedAge, addr 0x9cdb154, size 0x8, virtual false, abstract: false, final false
inline void set_ClaimedAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ClaimedDateOfBirth, addr 0x9cdb164, size 0x8, virtual false, abstract: false, final false
inline void set_ClaimedDateOfBirth(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Email, addr 0x9cdb144, size 0x8, virtual false, abstract: false, final false
inline void set_Email(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerificationSubject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerificationSubject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerificationSubject(VerificationSubject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerificationSubject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerificationSubject(VerificationSubject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31113};

/// [CompilerGenerated]
/// @brief Field <Email>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Email_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ClaimedAge>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____ClaimedAge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ClaimedDateOfBirth>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ____ClaimedDateOfBirth_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::VerificationSubject, ____Email_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::VerificationSubject, ____ClaimedAge_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::VerificationSubject, ____ClaimedDateOfBirth_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::VerificationSubject) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
