#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/PreloadBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PreloadBehavior)
// Forward declare root types
namespace UnityEngine::Localization::Settings {
struct PreloadBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::Settings::PreloadBehavior);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::PreloadBehavior, "UnityEngine.Localization.Settings", "PreloadBehavior");
// Dependencies 
namespace UnityEngine::Localization::Settings {
// Is value type: true
// CS Name: UnityEngine.Localization.Settings.PreloadBehavior
struct CORDL_TYPE PreloadBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PreloadBehavior_Unwrapped
enum struct __PreloadBehavior_Unwrapped : int32_t {
__E_NoPreloading = static_cast<int32_t>(0x0),
__E_PreloadSelectedLocale = static_cast<int32_t>(0x1),
__E_PreloadSelectedLocaleAndFallbacks = static_cast<int32_t>(0x2),
__E_PreloadAllLocales = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PreloadBehavior_Unwrapped () const noexcept {
return static_cast<__PreloadBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PreloadBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PreloadBehavior(int32_t  value__) noexcept;

/// @brief Field NoPreloading value: I32(0)
static ::UnityEngine::Localization::Settings::PreloadBehavior const NoPreloading;

/// @brief Field PreloadAllLocales value: I32(3)
static ::UnityEngine::Localization::Settings::PreloadBehavior const PreloadAllLocales;

/// @brief Field PreloadSelectedLocale value: I32(1)
static ::UnityEngine::Localization::Settings::PreloadBehavior const PreloadSelectedLocale;

/// @brief Field PreloadSelectedLocaleAndFallbacks value: I32(2)
static ::UnityEngine::Localization::Settings::PreloadBehavior const PreloadSelectedLocaleAndFallbacks;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::PreloadBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::PreloadBehavior) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
