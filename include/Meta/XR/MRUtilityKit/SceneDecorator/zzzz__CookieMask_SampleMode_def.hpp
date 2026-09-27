#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CookieMask_SampleMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieMask_SampleMode)
// Forward declare root types
namespace GlobalNamespace {
struct CookieMask_SampleMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CookieMask_SampleMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CookieMask_SampleMode, "Meta.XR.MRUtilityKit.SceneDecorator", "CookieMask/SampleMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.CookieMask/SampleMode
struct CORDL_TYPE CookieMask_SampleMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CookieMask_SampleMode_Unwrapped
enum struct __CookieMask_SampleMode_Unwrapped : int32_t {
__E_NEAREST = static_cast<int32_t>(0x0),
__E_NEAREST_REPEAT = static_cast<int32_t>(0x1),
__E_NEAREST_REPEAT_MIRROR = static_cast<int32_t>(0x2),
__E_BILINEAR = static_cast<int32_t>(0x3),
__E_BILINEAR_REPEAT = static_cast<int32_t>(0x4),
__E_BILINEAR_REPEAT_MIRROR = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CookieMask_SampleMode_Unwrapped () const noexcept {
return static_cast<__CookieMask_SampleMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CookieMask_SampleMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CookieMask_SampleMode(int32_t  value__) noexcept;

/// @brief Field BILINEAR value: I32(3)
static ::GlobalNamespace::CookieMask_SampleMode const BILINEAR;

/// @brief Field BILINEAR_REPEAT value: I32(4)
static ::GlobalNamespace::CookieMask_SampleMode const BILINEAR_REPEAT;

/// @brief Field BILINEAR_REPEAT_MIRROR value: I32(5)
static ::GlobalNamespace::CookieMask_SampleMode const BILINEAR_REPEAT_MIRROR;

/// @brief Field NEAREST value: I32(0)
static ::GlobalNamespace::CookieMask_SampleMode const NEAREST;

/// @brief Field NEAREST_REPEAT value: I32(1)
static ::GlobalNamespace::CookieMask_SampleMode const NEAREST_REPEAT;

/// @brief Field NEAREST_REPEAT_MIRROR value: I32(2)
static ::GlobalNamespace::CookieMask_SampleMode const NEAREST_REPEAT_MIRROR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CookieMask_SampleMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CookieMask_SampleMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
