#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderObjects_RenderObjectsSettings_OverrideMaterialMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderObjects_RenderObjectsSettings_OverrideMaterialMode)
// Forward declare root types
namespace GlobalNamespace {
struct RenderObjectsSettings_RenderObjects_OverrideMaterialMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderObjectsSettings_RenderObjects_OverrideMaterialMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderObjectsSettings_RenderObjects_OverrideMaterialMode, "UnityEngine.Rendering.Universal", "RenderObjects/RenderObjectsSettings/OverrideMaterialMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderObjects/RenderObjectsSettings/OverrideMaterialMode
struct CORDL_TYPE RenderObjectsSettings_RenderObjects_OverrideMaterialMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped
enum struct __RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Material = static_cast<int32_t>(0x1),
__E_Shader = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped () const noexcept {
return static_cast<__RenderObjectsSettings_RenderObjects_OverrideMaterialMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderObjectsSettings_RenderObjects_OverrideMaterialMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderObjectsSettings_RenderObjects_OverrideMaterialMode(int32_t  value__) noexcept;

/// @brief Field Material value: I32(1)
static ::GlobalNamespace::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const Material;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const None;

/// @brief Field Shader value: I32(2)
static ::GlobalNamespace::RenderObjectsSettings_RenderObjects_OverrideMaterialMode const Shader;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderObjectsSettings_RenderObjects_OverrideMaterialMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderObjectsSettings_RenderObjects_OverrideMaterialMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
