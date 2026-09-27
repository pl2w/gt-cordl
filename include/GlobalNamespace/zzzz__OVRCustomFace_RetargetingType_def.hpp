#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomFace_RetargetingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomFace_RetargetingType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRCustomFace_RetargetingType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRCustomFace_RetargetingType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRCustomFace_RetargetingType, "", "OVRCustomFace/RetargetingType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRCustomFace/RetargetingType
struct CORDL_TYPE OVRCustomFace_RetargetingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRCustomFace_RetargetingType_Unwrapped
enum struct __OVRCustomFace_RetargetingType_Unwrapped : int32_t {
__E_OculusFace = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRCustomFace_RetargetingType_Unwrapped () const noexcept {
return static_cast<__OVRCustomFace_RetargetingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRCustomFace_RetargetingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRCustomFace_RetargetingType(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(1)
static ::GlobalNamespace::OVRCustomFace_RetargetingType const Custom;

/// @brief Field OculusFace value: I32(0)
static ::GlobalNamespace::OVRCustomFace_RetargetingType const OculusFace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCustomFace_RetargetingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRCustomFace_RetargetingType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
