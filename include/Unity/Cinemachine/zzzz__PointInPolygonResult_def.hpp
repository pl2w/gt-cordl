#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PointInPolygonResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointInPolygonResult)
// Forward declare root types
namespace Unity::Cinemachine {
struct PointInPolygonResult;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::PointInPolygonResult);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PointInPolygonResult, "Unity.Cinemachine", "PointInPolygonResult");
// [Flags]
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.PointInPolygonResult
struct CORDL_TYPE PointInPolygonResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointInPolygonResult_Unwrapped
enum struct __PointInPolygonResult_Unwrapped : int32_t {
__E_IsOn = static_cast<int32_t>(0x0),
__E_IsInside = static_cast<int32_t>(0x1),
__E_IsOutside = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointInPolygonResult_Unwrapped () const noexcept {
return static_cast<__PointInPolygonResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointInPolygonResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointInPolygonResult(int32_t  value__) noexcept;

/// @brief Field IsInside value: I32(1)
static ::Unity::Cinemachine::PointInPolygonResult const IsInside;

/// @brief Field IsOn value: I32(0)
static ::Unity::Cinemachine::PointInPolygonResult const IsOn;

/// @brief Field IsOutside value: I32(2)
static ::Unity::Cinemachine::PointInPolygonResult const IsOutside;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22504};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PointInPolygonResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PointInPolygonResult) == 0x4, "Size mismatch!");

} // namespace end def Unity::Cinemachine
