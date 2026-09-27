#pragma once
// IWYU pragma private; include "TMPro/TMP_TextUtilities_LineSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_TextUtilities_LineSegment)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct TMP_TextUtilities_LineSegment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_TextUtilities_LineSegment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_TextUtilities_LineSegment, "TMPro", "TMP_TextUtilities/LineSegment");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_TextUtilities/LineSegment
struct CORDL_TYPE TMP_TextUtilities_LineSegment {
public:
// Declarations
/// @brief Method .ctor, addr 0xb3ad118, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

// Ctor Parameters []
// @brief default ctor
constexpr TMP_TextUtilities_LineSegment() ;

// Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr TMP_TextUtilities_LineSegment(::UnityEngine::Vector3  Point1, ::UnityEngine::Vector3  Point2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23051};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Point1, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Point1;

/// @brief Field Point2, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Point2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_TextUtilities_LineSegment, Point1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_TextUtilities_LineSegment, Point2) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_TextUtilities_LineSegment) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
