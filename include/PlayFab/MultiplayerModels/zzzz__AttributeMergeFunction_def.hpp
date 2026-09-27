#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AttributeMergeFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeMergeFunction)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct AttributeMergeFunction;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::AttributeMergeFunction);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AttributeMergeFunction, "PlayFab.MultiplayerModels", "AttributeMergeFunction");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.AttributeMergeFunction
struct CORDL_TYPE AttributeMergeFunction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AttributeMergeFunction_Unwrapped
enum struct __AttributeMergeFunction_Unwrapped : int32_t {
__E_Min = static_cast<int32_t>(0x0),
__E_Max = static_cast<int32_t>(0x1),
__E_Average = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AttributeMergeFunction_Unwrapped () const noexcept {
return static_cast<__AttributeMergeFunction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AttributeMergeFunction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AttributeMergeFunction(int32_t  value__) noexcept;

/// @brief Field Average value: I32(2)
static ::PlayFab::MultiplayerModels::AttributeMergeFunction const Average;

/// @brief Field Max value: I32(1)
static ::PlayFab::MultiplayerModels::AttributeMergeFunction const Max;

/// @brief Field Min value: I32(0)
static ::PlayFab::MultiplayerModels::AttributeMergeFunction const Min;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AttributeMergeFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AttributeMergeFunction) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
