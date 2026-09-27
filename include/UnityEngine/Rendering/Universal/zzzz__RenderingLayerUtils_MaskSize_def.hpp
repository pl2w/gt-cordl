#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingLayerUtils_MaskSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingLayerUtils_MaskSize)
// Forward declare root types
namespace GlobalNamespace {
struct RenderingLayerUtils_MaskSize;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderingLayerUtils_MaskSize);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderingLayerUtils_MaskSize, "UnityEngine.Rendering.Universal", "RenderingLayerUtils/MaskSize");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderingLayerUtils/MaskSize
struct CORDL_TYPE RenderingLayerUtils_MaskSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderingLayerUtils_MaskSize_Unwrapped
enum struct __RenderingLayerUtils_MaskSize_Unwrapped : int32_t {
__E_Bits8 = static_cast<int32_t>(0x0),
__E_Bits16 = static_cast<int32_t>(0x1),
__E_Bits24 = static_cast<int32_t>(0x2),
__E_Bits32 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderingLayerUtils_MaskSize_Unwrapped () const noexcept {
return static_cast<__RenderingLayerUtils_MaskSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderingLayerUtils_MaskSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderingLayerUtils_MaskSize(int32_t  value__) noexcept;

/// @brief Field Bits16 value: I32(1)
static ::GlobalNamespace::RenderingLayerUtils_MaskSize const Bits16;

/// @brief Field Bits24 value: I32(2)
static ::GlobalNamespace::RenderingLayerUtils_MaskSize const Bits24;

/// @brief Field Bits32 value: I32(3)
static ::GlobalNamespace::RenderingLayerUtils_MaskSize const Bits32;

/// @brief Field Bits8 value: I32(0)
static ::GlobalNamespace::RenderingLayerUtils_MaskSize const Bits8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderingLayerUtils_MaskSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderingLayerUtils_MaskSize) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
