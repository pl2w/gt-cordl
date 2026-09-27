#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineUtility_Segment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SplineUtility_Segment)
// Forward declare root types
namespace GlobalNamespace {
struct SplineUtility_Segment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineUtility_Segment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineUtility_Segment, "UnityEngine.Splines", "SplineUtility/Segment");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineUtility/Segment
struct CORDL_TYPE SplineUtility_Segment {
public:
// Declarations
/// @brief Method .ctor, addr 0xb32dff4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  start, float_t  length) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineUtility_Segment() ;

// Ctor Parameters [CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineUtility_Segment(float_t  start, float_t  length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field start, offset: 0x0, size: 0x4, def value: None
 float_t  start;

/// @brief Field length, offset: 0x4, size: 0x4, def value: None
 float_t  length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineUtility_Segment, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineUtility_Segment, length) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineUtility_Segment) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
