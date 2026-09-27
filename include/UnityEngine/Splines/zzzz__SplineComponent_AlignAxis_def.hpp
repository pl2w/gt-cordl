#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineComponent_AlignAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineComponent_AlignAxis)
// Forward declare root types
namespace GlobalNamespace {
struct SplineComponent_AlignAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineComponent_AlignAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineComponent_AlignAxis, "UnityEngine.Splines", "SplineComponent/AlignAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineComponent/AlignAxis
struct CORDL_TYPE SplineComponent_AlignAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineComponent_AlignAxis_Unwrapped
enum struct __SplineComponent_AlignAxis_Unwrapped : int32_t {
__E_XAxis = static_cast<int32_t>(0x0),
__E_YAxis = static_cast<int32_t>(0x1),
__E_ZAxis = static_cast<int32_t>(0x2),
__E_NegativeXAxis = static_cast<int32_t>(0x3),
__E_NegativeYAxis = static_cast<int32_t>(0x4),
__E_NegativeZAxis = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineComponent_AlignAxis_Unwrapped () const noexcept {
return static_cast<__SplineComponent_AlignAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineComponent_AlignAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineComponent_AlignAxis(int32_t  value__) noexcept;

/// @brief Field NegativeXAxis value: I32(3)
static ::GlobalNamespace::SplineComponent_AlignAxis const NegativeXAxis;

/// @brief Field NegativeYAxis value: I32(4)
static ::GlobalNamespace::SplineComponent_AlignAxis const NegativeYAxis;

/// @brief Field NegativeZAxis value: I32(5)
static ::GlobalNamespace::SplineComponent_AlignAxis const NegativeZAxis;

/// @brief Field XAxis value: I32(0)
static ::GlobalNamespace::SplineComponent_AlignAxis const XAxis;

/// @brief Field YAxis value: I32(1)
static ::GlobalNamespace::SplineComponent_AlignAxis const YAxis;

/// @brief Field ZAxis value: I32(2)
static ::GlobalNamespace::SplineComponent_AlignAxis const ZAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineComponent_AlignAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineComponent_AlignAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
