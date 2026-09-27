#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneObjectTransformType_Transformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneObjectTransformType_Transformation)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneObjectTransformType_Transformation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneObjectTransformType_Transformation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneObjectTransformType_Transformation, "", "OVRSceneObjectTransformType/Transformation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneObjectTransformType/Transformation
struct CORDL_TYPE OVRSceneObjectTransformType_Transformation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSceneObjectTransformType_Transformation_Unwrapped
enum struct __OVRSceneObjectTransformType_Transformation_Unwrapped : int32_t {
__E_Volume = static_cast<int32_t>(0x0),
__E_Plane = static_cast<int32_t>(0x1),
__E_None = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSceneObjectTransformType_Transformation_Unwrapped () const noexcept {
return static_cast<__OVRSceneObjectTransformType_Transformation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneObjectTransformType_Transformation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneObjectTransformType_Transformation(int32_t  value__) noexcept;

/// @brief Field None value: I32(2)
static ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const None;

/// @brief Field Plane value: I32(1)
static ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const Plane;

/// @brief Field Volume value: I32(0)
static ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneObjectTransformType_Transformation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneObjectTransformType_Transformation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
