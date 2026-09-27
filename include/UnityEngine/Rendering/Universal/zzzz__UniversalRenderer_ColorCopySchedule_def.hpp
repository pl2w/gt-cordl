#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_ColorCopySchedule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderer_ColorCopySchedule)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalRenderer_ColorCopySchedule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderer_ColorCopySchedule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderer_ColorCopySchedule, "UnityEngine.Rendering.Universal", "UniversalRenderer/ColorCopySchedule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/ColorCopySchedule
struct CORDL_TYPE UniversalRenderer_ColorCopySchedule {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UniversalRenderer_ColorCopySchedule_Unwrapped
enum struct __UniversalRenderer_ColorCopySchedule_Unwrapped : int32_t {
__E_AfterSkybox = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UniversalRenderer_ColorCopySchedule_Unwrapped () const noexcept {
return static_cast<__UniversalRenderer_ColorCopySchedule_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_ColorCopySchedule() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderer_ColorCopySchedule(int32_t  value__) noexcept;

/// @brief Field AfterSkybox value: I32(0)
static ::GlobalNamespace::UniversalRenderer_ColorCopySchedule const AfterSkybox;

/// @brief Field None value: I32(1)
static ::GlobalNamespace::UniversalRenderer_ColorCopySchedule const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18665};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderer_ColorCopySchedule, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderer_ColorCopySchedule) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
