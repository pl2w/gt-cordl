#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaIKMgr_IKOutput)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaIKMgr_IKOutput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaIKMgr_IKOutput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIKMgr_IKOutput, "", "GorillaIKMgr/IKOutput");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaIKMgr/IKOutput
struct CORDL_TYPE GorillaIKMgr_IKOutput {
public:
// Declarations
/// @brief Method .ctor, addr 0x5916714, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Quaternion  upperArmLocalRot_, ::UnityEngine::Quaternion  lowerArmLocalRot_, ::UnityEngine::Vector3  _handLocalPosition) ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaIKMgr_IKOutput() ;

// Ctor Parameters [CppParam { name: "upperArmLocalRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "lowerArmLocalRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "handLocalPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GorillaIKMgr_IKOutput(::UnityEngine::Quaternion  upperArmLocalRot, ::UnityEngine::Quaternion  lowerArmLocalRot, ::UnityEngine::Vector3  handLocalPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field upperArmLocalRot, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  upperArmLocalRot;

/// @brief Field lowerArmLocalRot, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  lowerArmLocalRot;

/// @brief Field handLocalPosition, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  handLocalPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKOutput, upperArmLocalRot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKOutput, lowerArmLocalRot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIKMgr_IKOutput, handLocalPosition) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIKMgr_IKOutput) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
