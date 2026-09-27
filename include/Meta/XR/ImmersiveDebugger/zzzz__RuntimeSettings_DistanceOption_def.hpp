#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/RuntimeSettings_DistanceOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeSettings_DistanceOption)
// Forward declare root types
namespace GlobalNamespace {
struct RuntimeSettings_DistanceOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimeSettings_DistanceOption);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeSettings_DistanceOption, "Meta.XR.ImmersiveDebugger", "RuntimeSettings/DistanceOption");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.RuntimeSettings/DistanceOption
struct CORDL_TYPE RuntimeSettings_DistanceOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeSettings_DistanceOption_Unwrapped
enum struct __RuntimeSettings_DistanceOption_Unwrapped : int32_t {
__E_Close = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_Far = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeSettings_DistanceOption_Unwrapped () const noexcept {
return static_cast<__RuntimeSettings_DistanceOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeSettings_DistanceOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeSettings_DistanceOption(int32_t  value__) noexcept;

/// @brief Field Close value: I32(0)
static ::GlobalNamespace::RuntimeSettings_DistanceOption const Close;

/// @brief Field Default value: I32(1)
static ::GlobalNamespace::RuntimeSettings_DistanceOption const Default;

/// @brief Field Far value: I32(2)
static ::GlobalNamespace::RuntimeSettings_DistanceOption const Far;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeSettings_DistanceOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeSettings_DistanceOption) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
