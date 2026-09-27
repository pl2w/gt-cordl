#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIToggleGroupManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KIDUIToggleGroupManager)
// Forward declare root types
namespace GlobalNamespace {
class KIDUIToggleGroupManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUIToggleGroupManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggleGroupManager*, "", "KIDUIToggleGroupManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggleGroupManager
class CORDL_TYPE KIDUIToggleGroupManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::KIDUIToggleGroupManager* New_ctor() ;

/// @brief Method .ctor, addr 0x5a4d034, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggleGroupManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggleGroupManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggleGroupManager(KIDUIToggleGroupManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggleGroupManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggleGroupManager(KIDUIToggleGroupManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUIToggleGroupManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
