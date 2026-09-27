#pragma once
// IWYU pragma private; include "UnityEngine/UI/GraphicRaycaster_BlockingObjects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicRaycaster_BlockingObjects)
// Forward declare root types
namespace GlobalNamespace {
struct GraphicRaycaster_BlockingObjects;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GraphicRaycaster_BlockingObjects);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphicRaycaster_BlockingObjects, "UnityEngine.UI", "GraphicRaycaster/BlockingObjects");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.GraphicRaycaster/BlockingObjects
struct CORDL_TYPE GraphicRaycaster_BlockingObjects {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicRaycaster_BlockingObjects_Unwrapped
enum struct __GraphicRaycaster_BlockingObjects_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TwoD = static_cast<int32_t>(0x1),
__E_ThreeD = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicRaycaster_BlockingObjects_Unwrapped () const noexcept {
return static_cast<__GraphicRaycaster_BlockingObjects_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicRaycaster_BlockingObjects() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphicRaycaster_BlockingObjects(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::GlobalNamespace::GraphicRaycaster_BlockingObjects const All;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GraphicRaycaster_BlockingObjects const None;

/// @brief Field ThreeD value: I32(2)
static ::GlobalNamespace::GraphicRaycaster_BlockingObjects const ThreeD;

/// @brief Field TwoD value: I32(1)
static ::GlobalNamespace::GraphicRaycaster_BlockingObjects const TwoD;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphicRaycaster_BlockingObjects, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphicRaycaster_BlockingObjects) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
