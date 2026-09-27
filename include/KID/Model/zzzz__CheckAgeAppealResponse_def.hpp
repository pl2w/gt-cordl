#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeAppealResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__CheckAgeAppealResponse_StatusEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CheckAgeAppealResponse)
namespace GlobalNamespace {
struct CheckAgeAppealResponse_StatusEnum;
}
// Forward declare root types
namespace KID::Model {
class CheckAgeAppealResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::CheckAgeAppealResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::CheckAgeAppealResponse*, "KID.Model", "CheckAgeAppealResponse");
// [DataContract(Name = "CheckAgeAppealResponse")]
// Dependencies KID.Model.CheckAgeAppealResponse::StatusEnum, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CheckAgeAppealResponse
class CORDL_TYPE CheckAgeAppealResponse : public ::System::Object {
public:
// Declarations
using StatusEnum = ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  Status;

/// @brief [DataMember(Name = "url", EmitDefaultValue = false)]
 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  _Status_k__BackingField;

/// @brief Field <Url>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Url_k__BackingField, put=__cordl_internal_set__Url_k__BackingField)) ::StringW  _Url_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CheckAgeAppealResponse* New_ctor() ;

static inline ::KID::Model::CheckAgeAppealResponse* New_ctor(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  status, ::StringW  url) ;

/// @brief Method ToJson, addr 0x9cd4134, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd3fac, size 0x188, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum& __cordl_internal_get__Status_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Url_k__BackingField() ;

constexpr void __cordl_internal_set__Status_k__BackingField(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  value) ;

constexpr void __cordl_internal_set__Url_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd3f5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd3f64, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  status, ::StringW  url) ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cd3f4c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum get_Status() ;

/// [CompilerGenerated]
/// @brief Method get_Url, addr 0x9cd3f9c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Url() ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cd3f54, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  value) ;

/// [CompilerGenerated]
/// @brief Method set_Url, addr 0x9cd3fa4, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckAgeAppealResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeAppealResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckAgeAppealResponse(CheckAgeAppealResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeAppealResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckAgeAppealResponse(CheckAgeAppealResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31065};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Url>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Url_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CheckAgeAppealResponse, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CheckAgeAppealResponse, ____Url_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CheckAgeAppealResponse) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
