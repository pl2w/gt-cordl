#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollView_TouchScrollBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollView_TouchScrollBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct ScrollView_TouchScrollBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScrollView_TouchScrollBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScrollView_TouchScrollBehavior, "UnityEngine.UIElements", "ScrollView/TouchScrollBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.ScrollView/TouchScrollBehavior
struct CORDL_TYPE ScrollView_TouchScrollBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScrollView_TouchScrollBehavior_Unwrapped
enum struct __ScrollView_TouchScrollBehavior_Unwrapped : int32_t {
__E_Unrestricted = static_cast<int32_t>(0x0),
__E_Elastic = static_cast<int32_t>(0x1),
__E_Clamped = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScrollView_TouchScrollBehavior_Unwrapped () const noexcept {
return static_cast<__ScrollView_TouchScrollBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScrollView_TouchScrollBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScrollView_TouchScrollBehavior(int32_t  value__) noexcept;

/// @brief Field Clamped value: I32(2)
static ::GlobalNamespace::ScrollView_TouchScrollBehavior const Clamped;

/// @brief Field Elastic value: I32(1)
static ::GlobalNamespace::ScrollView_TouchScrollBehavior const Elastic;

/// @brief Field Unrestricted value: I32(0)
static ::GlobalNamespace::ScrollView_TouchScrollBehavior const Unrestricted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScrollView_TouchScrollBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScrollView_TouchScrollBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
