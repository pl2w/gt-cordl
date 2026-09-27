#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtils_BlitFilterMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphUtils_BlitFilterMode)
// Forward declare root types
namespace GlobalNamespace {
struct RenderGraphUtils_BlitFilterMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderGraphUtils_BlitFilterMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderGraphUtils_BlitFilterMode, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils/BlitFilterMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/BlitFilterMode
struct CORDL_TYPE RenderGraphUtils_BlitFilterMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderGraphUtils_BlitFilterMode_Unwrapped
enum struct __RenderGraphUtils_BlitFilterMode_Unwrapped : int32_t {
__E_ClampNearest = static_cast<int32_t>(0x0),
__E_ClampBilinear = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderGraphUtils_BlitFilterMode_Unwrapped () const noexcept {
return static_cast<__RenderGraphUtils_BlitFilterMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphUtils_BlitFilterMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraphUtils_BlitFilterMode(int32_t  value__) noexcept;

/// @brief Field ClampBilinear value: I32(1)
static ::GlobalNamespace::RenderGraphUtils_BlitFilterMode const ClampBilinear;

/// @brief Field ClampNearest value: I32(0)
static ::GlobalNamespace::RenderGraphUtils_BlitFilterMode const ClampNearest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitFilterMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderGraphUtils_BlitFilterMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
