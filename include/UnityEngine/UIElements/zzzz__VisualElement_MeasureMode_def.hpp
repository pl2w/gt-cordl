#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElement_MeasureMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElement_MeasureMode)
// Forward declare root types
namespace GlobalNamespace {
struct VisualElement_MeasureMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualElement_MeasureMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualElement_MeasureMode, "UnityEngine.UIElements", "VisualElement/MeasureMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualElement/MeasureMode
struct CORDL_TYPE VisualElement_MeasureMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualElement_MeasureMode_Unwrapped
enum struct __VisualElement_MeasureMode_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Exactly = static_cast<int32_t>(0x1),
__E_AtMost = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualElement_MeasureMode_Unwrapped () const noexcept {
return static_cast<__VisualElement_MeasureMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualElement_MeasureMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualElement_MeasureMode(int32_t  value__) noexcept;

/// @brief Field AtMost value: I32(2)
static ::GlobalNamespace::VisualElement_MeasureMode const AtMost;

/// @brief Field Exactly value: I32(1)
static ::GlobalNamespace::VisualElement_MeasureMode const Exactly;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::VisualElement_MeasureMode const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8035};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualElement_MeasureMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualElement_MeasureMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
