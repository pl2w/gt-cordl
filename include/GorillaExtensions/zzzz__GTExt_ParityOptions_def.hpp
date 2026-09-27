#pragma once
// IWYU pragma private; include "GorillaExtensions/GTExt_ParityOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTExt_ParityOptions)
// Forward declare root types
namespace GlobalNamespace {
struct GTExt_ParityOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTExt_ParityOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTExt_ParityOptions, "GorillaExtensions", "GTExt/ParityOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaExtensions.GTExt/ParityOptions
struct CORDL_TYPE GTExt_ParityOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTExt_ParityOptions_Unwrapped
enum struct __GTExt_ParityOptions_Unwrapped : int32_t {
__E_XFlip = static_cast<int32_t>(0x0),
__E_YFlip = static_cast<int32_t>(0x1),
__E_ZFlip = static_cast<int32_t>(0x2),
__E_AllFlip = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTExt_ParityOptions_Unwrapped () const noexcept {
return static_cast<__GTExt_ParityOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTExt_ParityOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTExt_ParityOptions(int32_t  value__) noexcept;

/// @brief Field AllFlip value: I32(3)
static ::GlobalNamespace::GTExt_ParityOptions const AllFlip;

/// @brief Field XFlip value: I32(0)
static ::GlobalNamespace::GTExt_ParityOptions const XFlip;

/// @brief Field YFlip value: I32(1)
static ::GlobalNamespace::GTExt_ParityOptions const YFlip;

/// @brief Field ZFlip value: I32(2)
static ::GlobalNamespace::GTExt_ParityOptions const ZFlip;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTExt_ParityOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTExt_ParityOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
