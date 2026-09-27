#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem_GetControllerStateWithPoseUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CVRSystem_GetControllerStateWithPoseUnion)
namespace OVR::OpenVR {
class CVRSystem__GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerStateWithPose;
}
// Forward declare root types
namespace GlobalNamespace {
struct CVRSystem_GetControllerStateWithPoseUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateWithPoseUnion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVR.OpenVR.CVRSystem/GetControllerStateWithPoseUnion
struct CORDL_TYPE CVRSystem_GetControllerStateWithPoseUnion {
public:
// Declarations
/// @brief Field pGetControllerStateWithPose, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pGetControllerStateWithPose, put=__cordl_internal_set_pGetControllerStateWithPose)) ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*  pGetControllerStateWithPose;

/// @brief Field pGetControllerStateWithPosePacked, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pGetControllerStateWithPosePacked, put=__cordl_internal_set_pGetControllerStateWithPosePacked)) ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*  pGetControllerStateWithPosePacked;

constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* const& __cordl_internal_get_pGetControllerStateWithPose() const;

constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*& __cordl_internal_get_pGetControllerStateWithPose() ;

constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* const& __cordl_internal_get_pGetControllerStateWithPosePacked() const;

constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*& __cordl_internal_get_pGetControllerStateWithPosePacked() ;

constexpr void __cordl_internal_set_pGetControllerStateWithPose(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*  value) ;

constexpr void __cordl_internal_set_pGetControllerStateWithPosePacked(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CVRSystem_GetControllerStateWithPoseUnion() ;

// Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: None, comment: None }, CppParam { name: "pGetControllerStateWithPosePacked", ty: "::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*", modifiers: "", def_value: None, comment: None }]
constexpr CVRSystem_GetControllerStateWithPoseUnion(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*  pGetControllerStateWithPose, ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*  pGetControllerStateWithPosePacked) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pGetControllerStateWithPose_padding[0x0];
/// @brief Field pGetControllerStateWithPose, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*  ___pGetControllerStateWithPose;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pGetControllerStateWithPose_padding_forAlignment[0x0];
/// @brief Field pGetControllerStateWithPose, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*  ___pGetControllerStateWithPose_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___pGetControllerStateWithPosePacked_padding[0x0];
/// @brief Field pGetControllerStateWithPosePacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*  ___pGetControllerStateWithPosePacked;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___pGetControllerStateWithPosePacked_padding_forAlignment[0x0];
/// @brief Field pGetControllerStateWithPosePacked, offset: 0x0, size: 0x8, def value: None
 ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*  ___pGetControllerStateWithPosePacked_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
