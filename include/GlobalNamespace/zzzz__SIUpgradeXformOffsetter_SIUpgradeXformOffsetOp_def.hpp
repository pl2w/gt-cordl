#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp, "", "SIUpgradeXformOffsetter/SIUpgradeXformOffsetOp");
// Dependencies SIUpgradeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIUpgradeXformOffsetter/SIUpgradeXformOffsetOp
struct CORDL_TYPE SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp() ;

// Ctor Parameters [CppParam { name: "upgradeType", ty: "::GlobalNamespace::SIUpgradeType", modifiers: "", def_value: None, comment: None }, CppParam { name: "xform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetXform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp(::GlobalNamespace::SIUpgradeType  upgradeType, ::UnityW<::UnityEngine::Transform>  xform, ::UnityW<::UnityEngine::Transform>  targetXform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field upgradeType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeType  upgradeType;

/// @brief Field xform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  xform;

/// [FormerlySerializedAs("newParent")]
/// @brief Field targetXform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  targetXform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp, upgradeType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp, xform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp, targetXform) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
