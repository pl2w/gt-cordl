#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadget_UpgradeVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SIGadget_UpgradeVisual)
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIGadget_UpgradeVisual;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadget_UpgradeVisual);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadget_UpgradeVisual, "", "SIGadget/UpgradeVisual");
// Dependencies SIUpgradeType, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadget/UpgradeVisual
struct CORDL_TYPE SIGadget_UpgradeVisual {
public:
// Declarations
/// @brief Method Update, addr 0x58dc6a8, size 0x120, virtual false, abstract: false, final false
inline void Update(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

// Ctor Parameters []
// @brief default ctor
constexpr SIGadget_UpgradeVisual() ;

// Ctor Parameters [CppParam { name: "objects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "appearRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: None, comment: None }, CppParam { name: "disappearRequirements", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: None, comment: None }]
constexpr SIGadget_UpgradeVisual(::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects, ::ArrayW<::GlobalNamespace::SIUpgradeType>  appearRequirements, ::ArrayW<::GlobalNamespace::SIUpgradeType>  disappearRequirements) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field objects, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects;

/// [Tooltip("For the objects to become activated, you must match AT LEAST ONE appearRequirement (if there are any), and not match any disappearRequirements.")]
/// @brief Field appearRequirements, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeType>  appearRequirements;

/// [Tooltip("For the objects to become deactivated, you must match AT LEAST ONE disappearRequirement (if there are any).")]
/// @brief Field disappearRequirements, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeType>  disappearRequirements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadget_UpgradeVisual, objects) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget_UpgradeVisual, appearRequirements) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget_UpgradeVisual, disappearRequirements) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadget_UpgradeVisual) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
