#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/FallbackBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FallbackBehavior)
// Forward declare root types
namespace UnityEngine::Localization::Settings {
struct FallbackBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::Settings::FallbackBehavior);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::FallbackBehavior, "UnityEngine.Localization.Settings", "FallbackBehavior");
// Dependencies 
namespace UnityEngine::Localization::Settings {
// Is value type: true
// CS Name: UnityEngine.Localization.Settings.FallbackBehavior
struct CORDL_TYPE FallbackBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FallbackBehavior_Unwrapped
enum struct __FallbackBehavior_Unwrapped : int32_t {
__E_UseProjectSettings = static_cast<int32_t>(0x0),
__E_DontUseFallback = static_cast<int32_t>(0x1),
__E_UseFallback = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FallbackBehavior_Unwrapped () const noexcept {
return static_cast<__FallbackBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FallbackBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FallbackBehavior(int32_t  value__) noexcept;

/// @brief Field DontUseFallback value: I32(1)
static ::UnityEngine::Localization::Settings::FallbackBehavior const DontUseFallback;

/// @brief Field UseFallback value: I32(2)
static ::UnityEngine::Localization::Settings::FallbackBehavior const UseFallback;

/// @brief Field UseProjectSettings value: I32(0)
static ::UnityEngine::Localization::Settings::FallbackBehavior const UseProjectSettings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::FallbackBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::FallbackBehavior) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
