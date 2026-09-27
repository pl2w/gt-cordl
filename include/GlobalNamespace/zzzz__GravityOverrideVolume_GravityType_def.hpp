#pragma once
// IWYU pragma private; include "GlobalNamespace/GravityOverrideVolume_GravityType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GravityOverrideVolume_GravityType)
// Forward declare root types
namespace GlobalNamespace {
struct GravityOverrideVolume_GravityType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GravityOverrideVolume_GravityType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GravityOverrideVolume_GravityType, "", "GravityOverrideVolume/GravityType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GravityOverrideVolume/GravityType
struct CORDL_TYPE GravityOverrideVolume_GravityType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GravityOverrideVolume_GravityType_Unwrapped
enum struct __GravityOverrideVolume_GravityType_Unwrapped : int32_t {
__E_Directional = static_cast<int32_t>(0x0),
__E_Radial = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GravityOverrideVolume_GravityType_Unwrapped () const noexcept {
return static_cast<__GravityOverrideVolume_GravityType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GravityOverrideVolume_GravityType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GravityOverrideVolume_GravityType(int32_t  value__) noexcept;

/// @brief Field Directional value: I32(0)
static ::GlobalNamespace::GravityOverrideVolume_GravityType const Directional;

/// @brief Field Radial value: I32(1)
static ::GlobalNamespace::GravityOverrideVolume_GravityType const Radial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GravityOverrideVolume_GravityType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GravityOverrideVolume_GravityType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
