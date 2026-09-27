#pragma once
// IWYU pragma private; include "GlobalNamespace/UpgradeSessionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UpgradeSessionData)
namespace GlobalNamespace {
class TMPSession;
}
namespace GlobalNamespace {
class UpgradeSessionResponse;
}
// Forward declare root types
namespace GlobalNamespace {
class UpgradeSessionData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpgradeSessionData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpgradeSessionData*, "", "UpgradeSessionData");
// Dependencies SessionStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpgradeSessionData
class CORDL_TYPE UpgradeSessionData : public ::System::Object {
public:
// Declarations
/// @brief Field session, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_session, put=__cordl_internal_set_session)) ::GlobalNamespace::TMPSession*  session;

/// @brief Field status, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::GlobalNamespace::SessionStatus  status;

static inline ::GlobalNamespace::UpgradeSessionData* New_ctor(::GlobalNamespace::UpgradeSessionResponse*  response) ;

constexpr ::GlobalNamespace::TMPSession* const& __cordl_internal_get_session() const;

constexpr ::GlobalNamespace::TMPSession*& __cordl_internal_get_session() ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get_status() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_session(::GlobalNamespace::TMPSession*  value) ;

constexpr void __cordl_internal_set_status(::GlobalNamespace::SessionStatus  value) ;

/// @brief Method .ctor, addr 0x5a2747c, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::UpgradeSessionResponse*  response) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpgradeSessionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpgradeSessionData(UpgradeSessionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpgradeSessionData(UpgradeSessionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2894};

/// @brief Field status, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ___status;

/// @brief Field session, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::TMPSession*  ___session;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpgradeSessionData, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UpgradeSessionData, ___session) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpgradeSessionData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
