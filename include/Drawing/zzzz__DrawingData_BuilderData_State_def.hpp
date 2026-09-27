#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderData_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_BuilderData_State)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderData_DrawingData_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderData_DrawingData_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderData_DrawingData_State, "Drawing", "DrawingData/BuilderData/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/BuilderData/State
struct CORDL_TYPE BuilderData_DrawingData_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderData_DrawingData_State_Unwrapped
enum struct __BuilderData_DrawingData_State_Unwrapped : int32_t {
__E_Free = static_cast<int32_t>(0x0),
__E_Reserved = static_cast<int32_t>(0x1),
__E_Initialized = static_cast<int32_t>(0x2),
__E_WaitingForSplitter = static_cast<int32_t>(0x3),
__E_WaitingForUserDefinedJob = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderData_DrawingData_State_Unwrapped () const noexcept {
return static_cast<__BuilderData_DrawingData_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderData_DrawingData_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderData_DrawingData_State(int32_t  value__) noexcept;

/// @brief Field Free value: I32(0)
static ::GlobalNamespace::BuilderData_DrawingData_State const Free;

/// @brief Field Initialized value: I32(2)
static ::GlobalNamespace::BuilderData_DrawingData_State const Initialized;

/// @brief Field Reserved value: I32(1)
static ::GlobalNamespace::BuilderData_DrawingData_State const Reserved;

/// @brief Field WaitingForSplitter value: I32(3)
static ::GlobalNamespace::BuilderData_DrawingData_State const WaitingForSplitter;

/// @brief Field WaitingForUserDefinedJob value: I32(4)
static ::GlobalNamespace::BuilderData_DrawingData_State const WaitingForUserDefinedJob;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderData_DrawingData_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderData_DrawingData_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
