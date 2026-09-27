#pragma once
// IWYU pragma private; include "GlobalNamespace/MouthFlapLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MouthFlapLevel)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct MouthFlapLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MouthFlapLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MouthFlapLevel, "", "MouthFlapLevel");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: MouthFlapLevel
struct CORDL_TYPE MouthFlapLevel {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MouthFlapLevel() ;

// Ctor Parameters [CppParam { name: "faces", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cycleDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minRequiredVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxRequiredVolume", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MouthFlapLevel(::ArrayW<::UnityEngine::Vector2>  faces, float_t  cycleDuration, float_t  minRequiredVolume, float_t  maxRequiredVolume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field faces, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  faces;

/// @brief Field cycleDuration, offset: 0x8, size: 0x4, def value: None
 float_t  cycleDuration;

/// @brief Field minRequiredVolume, offset: 0xc, size: 0x4, def value: None
 float_t  minRequiredVolume;

/// @brief Field maxRequiredVolume, offset: 0x10, size: 0x4, def value: None
 float_t  maxRequiredVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MouthFlapLevel, faces) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthFlapLevel, cycleDuration) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthFlapLevel, minRequiredVolume) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MouthFlapLevel, maxRequiredVolume) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MouthFlapLevel) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
