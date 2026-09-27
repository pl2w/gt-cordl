#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SurfaceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK_SurfaceType)
// Forward declare root types
namespace GlobalNamespace {
struct MRUK_SurfaceType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK_SurfaceType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK_SurfaceType, "Meta.XR.MRUtilityKit", "MRUK/SurfaceType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/SurfaceType
struct CORDL_TYPE MRUK_SurfaceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUK_SurfaceType_Unwrapped
enum struct __MRUK_SurfaceType_Unwrapped : int32_t {
__E_FACING_UP = static_cast<int32_t>(0x1),
__E_FACING_DOWN = static_cast<int32_t>(0x2),
__E_VERTICAL = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUK_SurfaceType_Unwrapped () const noexcept {
return static_cast<__MRUK_SurfaceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUK_SurfaceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUK_SurfaceType(int32_t  value__) noexcept;

/// @brief Field FACING_DOWN value: I32(2)
static ::GlobalNamespace::MRUK_SurfaceType const FACING_DOWN;

/// @brief Field FACING_UP value: I32(1)
static ::GlobalNamespace::MRUK_SurfaceType const FACING_UP;

/// @brief Field VERTICAL value: I32(4)
static ::GlobalNamespace::MRUK_SurfaceType const VERTICAL;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25863};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK_SurfaceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK_SurfaceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
