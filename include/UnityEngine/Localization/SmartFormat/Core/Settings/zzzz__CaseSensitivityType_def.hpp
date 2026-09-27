#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Settings/CaseSensitivityType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CaseSensitivityType)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
struct CaseSensitivityType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType, "UnityEngine.Localization.SmartFormat.Core.Settings", "CaseSensitivityType");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
// Is value type: true
// CS Name: UnityEngine.Localization.SmartFormat.Core.Settings.CaseSensitivityType
struct CORDL_TYPE CaseSensitivityType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CaseSensitivityType_Unwrapped
enum struct __CaseSensitivityType_Unwrapped : int32_t {
__E_CaseSensitive = static_cast<int32_t>(0x0),
__E_CaseInsensitive = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CaseSensitivityType_Unwrapped () const noexcept {
return static_cast<__CaseSensitivityType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CaseSensitivityType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CaseSensitivityType(int32_t  value__) noexcept;

/// @brief Field CaseInsensitive value: I32(1)
static ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType const CaseInsensitive;

/// @brief Field CaseSensitive value: I32(0)
static ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType const CaseSensitive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Settings
