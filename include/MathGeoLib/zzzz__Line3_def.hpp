#pragma once
// IWYU pragma private; include "MathGeoLib/Line3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Line3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MathGeoLib {
struct Line3;
}
// Write type traits
MARK_VAL_T(::MathGeoLib::Line3);
DEFINE_IL2CPP_CLASS(::MathGeoLib::Line3, "MathGeoLib", "Line3");
// [PublicAPI]
// Dependencies UnityEngine.Vector3
namespace MathGeoLib {
// Is value type: true
// CS Name: MathGeoLib.Line3
struct CORDL_TYPE Line3 {
public:
// Declarations
/// @brief Method ToString, addr 0x55e25e8, size 0x1e4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x55e25d8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2) ;

// Ctor Parameters []
// @brief default ctor
constexpr Line3() ;

// Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr Line3(::UnityEngine::Vector3  Point1, ::UnityEngine::Vector3  Point2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32988};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Point1, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Point1;

/// @brief Field Point2, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Point2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MathGeoLib::Line3, Point1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Line3, Point2) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MathGeoLib::Line3) == 0x18, "Size mismatch!");

} // namespace end def MathGeoLib
