#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKConstantInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaIKMgr_IKConstantInput)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaIKMgr_IKConstantInput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaIKMgr_IKConstantInput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKMgr_IKConstantInput, "", "GorillaIKMgr/IKConstantInput");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaIKMgr/IKConstantInput
struct CORDL_TYPE GorillaIKMgr_IKConstantInput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKMgr_IKConstantInput() ;

// Ctor Parameters [CppParam { name: "initRotLower", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "initRotUpper", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "shoulderPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyPivotPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyStartRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "shoulderRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GorillaIKMgr_IKConstantInput(::UnityEngine::Quaternion  initRotLower, ::UnityEngine::Quaternion  initRotUpper, ::UnityEngine::Vector3  shoulderPosition, ::UnityEngine::Vector3  bodyPivotPos, ::UnityEngine::Quaternion  bodyStartRot, ::UnityEngine::Quaternion  shoulderRot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field initRotLower, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  initRotLower;

/// @brief Field initRotUpper, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  initRotUpper;

/// @brief Field shoulderPosition, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  shoulderPosition;

/// @brief Field bodyPivotPos, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  bodyPivotPos;

/// @brief Field bodyStartRot, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  bodyStartRot;

/// @brief Field shoulderRot, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  shoulderRot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKConstantInput, initRotLower) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKConstantInput, initRotUpper) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKConstantInput, shoulderPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKConstantInput, bodyPivotPos) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKConstantInput, bodyStartRot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKConstantInput, shoulderRot) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKMgr_IKConstantInput) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
