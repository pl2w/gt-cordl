#pragma once
// IWYU pragma private; include "KID/Model/GenerateChallengeOTPResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenerateChallengeOTPResponse)
// Forward declare root types
namespace KID::Model {
class GenerateChallengeOTPResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::GenerateChallengeOTPResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::GenerateChallengeOTPResponse*, "KID.Model", "GenerateChallengeOTPResponse");
// [DataContract(Name = "GenerateChallengeOTPResponse")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.GenerateChallengeOTPResponse
class CORDL_TYPE GenerateChallengeOTPResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "expiresAt", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ExpiresAt, put=set_ExpiresAt)) ::StringW  ExpiresAt;

/// @brief [DataMember(Name = "otp", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Otp, put=set_Otp)) ::StringW  Otp;

/// @brief Field <ExpiresAt>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ExpiresAt_k__BackingField, put=__cordl_internal_set__ExpiresAt_k__BackingField)) ::StringW  _ExpiresAt_k__BackingField;

/// @brief Field <Otp>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Otp_k__BackingField, put=__cordl_internal_set__Otp_k__BackingField)) ::StringW  _Otp_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::GenerateChallengeOTPResponse* New_ctor() ;

static inline ::KID::Model::GenerateChallengeOTPResponse* New_ctor(::StringW  otp, ::StringW  expiresAt) ;

/// @brief Method ToJson, addr 0x9cd733c, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd71e8, size 0x154, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__ExpiresAt_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ExpiresAt_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Otp_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Otp_k__BackingField() ;

constexpr void __cordl_internal_set__ExpiresAt_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Otp_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd710c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd7114, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::StringW  otp, ::StringW  expiresAt) ;

/// [CompilerGenerated]
/// @brief Method get_ExpiresAt, addr 0x9cd71d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ExpiresAt() ;

/// [CompilerGenerated]
/// @brief Method get_Otp, addr 0x9cd71c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Otp() ;

/// [CompilerGenerated]
/// @brief Method set_ExpiresAt, addr 0x9cd71e0, size 0x8, virtual false, abstract: false, final false
inline void set_ExpiresAt(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Otp, addr 0x9cd71d0, size 0x8, virtual false, abstract: false, final false
inline void set_Otp(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenerateChallengeOTPResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenerateChallengeOTPResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenerateChallengeOTPResponse(GenerateChallengeOTPResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenerateChallengeOTPResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenerateChallengeOTPResponse(GenerateChallengeOTPResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31083};

/// [CompilerGenerated]
/// @brief Field <Otp>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Otp_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ExpiresAt>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ExpiresAt_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::GenerateChallengeOTPResponse, ____Otp_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GenerateChallengeOTPResponse, ____ExpiresAt_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::GenerateChallengeOTPResponse) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
