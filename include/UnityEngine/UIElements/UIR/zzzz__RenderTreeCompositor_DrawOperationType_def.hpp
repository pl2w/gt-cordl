#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeCompositor_DrawOperationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTreeCompositor_DrawOperationType)
// Forward declare root types
namespace GlobalNamespace {
struct RenderTreeCompositor_DrawOperationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderTreeCompositor_DrawOperationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderTreeCompositor_DrawOperationType, "UnityEngine.UIElements.UIR", "RenderTreeCompositor/DrawOperationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeCompositor/DrawOperationType
struct CORDL_TYPE RenderTreeCompositor_DrawOperationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderTreeCompositor_DrawOperationType_Unwrapped
enum struct __RenderTreeCompositor_DrawOperationType_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_RenderTree = static_cast<int32_t>(0x1),
__E_Effect = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTreeCompositor_DrawOperationType_Unwrapped () const noexcept {
return static_cast<__RenderTreeCompositor_DrawOperationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderTreeCompositor_DrawOperationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderTreeCompositor_DrawOperationType(int32_t  value__) noexcept;

/// @brief Field Effect value: I32(2)
static ::GlobalNamespace::RenderTreeCompositor_DrawOperationType const Effect;

/// @brief Field RenderTree value: I32(1)
static ::GlobalNamespace::RenderTreeCompositor_DrawOperationType const RenderTree;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::RenderTreeCompositor_DrawOperationType const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8563};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderTreeCompositor_DrawOperationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderTreeCompositor_DrawOperationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
