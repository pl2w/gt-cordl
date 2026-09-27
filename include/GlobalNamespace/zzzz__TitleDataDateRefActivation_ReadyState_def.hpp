#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataDateRefActivation_ReadyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TitleDataDateRefActivation_ReadyState)
// Forward declare root types
namespace GlobalNamespace {
struct TitleDataDateRefActivation_ReadyState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TitleDataDateRefActivation_ReadyState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataDateRefActivation_ReadyState, "", "TitleDataDateRefActivation/ReadyState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TitleDataDateRefActivation/ReadyState
struct CORDL_TYPE TitleDataDateRefActivation_ReadyState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TitleDataDateRefActivation_ReadyState_Unwrapped
enum struct __TitleDataDateRefActivation_ReadyState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Initializing = static_cast<int32_t>(0x1),
__E_Ready = static_cast<int32_t>(0x2),
__E_Crashed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TitleDataDateRefActivation_ReadyState_Unwrapped () const noexcept {
return static_cast<__TitleDataDateRefActivation_ReadyState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TitleDataDateRefActivation_ReadyState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TitleDataDateRefActivation_ReadyState(int32_t  value__) noexcept;

/// @brief Field Crashed value: I32(3)
static ::GlobalNamespace::TitleDataDateRefActivation_ReadyState const Crashed;

/// @brief Field Initializing value: I32(1)
static ::GlobalNamespace::TitleDataDateRefActivation_ReadyState const Initializing;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TitleDataDateRefActivation_ReadyState const None;

/// @brief Field Ready value: I32(2)
static ::GlobalNamespace::TitleDataDateRefActivation_ReadyState const Ready;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataDateRefActivation_ReadyState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataDateRefActivation_ReadyState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
