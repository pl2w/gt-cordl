#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_LightmapOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_LightmapOptions)
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct MB2_LightmapOptions;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::MB2_LightmapOptions);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_LightmapOptions, "DigitalOpus.MB.Core", "MB2_LightmapOptions");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB2_LightmapOptions
struct CORDL_TYPE MB2_LightmapOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB2_LightmapOptions_Unwrapped
enum struct __MB2_LightmapOptions_Unwrapped : int32_t {
__E_preserve_current_lightmapping = static_cast<int32_t>(0x0),
__E_ignore_UV2 = static_cast<int32_t>(0x1),
__E_copy_UV2_unchanged = static_cast<int32_t>(0x2),
__E_generate_new_UV2_layout = static_cast<int32_t>(0x3),
__E_copy_UV2_unchanged_to_separate_rects = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB2_LightmapOptions_Unwrapped () const noexcept {
return static_cast<__MB2_LightmapOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB2_LightmapOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB2_LightmapOptions(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22598};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field copy_UV2_unchanged value: I32(2)
static ::DigitalOpus::MB::Core::MB2_LightmapOptions const copy_UV2_unchanged;

/// @brief Field copy_UV2_unchanged_to_separate_rects value: I32(4)
static ::DigitalOpus::MB::Core::MB2_LightmapOptions const copy_UV2_unchanged_to_separate_rects;

/// @brief Field generate_new_UV2_layout value: I32(3)
static ::DigitalOpus::MB::Core::MB2_LightmapOptions const generate_new_UV2_layout;

/// @brief Field ignore_UV2 value: I32(1)
static ::DigitalOpus::MB::Core::MB2_LightmapOptions const ignore_UV2;

/// @brief Field preserve_current_lightmapping value: I32(0)
static ::DigitalOpus::MB::Core::MB2_LightmapOptions const preserve_current_lightmapping;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_LightmapOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_LightmapOptions) == 0x4, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
