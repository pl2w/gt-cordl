#pragma once
// IWYU pragma private; include "KID/Model/ClientErrorResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ClientErrorResponse)
// Forward declare root types
namespace KID::Model {
class ClientErrorResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::ClientErrorResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::ClientErrorResponse*, "KID.Model", "ClientErrorResponse");
// [DataContract(Name = "ClientErrorResponse")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.ClientErrorResponse
class CORDL_TYPE ClientErrorResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "error", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

/// @brief [DataMember(Name = "errorMessage", EmitDefaultValue = false)]
 __declspec(property(get=get_ErrorMessage, put=set_ErrorMessage)) ::StringW  ErrorMessage;

/// @brief Field <ErrorMessage>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ErrorMessage_k__BackingField, put=__cordl_internal_set__ErrorMessage_k__BackingField)) ::StringW  _ErrorMessage_k__BackingField;

/// @brief Field <Error>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::ClientErrorResponse* New_ctor() ;

static inline ::KID::Model::ClientErrorResponse* New_ctor(::StringW  error, ::StringW  errorMessage) ;

/// @brief Method ToJson, addr 0x9cd4950, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd47fc, size 0x154, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__ErrorMessage_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ErrorMessage_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorMessage_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd4744, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd474c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  error, ::StringW  errorMessage) ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x9cd47dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_ErrorMessage, addr 0x9cd47ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ErrorMessage() ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x9cd47e4, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ErrorMessage, addr 0x9cd47f4, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorMessage(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientErrorResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientErrorResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientErrorResponse(ClientErrorResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientErrorResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientErrorResponse(ClientErrorResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31069};

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ErrorMessage>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ErrorMessage_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::ClientErrorResponse, ____Error_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::ClientErrorResponse, ____ErrorMessage_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::ClientErrorResponse) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
