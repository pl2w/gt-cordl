#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/CloudScriptRevisionOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudScriptRevisionOption)
// Forward declare root types
namespace PlayFab::CloudScriptModels {
struct CloudScriptRevisionOption;
}
// Write type traits
MARK_VAL_T(::PlayFab::CloudScriptModels::CloudScriptRevisionOption);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::CloudScriptRevisionOption, "PlayFab.CloudScriptModels", "CloudScriptRevisionOption");
// Dependencies 
namespace PlayFab::CloudScriptModels {
// Is value type: true
// CS Name: PlayFab.CloudScriptModels.CloudScriptRevisionOption
struct CORDL_TYPE CloudScriptRevisionOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CloudScriptRevisionOption_Unwrapped
enum struct __CloudScriptRevisionOption_Unwrapped : int32_t {
__E_Live = static_cast<int32_t>(0x0),
__E_Latest = static_cast<int32_t>(0x1),
__E_Specific = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CloudScriptRevisionOption_Unwrapped () const noexcept {
return static_cast<__CloudScriptRevisionOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CloudScriptRevisionOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CloudScriptRevisionOption(int32_t  value__) noexcept;

/// @brief Field Latest value: I32(1)
static ::PlayFab::CloudScriptModels::CloudScriptRevisionOption const Latest;

/// @brief Field Live value: I32(0)
static ::PlayFab::CloudScriptModels::CloudScriptRevisionOption const Live;

/// @brief Field Specific value: I32(2)
static ::PlayFab::CloudScriptModels::CloudScriptRevisionOption const Specific;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19870};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::CloudScriptRevisionOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::CloudScriptRevisionOption) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
