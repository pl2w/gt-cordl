#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/TransformSample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformSample)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
struct TransformSample;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Throw::TransformSample);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::TransformSample, "Oculus.Interaction.Throw", "TransformSample");
// [Obsolete]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction::Throw {
// Is value type: true
// CS Name: Oculus.Interaction.Throw.TransformSample
struct CORDL_TYPE TransformSample {
public:
// Declarations
/// @brief Method Interpolate, addr 0xa493f10, size 0x128, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Throw::TransformSample Interpolate(::Oculus::Interaction::Throw::TransformSample  start, ::Oculus::Interaction::Throw::TransformSample  fin, float_t  time) ;

/// @brief Method .ctor, addr 0xa493ef8, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  time, int32_t  frameIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformSample() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransformSample(::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, float_t  SampleTime, int32_t  FrameIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// @brief Field Rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  Rotation;

/// @brief Field SampleTime, offset: 0x1c, size: 0x4, def value: None
 float_t  SampleTime;

/// @brief Field FrameIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  FrameIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::TransformSample, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::TransformSample, Rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::TransformSample, SampleTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::TransformSample, FrameIndex) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::TransformSample) == 0x24, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
