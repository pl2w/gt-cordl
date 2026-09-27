#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEvent_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationEvent_Type)
// Forward declare root types
namespace GlobalNamespace {
struct NavigationEvent_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NavigationEvent_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NavigationEvent_Type, "UnityEngine.InputForUI", "NavigationEvent/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.NavigationEvent/Type
struct CORDL_TYPE NavigationEvent_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavigationEvent_Type_Unwrapped
enum struct __NavigationEvent_Type_Unwrapped : int32_t {
__E_Move = static_cast<int32_t>(0x1),
__E_Submit = static_cast<int32_t>(0x2),
__E_Cancel = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavigationEvent_Type_Unwrapped () const noexcept {
return static_cast<__NavigationEvent_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NavigationEvent_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavigationEvent_Type(int32_t  value__) noexcept;

/// @brief Field Cancel value: I32(3)
static ::GlobalNamespace::NavigationEvent_Type const Cancel;

/// @brief Field Move value: I32(1)
static ::GlobalNamespace::NavigationEvent_Type const Move;

/// @brief Field Submit value: I32(2)
static ::GlobalNamespace::NavigationEvent_Type const Submit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NavigationEvent_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NavigationEvent_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
