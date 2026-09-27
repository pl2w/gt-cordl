#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_LightCookieShaderFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieManager_LightCookieShaderFormat)
// Forward declare root types
namespace GlobalNamespace {
struct LightCookieManager_LightCookieShaderFormat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightCookieManager_LightCookieShaderFormat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightCookieManager_LightCookieShaderFormat, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieShaderFormat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderFormat
struct CORDL_TYPE LightCookieManager_LightCookieShaderFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightCookieManager_LightCookieShaderFormat_Unwrapped
enum struct __LightCookieManager_LightCookieShaderFormat_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_RGB = static_cast<int32_t>(0x0),
__E_Alpha = static_cast<int32_t>(0x1),
__E_Red = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightCookieManager_LightCookieShaderFormat_Unwrapped () const noexcept {
return static_cast<__LightCookieManager_LightCookieShaderFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager_LightCookieShaderFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LightCookieManager_LightCookieShaderFormat(int32_t  value__) noexcept;

/// @brief Field Alpha value: I32(1)
static ::GlobalNamespace::LightCookieManager_LightCookieShaderFormat const Alpha;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::LightCookieManager_LightCookieShaderFormat const None;

/// @brief Field RGB value: I32(0)
static ::GlobalNamespace::LightCookieManager_LightCookieShaderFormat const RGB;

/// @brief Field Red value: I32(2)
static ::GlobalNamespace::LightCookieManager_LightCookieShaderFormat const Red;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightCookieManager_LightCookieShaderFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightCookieManager_LightCookieShaderFormat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
