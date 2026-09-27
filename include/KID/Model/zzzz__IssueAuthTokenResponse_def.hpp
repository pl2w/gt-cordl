#pragma once
// IWYU pragma private; include "KID/Model/IssueAuthTokenResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IssueAuthTokenResponse)
// Forward declare root types
namespace KID::Model {
class IssueAuthTokenResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::IssueAuthTokenResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::IssueAuthTokenResponse*, "KID.Model", "IssueAuthTokenResponse");
// [DataContract(Name = "IssueAuthTokenResponse")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.IssueAuthTokenResponse
class CORDL_TYPE IssueAuthTokenResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "accessToken", EmitDefaultValue = false)]
 __declspec(property(get=get_AccessToken, put=set_AccessToken)) ::StringW  AccessToken;

/// @brief [DataMember(Name = "refreshToken", EmitDefaultValue = false)]
 __declspec(property(get=get_RefreshToken, put=set_RefreshToken)) ::StringW  RefreshToken;

/// @brief Field <AccessToken>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AccessToken_k__BackingField, put=__cordl_internal_set__AccessToken_k__BackingField)) ::StringW  _AccessToken_k__BackingField;

/// @brief Field <RefreshToken>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__RefreshToken_k__BackingField, put=__cordl_internal_set__RefreshToken_k__BackingField)) ::StringW  _RefreshToken_k__BackingField;

static inline ::KID::Model::IssueAuthTokenResponse* New_ctor(::StringW  accessToken, ::StringW  refreshToken) ;

/// @brief Method ToJson, addr 0x9cd89a4, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd8850, size 0x154, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__AccessToken_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AccessToken_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__RefreshToken_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RefreshToken_k__BackingField() ;

constexpr void __cordl_internal_set__AccessToken_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__RefreshToken_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9cd87ec, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  accessToken, ::StringW  refreshToken) ;

/// [CompilerGenerated]
/// @brief Method get_AccessToken, addr 0x9cd8830, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_AccessToken() ;

/// [CompilerGenerated]
/// @brief Method get_RefreshToken, addr 0x9cd8840, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RefreshToken() ;

/// [CompilerGenerated]
/// @brief Method set_AccessToken, addr 0x9cd8838, size 0x8, virtual false, abstract: false, final false
inline void set_AccessToken(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_RefreshToken, addr 0x9cd8848, size 0x8, virtual false, abstract: false, final false
inline void set_RefreshToken(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IssueAuthTokenResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IssueAuthTokenResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IssueAuthTokenResponse(IssueAuthTokenResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IssueAuthTokenResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IssueAuthTokenResponse(IssueAuthTokenResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31091};

/// [CompilerGenerated]
/// @brief Field <AccessToken>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____AccessToken_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RefreshToken>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____RefreshToken_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::IssueAuthTokenResponse, ____AccessToken_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::IssueAuthTokenResponse, ____RefreshToken_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::IssueAuthTokenResponse) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
