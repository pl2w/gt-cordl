#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_DepthCopySchedule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderer_DepthCopySchedule)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalRenderer_DepthCopySchedule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderer_DepthCopySchedule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderer_DepthCopySchedule, "UnityEngine.Rendering.Universal", "UniversalRenderer/DepthCopySchedule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/DepthCopySchedule
struct CORDL_TYPE UniversalRenderer_DepthCopySchedule {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UniversalRenderer_DepthCopySchedule_Unwrapped
enum struct __UniversalRenderer_DepthCopySchedule_Unwrapped : int32_t {
__E_DuringPrepass = static_cast<int32_t>(0x0),
__E_AfterPrepass = static_cast<int32_t>(0x1),
__E_AfterGBuffer = static_cast<int32_t>(0x2),
__E_AfterOpaques = static_cast<int32_t>(0x3),
__E_AfterSkybox = static_cast<int32_t>(0x4),
__E_AfterTransparents = static_cast<int32_t>(0x5),
__E_None = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UniversalRenderer_DepthCopySchedule_Unwrapped () const noexcept {
return static_cast<__UniversalRenderer_DepthCopySchedule_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_DepthCopySchedule() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderer_DepthCopySchedule(int32_t  value__) noexcept;

/// @brief Field AfterGBuffer value: I32(2)
static ::GlobalNamespace::UniversalRenderer_DepthCopySchedule const AfterGBuffer;

/// @brief Field AfterOpaques value: I32(3)
static ::GlobalNamespace::UniversalRenderer_DepthCopySchedule const AfterOpaques;

/// @brief Field AfterPrepass value: I32(1)
static ::GlobalNamespace::UniversalRenderer_DepthCopySchedule const AfterPrepass;

/// @brief Field AfterSkybox value: I32(4)
static ::GlobalNamespace::UniversalRenderer_DepthCopySchedule const AfterSkybox;

/// @brief Field AfterTransparents value: I32(5)
static ::GlobalNamespace::UniversalRenderer_DepthCopySchedule const AfterTransparents;

/// @brief Field DuringPrepass value: I32(0)
static ::GlobalNamespace::UniversalRenderer_DepthCopySchedule const DuringPrepass;

/// @brief Field None value: I32(6)
static ::GlobalNamespace::UniversalRenderer_DepthCopySchedule const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18664};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderer_DepthCopySchedule, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderer_DepthCopySchedule) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
