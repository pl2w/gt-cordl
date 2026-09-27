#pragma once
// IWYU pragma private; include "GlobalNamespace/UmbrellaItem_UmbrellaStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UmbrellaItem_UmbrellaStates)
// Forward declare root types
namespace GlobalNamespace {
struct UmbrellaItem_UmbrellaStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UmbrellaItem_UmbrellaStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UmbrellaItem_UmbrellaStates, "", "UmbrellaItem/UmbrellaStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UmbrellaItem/UmbrellaStates
struct CORDL_TYPE UmbrellaItem_UmbrellaStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UmbrellaItem_UmbrellaStates_Unwrapped
enum struct __UmbrellaItem_UmbrellaStates_Unwrapped : int32_t {
__E_UmbrellaOpen = static_cast<int32_t>(0x1),
__E_UmbrellaClosed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UmbrellaItem_UmbrellaStates_Unwrapped () const noexcept {
return static_cast<__UmbrellaItem_UmbrellaStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UmbrellaItem_UmbrellaStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UmbrellaItem_UmbrellaStates(int32_t  value__) noexcept;

/// @brief Field UmbrellaClosed value: I32(2)
static ::GlobalNamespace::UmbrellaItem_UmbrellaStates const UmbrellaClosed;

/// @brief Field UmbrellaOpen value: I32(1)
static ::GlobalNamespace::UmbrellaItem_UmbrellaStates const UmbrellaOpen;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1371};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UmbrellaItem_UmbrellaStates, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UmbrellaItem_UmbrellaStates) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
