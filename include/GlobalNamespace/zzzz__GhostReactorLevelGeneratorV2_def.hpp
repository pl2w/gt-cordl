#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGeneratorV2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GhostReactorLevelGeneratorV2)
namespace GlobalNamespace {
struct GhostReactorLevelGeneratorV2_TreeLevelConfig;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorLevelGeneratorV2;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorLevelGeneratorV2*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelGeneratorV2*, "", "GhostReactorLevelGeneratorV2");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelGeneratorV2
class CORDL_TYPE GhostReactorLevelGeneratorV2 : public ::System::Object {
public:
// Declarations
using TreeLevelConfig = ::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig;

static inline ::GlobalNamespace::GhostReactorLevelGeneratorV2* New_ctor() ;

/// @brief Method .ctor, addr 0x58483f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelGeneratorV2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGeneratorV2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelGeneratorV2(GhostReactorLevelGeneratorV2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGeneratorV2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelGeneratorV2(GhostReactorLevelGeneratorV2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1811};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GhostReactorLevelGeneratorV2) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
