#pragma once
// IWYU pragma private; include "KID/Model/CreateClientAuthTokenRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateClientAuthTokenRequest)
// Forward declare root types
namespace KID::Model {
class CreateClientAuthTokenRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateClientAuthTokenRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateClientAuthTokenRequest*, "KID.Model", "CreateClientAuthTokenRequest");
// [DataContract(Name = "CreateClientAuthTokenRequest")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateClientAuthTokenRequest
class CORDL_TYPE CreateClientAuthTokenRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "clientId", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ClientId, put=set_ClientId)) ::StringW  ClientId;

/// @brief Field <ClientId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClientId_k__BackingField, put=__cordl_internal_set__ClientId_k__BackingField)) ::StringW  _ClientId_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateClientAuthTokenRequest* New_ctor() ;

static inline ::KID::Model::CreateClientAuthTokenRequest* New_ctor(::StringW  clientId) ;

/// @brief Method ToJson, addr 0x9cd5eb0, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd5da8, size 0x108, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__ClientId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ClientId_k__BackingField() ;

constexpr void __cordl_internal_set__ClientId_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd5d14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd5d1c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  clientId) ;

/// [CompilerGenerated]
/// @brief Method get_ClientId, addr 0x9cd5d98, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ClientId() ;

/// [CompilerGenerated]
/// @brief Method set_ClientId, addr 0x9cd5da0, size 0x8, virtual false, abstract: false, final false
inline void set_ClientId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateClientAuthTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateClientAuthTokenRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateClientAuthTokenRequest(CreateClientAuthTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateClientAuthTokenRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateClientAuthTokenRequest(CreateClientAuthTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31076};

/// [CompilerGenerated]
/// @brief Field <ClientId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ClientId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateClientAuthTokenRequest, ____ClientId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateClientAuthTokenRequest) == 0x18, "Size mismatch!");

} // namespace end def KID::Model
