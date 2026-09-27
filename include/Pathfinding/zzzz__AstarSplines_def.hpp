#pragma once
// IWYU pragma private; include "Pathfinding/AstarSplines.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AstarSplines)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class AstarSplines;
}
// Write type traits
MARK_REF_T(::Pathfinding::AstarSplines*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarSplines*, "Pathfinding", "AstarSplines");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarSplines
class CORDL_TYPE AstarSplines : public ::System::Object {
public:
// Declarations
/// @brief Method CatmullRom, addr 0x5e4cf58, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CatmullRom(::UnityEngine::Vector3  previous, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Vector3  next, float_t  elapsedTime) ;

/// @brief Method CubicBezier, addr 0x5e4d010, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CubicBezier(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, float_t  t) ;

/// @brief Method CubicBezierDerivative, addr 0x5e4d0c0, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CubicBezierDerivative(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, float_t  t) ;

/// @brief Method CubicBezierSecondDerivative, addr 0x5e4d174, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CubicBezierSecondDerivative(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, float_t  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarSplines() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarSplines", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarSplines(AstarSplines && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarSplines", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarSplines(AstarSplines const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::AstarSplines) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
