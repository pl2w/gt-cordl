#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlane)
namespace GlobalNamespace {
class IOVRSceneComponent;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryJob;
}
namespace GlobalNamespace {
struct OVRScenePlane_GetBoundaryLengthJob;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePlane;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRScenePlane*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRScenePlane*, "", "OVRScenePlane");
// [DisallowMultipleComponent]
// [RequireComponent(typeof(OVRSceneAnchor))]
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-scene-use-scene-anchors/#further-scene-model-unity-components")]
// [Obsolete("OVRSceneManager and associated classes are deprecated (v65), please use MR Utility Kit instead (https://developer.oculus.com/documentation/unity/unity-mr-utility-kit-overview)")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Nullable`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRScenePlane
class CORDL_TYPE OVRScenePlane : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GetBoundaryJob = ::GlobalNamespace::OVRScenePlane_GetBoundaryJob;

using GetBoundaryLengthJob = ::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob;

 __declspec(property(get=get_Boundary)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*  Boundary;

 __declspec(property(get=get_Dimensions)) ::UnityEngine::Vector2  Dimensions;

 __declspec(property(get=get_Height, put=set_Height)) float_t  Height;

 __declspec(property(get=get_Offset, put=set_Offset)) ::UnityEngine::Vector2  Offset;

 __declspec(property(get=get_OffsetChildren, put=set_OffsetChildren)) bool  OffsetChildren;

 __declspec(property(get=get_ScaleChildren, put=set_ScaleChildren)) bool  ScaleChildren;

 __declspec(property(get=get_Width, put=set_Width)) float_t  Width;

/// @brief Field <Height>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Height_k__BackingField, put=__cordl_internal_set__Height_k__BackingField)) float_t  _Height_k__BackingField;

/// @brief Field <Offset>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Offset_k__BackingField, put=__cordl_internal_set__Offset_k__BackingField)) ::UnityEngine::Vector2  _Offset_k__BackingField;

/// @brief Field <Width>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Width_k__BackingField, put=__cordl_internal_set__Width_k__BackingField)) float_t  _Width_k__BackingField;

/// @brief Field _boundary, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__boundary, put=__cordl_internal_set__boundary)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  _boundary;

/// @brief Field _boundaryBuffer, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__boundaryBuffer, put=__cordl_internal_set__boundaryBuffer)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  _boundaryBuffer;

/// @brief Field _boundaryLength, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__boundaryLength, put=__cordl_internal_set__boundaryLength)) ::Unity::Collections::NativeArray_1<int32_t>  _boundaryLength;

/// @brief Field _boundaryRequested, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__boundaryRequested, put=__cordl_internal_set__boundaryRequested)) bool  _boundaryRequested;

/// @brief Field _jobHandle, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__jobHandle, put=__cordl_internal_set__jobHandle)) ::System::Nullable_1<::Unity::Jobs::JobHandle>  _jobHandle;

/// @brief Field _offsetChildren, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__offsetChildren, put=__cordl_internal_set__offsetChildren)) bool  _offsetChildren;

/// @brief Field _previousBoundary, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__previousBoundary, put=__cordl_internal_set__previousBoundary)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  _previousBoundary;

/// @brief Field _scaleChildren, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleChildren, put=__cordl_internal_set__scaleChildren)) bool  _scaleChildren;

/// @brief Field _sceneAnchor, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneAnchor, put=__cordl_internal_set__sceneAnchor)) ::UnityW<::GlobalNamespace::OVRSceneAnchor>  _sceneAnchor;

/// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
constexpr operator  ::GlobalNamespace::IOVRSceneComponent*() noexcept;

/// @brief Method Awake, addr 0xa6384e0, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IOVRSceneComponent.Initialize, addr 0xa6385cc, size 0x4, virtual true, abstract: false, final true
inline void IOVRSceneComponent_Initialize() ;

static inline ::GlobalNamespace::OVRScenePlane* New_ctor() ;

/// @brief Method OnDisable, addr 0xa638db8, size 0xd8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method RequestBoundary, addr 0xa631644, size 0x30, virtual false, abstract: false, final false
inline void RequestBoundary() ;

/// @brief Method ScheduleGetLengthJob, addr 0xa6385d0, size 0x17c, virtual false, abstract: false, final false
inline void ScheduleGetLengthJob() ;

/// @brief Method SetChildOffset, addr 0xa6383b4, size 0x12c, virtual false, abstract: false, final false
inline void SetChildOffset() ;

/// @brief Method SetChildScale, addr 0xa638240, size 0x144, virtual false, abstract: false, final false
inline void SetChildScale() ;

/// @brief Method Start, addr 0xa6385c8, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa63874c, size 0x63c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTransform, addr 0xa6314c8, size 0x17c, virtual false, abstract: false, final false
inline void UpdateTransform() ;

constexpr float_t const& __cordl_internal_get__Height_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Height_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Offset_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__Offset_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Width_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Width_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get__boundary() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get__boundary() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get__boundaryBuffer() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get__boundaryBuffer() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get__boundaryLength() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get__boundaryLength() ;

constexpr bool const& __cordl_internal_get__boundaryRequested() const;

constexpr bool& __cordl_internal_get__boundaryRequested() ;

constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& __cordl_internal_get__jobHandle() const;

constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& __cordl_internal_get__jobHandle() ;

constexpr bool const& __cordl_internal_get__offsetChildren() const;

constexpr bool& __cordl_internal_get__offsetChildren() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __cordl_internal_get__previousBoundary() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __cordl_internal_get__previousBoundary() ;

constexpr bool const& __cordl_internal_get__scaleChildren() const;

constexpr bool& __cordl_internal_get__scaleChildren() ;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get__sceneAnchor() const;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get__sceneAnchor() ;

constexpr void __cordl_internal_set__Height_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Offset_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__Width_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__boundary(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set__boundaryBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set__boundaryLength(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set__boundaryRequested(bool  value) ;

constexpr void __cordl_internal_set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle>  value) ;

constexpr void __cordl_internal_set__offsetChildren(bool  value) ;

constexpr void __cordl_internal_set__previousBoundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set__scaleChildren(bool  value) ;

constexpr void __cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value) ;

/// @brief Method .ctor, addr 0xa638e90, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Boundary, addr 0xa638208, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* get_Boundary() ;

/// @brief Method get_Dimensions, addr 0xa638200, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Dimensions() ;

/// [CompilerGenerated]
/// @brief Method get_Height, addr 0xa6381e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// [CompilerGenerated]
/// @brief Method get_Offset, addr 0xa6381f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Offset() ;

/// @brief Method get_OffsetChildren, addr 0xa638384, size 0x8, virtual false, abstract: false, final false
inline bool get_OffsetChildren() ;

/// @brief Method get_ScaleChildren, addr 0xa638210, size 0x8, virtual false, abstract: false, final false
inline bool get_ScaleChildren() ;

/// [CompilerGenerated]
/// @brief Method get_Width, addr 0xa6381d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Width() ;

/// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Height, addr 0xa6381e8, size 0x8, virtual false, abstract: false, final false
inline void set_Height(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Offset, addr 0xa6381f8, size 0x8, virtual false, abstract: false, final false
inline void set_Offset(::UnityEngine::Vector2  value) ;

/// @brief Method set_OffsetChildren, addr 0xa63838c, size 0x28, virtual false, abstract: false, final false
inline void set_OffsetChildren(bool  value) ;

/// @brief Method set_ScaleChildren, addr 0xa638218, size 0x28, virtual false, abstract: false, final false
inline void set_ScaleChildren(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Width, addr 0xa6381d8, size 0x8, virtual false, abstract: false, final false
inline void set_Width(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRScenePlane() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRScenePlane(OVRScenePlane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlane", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRScenePlane(OVRScenePlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12438};

/// [CompilerGenerated]
/// @brief Field <Width>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____Width_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Height>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____Height_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Offset>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____Offset_k__BackingField;

/// [Tooltip("When enabled, scales the child transforms according to the dimensions of this plane. If both Volume and Plane components exist on the game object, the volume takes precedence.")]
/// [SerializeField]
/// @brief Field _scaleChildren, offset: 0x30, size: 0x1, def value: None
 bool  ____scaleChildren;

/// [Tooltip("When enabled, offsets the child transforms according to the offset of this plane. If both Volume and Plane components exist on the game object, the volume takes precedence.")]
/// [SerializeField]
/// @brief Field _offsetChildren, offset: 0x31, size: 0x1, def value: None
 bool  ____offsetChildren;

/// @brief Field _jobHandle, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::Unity::Jobs::JobHandle>  ____jobHandle;

/// @brief Field _previousBoundary, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ____previousBoundary;

/// @brief Field _boundaryLength, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ____boundaryLength;

/// @brief Field _boundaryBuffer, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  ____boundaryBuffer;

/// @brief Field _boundaryRequested, offset: 0x78, size: 0x1, def value: None
 bool  ____boundaryRequested;

/// @brief Field _sceneAnchor, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneAnchor>  ____sceneAnchor;

/// @brief Field _boundary, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ____boundary;

/// @brief Size padding 0x98 - 0x90 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Width_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Height_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____Offset_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____scaleChildren) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____offsetChildren) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____jobHandle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____previousBoundary) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryLength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundaryRequested) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____sceneAnchor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRScenePlane, ____boundary) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRScenePlane) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
