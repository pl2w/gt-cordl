#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelEventHandler_PointerEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelEventHandler_PointerEventType)
// Forward declare root types
namespace GlobalNamespace {
struct PanelEventHandler_PointerEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PanelEventHandler_PointerEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelEventHandler_PointerEventType, "UnityEngine.UIElements", "PanelEventHandler/PointerEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.PanelEventHandler/PointerEventType
struct CORDL_TYPE PanelEventHandler_PointerEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PanelEventHandler_PointerEventType_Unwrapped
enum struct __PanelEventHandler_PointerEventType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Down = static_cast<int32_t>(0x1),
__E_Up = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PanelEventHandler_PointerEventType_Unwrapped () const noexcept {
return static_cast<__PanelEventHandler_PointerEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PanelEventHandler_PointerEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PanelEventHandler_PointerEventType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::PanelEventHandler_PointerEventType const Default;

/// @brief Field Down value: I32(1)
static ::GlobalNamespace::PanelEventHandler_PointerEventType const Down;

/// @brief Field Up value: I32(2)
static ::GlobalNamespace::PanelEventHandler_PointerEventType const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PanelEventHandler_PointerEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PanelEventHandler_PointerEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
