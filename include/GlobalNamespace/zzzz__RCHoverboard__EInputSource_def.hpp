#pragma once
// IWYU pragma private; include "GlobalNamespace/RCHoverboard__EInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RCHoverboard__EInputSource)
// Forward declare root types
namespace GlobalNamespace {
struct RCHoverboard__EInputSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RCHoverboard__EInputSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RCHoverboard__EInputSource, "", "RCHoverboard/_EInputSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RCHoverboard/_EInputSource
struct CORDL_TYPE RCHoverboard__EInputSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RCHoverboard__EInputSource_Unwrapped
enum struct __RCHoverboard__EInputSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_StickX = static_cast<int32_t>(0x1),
__E_StickForward = static_cast<int32_t>(0x2),
__E_StickBack = static_cast<int32_t>(0x3),
__E_Trigger = static_cast<int32_t>(0x4),
__E_PrimaryFaceButton = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RCHoverboard__EInputSource_Unwrapped () const noexcept {
return static_cast<__RCHoverboard__EInputSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RCHoverboard__EInputSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RCHoverboard__EInputSource(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RCHoverboard__EInputSource const None;

/// @brief Field PrimaryFaceButton value: I32(5)
static ::GlobalNamespace::RCHoverboard__EInputSource const PrimaryFaceButton;

/// @brief Field StickBack value: I32(3)
static ::GlobalNamespace::RCHoverboard__EInputSource const StickBack;

/// @brief Field StickForward value: I32(2)
static ::GlobalNamespace::RCHoverboard__EInputSource const StickForward;

/// @brief Field StickX value: I32(1)
static ::GlobalNamespace::RCHoverboard__EInputSource const StickX;

/// @brief Field Trigger value: I32(4)
static ::GlobalNamespace::RCHoverboard__EInputSource const Trigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RCHoverboard__EInputSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RCHoverboard__EInputSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
