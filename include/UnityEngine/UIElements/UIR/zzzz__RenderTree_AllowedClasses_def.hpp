#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTree_AllowedClasses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTree_AllowedClasses)
// Forward declare root types
namespace GlobalNamespace {
struct RenderTree_AllowedClasses;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderTree_AllowedClasses);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderTree_AllowedClasses, "UnityEngine.UIElements.UIR", "RenderTree/AllowedClasses");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTree/AllowedClasses
struct CORDL_TYPE RenderTree_AllowedClasses {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderTree_AllowedClasses_Unwrapped
enum struct __RenderTree_AllowedClasses_Unwrapped : int32_t {
__E_Clipping = static_cast<int32_t>(0x1),
__E_Opacity = static_cast<int32_t>(0x2),
__E_Color = static_cast<int32_t>(0x4),
__E_TransformSize = static_cast<int32_t>(0x8),
__E_Visuals = static_cast<int32_t>(0x10),
__E_All = static_cast<int32_t>(0x1f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTree_AllowedClasses_Unwrapped () const noexcept {
return static_cast<__RenderTree_AllowedClasses_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderTree_AllowedClasses() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderTree_AllowedClasses(int32_t  value__) noexcept;

/// @brief Field All value: I32(31)
static ::GlobalNamespace::RenderTree_AllowedClasses const All;

/// @brief Field Clipping value: I32(1)
static ::GlobalNamespace::RenderTree_AllowedClasses const Clipping;

/// @brief Field Color value: I32(4)
static ::GlobalNamespace::RenderTree_AllowedClasses const Color;

/// @brief Field Opacity value: I32(2)
static ::GlobalNamespace::RenderTree_AllowedClasses const Opacity;

/// @brief Field TransformSize value: I32(8)
static ::GlobalNamespace::RenderTree_AllowedClasses const TransformSize;

/// @brief Field Visuals value: I32(16)
static ::GlobalNamespace::RenderTree_AllowedClasses const Visuals;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderTree_AllowedClasses, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderTree_AllowedClasses) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
