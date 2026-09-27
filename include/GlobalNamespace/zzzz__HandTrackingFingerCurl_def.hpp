#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTrackingFingerCurl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandTrackingFingerCurl)
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
// Forward declare root types
namespace GlobalNamespace {
class HandTrackingFingerCurl;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandTrackingFingerCurl*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTrackingFingerCurl*, "", "HandTrackingFingerCurl");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTrackingFingerCurl
class CORDL_TYPE HandTrackingFingerCurl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ActivationEnd, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActivationEnd, put=__cordl_internal_set_ActivationEnd)) float_t  ActivationEnd;

/// @brief Field ActivationStart, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActivationStart, put=__cordl_internal_set_ActivationStart)) float_t  ActivationStart;

/// @brief Field CurlMultiplier, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurlMultiplier, put=__cordl_internal_set_CurlMultiplier)) float_t  CurlMultiplier;

 __declspec(property(get=get_GripCurl, put=set_GripCurl)) float_t  GripCurl;

 __declspec(property(get=get_ThumbCurl, put=set_ThumbCurl)) float_t  ThumbCurl;

 __declspec(property(get=get_TriggerCurl, put=set_TriggerCurl)) float_t  TriggerCurl;

/// @brief Field <GripCurl>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__GripCurl_k__BackingField, put=__cordl_internal_set__GripCurl_k__BackingField)) float_t  _GripCurl_k__BackingField;

/// @brief Field <ThumbCurl>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__ThumbCurl_k__BackingField, put=__cordl_internal_set__ThumbCurl_k__BackingField)) float_t  _ThumbCurl_k__BackingField;

/// @brief Field <TriggerCurl>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__TriggerCurl_k__BackingField, put=__cordl_internal_set__TriggerCurl_k__BackingField)) float_t  _TriggerCurl_k__BackingField;

/// @brief Field boneXforms, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneXforms, put=__cordl_internal_set_boneXforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  boneXforms;

/// @brief Field isLeft, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeft, put=__cordl_internal_set_isLeft)) bool  isLeft;

/// @brief Field leftCurl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_leftCurl, put=setStaticF_leftCurl)) ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  leftCurl;

/// @brief Field rightCurl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rightCurl, put=setStaticF_rightCurl)) ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  rightCurl;

/// @brief Field skeleton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_skeleton, put=__cordl_internal_set_skeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton>  skeleton;

/// @brief Method Awake, addr 0x5950584, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcFingerCurl, addr 0x5950b50, size 0x458, virtual false, abstract: false, final false
inline float_t CalcFingerCurl(::GlobalNamespace::OVRSkeleton_BoneId  distal, ::GlobalNamespace::OVRSkeleton_BoneId  intermediate, ::GlobalNamespace::OVRSkeleton_BoneId  proximal, ::GlobalNamespace::OVRSkeleton_BoneId  metacarpal) ;

/// @brief Method LateUpdate, addr 0x5950694, size 0x4bc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::HandTrackingFingerCurl* New_ctor() ;

constexpr float_t const& __cordl_internal_get_ActivationEnd() const;

constexpr float_t& __cordl_internal_get_ActivationEnd() ;

constexpr float_t const& __cordl_internal_get_ActivationStart() const;

constexpr float_t& __cordl_internal_get_ActivationStart() ;

constexpr float_t const& __cordl_internal_get_CurlMultiplier() const;

constexpr float_t& __cordl_internal_get_CurlMultiplier() ;

constexpr float_t const& __cordl_internal_get__GripCurl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__GripCurl_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ThumbCurl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ThumbCurl_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__TriggerCurl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TriggerCurl_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_boneXforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_boneXforms() ;

constexpr bool const& __cordl_internal_get_isLeft() const;

constexpr bool& __cordl_internal_get_isLeft() ;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get_skeleton() const;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get_skeleton() ;

constexpr void __cordl_internal_set_ActivationEnd(float_t  value) ;

constexpr void __cordl_internal_set_ActivationStart(float_t  value) ;

constexpr void __cordl_internal_set_CurlMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__GripCurl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ThumbCurl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__TriggerCurl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_boneXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_isLeft(bool  value) ;

constexpr void __cordl_internal_set_skeleton(::UnityW<::GlobalNamespace::OVRSkeleton>  value) ;

/// @brief Method .ctor, addr 0x5950fa8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::HandTrackingFingerCurl> getStaticF_leftCurl() ;

static inline ::UnityW<::GlobalNamespace::HandTrackingFingerCurl> getStaticF_rightCurl() ;

/// [CompilerGenerated]
/// @brief Method get_GripCurl, addr 0x5950574, size 0x8, virtual false, abstract: false, final false
inline float_t get_GripCurl() ;

/// [CompilerGenerated]
/// @brief Method get_ThumbCurl, addr 0x5950554, size 0x8, virtual false, abstract: false, final false
inline float_t get_ThumbCurl() ;

/// [CompilerGenerated]
/// @brief Method get_TriggerCurl, addr 0x5950564, size 0x8, virtual false, abstract: false, final false
inline float_t get_TriggerCurl() ;

static inline void setStaticF_leftCurl(::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  value) ;

static inline void setStaticF_rightCurl(::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  value) ;

/// [CompilerGenerated]
/// @brief Method set_GripCurl, addr 0x595057c, size 0x8, virtual false, abstract: false, final false
inline void set_GripCurl(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ThumbCurl, addr 0x595055c, size 0x8, virtual false, abstract: false, final false
inline void set_ThumbCurl(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TriggerCurl, addr 0x595056c, size 0x8, virtual false, abstract: false, final false
inline void set_TriggerCurl(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTrackingFingerCurl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTrackingFingerCurl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTrackingFingerCurl(HandTrackingFingerCurl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTrackingFingerCurl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTrackingFingerCurl(HandTrackingFingerCurl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2301};

/// [SerializeField]
/// @brief Field skeleton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSkeleton>  ___skeleton;

/// @brief Field ActivationStart, offset: 0x28, size: 0x4, def value: None
 float_t  ___ActivationStart;

/// @brief Field ActivationEnd, offset: 0x2c, size: 0x4, def value: None
 float_t  ___ActivationEnd;

/// @brief Field CurlMultiplier, offset: 0x30, size: 0x4, def value: None
 float_t  ___CurlMultiplier;

/// [CompilerGenerated]
/// @brief Field <ThumbCurl>k__BackingField, offset: 0x34, size: 0x4, def value: None
 float_t  ____ThumbCurl_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TriggerCurl>k__BackingField, offset: 0x38, size: 0x4, def value: None
 float_t  ____TriggerCurl_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GripCurl>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____GripCurl_k__BackingField;

/// @brief Field boneXforms, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___boneXforms;

/// [SerializeField]
/// @brief Field isLeft, offset: 0x48, size: 0x1, def value: None
 bool  ___isLeft;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ___skeleton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ___ActivationStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ___ActivationEnd) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ___CurlMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ____ThumbCurl_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ____TriggerCurl_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ____GripCurl_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ___boneXforms) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTrackingFingerCurl, ___isLeft) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTrackingFingerCurl) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
