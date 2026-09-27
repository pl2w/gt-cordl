#pragma once
// IWYU pragma private; include "UnityEngine/UI/InputField_EditState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputField_EditState)
// Forward declare root types
namespace GlobalNamespace {
struct InputField_EditState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputField_EditState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputField_EditState, "UnityEngine.UI", "InputField/EditState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.InputField/EditState
struct CORDL_TYPE InputField_EditState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputField_EditState_Unwrapped
enum struct __InputField_EditState_Unwrapped : int32_t {
__E_Continue = static_cast<int32_t>(0x0),
__E_Finish = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputField_EditState_Unwrapped () const noexcept {
return static_cast<__InputField_EditState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputField_EditState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputField_EditState(int32_t  value__) noexcept;

/// @brief Field Continue value: I32(0)
static ::GlobalNamespace::InputField_EditState const Continue;

/// @brief Field Finish value: I32(1)
static ::GlobalNamespace::InputField_EditState const Finish;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputField_EditState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputField_EditState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
