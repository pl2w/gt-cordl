#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/PhysicsCreatorInstallRoot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PhysicsCreatorInstallRoot)
// Forward declare root types
namespace Technie::PhysicsCreator {
class PhysicsCreatorInstallRoot;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::PhysicsCreatorInstallRoot*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::PhysicsCreatorInstallRoot*, "Technie.PhysicsCreator", "PhysicsCreatorInstallRoot");
// Dependencies UnityEngine.ScriptableObject
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.PhysicsCreatorInstallRoot
class CORDL_TYPE PhysicsCreatorInstallRoot : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Technie::PhysicsCreator::PhysicsCreatorInstallRoot* New_ctor() ;

/// @brief Method .ctor, addr 0xadcc5dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsCreatorInstallRoot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsCreatorInstallRoot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsCreatorInstallRoot(PhysicsCreatorInstallRoot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsCreatorInstallRoot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsCreatorInstallRoot(PhysicsCreatorInstallRoot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30507};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::PhysicsCreatorInstallRoot) == 0x18, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
