#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_BodySection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_BodySection)
// Forward declare root types
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodySection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/BodySection
struct CORDL_TYPE OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped
enum struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped : int32_t {
__E_LeftLeg = static_cast<int32_t>(0x0),
__E_LeftFoot = static_cast<int32_t>(0x1),
__E_RightLeg = static_cast<int32_t>(0x2),
__E_RightFoot = static_cast<int32_t>(0x3),
__E_LeftArm = static_cast<int32_t>(0x4),
__E_LeftHand = static_cast<int32_t>(0x5),
__E_RightArm = static_cast<int32_t>(0x6),
__E_RightHand = static_cast<int32_t>(0x7),
__E_Hips = static_cast<int32_t>(0x8),
__E_Back = static_cast<int32_t>(0x9),
__E_Neck = static_cast<int32_t>(0xa),
__E_Head = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped () const noexcept {
return static_cast<__OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection(int32_t  value__) noexcept;

/// @brief Field Back value: I32(9)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Back;

/// @brief Field Head value: I32(11)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Head;

/// @brief Field Hips value: I32(8)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Hips;

/// @brief Field LeftArm value: I32(4)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftArm;

/// @brief Field LeftFoot value: I32(1)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftFoot;

/// @brief Field LeftHand value: I32(5)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftHand;

/// @brief Field LeftLeg value: I32(0)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const LeftLeg;

/// @brief Field Neck value: I32(10)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const Neck;

/// @brief Field RightArm value: I32(6)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightArm;

/// @brief Field RightFoot value: I32(3)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightFoot;

/// @brief Field RightHand value: I32(7)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightHand;

/// @brief Field RightLeg value: I32(2)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection const RightLeg;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11797};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
