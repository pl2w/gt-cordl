#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeTypeSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIUpgradeTypeSystem)
namespace GlobalNamespace {
struct SIUpgradeType;
}
// Forward declare root types
namespace GlobalNamespace {
class SIUpgradeTypeSystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIUpgradeTypeSystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUpgradeTypeSystem*, "", "SIUpgradeTypeSystem");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIUpgradeTypeSystem
class CORDL_TYPE SIUpgradeTypeSystem : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetNodeId, addr 0x59d6a7c, size 0x24, virtual false, abstract: false, final false
static inline int32_t GetNodeId(::GlobalNamespace::SIUpgradeType  self) ;

/// [Extension]
/// @brief Method GetPageId, addr 0x59d6a60, size 0x1c, virtual false, abstract: false, final false
static inline int32_t GetPageId(::GlobalNamespace::SIUpgradeType  self) ;

/// @brief Method GetUpgradeType, addr 0x59d6aa0, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SIUpgradeType GetUpgradeType(int32_t  pageId, int32_t  nodeId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIUpgradeTypeSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIUpgradeTypeSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIUpgradeTypeSystem(SIUpgradeTypeSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIUpgradeTypeSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIUpgradeTypeSystem(SIUpgradeTypeSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SIUpgradeTypeSystem) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
