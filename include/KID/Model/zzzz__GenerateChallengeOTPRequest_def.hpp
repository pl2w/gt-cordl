#pragma once
// IWYU pragma private; include "KID/Model/GenerateChallengeOTPRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenerateChallengeOTPRequest)
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class GenerateChallengeOTPRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::GenerateChallengeOTPRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::GenerateChallengeOTPRequest*, "KID.Model", "GenerateChallengeOTPRequest");
// [DataContract(Name = "GenerateChallengeOTPRequest")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.GenerateChallengeOTPRequest
class CORDL_TYPE GenerateChallengeOTPRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "challengeId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ChallengeId, put=set_ChallengeId)) ::System::Guid  ChallengeId;

/// @brief Field <ChallengeId>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__ChallengeId_k__BackingField, put=__cordl_internal_set__ChallengeId_k__BackingField)) ::System::Guid  _ChallengeId_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::GenerateChallengeOTPRequest* New_ctor() ;

static inline ::KID::Model::GenerateChallengeOTPRequest* New_ctor(::System::Guid  challengeId) ;

/// @brief Method ToJson, addr 0x9cd70b0, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd6f64, size 0x14c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Guid const& __cordl_internal_get__ChallengeId_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__ChallengeId_k__BackingField() ;

constexpr void __cordl_internal_set__ChallengeId_k__BackingField(::System::Guid  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd6f1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd6f24, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  challengeId) ;

/// [CompilerGenerated]
/// @brief Method get_ChallengeId, addr 0x9cd6f50, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_ChallengeId() ;

/// [CompilerGenerated]
/// @brief Method set_ChallengeId, addr 0x9cd6f5c, size 0x8, virtual false, abstract: false, final false
inline void set_ChallengeId(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenerateChallengeOTPRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenerateChallengeOTPRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenerateChallengeOTPRequest(GenerateChallengeOTPRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenerateChallengeOTPRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenerateChallengeOTPRequest(GenerateChallengeOTPRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31082};

/// [CompilerGenerated]
/// @brief Field <ChallengeId>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____ChallengeId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::GenerateChallengeOTPRequest, ____ChallengeId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::KID::Model::GenerateChallengeOTPRequest) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
