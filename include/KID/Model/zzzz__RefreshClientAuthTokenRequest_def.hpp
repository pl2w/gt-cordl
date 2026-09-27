#pragma once
// IWYU pragma private; include "KID/Model/RefreshClientAuthTokenRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RefreshClientAuthTokenRequest)
// Forward declare root types
namespace KID::Model {
class RefreshClientAuthTokenRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::RefreshClientAuthTokenRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::RefreshClientAuthTokenRequest*, "KID.Model", "RefreshClientAuthTokenRequest");
// [DataContract(Name = "refreshClientAuthToken_request")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.RefreshClientAuthTokenRequest
class CORDL_TYPE RefreshClientAuthTokenRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "refreshToken", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_RefreshToken, put=set_RefreshToken)) ::StringW  RefreshToken;

/// @brief Field <RefreshToken>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__RefreshToken_k__BackingField, put=__cordl_internal_set__RefreshToken_k__BackingField)) ::StringW  _RefreshToken_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::RefreshClientAuthTokenRequest* New_ctor() ;

static inline ::KID::Model::RefreshClientAuthTokenRequest* New_ctor(::StringW  refreshToken) ;

/// @brief Method ToJson, addr 0x9cd8ea0, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd8d98, size 0x108, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__RefreshToken_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RefreshToken_k__BackingField() ;

constexpr void __cordl_internal_set__RefreshToken_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd8d04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd8d0c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  refreshToken) ;

/// [CompilerGenerated]
/// @brief Method get_RefreshToken, addr 0x9cd8d88, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RefreshToken() ;

/// [CompilerGenerated]
/// @brief Method set_RefreshToken, addr 0x9cd8d90, size 0x8, virtual false, abstract: false, final false
inline void set_RefreshToken(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RefreshClientAuthTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RefreshClientAuthTokenRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RefreshClientAuthTokenRequest(RefreshClientAuthTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RefreshClientAuthTokenRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RefreshClientAuthTokenRequest(RefreshClientAuthTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31094};

/// [CompilerGenerated]
/// @brief Field <RefreshToken>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____RefreshToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::RefreshClientAuthTokenRequest, ____RefreshToken_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::KID::Model::RefreshClientAuthTokenRequest) == 0x18, "Size mismatch!");

} // namespace end def KID::Model
