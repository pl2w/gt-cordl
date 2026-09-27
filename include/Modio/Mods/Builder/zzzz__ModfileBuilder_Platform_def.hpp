#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder_Platform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModfileBuilder_Platform)
// Forward declare root types
namespace GlobalNamespace {
struct ModfileBuilder_Platform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModfileBuilder_Platform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModfileBuilder_Platform, "Modio.Mods.Builder", "ModfileBuilder/Platform");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModfileBuilder/Platform
struct CORDL_TYPE ModfileBuilder_Platform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModfileBuilder_Platform_Unwrapped
enum struct __ModfileBuilder_Platform_Unwrapped : int32_t {
__E_Windows = static_cast<int32_t>(0x0),
__E_Mac = static_cast<int32_t>(0x1),
__E_Linux = static_cast<int32_t>(0x2),
__E_Android = static_cast<int32_t>(0x3),
__E_IOS = static_cast<int32_t>(0x4),
__E_XboxOne = static_cast<int32_t>(0x5),
__E_XboxSeriesX = static_cast<int32_t>(0x6),
__E_PlayStation4 = static_cast<int32_t>(0x7),
__E_PlayStation5 = static_cast<int32_t>(0x8),
__E_Switch = static_cast<int32_t>(0x9),
__E_Oculus = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModfileBuilder_Platform_Unwrapped () const noexcept {
return static_cast<__ModfileBuilder_Platform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModfileBuilder_Platform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModfileBuilder_Platform(int32_t  value__) noexcept;

/// @brief Field Android value: I32(3)
static ::GlobalNamespace::ModfileBuilder_Platform const Android;

/// @brief Field IOS value: I32(4)
static ::GlobalNamespace::ModfileBuilder_Platform const IOS;

/// @brief Field Linux value: I32(2)
static ::GlobalNamespace::ModfileBuilder_Platform const Linux;

/// @brief Field Mac value: I32(1)
static ::GlobalNamespace::ModfileBuilder_Platform const Mac;

/// @brief Field Oculus value: I32(10)
static ::GlobalNamespace::ModfileBuilder_Platform const Oculus;

/// @brief Field PlayStation4 value: I32(7)
static ::GlobalNamespace::ModfileBuilder_Platform const PlayStation4;

/// @brief Field PlayStation5 value: I32(8)
static ::GlobalNamespace::ModfileBuilder_Platform const PlayStation5;

/// @brief Field Switch value: I32(9)
static ::GlobalNamespace::ModfileBuilder_Platform const Switch;

/// @brief Field Windows value: I32(0)
static ::GlobalNamespace::ModfileBuilder_Platform const Windows;

/// @brief Field XboxOne value: I32(5)
static ::GlobalNamespace::ModfileBuilder_Platform const XboxOne;

/// @brief Field XboxSeriesX value: I32(6)
static ::GlobalNamespace::ModfileBuilder_Platform const XboxSeriesX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17618};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModfileBuilder_Platform, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModfileBuilder_Platform) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
