#pragma once
// IWYU pragma private; include "GlobalNamespace/AverageVector3_Sample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AverageVector3_Sample)
// Forward declare root types
namespace GlobalNamespace {
struct AverageVector3_Sample;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AverageVector3_Sample);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AverageVector3_Sample, "", "AverageVector3/Sample");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: AverageVector3/Sample
struct CORDL_TYPE AverageVector3_Sample {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AverageVector3_Sample() ;

// Ctor Parameters [CppParam { name: "timeStamp", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr AverageVector3_Sample(float_t  timeStamp, ::UnityEngine::Vector3  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3459};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field timeStamp, offset: 0x0, size: 0x4, def value: None
 float_t  timeStamp;

/// @brief Field value, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AverageVector3_Sample, timeStamp) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AverageVector3_Sample, value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AverageVector3_Sample) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
