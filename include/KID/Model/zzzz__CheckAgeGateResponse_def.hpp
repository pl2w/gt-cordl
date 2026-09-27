#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeGateResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__CheckAgeGateResponse_StatusEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CheckAgeGateResponse)
namespace GlobalNamespace {
struct CheckAgeGateResponse_StatusEnum;
}
namespace KID::Model {
class Challenge;
}
namespace KID::Model {
class Session;
}
// Forward declare root types
namespace KID::Model {
class CheckAgeGateResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::CheckAgeGateResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::CheckAgeGateResponse*, "KID.Model", "CheckAgeGateResponse");
// [DataContract(Name = "CheckAgeGateResponse")]
// Dependencies KID.Model.CheckAgeGateResponse::StatusEnum, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CheckAgeGateResponse
class CORDL_TYPE CheckAgeGateResponse : public ::System::Object {
public:
// Declarations
using StatusEnum = ::GlobalNamespace::CheckAgeGateResponse_StatusEnum;

/// @brief [DataMember(Name = "challenge", EmitDefaultValue = false)]
 __declspec(property(get=get_Challenge, put=set_Challenge)) ::KID::Model::Challenge*  Challenge;

/// @brief [DataMember(Name = "session", EmitDefaultValue = false)]
 __declspec(property(get=get_Session, put=set_Session)) ::KID::Model::Session*  Session;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::CheckAgeGateResponse_StatusEnum  Status;

/// @brief Field <Challenge>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Challenge_k__BackingField, put=__cordl_internal_set__Challenge_k__BackingField)) ::KID::Model::Challenge*  _Challenge_k__BackingField;

/// @brief Field <Session>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Session_k__BackingField, put=__cordl_internal_set__Session_k__BackingField)) ::KID::Model::Session*  _Session_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::GlobalNamespace::CheckAgeGateResponse_StatusEnum  _Status_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CheckAgeGateResponse* New_ctor() ;

static inline ::KID::Model::CheckAgeGateResponse* New_ctor(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  status, ::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge) ;

/// @brief Method ToJson, addr 0x9cd46e8, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd451c, size 0x1cc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::Challenge* const& __cordl_internal_get__Challenge_k__BackingField() const;

constexpr ::KID::Model::Challenge*& __cordl_internal_get__Challenge_k__BackingField() ;

constexpr ::KID::Model::Session* const& __cordl_internal_get__Session_k__BackingField() const;

constexpr ::KID::Model::Session*& __cordl_internal_get__Session_k__BackingField() ;

constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::GlobalNamespace::CheckAgeGateResponse_StatusEnum& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__Challenge_k__BackingField(::KID::Model::Challenge*  value) ;

constexpr void __cordl_internal_set__Session_k__BackingField(::KID::Model::Session*  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd44a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd44a8, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  status, ::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge) ;

/// [CompilerGenerated]
/// @brief Method get_Challenge, addr 0x9cd450c, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::Challenge* get_Challenge() ;

/// [CompilerGenerated]
/// @brief Method get_Session, addr 0x9cd44fc, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::Session* get_Session() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cd4490, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CheckAgeGateResponse_StatusEnum get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_Challenge, addr 0x9cd4514, size 0x8, virtual false, abstract: false, final false
inline void set_Challenge(::KID::Model::Challenge*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Session, addr 0x9cd4504, size 0x8, virtual false, abstract: false, final false
inline void set_Session(::KID::Model::Session*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cd4498, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::CheckAgeGateResponse_StatusEnum  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckAgeGateResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeGateResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckAgeGateResponse(CheckAgeGateResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeGateResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckAgeGateResponse(CheckAgeGateResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31068};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CheckAgeGateResponse_StatusEnum  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Session>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::KID::Model::Session*  ____Session_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Challenge>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::KID::Model::Challenge*  ____Challenge_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CheckAgeGateResponse, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CheckAgeGateResponse, ____Session_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CheckAgeGateResponse, ____Challenge_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CheckAgeGateResponse) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
