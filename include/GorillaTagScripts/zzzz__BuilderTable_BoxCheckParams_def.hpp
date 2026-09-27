#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_BoxCheckParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BuilderTable_BoxCheckParams)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_BoxCheckParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_BoxCheckParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_BoxCheckParams, "GorillaTagScripts", "BuilderTable/BoxCheckParams");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/BoxCheckParams
struct CORDL_TYPE BuilderTable_BoxCheckParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_BoxCheckParams() ;

// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "halfExtents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_BoxCheckParams(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  center;

/// @brief Field halfExtents, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  halfExtents;

/// @brief Field rotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_BoxCheckParams, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BoxCheckParams, halfExtents) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BoxCheckParams, rotation) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_BoxCheckParams) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
