#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeleton_SkeletonPoseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeleton_SkeletonPoseData)
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSkeleton_SkeletonPoseData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, "", "OVRSkeleton/SkeletonPoseData");
// Dependencies OVRPlugin::Posef, OVRPlugin::Quatf, OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeleton/SkeletonPoseData
struct CORDL_TYPE OVRSkeleton_SkeletonPoseData {
public:
// Declarations
 __declspec(property(get=get_BoneRotations, put=set_BoneRotations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  BoneRotations;

 __declspec(property(get=get_BoneTranslations, put=set_BoneTranslations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  BoneTranslations;

 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_RootPose, put=set_RootPose)) ::GlobalNamespace::OVRPlugin_Posef  RootPose;

 __declspec(property(get=get_RootScale, put=set_RootScale)) float_t  RootScale;

 __declspec(property(get=get_SkeletonChangedCount, put=set_SkeletonChangedCount)) int32_t  SkeletonChangedCount;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_BoneRotations, addr 0xa6774d8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> get_BoneRotations() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_BoneTranslations, addr 0xa677508, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> get_BoneTranslations() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsDataHighConfidence, addr 0xa6774f8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataHighConfidence() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsDataValid, addr 0xa6774e8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataValid() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RootPose, addr 0xa677498, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Posef get_RootPose() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_RootScale, addr 0xa6774c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_RootScale() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_SkeletonChangedCount, addr 0xa677518, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SkeletonChangedCount() ;

/// [CompilerGenerated]
/// @brief Method set_BoneRotations, addr 0xa6774e0, size 0x8, virtual false, abstract: false, final false
inline void set_BoneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  value) ;

/// [CompilerGenerated]
/// @brief Method set_BoneTranslations, addr 0xa677510, size 0x8, virtual false, abstract: false, final false
inline void set_BoneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataHighConfidence, addr 0xa677500, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataHighConfidence(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataValid, addr 0xa6774f0, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_RootPose, addr 0xa6774ac, size 0x1c, virtual false, abstract: false, final false
inline void set_RootPose(::GlobalNamespace::OVRPlugin_Posef  value) ;

/// [CompilerGenerated]
/// @brief Method set_RootScale, addr 0xa6774d0, size 0x8, virtual false, abstract: false, final false
inline void set_RootScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SkeletonChangedCount, addr 0xa677520, size 0x8, virtual false, abstract: false, final false
inline void set_SkeletonChangedCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeleton_SkeletonPoseData() ;

// Ctor Parameters [CppParam { name: "_RootPose_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BoneRotations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BoneTranslations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SkeletonChangedCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSkeleton_SkeletonPoseData(::GlobalNamespace::OVRPlugin_Posef  _RootPose_k__BackingField, float_t  _RootScale_k__BackingField, ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  _BoneRotations_k__BackingField, bool  _IsDataValid_k__BackingField, bool  _IsDataHighConfidence_k__BackingField, ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  _BoneTranslations_k__BackingField, int32_t  _SkeletonChangedCount_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12710};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [CompilerGenerated]
/// @brief Field <RootPose>k__BackingField, offset: 0x0, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  _RootPose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RootScale>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  _RootScale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BoneRotations>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  _BoneRotations_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataValid>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  _IsDataValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x29, size: 0x1, def value: None
 bool  _IsDataHighConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BoneTranslations>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  _BoneTranslations_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SkeletonChangedCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  _SkeletonChangedCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _RootPose_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _RootScale_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _BoneRotations_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _IsDataValid_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _IsDataHighConfidence_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _BoneTranslations_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData, _SkeletonChangedCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSkeleton_SkeletonPoseData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
