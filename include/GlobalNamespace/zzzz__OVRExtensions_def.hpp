#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OVRExtensions)
namespace GlobalNamespace {
template<typename T>
struct OVREnumerable_1;
}
namespace GlobalNamespace {
struct OVRMarkerPayloadType;
}
namespace GlobalNamespace {
struct OVRPlugin_Colorf;
}
namespace GlobalNamespace {
struct OVRPlugin_Frustumf;
}
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_Size3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Sizef;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector2f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector4f;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
struct OVRTracker_Frustum;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRExtensions
class CORDL_TYPE OVRExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ConvertToHMDMatrix34, addr 0xa57dfcc, size 0x154, virtual false, abstract: false, final false
static inline ::OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(::UnityEngine::Matrix4x4  m) ;

/// [Extension]
/// @brief Method CopyFrom, addr 0xa57e42c, size 0x200, virtual false, abstract: false, final false
static inline void CopyFrom(::UnityEngine::Gradient*  gradient, ::UnityEngine::Gradient*  otherGradient) ;

/// [Extension]
/// @brief Method Equals, addr 0xa57e218, size 0x214, virtual false, abstract: false, final false
static inline bool Equals(::UnityEngine::Gradient*  gradient, ::UnityEngine::Gradient*  otherGradient) ;

/// [Extension]
/// @brief Method FindChildRecursive, addr 0xa57e120, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindChildRecursive(::UnityEngine::Transform*  parent, ::StringW  name) ;

/// [Extension]
/// @brief Method FromColorf, addr 0xa57df68, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color FromColorf(::GlobalNamespace::OVRPlugin_Colorf  c) ;

/// [Extension]
/// @brief Method FromFlippedXQuatf, addr 0xa57dfa4, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromFlippedXQuatf(::GlobalNamespace::OVRPlugin_Quatf  q) ;

/// [Extension]
/// @brief Method FromFlippedXVector2f, addr 0xa578000, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FromFlippedXVector2f(::GlobalNamespace::OVRPlugin_Vector2f  v) ;

/// [Extension]
/// @brief Method FromFlippedXVector3f, addr 0xa578990, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromFlippedXVector3f(::GlobalNamespace::OVRPlugin_Vector3f  v) ;

/// [Extension]
/// @brief Method FromFlippedZQuatf, addr 0xa574120, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromFlippedZQuatf(::GlobalNamespace::OVRPlugin_Quatf  q) ;

/// [Extension]
/// @brief Method FromFlippedZVector3f, addr 0xa573e6c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromFlippedZVector3f(::GlobalNamespace::OVRPlugin_Vector3f  v) ;

/// [Extension]
/// @brief Method FromOVRPose, addr 0xa57deac, size 0x80, virtual false, abstract: false, final false
static inline void FromOVRPose(::UnityEngine::Transform*  t, ::GlobalNamespace::OVRPose  pose, bool  isLocal) ;

/// [Extension]
/// @brief Method FromQuatf, addr 0xa57dfa0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromQuatf(::GlobalNamespace::OVRPlugin_Quatf  q) ;

/// [Extension]
/// @brief Method FromSize3f, addr 0xa57898c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromSize3f(::GlobalNamespace::OVRPlugin_Size3f  v) ;

/// [Extension]
/// @brief Method FromSizef, addr 0xa577ffc, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FromSizef(::GlobalNamespace::OVRPlugin_Sizef  v) ;

/// [Extension]
/// @brief Method FromVector2f, addr 0xa57df74, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FromVector2f(::GlobalNamespace::OVRPlugin_Vector2f  v) ;

/// [Extension]
/// @brief Method FromVector3f, addr 0xa57df80, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromVector3f(::GlobalNamespace::OVRPlugin_Vector3f  v) ;

/// [Extension]
/// @brief Method FromVector4f, addr 0xa57df98, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 FromVector4f(::GlobalNamespace::OVRPlugin_Vector4f  v) ;

/// [Extension]
/// @brief Method IsQRCode, addr 0xa57d758, size 0x10, virtual false, abstract: false, final false
static inline bool IsQRCode(::GlobalNamespace::OVRMarkerPayloadType  value) ;

/// [Extension]
/// @brief Method ToColorf, addr 0xa57df6c, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Colorf ToColorf(::UnityEngine::Color  c) ;

/// [Extension]
/// @brief Method ToFlippedXQuatf, addr 0xa57dfb4, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Quatf ToFlippedXQuatf(::UnityEngine::Quaternion  q) ;

/// [Extension]
/// @brief Method ToFlippedXVector3f, addr 0xa57df88, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f ToFlippedXVector3f(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToFlippedZQuatf, addr 0xa57dfc0, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Quatf ToFlippedZQuatf(::UnityEngine::Quaternion  q) ;

/// [Extension]
/// @brief Method ToFlippedZVector3f, addr 0xa57df90, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f ToFlippedZVector3f(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToFrustum, addr 0xa57df54, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTracker_Frustum ToFrustum(::GlobalNamespace::OVRPlugin_Frustumf  f) ;

/// [Extension]
/// @brief Method ToHeadSpacePose, addr 0xa57dcf8, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::GlobalNamespace::OVRPose  trackingSpacePose) ;

/// [Extension]
/// @brief Method ToHeadSpacePose, addr 0xa57d874, size 0x1b4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::UnityEngine::Transform*  transform, ::UnityEngine::Camera*  camera) ;

/// [Extension]
/// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, ::Unity::Collections::Allocator  allocator) ;

/// [Extension]
/// @brief Method ToNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::OVREnumerable_1<T> ToNonAlloc(/* [NoEnumeration] */ ::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// [Extension]
/// @brief Method ToOVRPose, addr 0xa57df2c, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToOVRPose(::GlobalNamespace::OVRPlugin_Posef  p) ;

/// [Extension]
/// @brief Method ToOVRPose, addr 0xa57de0c, size 0xa0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToOVRPose(::UnityEngine::Transform*  t, bool  isLocal) ;

/// [Extension]
/// @brief Method ToQuatf, addr 0xa57dfb0, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Quatf ToQuatf(::UnityEngine::Quaternion  q) ;

/// [Extension]
/// @brief Method ToSize3f, addr 0xa57df7c, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Size3f ToSize3f(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToSizef, addr 0xa57df70, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Sizef ToSizef(::UnityEngine::Vector2  v) ;

/// [Extension]
/// [Obsolete("Anchor APIs that specify a storage location are obsolete.")]
/// @brief Method ToSpaceStorageLocation, addr 0xa571d68, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceStorageLocation ToSpaceStorageLocation(::GlobalNamespace::OVRSpace_StorageLocation  storageLocation) ;

/// [Extension]
/// @brief Method ToTrackingSpacePose, addr 0xa57d768, size 0x10c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToTrackingSpacePose(::UnityEngine::Transform*  transform, ::UnityEngine::Camera*  camera) ;

/// [Extension]
/// @brief Method ToVector2f, addr 0xa57df78, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector2f ToVector2f(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method ToVector3f, addr 0xa57df84, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f ToVector3f(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToVector4f, addr 0xa57df9c, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector4f ToVector4f(::UnityEngine::Vector4  v) ;

/// [Extension]
/// [Obsolete("ToWorldSpacePose should be invoked with an explicit mainCamera parameter")]
/// @brief Method ToWorldSpacePose, addr 0xa57db14, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose  trackingSpacePose) ;

/// [Extension]
/// @brief Method ToWorldSpacePose, addr 0xa57db64, size 0x194, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose  trackingSpacePose, ::UnityEngine::Camera*  mainCamera) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRExtensions(OVRExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRExtensions(OVRExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
