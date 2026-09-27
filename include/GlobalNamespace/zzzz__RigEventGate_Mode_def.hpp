#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventGate_Mode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigEventGate_Mode)
// Forward declare root types
namespace GlobalNamespace {
struct RigEventGate_Mode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RigEventGate_Mode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventGate_Mode, "", "RigEventGate/Mode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RigEventGate/Mode
struct CORDL_TYPE RigEventGate_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RigEventGate_Mode_Unwrapped
enum struct __RigEventGate_Mode_Unwrapped : int32_t {
__E_RELATIVE = static_cast<int32_t>(0x0),
__E_ABSOLUTE = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RigEventGate_Mode_Unwrapped () const noexcept {
return static_cast<__RigEventGate_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RigEventGate_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RigEventGate_Mode(int32_t  value__) noexcept;

/// @brief Field ABSOLUTE value: I32(1)
static ::GlobalNamespace::RigEventGate_Mode const ABSOLUTE;

/// @brief Field RELATIVE value: I32(0)
static ::GlobalNamespace::RigEventGate_Mode const RELATIVE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventGate_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventGate_Mode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
