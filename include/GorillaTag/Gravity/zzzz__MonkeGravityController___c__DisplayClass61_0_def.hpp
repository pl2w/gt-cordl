#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/MonkeGravityController___c__DisplayClass61_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeGravityController___c__DisplayClass61_0)
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
// Forward declare root types
namespace GlobalNamespace {
struct MonkeGravityController___c__DisplayClass61_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0, "GorillaTag.Gravity", "MonkeGravityController/<>c__DisplayClass61_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Gravity.MonkeGravityController/<>c__DisplayClass61_0
struct CORDL_TYPE MonkeGravityController___c__DisplayClass61_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MonkeGravityController___c__DisplayClass61_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityW<::GorillaTag::Gravity::MonkeGravityController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cumulativeVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotationCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "totalRotationSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cumulativeGravityDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr MonkeGravityController___c__DisplayClass61_0(::UnityW<::GorillaTag::Gravity::MonkeGravityController>  __4__this, ::UnityEngine::Vector3  cumulativeVelocity, int32_t  rotationCount, float_t  totalRotationSpeed, ::UnityEngine::Vector3  cumulativeGravityDirection) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4683};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::MonkeGravityController>  __4__this;

/// @brief Field cumulativeVelocity, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  cumulativeVelocity;

/// @brief Field rotationCount, offset: 0x14, size: 0x4, def value: None
 int32_t  rotationCount;

/// @brief Field totalRotationSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  totalRotationSpeed;

/// @brief Field cumulativeGravityDirection, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  cumulativeGravityDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0, cumulativeVelocity) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0, rotationCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0, totalRotationSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0, cumulativeGravityDirection) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeGravityController___c__DisplayClass61_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
