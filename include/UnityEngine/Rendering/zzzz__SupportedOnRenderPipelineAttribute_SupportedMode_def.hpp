#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedOnRenderPipelineAttribute_SupportedMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SupportedOnRenderPipelineAttribute_SupportedMode)
// Forward declare root types
namespace GlobalNamespace {
struct SupportedOnRenderPipelineAttribute_SupportedMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode, "UnityEngine.Rendering", "SupportedOnRenderPipelineAttribute/SupportedMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.SupportedOnRenderPipelineAttribute/SupportedMode
struct CORDL_TYPE SupportedOnRenderPipelineAttribute_SupportedMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped
enum struct __SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped : int32_t {
__E_Unsupported = static_cast<int32_t>(0x0),
__E_Supported = static_cast<int32_t>(0x1),
__E_SupportedByBaseClass = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped () const noexcept {
return static_cast<__SupportedOnRenderPipelineAttribute_SupportedMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SupportedOnRenderPipelineAttribute_SupportedMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SupportedOnRenderPipelineAttribute_SupportedMode(int32_t  value__) noexcept;

/// @brief Field Supported value: I32(1)
static ::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode const Supported;

/// @brief Field SupportedByBaseClass value: I32(2)
static ::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode const SupportedByBaseClass;

/// @brief Field Unsupported value: I32(0)
static ::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode const Unsupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15517};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SupportedOnRenderPipelineAttribute_SupportedMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
