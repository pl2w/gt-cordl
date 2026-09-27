#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeManager_VisualChangesProcessor_VisualsProcessingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTreeManager_VisualChangesProcessor_VisualsProcessingType)
// Forward declare root types
namespace GlobalNamespace {
struct VisualChangesProcessor_RenderTreeManager_VisualsProcessingType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType, "UnityEngine.UIElements.UIR", "RenderTreeManager/VisualChangesProcessor/VisualsProcessingType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/VisualChangesProcessor/VisualsProcessingType
struct CORDL_TYPE VisualChangesProcessor_RenderTreeManager_VisualsProcessingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped
enum struct __VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_Tail = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped () const noexcept {
return static_cast<__VisualChangesProcessor_RenderTreeManager_VisualsProcessingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualChangesProcessor_RenderTreeManager_VisualsProcessingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualChangesProcessor_RenderTreeManager_VisualsProcessingType(int32_t  value__) noexcept;

/// @brief Field Head value: I32(0)
static ::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType const Head;

/// @brief Field Tail value: I32(1)
static ::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType const Tail;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_VisualsProcessingType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
