#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GREnemyTypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GREnemyTypeExtensions)
namespace GlobalNamespace {
class GameEntity;
}
namespace GorillaTagScripts::GhostReactor {
struct GREnemyType;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
class GREnemyTypeExtensions;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions*, "GorillaTagScripts.GhostReactor", "GREnemyTypeExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GREnemyTypeExtensions
class CORDL_TYPE GREnemyTypeExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetEnemyType, addr 0x5c19838, size 0xdc, virtual false, abstract: false, final false
static inline ::GorillaTagScripts::GhostReactor::GREnemyType GetEnemyType(::GlobalNamespace::GameEntity*  entity) ;

/// [Extension]
/// @brief Method Pluralize, addr 0x5c19914, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW Pluralize(::GorillaTagScripts::GhostReactor::GREnemyType  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyTypeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyTypeExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyTypeExtensions(GREnemyTypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyTypeExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyTypeExtensions(GREnemyTypeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::GhostReactor::GREnemyTypeExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
