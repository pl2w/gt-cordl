#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPass_BlurTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionPass_BlurTypes)
// Forward declare root types
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionPass_BlurTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_BlurTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_BlurTypes, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass/BlurTypes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/BlurTypes
struct CORDL_TYPE ScreenSpaceAmbientOcclusionPass_BlurTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped
enum struct __ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped : int32_t {
__E_Bilateral = static_cast<int32_t>(0x0),
__E_Gaussian = static_cast<int32_t>(0x1),
__E_Kawase = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceAmbientOcclusionPass_BlurTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceAmbientOcclusionPass_BlurTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScreenSpaceAmbientOcclusionPass_BlurTypes(int32_t  value__) noexcept;

/// @brief Field Bilateral value: I32(0)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_BlurTypes const Bilateral;

/// @brief Field Gaussian value: I32(1)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_BlurTypes const Gaussian;

/// @brief Field Kawase value: I32(2)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_BlurTypes const Kawase;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_BlurTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_BlurTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
