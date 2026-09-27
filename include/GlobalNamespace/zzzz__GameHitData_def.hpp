#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameHitData)
// Forward declare root types
namespace GlobalNamespace {
struct GameHitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameHitData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameHitData, "", "GameHitData");
// Dependencies GameEntityId, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameHitData
struct CORDL_TYPE GameHitData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameHitData() ;

// Ctor Parameters [CppParam { name: "hitEntityId", ty: "::GlobalNamespace::GameEntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitByEntityId", ty: "::GlobalNamespace::GameEntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitTypeId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitEntityPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitImpulse", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitAmount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hittablePoint", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameHitData(::GlobalNamespace::GameEntityId  hitEntityId, ::GlobalNamespace::GameEntityId  hitByEntityId, int32_t  hitTypeId, ::UnityEngine::Vector3  hitEntityPosition, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, int32_t  hitAmount, int32_t  hittablePoint) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field hitEntityId, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  hitEntityId;

/// @brief Field hitByEntityId, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  hitByEntityId;

/// @brief Field hitTypeId, offset: 0x8, size: 0x4, def value: None
 int32_t  hitTypeId;

/// @brief Field hitEntityPosition, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  hitEntityPosition;

/// @brief Field hitPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  hitPosition;

/// @brief Field hitImpulse, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  hitImpulse;

/// @brief Field hitAmount, offset: 0x30, size: 0x4, def value: None
 int32_t  hitAmount;

/// @brief Field hittablePoint, offset: 0x34, size: 0x4, def value: None
 int32_t  hittablePoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameHitData, hitEntityId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitData, hitByEntityId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitData, hitTypeId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitData, hitEntityPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitData, hitPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitData, hitImpulse) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitData, hitAmount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitData, hittablePoint) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameHitData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
