#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Settings/ErrorAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorAction)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
struct ErrorAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction, "UnityEngine.Localization.SmartFormat.Core.Settings", "ErrorAction");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
// Is value type: true
// CS Name: UnityEngine.Localization.SmartFormat.Core.Settings.ErrorAction
struct CORDL_TYPE ErrorAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ErrorAction_Unwrapped
enum struct __ErrorAction_Unwrapped : int32_t {
__E_ThrowError = static_cast<int32_t>(0x0),
__E_OutputErrorInResult = static_cast<int32_t>(0x1),
__E_Ignore = static_cast<int32_t>(0x2),
__E_MaintainTokens = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ErrorAction_Unwrapped () const noexcept {
return static_cast<__ErrorAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ErrorAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ErrorAction(int32_t  value__) noexcept;

/// @brief Field Ignore value: I32(2)
static ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction const Ignore;

/// @brief Field MaintainTokens value: I32(3)
static ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction const MaintainTokens;

/// @brief Field OutputErrorInResult value: I32(1)
static ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction const OutputErrorInResult;

/// @brief Field ThrowError value: I32(0)
static ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction const ThrowError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Settings
