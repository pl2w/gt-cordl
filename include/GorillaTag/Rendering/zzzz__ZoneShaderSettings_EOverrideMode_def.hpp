#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/ZoneShaderSettings_EOverrideMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZoneShaderSettings_EOverrideMode)
// Forward declare root types
namespace GlobalNamespace {
struct ZoneShaderSettings_EOverrideMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZoneShaderSettings_EOverrideMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneShaderSettings_EOverrideMode, "GorillaTag.Rendering", "ZoneShaderSettings/EOverrideMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.ZoneShaderSettings/EOverrideMode
struct CORDL_TYPE ZoneShaderSettings_EOverrideMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZoneShaderSettings_EOverrideMode_Unwrapped
enum struct __ZoneShaderSettings_EOverrideMode_Unwrapped : int32_t {
__E_LeaveUnchanged = static_cast<int32_t>(0x0),
__E_ApplyNewValue = static_cast<int32_t>(0x1),
__E_ApplyDefaultValue = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZoneShaderSettings_EOverrideMode_Unwrapped () const noexcept {
return static_cast<__ZoneShaderSettings_EOverrideMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZoneShaderSettings_EOverrideMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZoneShaderSettings_EOverrideMode(int32_t  value__) noexcept;

/// @brief Field ApplyDefaultValue value: I32(2)
static ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const ApplyDefaultValue;

/// @brief Field ApplyNewValue value: I32(1)
static ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const ApplyNewValue;

/// @brief Field LeaveUnchanged value: I32(0)
static ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const LeaveUnchanged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneShaderSettings_EOverrideMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneShaderSettings_EOverrideMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
