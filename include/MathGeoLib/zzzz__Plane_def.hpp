#pragma once
// IWYU pragma private; include "MathGeoLib/Plane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Plane)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MathGeoLib {
struct Plane;
}
// Write type traits
MARK_VAL_T(::MathGeoLib::Plane);
DEFINE_IL2CPP_CLASS(::MathGeoLib::Plane, "MathGeoLib", "Plane");
// [PublicAPI]
// Dependencies UnityEngine.Vector3
namespace MathGeoLib {
// Is value type: true
// CS Name: MathGeoLib.Plane
struct CORDL_TYPE Plane {
public:
// Declarations
/// @brief Method ToString, addr 0x55e3ee0, size 0x1e4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x55e3ed4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  normal, float_t  distance) ;

// Ctor Parameters []
// @brief default ctor
constexpr Plane() ;

// Ctor Parameters [CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Plane(::UnityEngine::Vector3  Normal, float_t  Distance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32992};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Normal, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Normal;

/// @brief Field Distance, offset: 0xc, size: 0x4, def value: None
 float_t  Distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MathGeoLib::Plane, Normal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Plane, Distance) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MathGeoLib::Plane) == 0x10, "Size mismatch!");

} // namespace end def MathGeoLib
