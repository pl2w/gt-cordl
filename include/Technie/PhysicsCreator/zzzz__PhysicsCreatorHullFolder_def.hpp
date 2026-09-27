#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/PhysicsCreatorHullFolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PhysicsCreatorHullFolder)
// Forward declare root types
namespace Technie::PhysicsCreator {
class PhysicsCreatorHullFolder;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::PhysicsCreatorHullFolder*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::PhysicsCreatorHullFolder*, "Technie.PhysicsCreator", "PhysicsCreatorHullFolder");
// [CreateAssetMenu]
// Dependencies UnityEngine.ScriptableObject
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.PhysicsCreatorHullFolder
class CORDL_TYPE PhysicsCreatorHullFolder : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Technie::PhysicsCreator::PhysicsCreatorHullFolder* New_ctor() ;

/// @brief Method .ctor, addr 0xadcc5d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsCreatorHullFolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsCreatorHullFolder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsCreatorHullFolder(PhysicsCreatorHullFolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsCreatorHullFolder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsCreatorHullFolder(PhysicsCreatorHullFolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30506};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::PhysicsCreatorHullFolder) == 0x18, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
