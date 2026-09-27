#pragma once
// IWYU pragma private; include "GlobalNamespace/Slingshot_SlingshotActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Slingshot_SlingshotActions)
// Forward declare root types
namespace GlobalNamespace {
struct Slingshot_SlingshotActions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Slingshot_SlingshotActions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Slingshot_SlingshotActions, "", "Slingshot/SlingshotActions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Slingshot/SlingshotActions
struct CORDL_TYPE Slingshot_SlingshotActions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Slingshot_SlingshotActions_Unwrapped
enum struct __Slingshot_SlingshotActions_Unwrapped : int32_t {
__E_Grab = static_cast<int32_t>(0x0),
__E_Release = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Slingshot_SlingshotActions_Unwrapped () const noexcept {
return static_cast<__Slingshot_SlingshotActions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Slingshot_SlingshotActions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Slingshot_SlingshotActions(int32_t  value__) noexcept;

/// @brief Field Grab value: I32(0)
static ::GlobalNamespace::Slingshot_SlingshotActions const Grab;

/// @brief Field Release value: I32(1)
static ::GlobalNamespace::Slingshot_SlingshotActions const Release;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1213};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Slingshot_SlingshotActions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Slingshot_SlingshotActions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
