#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedRenderingFeatures_ReflectionProbeModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SupportedRenderingFeatures_ReflectionProbeModes)
// Forward declare root types
namespace GlobalNamespace {
struct SupportedRenderingFeatures_ReflectionProbeModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/ReflectionProbeModes");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
struct CORDL_TYPE SupportedRenderingFeatures_ReflectionProbeModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped
enum struct __SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Rotation = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped () const noexcept {
return static_cast<__SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SupportedRenderingFeatures_ReflectionProbeModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SupportedRenderingFeatures_ReflectionProbeModes(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes const None;

/// @brief Field Rotation value: I32(1)
static ::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes const Rotation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15575};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
