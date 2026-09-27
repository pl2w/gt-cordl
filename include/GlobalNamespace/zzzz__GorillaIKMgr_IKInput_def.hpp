#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaIKMgr_IKInput)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaIKMgr_IKInput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaIKMgr_IKInput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKMgr_IKInput, "", "GorillaIKMgr/IKInput");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaIKMgr/IKInput
struct CORDL_TYPE GorillaIKMgr_IKInput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKMgr_IKInput() ;

// Ctor Parameters [CppParam { name: "usingNewIK", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "elbowDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GorillaIKMgr_IKInput(bool  usingNewIK, ::UnityEngine::Vector3  targetPos, ::UnityEngine::Vector3  elbowDir, ::UnityEngine::Quaternion  bodyRot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field usingNewIK, offset: 0x0, size: 0x1, def value: None
 bool  usingNewIK;

/// @brief Field targetPos, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  targetPos;

/// @brief Field elbowDir, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  elbowDir;

/// @brief Field bodyRot, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  bodyRot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKInput, usingNewIK) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKInput, targetPos) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKInput, elbowDir) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKInput, bodyRot) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKMgr_IKInput) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
