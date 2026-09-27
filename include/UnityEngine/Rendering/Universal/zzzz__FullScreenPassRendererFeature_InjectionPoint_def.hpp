#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FullScreenPassRendererFeature_InjectionPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FullScreenPassRendererFeature_InjectionPoint)
// Forward declare root types
namespace GlobalNamespace {
struct FullScreenPassRendererFeature_InjectionPoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/InjectionPoint");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/InjectionPoint
struct CORDL_TYPE FullScreenPassRendererFeature_InjectionPoint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FullScreenPassRendererFeature_InjectionPoint_Unwrapped
enum struct __FullScreenPassRendererFeature_InjectionPoint_Unwrapped : int32_t {
__E_BeforeRenderingTransparents = static_cast<int32_t>(0x1c2),
__E_BeforeRenderingPostProcessing = static_cast<int32_t>(0x226),
__E_AfterRenderingPostProcessing = static_cast<int32_t>(0x258),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FullScreenPassRendererFeature_InjectionPoint_Unwrapped () const noexcept {
return static_cast<__FullScreenPassRendererFeature_InjectionPoint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FullScreenPassRendererFeature_InjectionPoint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FullScreenPassRendererFeature_InjectionPoint(int32_t  value__) noexcept;

/// @brief Field AfterRenderingPostProcessing value: I32(600)
static ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint const AfterRenderingPostProcessing;

/// @brief Field BeforeRenderingPostProcessing value: I32(550)
static ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint const BeforeRenderingPostProcessing;

/// @brief Field BeforeRenderingTransparents value: I32(450)
static ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint const BeforeRenderingTransparents;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18559};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
