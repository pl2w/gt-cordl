#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimatinonNode_OVRGLTFTransformType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAnimatinonNode_OVRGLTFTransformType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRGLTFTransformType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType, "", "OVRGLTFAnimatinonNode/OVRGLTFTransformType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAnimatinonNode/OVRGLTFTransformType
struct CORDL_TYPE OVRGLTFAnimatinonNode_OVRGLTFTransformType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped
enum struct __OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Translation = static_cast<int32_t>(0x1),
__E_Rotation = static_cast<int32_t>(0x2),
__E_Scale = static_cast<int32_t>(0x3),
__E_Weights = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped () const noexcept {
return static_cast<__OVRGLTFAnimatinonNode_OVRGLTFTransformType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAnimatinonNode_OVRGLTFTransformType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRGLTFAnimatinonNode_OVRGLTFTransformType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const None;

/// @brief Field Rotation value: I32(2)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Rotation;

/// @brief Field Scale value: I32(3)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Scale;

/// @brief Field Translation value: I32(1)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Translation;

/// @brief Field Weights value: I32(4)
static ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType const Weights;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
