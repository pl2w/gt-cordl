#pragma once
// IWYU pragma private; include "UnityChan/AutoBlink_Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoBlink_Status)
// Forward declare root types
namespace GlobalNamespace {
struct AutoBlink_Status;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutoBlink_Status);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutoBlink_Status, "UnityChan", "AutoBlink/Status");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityChan.AutoBlink/Status
struct CORDL_TYPE AutoBlink_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AutoBlink_Status_Unwrapped
enum struct __AutoBlink_Status_Unwrapped : int32_t {
__E_Close = static_cast<int32_t>(0x0),
__E_HalfClose = static_cast<int32_t>(0x1),
__E_Open = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AutoBlink_Status_Unwrapped () const noexcept {
return static_cast<__AutoBlink_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AutoBlink_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AutoBlink_Status(int32_t  value__) noexcept;

/// @brief Field Close value: I32(0)
static ::GlobalNamespace::AutoBlink_Status const Close;

/// @brief Field HalfClose value: I32(1)
static ::GlobalNamespace::AutoBlink_Status const HalfClose;

/// @brief Field Open value: I32(2)
static ::GlobalNamespace::AutoBlink_Status const Open;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5156};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoBlink_Status, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutoBlink_Status) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
