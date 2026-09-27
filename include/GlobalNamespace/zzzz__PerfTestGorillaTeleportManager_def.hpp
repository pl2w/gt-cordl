#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestGorillaTeleportManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PerfTestGorillaTeleportManager)
// Forward declare root types
namespace GlobalNamespace {
class PerfTestGorillaTeleportManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerfTestGorillaTeleportManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerfTestGorillaTeleportManager*, "", "PerfTestGorillaTeleportManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerfTestGorillaTeleportManager
class CORDL_TYPE PerfTestGorillaTeleportManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::PerfTestGorillaTeleportManager* New_ctor() ;

/// @brief Method .ctor, addr 0x56bceb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerfTestGorillaTeleportManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerfTestGorillaTeleportManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerfTestGorillaTeleportManager(PerfTestGorillaTeleportManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerfTestGorillaTeleportManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerfTestGorillaTeleportManager(PerfTestGorillaTeleportManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerfTestGorillaTeleportManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
