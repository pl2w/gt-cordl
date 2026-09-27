#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SpawnManager)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpawnManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnManager*, "", "SpawnManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnManager
class CORDL_TYPE SpawnManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method ChildrenXfs, addr 0x5b20640, size 0x58, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> ChildrenXfs() ;

static inline ::GlobalNamespace::SpawnManager* New_ctor() ;

/// @brief Method .ctor, addr 0x5b20698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnManager(SpawnManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnManager(SpawnManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3600};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SpawnManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
