#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimatinonNode_OVRInterpolationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAnimatinonNode_OVRInterpolationType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRInterpolationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType, "", "OVRGLTFAnimatinonNode/OVRInterpolationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAnimatinonNode/OVRInterpolationType
struct CORDL_TYPE OVRGLTFAnimatinonNode_OVRInterpolationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped
enum struct __OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LINEAR = static_cast<int32_t>(0x1),
__E_STEP = static_cast<int32_t>(0x2),
__E_CUBICSPLINE = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped () const noexcept {
return static_cast<__OVRGLTFAnimatinonNode_OVRInterpolationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAnimatinonNode_OVRInterpolationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRGLTFAnimatinonNode_OVRInterpolationType(int32_t  value__) noexcept;

/// @brief Field CUBICSPLINE value: I32(3)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const CUBICSPLINE;

/// @brief Field LINEAR value: I32(1)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const LINEAR;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const None;

/// @brief Field STEP value: I32(2)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType const STEP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11902};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
