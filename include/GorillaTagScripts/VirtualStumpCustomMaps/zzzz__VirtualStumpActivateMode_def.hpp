#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/VirtualStumpActivateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpActivateMode)
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct VirtualStumpActivateMode;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode, "GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpActivateMode");
// Dependencies 
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpActivateMode
struct CORDL_TYPE VirtualStumpActivateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VirtualStumpActivateMode_Unwrapped
enum struct __VirtualStumpActivateMode_Unwrapped : int32_t {
__E_Custom = static_cast<int32_t>(0x0),
__E_FeatureA = static_cast<int32_t>(0x1),
__E_FeatureB = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VirtualStumpActivateMode_Unwrapped () const noexcept {
return static_cast<__VirtualStumpActivateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpActivateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VirtualStumpActivateMode(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(0)
static ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode const Custom;

/// @brief Field FeatureA value: I32(1)
static ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode const FeatureA;

/// @brief Field FeatureB value: I32(2)
static ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode const FeatureB;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode) == 0x4, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
