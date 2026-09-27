#pragma once
// IWYU pragma private; include "GlobalNamespace/BitPackUtils_QAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitPackUtils_QAxis)
// Forward declare root types
namespace GlobalNamespace {
struct BitPackUtils_QAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitPackUtils_QAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitPackUtils_QAxis, "", "BitPackUtils/QAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BitPackUtils/QAxis
struct CORDL_TYPE BitPackUtils_QAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BitPackUtils_QAxis_Unwrapped
enum struct __BitPackUtils_QAxis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
__E_W = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BitPackUtils_QAxis_Unwrapped () const noexcept {
return static_cast<__BitPackUtils_QAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BitPackUtils_QAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BitPackUtils_QAxis(int32_t  value__) noexcept;

/// @brief Field W value: I32(3)
static ::GlobalNamespace::BitPackUtils_QAxis const W;

/// @brief Field X value: I32(0)
static ::GlobalNamespace::BitPackUtils_QAxis const X;

/// @brief Field Y value: I32(1)
static ::GlobalNamespace::BitPackUtils_QAxis const Y;

/// @brief Field Z value: I32(2)
static ::GlobalNamespace::BitPackUtils_QAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3473};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitPackUtils_QAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitPackUtils_QAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
