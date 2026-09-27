#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEnemySpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaEnemySpawner)
// Forward declare root types
namespace GlobalNamespace {
class GorillaEnemySpawner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaEnemySpawner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEnemySpawner*, "", "GorillaEnemySpawner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaEnemySpawner
class CORDL_TYPE GorillaEnemySpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaEnemySpawner* New_ctor() ;

/// @brief Method .ctor, addr 0x59a4050, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaEnemySpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaEnemySpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaEnemySpawner(GorillaEnemySpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaEnemySpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaEnemySpawner(GorillaEnemySpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2629};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaEnemySpawner) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
