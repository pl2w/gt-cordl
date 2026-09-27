#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/Spectrum_Point.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Spectrum_Point)
namespace System {
template<typename T>
class IComparable_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct Spectrum_Point;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Spectrum_Point);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Spectrum_Point, "Meta.XR.Acoustics", "Spectrum/Point");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.Acoustics.Spectrum/Point
struct CORDL_TYPE Spectrum_Point {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::Spectrum_Point>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::Spectrum_Point>*() ;

/// @brief Method CompareTo, addr 0x9ebf590, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::Spectrum_Point  other) ;

/// @brief Method ToString, addr 0x9ebf5a0, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x9ebef14, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  frequency, float_t  data) ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::Spectrum_Point>"
constexpr ::System::IComparable_1<::GlobalNamespace::Spectrum_Point>* i___System__IComparable_1___GlobalNamespace__Spectrum_Point_() ;

/// @brief Method op_Implicit, addr 0x9ebf598, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Spectrum_Point op_Implicit___GlobalNamespace__Spectrum_Point(::UnityEngine::Vector2  v) ;

/// @brief Method op_Implicit, addr 0x9ebf59c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::GlobalNamespace::Spectrum_Point  point) ;

// Ctor Parameters []
// @brief default ctor
constexpr Spectrum_Point() ;

// Ctor Parameters [CppParam { name: "frequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Spectrum_Point(float_t  frequency, float_t  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field frequency, offset: 0x0, size: 0x4, def value: None
 float_t  frequency;

/// [SerializeField]
/// @brief Field data, offset: 0x4, size: 0x4, def value: None
 float_t  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Spectrum_Point, frequency) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Spectrum_Point, data) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Spectrum_Point) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
