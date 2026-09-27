#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyAgeResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VerifyAgeResponse)
namespace GlobalNamespace {
class KIDDefaultSession;
}
namespace GlobalNamespace {
struct SessionStatus;
}
namespace KID::Model {
class Session;
}
// Forward declare root types
namespace GlobalNamespace {
class VerifyAgeResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VerifyAgeResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerifyAgeResponse*, "", "VerifyAgeResponse");
// Dependencies SessionStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VerifyAgeResponse
class CORDL_TYPE VerifyAgeResponse : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DefaultSession, put=set_DefaultSession)) ::GlobalNamespace::KIDDefaultSession*  DefaultSession;

/// @brief [Nullable(2)]
 __declspec(property(get=get_Session, put=set_Session)) ::KID::Model::Session*  Session;

 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::SessionStatus  Status;

/// @brief Field <DefaultSession>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultSession_k__BackingField, put=__cordl_internal_set__DefaultSession_k__BackingField)) ::GlobalNamespace::KIDDefaultSession*  _DefaultSession_k__BackingField;

/// @brief Field <Session>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Session_k__BackingField, put=__cordl_internal_set__Session_k__BackingField)) ::KID::Model::Session*  _Session_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::GlobalNamespace::SessionStatus  _Status_k__BackingField;

static inline ::GlobalNamespace::VerifyAgeResponse* New_ctor() ;

constexpr ::GlobalNamespace::KIDDefaultSession* const& __cordl_internal_get__DefaultSession_k__BackingField() const;

constexpr ::GlobalNamespace::KIDDefaultSession*& __cordl_internal_get__DefaultSession_k__BackingField() ;

constexpr ::KID::Model::Session* const& __cordl_internal_get__Session_k__BackingField() const;

constexpr ::KID::Model::Session*& __cordl_internal_get__Session_k__BackingField() ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__DefaultSession_k__BackingField(::GlobalNamespace::KIDDefaultSession*  value) ;

constexpr void __cordl_internal_set__Session_k__BackingField(::KID::Model::Session*  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::GlobalNamespace::SessionStatus  value) ;

/// @brief Method .ctor, addr 0x5a26324, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_DefaultSession, addr 0x5a26314, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::KIDDefaultSession* get_DefaultSession() ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method get_Session, addr 0x5a26304, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::Session* get_Session() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x5a262f4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SessionStatus get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_DefaultSession, addr 0x5a2631c, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultSession(::GlobalNamespace::KIDDefaultSession*  value) ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method set_Session, addr 0x5a2630c, size 0x8, virtual false, abstract: false, final false
inline void set_Session(::KID::Model::Session*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x5a262fc, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::SessionStatus  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerifyAgeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerifyAgeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerifyAgeResponse(VerifyAgeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerifyAgeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerifyAgeResponse(VerifyAgeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2890};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ____Status_k__BackingField;

/// [Nullable(2)]
/// [CompilerGenerated]
/// @brief Field <Session>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::KID::Model::Session*  ____Session_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DefaultSession>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::KIDDefaultSession*  ____DefaultSession_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerifyAgeResponse, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerifyAgeResponse, ____Session_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerifyAgeResponse, ____DefaultSession_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerifyAgeResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
