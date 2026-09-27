#pragma once
// IWYU pragma private; include "KID/Model/CreateAdultVerificationResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateAdultVerificationResponse)
namespace System {
struct Guid;
}
// Forward declare root types
namespace KID::Model {
class CreateAdultVerificationResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::CreateAdultVerificationResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::CreateAdultVerificationResponse*, "KID.Model", "CreateAdultVerificationResponse");
// [DataContract(Name = "CreateAdultVerificationResponse")]
// Dependencies System.Guid, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CreateAdultVerificationResponse
class CORDL_TYPE CreateAdultVerificationResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "id", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Id, put=set_Id)) ::System::Guid  Id;

/// @brief [DataMember(Name = "url", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

/// @brief Field <Id>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) ::System::Guid  _Id_k__BackingField;

/// @brief Field <Url>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Url_k__BackingField, put=__cordl_internal_set__Url_k__BackingField)) ::StringW  _Url_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CreateAdultVerificationResponse* New_ctor() ;

static inline ::KID::Model::CreateAdultVerificationResponse* New_ctor(::System::Guid  id, ::StringW  url) ;

/// @brief Method ToJson, addr 0x9cd4f5c, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd4dcc, size 0x190, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Guid const& __cordl_internal_get__Id_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Url_k__BackingField() ;

constexpr void __cordl_internal_set__Id_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Url_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd4d10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd4d18, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  id, ::StringW  url) ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0x9cd4da8, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_Url, addr 0x9cd4dbc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Url() ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0x9cd4db4, size 0x8, virtual false, abstract: false, final false
inline void set_Id(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Url, addr 0x9cd4dc4, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateAdultVerificationResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateAdultVerificationResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateAdultVerificationResponse(CreateAdultVerificationResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateAdultVerificationResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateAdultVerificationResponse(CreateAdultVerificationResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31071};

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ____Id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Url>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Url_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CreateAdultVerificationResponse, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CreateAdultVerificationResponse, ____Url_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CreateAdultVerificationResponse) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
