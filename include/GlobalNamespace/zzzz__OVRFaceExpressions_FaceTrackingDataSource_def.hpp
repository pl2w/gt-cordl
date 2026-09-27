#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions_FaceTrackingDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFaceExpressions_FaceTrackingDataSource)
// Forward declare root types
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceTrackingDataSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource, "", "OVRFaceExpressions/FaceTrackingDataSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFaceExpressions/FaceTrackingDataSource
struct CORDL_TYPE OVRFaceExpressions_FaceTrackingDataSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRFaceExpressions_FaceTrackingDataSource_Unwrapped
enum struct __OVRFaceExpressions_FaceTrackingDataSource_Unwrapped : int32_t {
__E_Visual = static_cast<int32_t>(0x0),
__E_Audio = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRFaceExpressions_FaceTrackingDataSource_Unwrapped () const noexcept {
return static_cast<__OVRFaceExpressions_FaceTrackingDataSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRFaceExpressions_FaceTrackingDataSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRFaceExpressions_FaceTrackingDataSource(int32_t  value__) noexcept;

/// @brief Field Audio value: I32(1)
static ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource const Audio;

/// @brief Field Count value: I32(2)
static ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource const Count;

/// @brief Field Visual value: I32(0)
static ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource const Visual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
