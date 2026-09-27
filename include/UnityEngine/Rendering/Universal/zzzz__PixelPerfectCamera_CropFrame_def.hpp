#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PixelPerfectCamera_CropFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PixelPerfectCamera_CropFrame)
// Forward declare root types
namespace GlobalNamespace {
struct PixelPerfectCamera_CropFrame;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PixelPerfectCamera_CropFrame);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PixelPerfectCamera_CropFrame, "UnityEngine.Rendering.Universal", "PixelPerfectCamera/CropFrame");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PixelPerfectCamera/CropFrame
struct CORDL_TYPE PixelPerfectCamera_CropFrame {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PixelPerfectCamera_CropFrame_Unwrapped
enum struct __PixelPerfectCamera_CropFrame_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Pillarbox = static_cast<int32_t>(0x1),
__E_Letterbox = static_cast<int32_t>(0x2),
__E_Windowbox = static_cast<int32_t>(0x3),
__E_StretchFill = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PixelPerfectCamera_CropFrame_Unwrapped () const noexcept {
return static_cast<__PixelPerfectCamera_CropFrame_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PixelPerfectCamera_CropFrame() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PixelPerfectCamera_CropFrame(int32_t  value__) noexcept;

/// @brief Field Letterbox value: I32(2)
static ::GlobalNamespace::PixelPerfectCamera_CropFrame const Letterbox;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PixelPerfectCamera_CropFrame const None;

/// @brief Field Pillarbox value: I32(1)
static ::GlobalNamespace::PixelPerfectCamera_CropFrame const Pillarbox;

/// @brief Field StretchFill value: I32(4)
static ::GlobalNamespace::PixelPerfectCamera_CropFrame const StretchFill;

/// @brief Field Windowbox value: I32(3)
static ::GlobalNamespace::PixelPerfectCamera_CropFrame const Windowbox;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PixelPerfectCamera_CropFrame, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PixelPerfectCamera_CropFrame) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
