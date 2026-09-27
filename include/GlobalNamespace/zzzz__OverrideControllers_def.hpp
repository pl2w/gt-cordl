#pragma once
// IWYU pragma private; include "GlobalNamespace/OverrideControllers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OverrideControllers)
// Forward declare root types
namespace GlobalNamespace {
struct OverrideControllers;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OverrideControllers);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OverrideControllers, "", "OverrideControllers");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OverrideControllers
struct CORDL_TYPE OverrideControllers {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OverrideControllers_Unwrapped
enum struct __OverrideControllers_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LeftController = static_cast<int32_t>(0x1),
__E_RightController = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OverrideControllers_Unwrapped () const noexcept {
return static_cast<__OverrideControllers_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OverrideControllers() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OverrideControllers(int32_t  value__) noexcept;

/// @brief Field LeftController value: I32(1)
static ::GlobalNamespace::OverrideControllers const LeftController;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OverrideControllers const None;

/// @brief Field RightController value: I32(2)
static ::GlobalNamespace::OverrideControllers const RightController;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1653};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OverrideControllers, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OverrideControllers) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
