#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSZoneShaderSettings_ETextureOverrideType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CMSZoneShaderSettings_ETextureOverrideType)
// Forward declare root types
namespace GlobalNamespace {
struct CMSZoneShaderSettings_ETextureOverrideType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType, "GT_CustomMapSupportRuntime", "CMSZoneShaderSettings/ETextureOverrideType");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.CMSZoneShaderSettings/ETextureOverrideType
struct CORDL_TYPE CMSZoneShaderSettings_ETextureOverrideType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CMSZoneShaderSettings_ETextureOverrideType_Unwrapped
enum struct __CMSZoneShaderSettings_ETextureOverrideType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CMSZoneShaderSettings_ETextureOverrideType_Unwrapped () const noexcept {
return static_cast<__CMSZoneShaderSettings_ETextureOverrideType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CMSZoneShaderSettings_ETextureOverrideType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CMSZoneShaderSettings_ETextureOverrideType(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(1)
static ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType const Custom;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType const Default;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30883};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
