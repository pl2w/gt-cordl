#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomSkeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_RetargetingType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
CORDL_MODULE_EXPORT(OVRCustomSkeleton)
namespace GlobalNamespace {
struct OVRCustomSkeleton_RetargetingType;
}
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCustomSkeleton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRCustomSkeleton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRCustomSkeleton*, "", "OVRCustomSkeleton");
// [HelpURL("https://developer.oculus.com/documentation/unity/move-samples/")]
// [Feature((Meta.XR.Util.Feature)1)]
// Dependencies OVRCustomSkeleton::RetargetingType, OVRSkeleton
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCustomSkeleton
class CORDL_TYPE OVRCustomSkeleton : public ::GlobalNamespace::OVRSkeleton {
public:
// Declarations
using RetargetingType = ::GlobalNamespace::OVRCustomSkeleton_RetargetingType;

 __declspec(property(get=get_CustomBones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  CustomBones;

/// @brief Field _customBones_V2, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__customBones_V2, put=__cordl_internal_set__customBones_V2)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _customBones_V2;

/// @brief Field retargetingType, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_retargetingType, put=__cordl_internal_set_retargetingType)) ::GlobalNamespace::OVRCustomSkeleton_RetargetingType  retargetingType;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AllocateBones, addr 0xa65ff10, size 0xd0, virtual false, abstract: false, final false
inline void AllocateBones() ;

/// @brief Method GetBoneTransform, addr 0xa65feb0, size 0x58, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::GlobalNamespace::OVRSkeleton_BoneId  boneId) ;

static inline ::GlobalNamespace::OVRCustomSkeleton* New_ctor() ;

/// @brief Method SetSkeletonType, addr 0xa65ffe0, size 0x9c, virtual true, abstract: false, final false
inline void SetSkeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType  skeletonType) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xa65ff0c, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xa65ff08, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__customBones_V2() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__customBones_V2() ;

constexpr ::GlobalNamespace::OVRCustomSkeleton_RetargetingType const& __cordl_internal_get_retargetingType() const;

constexpr ::GlobalNamespace::OVRCustomSkeleton_RetargetingType& __cordl_internal_get_retargetingType() ;

constexpr void __cordl_internal_set__customBones_V2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_retargetingType(::GlobalNamespace::OVRCustomSkeleton_RetargetingType  value) ;

/// @brief Method .ctor, addr 0xa66007c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CustomBones, addr 0xa65fea8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* get_CustomBones() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRCustomSkeleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCustomSkeleton(OVRCustomSkeleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCustomSkeleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCustomSkeleton(OVRCustomSkeleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12605};

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _customBones_V2, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ____customBones_V2;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field retargetingType, offset: 0xc8, size: 0x4, def value: None
 ::GlobalNamespace::OVRCustomSkeleton_RetargetingType  ___retargetingType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCustomSkeleton, ____customBones_V2) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomSkeleton, ___retargetingType) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRCustomSkeleton) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
