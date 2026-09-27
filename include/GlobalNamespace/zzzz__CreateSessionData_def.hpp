#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateSessionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CreateSessionData)
namespace GlobalNamespace {
class TMPSession;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateSessionData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateSessionData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateSessionData*, "", "CreateSessionData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateSessionData
class CORDL_TYPE CreateSessionData : public ::System::Object {
public:
// Declarations
/// @brief Field NewSession, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewSession, put=__cordl_internal_set_NewSession)) ::GlobalNamespace::TMPSession*  NewSession;

static inline ::GlobalNamespace::CreateSessionData* New_ctor() ;

constexpr ::GlobalNamespace::TMPSession* const& __cordl_internal_get_NewSession() const;

constexpr ::GlobalNamespace::TMPSession*& __cordl_internal_get_NewSession() ;

constexpr void __cordl_internal_set_NewSession(::GlobalNamespace::TMPSession*  value) ;

/// @brief Method .ctor, addr 0x5a257cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateSessionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateSessionData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateSessionData(CreateSessionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateSessionData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateSessionData(CreateSessionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2859};

/// @brief Field NewSession, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::TMPSession*  ___NewSession;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateSessionData, ___NewSession) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateSessionData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
