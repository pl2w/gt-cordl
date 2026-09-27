#pragma once
// IWYU pragma private; include "Fusion/HitOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HitOptions)
// Forward declare root types
namespace Fusion {
struct HitOptions;
}
// Write type traits
MARK_VAL_T(::Fusion::HitOptions);
DEFINE_IL2CPP_CLASS(::Fusion::HitOptions, "Fusion", "HitOptions");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.HitOptions
struct CORDL_TYPE HitOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HitOptions_Unwrapped
enum struct __HitOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IncludePhysX = static_cast<int32_t>(0x1),
__E_IncludeBox2D = static_cast<int32_t>(0x2),
__E_SubtickAccuracy = static_cast<int32_t>(0x4),
__E_IgnoreInputAuthority = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HitOptions_Unwrapped () const noexcept {
return static_cast<__HitOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HitOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HitOptions(int32_t  value__) noexcept;

/// @brief Field IgnoreInputAuthority value: I32(8)
static ::Fusion::HitOptions const IgnoreInputAuthority;

/// @brief Field IncludeBox2D value: I32(2)
static ::Fusion::HitOptions const IncludeBox2D;

/// @brief Field IncludePhysX value: I32(1)
static ::Fusion::HitOptions const IncludePhysX;

/// @brief Field None value: I32(0)
static ::Fusion::HitOptions const None;

/// @brief Field SubtickAccuracy value: I32(4)
static ::Fusion::HitOptions const SubtickAccuracy;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::HitOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::HitOptions) == 0x4, "Size mismatch!");

} // namespace end def Fusion
