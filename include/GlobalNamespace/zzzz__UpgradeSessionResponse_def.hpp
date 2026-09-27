#pragma once
// IWYU pragma private; include "GlobalNamespace/UpgradeSessionResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UpgradeSessionResponse)
namespace KID::Model {
class Session;
}
// Forward declare root types
namespace GlobalNamespace {
class UpgradeSessionResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpgradeSessionResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpgradeSessionResponse*, "", "UpgradeSessionResponse");
// Dependencies SessionStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpgradeSessionResponse
class CORDL_TYPE UpgradeSessionResponse : public ::System::Object {
public:
// Declarations
/// @brief Field session, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::KID::Model::Session*  session;

/// @brief Field status, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::GlobalNamespace::SessionStatus  status;

static inline ::GlobalNamespace::UpgradeSessionResponse* New_ctor() ;

constexpr ::KID::Model::Session* const& __cordl_internal_get_session() const;

constexpr ::KID::Model::Session*& __cordl_internal_get_session() ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get_status() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_session(::KID::Model::Session*  value) ;

constexpr void __cordl_internal_set_status(::GlobalNamespace::SessionStatus  value) ;

/// @brief Method .ctor, addr 0x5a262e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpgradeSessionResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpgradeSessionResponse(UpgradeSessionResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpgradeSessionResponse(UpgradeSessionResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2888};

/// @brief Field status, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ___status;

/// @brief Field session, offset: 0x18, size: 0x8, def value: None
 ::KID::Model::Session*  ___session;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpgradeSessionResponse, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UpgradeSessionResponse, ___session) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpgradeSessionResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
