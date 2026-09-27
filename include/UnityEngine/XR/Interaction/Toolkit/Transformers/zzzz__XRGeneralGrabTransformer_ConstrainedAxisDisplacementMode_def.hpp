#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/ConstrainedAxisDisplacementMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ConstrainedAxisDisplacementMode
struct CORDL_TYPE XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_Unwrapped
enum struct __XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_Unwrapped : int32_t {
__E_ObjectRelative = static_cast<int32_t>(0x0),
__E_ObjectRelativeWithLockedWorldUp = static_cast<int32_t>(0x1),
__E_WorldAxisRelative = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_Unwrapped () const noexcept {
return static_cast<__XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode(int32_t  value__) noexcept;

/// @brief Field ObjectRelative value: I32(0)
static ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode const ObjectRelative;

/// @brief Field ObjectRelativeWithLockedWorldUp value: I32(1)
static ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode const ObjectRelativeWithLockedWorldUp;

/// @brief Field WorldAxisRelative value: I32(2)
static ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode const WorldAxisRelative;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11402};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
