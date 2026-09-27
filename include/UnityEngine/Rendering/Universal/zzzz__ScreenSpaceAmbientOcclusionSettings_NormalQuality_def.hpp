#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionSettings_NormalQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionSettings_NormalQuality)
// Forward declare root types
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_NormalQuality;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/NormalQuality");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_NormalQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped
enum struct __ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceAmbientOcclusionSettings_NormalQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScreenSpaceAmbientOcclusionSettings_NormalQuality(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality const High;

/// @brief Field Low value: I32(0)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality const Low;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18573};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
