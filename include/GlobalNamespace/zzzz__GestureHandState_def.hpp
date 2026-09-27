#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureHandState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GestureHandState)
// Forward declare root types
namespace GlobalNamespace {
struct GestureHandState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GestureHandState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GestureHandState, "", "GestureHandState");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GestureHandState
struct CORDL_TYPE GestureHandState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GestureHandState_Unwrapped
enum struct __GestureHandState_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_IsLeft = static_cast<uint32_t>(0x1u),
__E_IsRight = static_cast<uint32_t>(0x2u),
__E_Open = static_cast<uint32_t>(0x4u),
__E_Closed = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GestureHandState_Unwrapped () const noexcept {
return static_cast<__GestureHandState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GestureHandState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GestureHandState(uint32_t  value__) noexcept;

/// @brief Field Closed value: U32(8)
static ::GlobalNamespace::GestureHandState const Closed;

/// @brief Field IsLeft value: U32(1)
static ::GlobalNamespace::GestureHandState const IsLeft;

/// @brief Field IsRight value: U32(2)
static ::GlobalNamespace::GestureHandState const IsRight;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::GestureHandState const None;

/// @brief Field Open value: U32(4)
static ::GlobalNamespace::GestureHandState const Open;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{721};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GestureHandState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GestureHandState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
