#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRLocatable)
namespace GlobalNamespace {
template<typename T>
class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRLocatable_CopyPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_GetSceneAnchorPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_GetSpatialAnchorPosesJob;
}
namespace GlobalNamespace {
struct OVRLocatable_SetLocalSpaceTransformsJob;
}
namespace GlobalNamespace {
struct OVRLocatable_SetWorldSpaceTransformsJob;
}
namespace GlobalNamespace {
struct OVRLocatable_TrackingSpacePose;
}
namespace GlobalNamespace {
struct OVRLocatable_TransformPosesJob;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRLocatable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRLocatable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRLocatable, "", "OVRLocatable");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRLocatable
struct CORDL_TYPE OVRLocatable {
public:
// Declarations
using CopyPosesJob = ::GlobalNamespace::OVRLocatable_CopyPosesJob;

using GetSceneAnchorPosesJob = ::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob;

using GetSpatialAnchorPosesJob = ::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob;

using SetLocalSpaceTransformsJob = ::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob;

using SetWorldSpaceTransformsJob = ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob;

using TrackingSpacePose = ::GlobalNamespace::OVRLocatable_TrackingSpacePose;

using TransformPosesJob = ::GlobalNamespace::OVRLocatable_TransformPosesJob;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRLocatable__get_Handle)) uint64_t  IOVRAnchorComponent_OVRLocatable__Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRLocatable__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  IOVRAnchorComponent_OVRLocatable__Type;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::GlobalNamespace::OVRLocatable  Null;

 __declspec(property(get=get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  Type;

/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
constexpr operator  ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*() ;

/// @brief Method Equals, addr 0xa573b88, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa573a44, size 0x68, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRLocatable  other) ;

/// @brief Method GetHashCode, addr 0xa573c18, size 0x94, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IOVRAnchorComponent<OVRLocatable>.FromAnchor, addr 0xa573608, size 0x30, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRLocatable IOVRAnchorComponent_OVRLocatable__FromAnchor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Handle, addr 0xa5735b4, size 0x54, virtual true, abstract: false, final true
inline uint64_t IOVRAnchorComponent_OVRLocatable__get_Handle() ;

/// @brief Method IOVRAnchorComponent<OVRLocatable>.get_Type, addr 0xa57355c, size 0x50, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRLocatable__get_Type() ;

/// @brief Method ScheduleUpdateTransforms, addr 0xa57412c, size 0x5b0, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleUpdateTransforms(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>  locatables, ::UnityEngine::Jobs::TransformAccessArray  transforms, ::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  posesOut, ::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method SetEnabledAsync, addr 0xa5737d8, size 0x1f8, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool  enabled, double_t  timeout) ;

/// [Obsolete("Use SetEnabledAsync instead.")]
/// @brief Method SetEnabledSafeAsync, addr 0xa5739d0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledSafeAsync(bool  enabled, double_t  timeout) ;

/// @brief Method ToString, addr 0xa573cac, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetSceneAnchorPose, addr 0xa573d50, size 0x11c, virtual false, abstract: false, final false
inline bool TryGetSceneAnchorPose(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  pose) ;

/// @brief Method TryGetSpatialAnchorPose, addr 0xa574004, size 0x11c, virtual false, abstract: false, final false
inline bool TryGetSpatialAnchorPose(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  pose) ;

/// @brief Method UpdateSceneAnchorTransforms, addr 0xa5746dc, size 0x984, virtual false, abstract: false, final false
static inline void UpdateSceneAnchorTransforms(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>>*  anchors, ::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*  trackingSpacePoses) ;

/// [CompilerGenerated]
/// @brief Method <UpdateSceneAnchorTransforms>g__GetLocatableOrDefault|34_0, addr 0xa575060, size 0x8c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRLocatable _UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method .ctor, addr 0xa573638, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRAnchor  anchor) ;

static inline ::GlobalNamespace::OVRLocatable getStaticF_Null() ;

/// [CompilerGenerated]
/// @brief Method get_Handle, addr 0xa573d48, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Handle() ;

/// @brief Method get_IsEnabled, addr 0xa5736f8, size 0xe0, virtual true, abstract: false, final true
inline bool get_IsEnabled() ;

/// @brief Method get_IsNull, addr 0xa57369c, size 0x5c, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Type, addr 0xa5735ac, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type() ;

/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRLocatable_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>* i___System__IEquatable_1___GlobalNamespace__OVRLocatable_() ;

/// @brief Method op_Equality, addr 0xa573aac, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRLocatable  lhs, ::GlobalNamespace::OVRLocatable  rhs) ;

/// @brief Method op_Inequality, addr 0xa573b18, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRLocatable  lhs, ::GlobalNamespace::OVRLocatable  rhs) ;

static inline void setStaticF_Null(::GlobalNamespace::OVRLocatable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRLocatable() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRLocatable(uint64_t  _Handle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _Handle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRLocatable, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRLocatable) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
