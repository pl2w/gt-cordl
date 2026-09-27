#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticNativeInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAcousticNativeInterface)
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_DummyInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_FMODPluginInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_INativeInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_UnityNativeInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_WwisePluginInterface;
}
namespace GlobalNamespace {
struct MetaXRAcousticNativeInterface_ovrAudioScalarType;
}
namespace Meta::XR::Acoustics {
struct AcousticMapStatus;
}
namespace Meta::XR::Acoustics {
struct AcousticModel;
}
namespace Meta::XR::Acoustics {
struct ControlZoneProperty;
}
namespace Meta::XR::Acoustics {
struct EnableFlagInternal;
}
namespace Meta::XR::Acoustics {
struct MapParameters;
}
namespace Meta::XR::Acoustics {
struct MaterialProperty;
}
namespace Meta::XR::Acoustics {
struct MeshGroup;
}
namespace Meta::XR::Acoustics {
struct MeshSimplification;
}
namespace Meta::XR::Acoustics {
struct ObjectFlags;
}
namespace System {
struct IntPtr;
}
namespace System {
struct UIntPtr;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_DummyInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_FMODPluginInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_INativeInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_UnityNativeInterface;
}
namespace GlobalNamespace {
class MetaXRAcousticNativeInterface_WwisePluginInterface;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticNativeInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticNativeInterface*, "", "MetaXRAcousticNativeInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*, "", "MetaXRAcousticNativeInterface/DummyInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*, "", "MetaXRAcousticNativeInterface/FMODPluginInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*, "", "MetaXRAcousticNativeInterface/INativeInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*, "", "MetaXRAcousticNativeInterface/UnityNativeInterface");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*, "", "MetaXRAcousticNativeInterface/WwisePluginInterface");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticNativeInterface
class CORDL_TYPE MetaXRAcousticNativeInterface : public ::System::Object {
public:
// Declarations
using DummyInterface = ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface;

using FMODPluginInterface = ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface;

using INativeInterface = ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface;

using UnityNativeInterface = ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface;

using WwisePluginInterface = ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface;

using ovrAudioScalarType = ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType;

/// @brief Field CachedInterface, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CachedInterface, put=setStaticF_CachedInterface)) ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*  CachedInterface;

/// @brief Method FindInterface, addr 0x9eaf8dc, size 0x4ec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* FindInterface() ;

static inline ::GlobalNamespace::MetaXRAcousticNativeInterface* New_ctor() ;

/// @brief Method .ctor, addr 0x9eaffe8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* getStaticF_CachedInterface() ;

/// @brief Method get_Interface, addr 0x9e9f818, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* get_Interface() ;

static inline void setStaticF_CachedInterface(::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticNativeInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticNativeInterface(MetaXRAcousticNativeInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticNativeInterface(MetaXRAcousticNativeInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29942};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaXRAcousticNativeInterface) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticNativeInterface/DummyInterface
class CORDL_TYPE MetaXRAcousticNativeInterface_DummyInterface : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr operator  ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept;

/// @brief Method AudioGeometryGetSimplifiedMesh, addr 0x9eba884, size 0x50, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices) ;

/// @brief Method AudioGeometryGetTransform, addr 0x9eba844, size 0x20, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioGeometryReadMeshFile, addr 0x9eba86c, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryReadMeshMemory, addr 0x9eba874, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioGeometrySetObjectFlag, addr 0x9eba824, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled) ;

/// @brief Method AudioGeometrySetTransform, addr 0x9eba83c, size 0x8, virtual false, abstract: false, final false
inline int32_t AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioGeometryUploadMeshArrays, addr 0x9eba82c, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount) ;

/// @brief Method AudioGeometryUploadSimplifiedMeshArrays, addr 0x9eba834, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method AudioGeometryWriteMeshFile, addr 0x9eba864, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryWriteMeshFileObj, addr 0x9eba87c, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioMaterialGetFrequency, addr 0x9eba8d4, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method AudioMaterialReset, addr 0x9eba8fc, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method AudioMaterialSetFrequency, addr 0x9eba8f4, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method AudioSceneIRCompute, addr 0x9eba950, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRComputeCustomPoints, addr 0x9eba958, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRGetEnabled, addr 0x9eba920, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled) ;

/// @brief Method AudioSceneIRGetPointCount, addr 0x9eba960, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method AudioSceneIRGetPoints, addr 0x9eba96c, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method AudioSceneIRGetStatus, addr 0x9eba92c, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method AudioSceneIRGetTransform, addr 0x9eba97c, size 0x60, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioSceneIRReadFile, addr 0x9eba9e4, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method AudioSceneIRReadMemory, addr 0x9eba9ec, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioSceneIRSetEnabled, addr 0x9eba918, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled) ;

/// @brief Method AudioSceneIRSetTransform, addr 0x9eba974, size 0x8, virtual false, abstract: false, final false
inline int32_t AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioSceneIRWriteFile, addr 0x9eba9dc, size 0x8, virtual true, abstract: false, final true
inline int32_t AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ControlZoneGetBox, addr 0x9ebaa8c, size 0x14, virtual true, abstract: false, final true
inline int32_t ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ControlZoneGetEnabled, addr 0x9ebaa10, size 0xc, virtual true, abstract: false, final true
inline int32_t ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled) ;

/// @brief Method ControlZoneGetFadeDistance, addr 0x9ebaaa8, size 0x14, virtual true, abstract: false, final true
inline int32_t ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ControlZoneGetTransform, addr 0x9ebaa24, size 0x60, virtual true, abstract: false, final true
inline int32_t ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ControlZoneReset, addr 0x9ebaac4, size 0x8, virtual true, abstract: false, final true
inline int32_t ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ControlZoneSetBox, addr 0x9ebaa84, size 0x8, virtual true, abstract: false, final true
inline int32_t ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ControlZoneSetEnabled, addr 0x9ebaa08, size 0x8, virtual true, abstract: false, final true
inline int32_t ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled) ;

/// @brief Method ControlZoneSetFadeDistance, addr 0x9ebaaa0, size 0x8, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ControlZoneSetFrequency, addr 0x9ebaabc, size 0x8, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ControlZoneSetTransform, addr 0x9ebaa1c, size 0x8, virtual false, abstract: false, final false
inline int32_t ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method CreateAudioGeometry, addr 0x9eba810, size 0xc, virtual true, abstract: false, final true
inline int32_t CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method CreateAudioMaterial, addr 0x9eba8e0, size 0xc, virtual true, abstract: false, final true
inline int32_t CreateAudioMaterial(::by_ref<::System::IntPtr>  material) ;

/// @brief Method CreateAudioSceneIR, addr 0x9eba904, size 0xc, virtual true, abstract: false, final true
inline int32_t CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method CreateControlZone, addr 0x9eba9f4, size 0xc, virtual true, abstract: false, final true
inline int32_t CreateControlZone(::by_ref<::System::IntPtr>  control) ;

/// @brief Method DestroyAudioGeometry, addr 0x9eba81c, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method DestroyAudioMaterial, addr 0x9eba8ec, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method DestroyAudioSceneIR, addr 0x9eba910, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method DestroyControlZone, addr 0x9ebaa00, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method InitializeAudioSceneIRParameters, addr 0x9eba938, size 0x18, virtual true, abstract: false, final true
inline int32_t InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform, addr 0x9ebaad4, size 0x8, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform, addr 0x9ebaadc, size 0x8, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform, addr 0x9ebaae4, size 0x8, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

static inline ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface* New_ctor() ;

/// @brief Method ResetReverb, addr 0x9eba7f8, size 0x8, virtual true, abstract: false, final true
inline int32_t ResetReverb() ;

/// @brief Method SetAcousticModel, addr 0x9eba7f0, size 0x8, virtual true, abstract: false, final true
inline int32_t SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model) ;

/// @brief Method SetEnabled, addr 0x9eba808, size 0x8, virtual true, abstract: false, final true
inline int32_t SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x9eba800, size 0x8, virtual true, abstract: false, final true
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

/// @brief Method .ctor, addr 0x9ebaacc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticNativeInterface_DummyInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_DummyInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticNativeInterface_DummyInterface(MetaXRAcousticNativeInterface_DummyInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_DummyInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticNativeInterface_DummyInterface(MetaXRAcousticNativeInterface_DummyInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29941};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticNativeInterface/FMODPluginInterface
class CORDL_TYPE MetaXRAcousticNativeInterface_FMODPluginInterface : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_context)) ::System::IntPtr  context;

/// @brief Field context_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context_, put=__cordl_internal_set_context_)) ::System::IntPtr  context_;

/// @brief Field version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr operator  ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept;

/// @brief Method AudioGeometryGetSimplifiedMesh, addr 0x9eb7ec0, size 0x190, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices) ;

/// @brief Method AudioGeometryGetTransform, addr 0x9eb7a8c, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioGeometryReadMeshFile, addr 0x9eb7be4, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryReadMeshMemory, addr 0x9eb7c84, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioGeometrySetObjectFlag, addr 0x9eb7454, size 0x28, virtual true, abstract: false, final true
inline int32_t AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled) ;

/// @brief Method AudioGeometrySetTransform, addr 0x9eb788c, size 0xd8, virtual false, abstract: false, final false
inline int32_t AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioGeometryUploadMeshArrays, addr 0x9eb7590, size 0xac, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount) ;

/// @brief Method AudioGeometryUploadSimplifiedMeshArrays, addr 0x9eb7754, size 0xb4, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method AudioGeometryWriteMeshFile, addr 0x9eb7b38, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryWriteMeshFileObj, addr 0x9eb7d34, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioMaterialGetFrequency, addr 0x9eb82bc, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method AudioMaterialReset, addr 0x9eb8350, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method AudioMaterialSetFrequency, addr 0x9eb820c, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method AudioSceneIRCompute, addr 0x9eb8844, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRComputeCustomPoints, addr 0x9eb898c, size 0x14, virtual true, abstract: false, final true
inline int32_t AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRGetEnabled, addr 0x9eb8590, size 0x38, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled) ;

/// @brief Method AudioSceneIRGetPointCount, addr 0x9eb8a24, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method AudioSceneIRGetPoints, addr 0x9eb8acc, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method AudioSceneIRGetStatus, addr 0x9eb864c, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method AudioSceneIRGetTransform, addr 0x9eb8d60, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioSceneIRReadFile, addr 0x9eb8eb8, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method AudioSceneIRReadMemory, addr 0x9eb8f58, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioSceneIRSetEnabled, addr 0x9eb8500, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled) ;

/// @brief Method AudioSceneIRSetTransform, addr 0x9eb8b60, size 0xd8, virtual false, abstract: false, final false
inline int32_t AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioSceneIRWriteFile, addr 0x9eb8e0c, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ControlZoneGetBox, addr 0x9eb9f48, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ControlZoneGetEnabled, addr 0x9eb956c, size 0xe8, virtual true, abstract: false, final true
inline int32_t ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled) ;

/// @brief Method ControlZoneGetFadeDistance, addr 0x9eba360, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ControlZoneGetTransform, addr 0x9eb9b54, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ControlZoneReset, addr 0x9eba730, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ControlZoneSetBox, addr 0x9eb9d44, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ControlZoneSetEnabled, addr 0x9eb93bc, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled) ;

/// @brief Method ControlZoneSetFadeDistance, addr 0x9eba15c, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ControlZoneSetFrequency, addr 0x9eba564, size 0xc4, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ControlZoneSetTransform, addr 0x9eb975c, size 0x1a8, virtual false, abstract: false, final false
inline int32_t ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method CreateAudioGeometry, addr 0x9eb7324, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method CreateAudioMaterial, addr 0x9eb80d4, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioMaterial(::by_ref<::System::IntPtr>  material) ;

/// @brief Method CreateAudioSceneIR, addr 0x9eb83e0, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method CreateControlZone, addr 0x9eb9070, size 0xb0, virtual true, abstract: false, final true
inline int32_t CreateControlZone(::by_ref<::System::IntPtr>  control) ;

/// @brief Method DestroyAudioGeometry, addr 0x9eb73b8, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method DestroyAudioMaterial, addr 0x9eb8168, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method DestroyAudioSceneIR, addr 0x9eb8474, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method DestroyControlZone, addr 0x9eb9218, size 0x9c, virtual true, abstract: false, final true
inline int32_t DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method InitializeAudioSceneIRParameters, addr 0x9eb8724, size 0x8, virtual true, abstract: false, final true
inline int32_t InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform, addr 0x9eba7e4, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform, addr 0x9eba7e8, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform, addr 0x9eba7ec, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

static inline ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface* New_ctor() ;

/// @brief Method ResetReverb, addr 0x9eb7120, size 0x10, virtual true, abstract: false, final true
inline int32_t ResetReverb() ;

/// @brief Method SetAcousticModel, addr 0x9eb708c, size 0x18, virtual true, abstract: false, final true
inline int32_t SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model) ;

/// @brief Method SetEnabled, addr 0x9eb7278, size 0x28, virtual true, abstract: false, final true
inline int32_t SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x9eb71c0, size 0x28, virtual true, abstract: false, final true
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

constexpr ::System::IntPtr const& __cordl_internal_get_context_() const;

constexpr ::System::IntPtr& __cordl_internal_get_context_() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_context_(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x9eba7d8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_context, addr 0x9eb6eb4, size 0x44, virtual false, abstract: false, final false
inline ::System::IntPtr get_context() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept;

/// @brief Method ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials, addr 0x9eb7d40, size 0xb4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::System::IntPtr  unused1, ::by_ref<uint32_t>  numVertices, ::System::IntPtr  unused2, ::System::IntPtr  unused3, ::by_ref<uint32_t>  numTriangles) ;

/// @brief Method ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials, addr 0x9eb7df4, size 0xcc, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::by_ref<uint32_t>  numVertices, ::ArrayW<uint32_t>  indices, ::ArrayW<uint32_t>  materialIndices, ::by_ref<uint32_t>  numTriangles) ;

/// @brief Method ovrAudio_AudioGeometryGetTransform, addr 0x9eb7964, size 0x128, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_AudioGeometryReadMeshFile, addr 0x9eb7b44, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioGeometryReadMeshMemory, addr 0x9eb7bf0, size 0x94, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method ovrAudio_AudioGeometrySetObjectFlag, addr 0x9eb73c0, size 0x94, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, int32_t  enabled) ;

/// @brief Method ovrAudio_AudioGeometrySetTransform, addr 0x9eb7808, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometrySetTransform(::System::IntPtr  geometry, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_AudioGeometryUploadMeshArrays, addr 0x9eb747c, size 0x114, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount) ;

/// @brief Method ovrAudio_AudioGeometryUploadSimplifiedMeshArrays, addr 0x9eb763c, size 0x118, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method ovrAudio_AudioGeometryWriteMeshFile, addr 0x9eb7a98, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioGeometryWriteMeshFileObj, addr 0x9eb7c94, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioMaterialGetFrequency, addr 0x9eb8218, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method ovrAudio_AudioMaterialReset, addr 0x9eb82cc, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method ovrAudio_AudioMaterialSetFrequency, addr 0x9eb8170, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_AudioSceneIRCompute, addr 0x9eb872c, size 0x118, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_AudioSceneIRComputeCustomPoints, addr 0x9eb8850, size 0x13c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_AudioSceneIRGetEnabled, addr 0x9eb850c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_AudioSceneIRGetPointCount, addr 0x9eb89a0, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method ovrAudio_AudioSceneIRGetPoints, addr 0x9eb8a30, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method ovrAudio_AudioSceneIRGetStatus, addr 0x9eb85c8, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method ovrAudio_AudioSceneIRGetTransform, addr 0x9eb8c38, size 0x128, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_AudioSceneIRReadFile, addr 0x9eb8e18, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioSceneIRReadMemory, addr 0x9eb8ec4, size 0x94, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method ovrAudio_AudioSceneIRSetEnabled, addr 0x9eb847c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, int32_t  enabled) ;

/// @brief Method ovrAudio_AudioSceneIRSetTransform, addr 0x9eb8adc, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_AudioSceneIRWriteFile, addr 0x9eb8d6c, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ovrAudio_ControlVolumeGetBox, addr 0x9eb9eac, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ovrAudio_ControlVolumeGetEnabled, addr 0x9eb94e8, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_ControlVolumeGetFadeDistance, addr 0x9eba2c4, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ovrAudio_ControlVolumeGetTransform, addr 0x9eb9a2c, size 0x128, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_ControlVolumeReset, addr 0x9eba6ac, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ovrAudio_ControlVolumeSetBox, addr 0x9eb9ca0, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ovrAudio_ControlVolumeSetEnabled, addr 0x9eb9338, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetEnabled(::System::IntPtr  control, int32_t  enabled) ;

/// @brief Method ovrAudio_ControlVolumeSetFadeDistance, addr 0x9eba0b8, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ovrAudio_ControlVolumeSetFrequency, addr 0x9eba4c8, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_ControlVolumeSetTransform, addr 0x9eb96d8, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetTransform(::System::IntPtr  control, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_ControlZoneGetBox, addr 0x9eb9e10, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ovrAudio_ControlZoneGetEnabled, addr 0x9eb9464, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_ControlZoneGetFadeDistance, addr 0x9eba228, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ovrAudio_ControlZoneGetTransform, addr 0x9eb9904, size 0x128, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_ControlZoneReset, addr 0x9eba628, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ovrAudio_ControlZoneSetBox, addr 0x9eb9bfc, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ovrAudio_ControlZoneSetEnabled, addr 0x9eb92b4, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetEnabled(::System::IntPtr  control, int32_t  enabled) ;

/// @brief Method ovrAudio_ControlZoneSetFadeDistance, addr 0x9eba014, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ovrAudio_ControlZoneSetFrequency, addr 0x9eba42c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_ControlZoneSetTransform, addr 0x9eb9654, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetTransform(::System::IntPtr  control, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_CreateAudioGeometry, addr 0x9eb72a0, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioGeometry(::System::IntPtr  context, ::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method ovrAudio_CreateAudioMaterial, addr 0x9eb8050, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioMaterial(::System::IntPtr  context, ::by_ref<::System::IntPtr>  material) ;

/// @brief Method ovrAudio_CreateAudioSceneIR, addr 0x9eb835c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioSceneIR(::System::IntPtr  context, ::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method ovrAudio_CreateControlVolume, addr 0x9eb8fec, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateControlVolume(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control) ;

/// @brief Method ovrAudio_CreateControlZone, addr 0x9eb8f68, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateControlZone(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control) ;

/// @brief Method ovrAudio_DestroyAudioGeometry, addr 0x9eb733c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method ovrAudio_DestroyAudioMaterial, addr 0x9eb80ec, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method ovrAudio_DestroyAudioSceneIR, addr 0x9eb83f8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method ovrAudio_DestroyControlVolume, addr 0x9eb919c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyControlVolume(::System::IntPtr  control) ;

/// @brief Method ovrAudio_DestroyControlZone, addr 0x9eb9120, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method ovrAudio_Enable, addr 0x9eb71e8, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Acoustics::EnableFlagInternal  what, int32_t  enable) ;

/// @brief Method ovrAudio_Enable, addr 0x9eb7130, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable) ;

/// @brief Method ovrAudio_GetPluginContext, addr 0x9eb6ef8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context) ;

/// @brief Method ovrAudio_GetVersion, addr 0x9eb6f74, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr ovrAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch) ;

/// @brief Method ovrAudio_InitializeAudioSceneIRParameters, addr 0x9eb8658, size 0xcc, virtual false, abstract: false, final false
static inline int32_t ovrAudio_InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_ResetSharedReverb, addr 0x9eb70a4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ResetSharedReverb(::System::IntPtr  context) ;

/// @brief Method ovrAudio_SetAcousticModel, addr 0x9eb7008, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetAcousticModel(::System::IntPtr  context, ::Meta::XR::Acoustics::AcousticModel  quality) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticNativeInterface_FMODPluginInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_FMODPluginInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticNativeInterface_FMODPluginInterface(MetaXRAcousticNativeInterface_FMODPluginInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_FMODPluginInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticNativeInterface_FMODPluginInterface(MetaXRAcousticNativeInterface_FMODPluginInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29940};

/// @brief Field binaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  binaryName{u"MetaXRAudioFMOD"};

/// @brief Field context_, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___context_;

/// @brief Field version, offset: 0x18, size: 0x4, def value: None
 int32_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface, ___context_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface, ___version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticNativeInterface/WwisePluginInterface
class CORDL_TYPE MetaXRAcousticNativeInterface_WwisePluginInterface : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_context)) ::System::IntPtr  context;

/// @brief Field context_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context_, put=__cordl_internal_set_context_)) ::System::IntPtr  context_;

/// @brief Field version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr operator  ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept;

/// @brief Method AudioGeometryGetSimplifiedMesh, addr 0x9eb4630, size 0x190, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices) ;

/// @brief Method AudioGeometryGetTransform, addr 0x9eb4208, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioGeometryReadMeshFile, addr 0x9eb4358, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryReadMeshMemory, addr 0x9eb43f8, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioGeometrySetObjectFlag, addr 0x9eb3bd8, size 0x28, virtual true, abstract: false, final true
inline int32_t AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled) ;

/// @brief Method AudioGeometrySetTransform, addr 0x9eb400c, size 0xd8, virtual false, abstract: false, final false
inline int32_t AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioGeometryUploadMeshArrays, addr 0x9eb3d14, size 0xac, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount) ;

/// @brief Method AudioGeometryUploadSimplifiedMeshArrays, addr 0x9eb3ed8, size 0xb4, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method AudioGeometryWriteMeshFile, addr 0x9eb42b0, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryWriteMeshFileObj, addr 0x9eb44a4, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioMaterialGetFrequency, addr 0x9eb4a28, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method AudioMaterialReset, addr 0x9eb4abc, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method AudioMaterialSetFrequency, addr 0x9eb4978, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method AudioSceneIRCompute, addr 0x9eb4f78, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRComputeCustomPoints, addr 0x9eb5090, size 0x14, virtual true, abstract: false, final true
inline int32_t AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRGetEnabled, addr 0x9eb4cf4, size 0x38, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled) ;

/// @brief Method AudioSceneIRGetPointCount, addr 0x9eb5124, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method AudioSceneIRGetPoints, addr 0x9eb51cc, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method AudioSceneIRGetStatus, addr 0x9eb4dac, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method AudioSceneIRGetTransform, addr 0x9eb5458, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioSceneIRReadFile, addr 0x9eb55a8, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method AudioSceneIRReadMemory, addr 0x9eb5648, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioSceneIRSetEnabled, addr 0x9eb4c68, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled) ;

/// @brief Method AudioSceneIRSetTransform, addr 0x9eb525c, size 0xd8, virtual false, abstract: false, final false
inline int32_t AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioSceneIRWriteFile, addr 0x9eb5500, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ControlZoneGetBox, addr 0x9eb6618, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ControlZoneGetEnabled, addr 0x9eb5c4c, size 0xe8, virtual true, abstract: false, final true
inline int32_t ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled) ;

/// @brief Method ControlZoneGetFadeDistance, addr 0x9eb6a30, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ControlZoneGetTransform, addr 0x9eb6224, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ControlZoneReset, addr 0x9eb6e00, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ControlZoneSetBox, addr 0x9eb6414, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ControlZoneSetEnabled, addr 0x9eb5aa4, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled) ;

/// @brief Method ControlZoneSetFadeDistance, addr 0x9eb682c, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ControlZoneSetFrequency, addr 0x9eb6c34, size 0xc4, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ControlZoneSetTransform, addr 0x9eb5e34, size 0x1a8, virtual false, abstract: false, final false
inline int32_t ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method CreateAudioGeometry, addr 0x9eb3aac, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method CreateAudioMaterial, addr 0x9eb4840, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioMaterial(::by_ref<::System::IntPtr>  material) ;

/// @brief Method CreateAudioSceneIR, addr 0x9eb4b48, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method CreateControlZone, addr 0x9eb5758, size 0xb0, virtual true, abstract: false, final true
inline int32_t CreateControlZone(::by_ref<::System::IntPtr>  control) ;

/// @brief Method DestroyAudioGeometry, addr 0x9eb3b40, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method DestroyAudioMaterial, addr 0x9eb48d4, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method DestroyAudioSceneIR, addr 0x9eb4bdc, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method DestroyControlZone, addr 0x9eb5900, size 0x9c, virtual true, abstract: false, final true
inline int32_t DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method InitializeAudioSceneIRParameters, addr 0x9eb4e8c, size 0x8, virtual true, abstract: false, final true
inline int32_t InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform, addr 0x9eb6ea8, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform, addr 0x9eb6eac, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform, addr 0x9eb6eb0, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

static inline ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface* New_ctor() ;

/// @brief Method ResetReverb, addr 0x9eb38ac, size 0x10, virtual true, abstract: false, final true
inline int32_t ResetReverb() ;

/// @brief Method SetAcousticModel, addr 0x9eb3818, size 0x18, virtual true, abstract: false, final true
inline int32_t SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model) ;

/// @brief Method SetEnabled, addr 0x9eb3a04, size 0x28, virtual true, abstract: false, final true
inline int32_t SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x9eb394c, size 0x28, virtual true, abstract: false, final true
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

constexpr ::System::IntPtr const& __cordl_internal_get_context_() const;

constexpr ::System::IntPtr& __cordl_internal_get_context_() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_context_(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x9eafec0, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getOrCreateGlobalOvrAudioContext, addr 0x9eafdc8, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr getOrCreateGlobalOvrAudioContext() ;

/// @brief Method get_context, addr 0x9eb3754, size 0x40, virtual false, abstract: false, final false
inline ::System::IntPtr get_context() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept;

/// @brief Method ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials, addr 0x9eb44b0, size 0xb4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::System::IntPtr  unused1, ::by_ref<uint32_t>  numVertices, ::System::IntPtr  unused2, ::System::IntPtr  unused3, ::by_ref<uint32_t>  numTriangles) ;

/// @brief Method ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials, addr 0x9eb4564, size 0xcc, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::by_ref<uint32_t>  numVertices, ::ArrayW<uint32_t>  indices, ::ArrayW<uint32_t>  materialIndices, ::by_ref<uint32_t>  numTriangles) ;

/// @brief Method ovrAudio_AudioGeometryGetTransform, addr 0x9eb40e4, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_AudioGeometryReadMeshFile, addr 0x9eb42bc, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioGeometryReadMeshMemory, addr 0x9eb4364, size 0x94, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method ovrAudio_AudioGeometrySetObjectFlag, addr 0x9eb3b48, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, int32_t  enabled) ;

/// @brief Method ovrAudio_AudioGeometrySetTransform, addr 0x9eb3f8c, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometrySetTransform(::System::IntPtr  geometry, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_AudioGeometryUploadMeshArrays, addr 0x9eb3c00, size 0x114, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount) ;

/// @brief Method ovrAudio_AudioGeometryUploadSimplifiedMeshArrays, addr 0x9eb3dc0, size 0x118, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method ovrAudio_AudioGeometryWriteMeshFile, addr 0x9eb4214, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioGeometryWriteMeshFileObj, addr 0x9eb4408, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioMaterialGetFrequency, addr 0x9eb4984, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method ovrAudio_AudioMaterialReset, addr 0x9eb4a38, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method ovrAudio_AudioMaterialSetFrequency, addr 0x9eb48dc, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_AudioSceneIRCompute, addr 0x9eb4e94, size 0xe4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_AudioSceneIRComputeCustomPoints, addr 0x9eb4f84, size 0x10c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_AudioSceneIRGetEnabled, addr 0x9eb4c74, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_AudioSceneIRGetPointCount, addr 0x9eb50a4, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method ovrAudio_AudioSceneIRGetPoints, addr 0x9eb5130, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method ovrAudio_AudioSceneIRGetStatus, addr 0x9eb4d2c, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method ovrAudio_AudioSceneIRGetTransform, addr 0x9eb5334, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_AudioSceneIRReadFile, addr 0x9eb550c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioSceneIRReadMemory, addr 0x9eb55b4, size 0x94, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method ovrAudio_AudioSceneIRSetEnabled, addr 0x9eb4be4, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, int32_t  enabled) ;

/// @brief Method ovrAudio_AudioSceneIRSetTransform, addr 0x9eb51dc, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_AudioSceneIRWriteFile, addr 0x9eb5464, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ovrAudio_ControlVolumeGetBox, addr 0x9eb657c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ovrAudio_ControlVolumeGetEnabled, addr 0x9eb5bcc, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_ControlVolumeGetFadeDistance, addr 0x9eb6994, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ovrAudio_ControlVolumeGetTransform, addr 0x9eb6100, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_ControlVolumeReset, addr 0x9eb6d7c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ovrAudio_ControlVolumeSetBox, addr 0x9eb6370, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ovrAudio_ControlVolumeSetEnabled, addr 0x9eb5a20, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetEnabled(::System::IntPtr  control, int32_t  enabled) ;

/// @brief Method ovrAudio_ControlVolumeSetFadeDistance, addr 0x9eb6788, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ovrAudio_ControlVolumeSetFrequency, addr 0x9eb6b98, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_ControlVolumeSetTransform, addr 0x9eb5db4, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetTransform(::System::IntPtr  control, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_ControlZoneGetBox, addr 0x9eb64e0, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ovrAudio_ControlZoneGetEnabled, addr 0x9eb5b4c, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_ControlZoneGetFadeDistance, addr 0x9eb68f8, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ovrAudio_ControlZoneGetTransform, addr 0x9eb5fdc, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_ControlZoneReset, addr 0x9eb6cf8, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ovrAudio_ControlZoneSetBox, addr 0x9eb62cc, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ovrAudio_ControlZoneSetEnabled, addr 0x9eb599c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetEnabled(::System::IntPtr  control, int32_t  enabled) ;

/// @brief Method ovrAudio_ControlZoneSetFadeDistance, addr 0x9eb66e4, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ovrAudio_ControlZoneSetFrequency, addr 0x9eb6afc, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_ControlZoneSetTransform, addr 0x9eb5d34, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetTransform(::System::IntPtr  control, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_CreateAudioGeometry, addr 0x9eb3a2c, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioGeometry(::System::IntPtr  context, ::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method ovrAudio_CreateAudioMaterial, addr 0x9eb47c0, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioMaterial(::System::IntPtr  context, ::by_ref<::System::IntPtr>  material) ;

/// @brief Method ovrAudio_CreateAudioSceneIR, addr 0x9eb4ac8, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioSceneIR(::System::IntPtr  context, ::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method ovrAudio_CreateControlVolume, addr 0x9eb56d8, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateControlVolume(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control) ;

/// @brief Method ovrAudio_CreateControlZone, addr 0x9eb5658, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateControlZone(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control) ;

/// @brief Method ovrAudio_DestroyAudioGeometry, addr 0x9eb3ac4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method ovrAudio_DestroyAudioMaterial, addr 0x9eb4858, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method ovrAudio_DestroyAudioSceneIR, addr 0x9eb4b60, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method ovrAudio_DestroyControlVolume, addr 0x9eb5884, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyControlVolume(::System::IntPtr  control) ;

/// @brief Method ovrAudio_DestroyControlZone, addr 0x9eb5808, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method ovrAudio_Enable, addr 0x9eb3974, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Acoustics::EnableFlagInternal  what, int32_t  enable) ;

/// @brief Method ovrAudio_Enable, addr 0x9eb38bc, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable) ;

/// @brief Method ovrAudio_GetVersion, addr 0x9eafe2c, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr ovrAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch) ;

/// @brief Method ovrAudio_InitializeAudioSceneIRParameters, addr 0x9eb4db8, size 0xd4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_ResetSharedReverb, addr 0x9eb3830, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ResetSharedReverb(::System::IntPtr  context) ;

/// @brief Method ovrAudio_SetAcousticModel, addr 0x9eb3794, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetAcousticModel(::System::IntPtr  context, ::Meta::XR::Acoustics::AcousticModel  quality) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticNativeInterface_WwisePluginInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_WwisePluginInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticNativeInterface_WwisePluginInterface(MetaXRAcousticNativeInterface_WwisePluginInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_WwisePluginInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticNativeInterface_WwisePluginInterface(MetaXRAcousticNativeInterface_WwisePluginInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29939};

/// @brief Field binaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  binaryName{u"MetaXRAudioWwise"};

/// @brief Field context_, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___context_;

/// @brief Field version, offset: 0x18, size: 0x4, def value: None
 int32_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface, ___context_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface, ___version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticNativeInterface/UnityNativeInterface
class CORDL_TYPE MetaXRAcousticNativeInterface_UnityNativeInterface : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_context)) ::System::IntPtr  context;

/// @brief Field context_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_context_, put=__cordl_internal_set_context_)) ::System::IntPtr  context_;

/// @brief Field version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr operator  ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept;

/// @brief Method AudioGeometryGetSimplifiedMesh, addr 0x9eb0ed0, size 0x190, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices) ;

/// @brief Method AudioGeometryGetTransform, addr 0x9eb0aa8, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioGeometryReadMeshFile, addr 0x9eb0bf8, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryReadMeshMemory, addr 0x9eb0c98, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioGeometrySetObjectFlag, addr 0x9eb0478, size 0x28, virtual true, abstract: false, final true
inline int32_t AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled) ;

/// @brief Method AudioGeometrySetTransform, addr 0x9eb08ac, size 0xd8, virtual false, abstract: false, final false
inline int32_t AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioGeometryUploadMeshArrays, addr 0x9eb05b4, size 0xac, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount) ;

/// @brief Method AudioGeometryUploadSimplifiedMeshArrays, addr 0x9eb0778, size 0xb4, virtual true, abstract: false, final true
inline int32_t AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method AudioGeometryWriteMeshFile, addr 0x9eb0b50, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryWriteMeshFileObj, addr 0x9eb0d44, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioMaterialGetFrequency, addr 0x9eb12c8, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method AudioMaterialReset, addr 0x9eb135c, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method AudioMaterialSetFrequency, addr 0x9eb1218, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method AudioSceneIRCompute, addr 0x9eb1818, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRComputeCustomPoints, addr 0x9eb1930, size 0x14, virtual true, abstract: false, final true
inline int32_t AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRGetEnabled, addr 0x9eb1594, size 0x38, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled) ;

/// @brief Method AudioSceneIRGetPointCount, addr 0x9eb19c4, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method AudioSceneIRGetPoints, addr 0x9eb1a6c, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method AudioSceneIRGetStatus, addr 0x9eb164c, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method AudioSceneIRGetTransform, addr 0x9eb1cf8, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioSceneIRReadFile, addr 0x9eb1e48, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method AudioSceneIRReadMemory, addr 0x9eb1ee8, size 0x10, virtual true, abstract: false, final true
inline int32_t AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioSceneIRSetEnabled, addr 0x9eb1508, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled) ;

/// @brief Method AudioSceneIRSetTransform, addr 0x9eb1afc, size 0xd8, virtual false, abstract: false, final false
inline int32_t AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioSceneIRWriteFile, addr 0x9eb1da0, size 0xc, virtual true, abstract: false, final true
inline int32_t AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ControlZoneGetBox, addr 0x9eb2eb8, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ControlZoneGetEnabled, addr 0x9eb24ec, size 0xe8, virtual true, abstract: false, final true
inline int32_t ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled) ;

/// @brief Method ControlZoneGetFadeDistance, addr 0x9eb32d0, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ControlZoneGetTransform, addr 0x9eb2ac4, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ControlZoneReset, addr 0x9eb36a0, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ControlZoneSetBox, addr 0x9eb2cb4, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ControlZoneSetEnabled, addr 0x9eb2344, size 0xa8, virtual true, abstract: false, final true
inline int32_t ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled) ;

/// @brief Method ControlZoneSetFadeDistance, addr 0x9eb30cc, size 0xcc, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ControlZoneSetFrequency, addr 0x9eb34d4, size 0xc4, virtual true, abstract: false, final true
inline int32_t ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ControlZoneSetTransform, addr 0x9eb26d4, size 0x1a8, virtual false, abstract: false, final false
inline int32_t ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method CreateAudioGeometry, addr 0x9eb034c, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method CreateAudioMaterial, addr 0x9eb10e0, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioMaterial(::by_ref<::System::IntPtr>  material) ;

/// @brief Method CreateAudioSceneIR, addr 0x9eb13e8, size 0x18, virtual true, abstract: false, final true
inline int32_t CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method CreateControlZone, addr 0x9eb1ff8, size 0xb0, virtual true, abstract: false, final true
inline int32_t CreateControlZone(::by_ref<::System::IntPtr>  control) ;

/// @brief Method DestroyAudioGeometry, addr 0x9eb03e0, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method DestroyAudioMaterial, addr 0x9eb1174, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method DestroyAudioSceneIR, addr 0x9eb147c, size 0x8, virtual true, abstract: false, final true
inline int32_t DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method DestroyControlZone, addr 0x9eb21a0, size 0x9c, virtual true, abstract: false, final true
inline int32_t DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method InitializeAudioSceneIRParameters, addr 0x9eb172c, size 0x8, virtual true, abstract: false, final true
inline int32_t InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform, addr 0x9eb3748, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform, addr 0x9eb374c, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform, addr 0x9eb3750, size 0x4, virtual true, abstract: false, final true
inline int32_t MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

static inline ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface* New_ctor() ;

/// @brief Method ResetReverb, addr 0x9eb014c, size 0x10, virtual true, abstract: false, final true
inline int32_t ResetReverb() ;

/// @brief Method SetAcousticModel, addr 0x9eb00b8, size 0x18, virtual true, abstract: false, final true
inline int32_t SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model) ;

/// @brief Method SetEnabled, addr 0x9eb02a4, size 0x28, virtual true, abstract: false, final true
inline int32_t SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x9eb01ec, size 0x28, virtual true, abstract: false, final true
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

constexpr ::System::IntPtr const& __cordl_internal_get_context_() const;

constexpr ::System::IntPtr& __cordl_internal_get_context_() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_context_(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x9eaffdc, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_context, addr 0x9eafff0, size 0x44, virtual false, abstract: false, final false
inline ::System::IntPtr get_context() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept;

/// @brief Method ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials, addr 0x9eb0d50, size 0xb4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::System::IntPtr  unused1, ::by_ref<uint32_t>  numVertices, ::System::IntPtr  unused2, ::System::IntPtr  unused3, ::by_ref<uint32_t>  numTriangles) ;

/// @brief Method ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials, addr 0x9eb0e04, size 0xcc, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::by_ref<uint32_t>  numVertices, ::ArrayW<uint32_t>  indices, ::ArrayW<uint32_t>  materialIndices, ::by_ref<uint32_t>  numTriangles) ;

/// @brief Method ovrAudio_AudioGeometryGetTransform, addr 0x9eb0984, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_AudioGeometryReadMeshFile, addr 0x9eb0b5c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioGeometryReadMeshMemory, addr 0x9eb0c04, size 0x94, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method ovrAudio_AudioGeometrySetObjectFlag, addr 0x9eb03e8, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, int32_t  enabled) ;

/// @brief Method ovrAudio_AudioGeometrySetTransform, addr 0x9eb082c, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometrySetTransform(::System::IntPtr  geometry, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_AudioGeometryUploadMeshArrays, addr 0x9eb04a0, size 0x114, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount) ;

/// @brief Method ovrAudio_AudioGeometryUploadSimplifiedMeshArrays, addr 0x9eb0660, size 0x118, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method ovrAudio_AudioGeometryWriteMeshFile, addr 0x9eb0ab4, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioGeometryWriteMeshFileObj, addr 0x9eb0ca8, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioMaterialGetFrequency, addr 0x9eb1224, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method ovrAudio_AudioMaterialReset, addr 0x9eb12d8, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method ovrAudio_AudioMaterialSetFrequency, addr 0x9eb117c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_AudioSceneIRCompute, addr 0x9eb1734, size 0xe4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_AudioSceneIRComputeCustomPoints, addr 0x9eb1824, size 0x10c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_AudioSceneIRGetEnabled, addr 0x9eb1514, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_AudioSceneIRGetPointCount, addr 0x9eb1944, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method ovrAudio_AudioSceneIRGetPoints, addr 0x9eb19d0, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method ovrAudio_AudioSceneIRGetStatus, addr 0x9eb15cc, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method ovrAudio_AudioSceneIRGetTransform, addr 0x9eb1bd4, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_AudioSceneIRReadFile, addr 0x9eb1dac, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ovrAudio_AudioSceneIRReadMemory, addr 0x9eb1e54, size 0x94, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method ovrAudio_AudioSceneIRSetEnabled, addr 0x9eb1484, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, int32_t  enabled) ;

/// @brief Method ovrAudio_AudioSceneIRSetTransform, addr 0x9eb1a7c, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_AudioSceneIRWriteFile, addr 0x9eb1d04, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ovrAudio_ControlVolumeGetBox, addr 0x9eb2e1c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ovrAudio_ControlVolumeGetEnabled, addr 0x9eb246c, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_ControlVolumeGetFadeDistance, addr 0x9eb3234, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ovrAudio_ControlVolumeGetTransform, addr 0x9eb29a0, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_ControlVolumeReset, addr 0x9eb361c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ovrAudio_ControlVolumeSetBox, addr 0x9eb2c10, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ovrAudio_ControlVolumeSetEnabled, addr 0x9eb22c0, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetEnabled(::System::IntPtr  control, int32_t  enabled) ;

/// @brief Method ovrAudio_ControlVolumeSetFadeDistance, addr 0x9eb3028, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ovrAudio_ControlVolumeSetFrequency, addr 0x9eb3438, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_ControlVolumeSetTransform, addr 0x9eb2654, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlVolumeSetTransform(::System::IntPtr  control, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_ControlZoneGetBox, addr 0x9eb2d80, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ovrAudio_ControlZoneGetEnabled, addr 0x9eb23ec, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled) ;

/// @brief Method ovrAudio_ControlZoneGetFadeDistance, addr 0x9eb3198, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ovrAudio_ControlZoneGetTransform, addr 0x9eb287c, size 0x124, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ovrAudio_ControlZoneReset, addr 0x9eb3598, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ovrAudio_ControlZoneSetBox, addr 0x9eb2b6c, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ovrAudio_ControlZoneSetEnabled, addr 0x9eb223c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetEnabled(::System::IntPtr  control, int32_t  enabled) ;

/// @brief Method ovrAudio_ControlZoneSetFadeDistance, addr 0x9eb2f84, size 0xa4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ovrAudio_ControlZoneSetFrequency, addr 0x9eb339c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ovrAudio_ControlZoneSetTransform, addr 0x9eb25d4, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ControlZoneSetTransform(::System::IntPtr  control, float_t*  matrix4x4) ;

/// @brief Method ovrAudio_CreateAudioGeometry, addr 0x9eb02cc, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioGeometry(::System::IntPtr  context, ::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method ovrAudio_CreateAudioMaterial, addr 0x9eb1060, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioMaterial(::System::IntPtr  context, ::by_ref<::System::IntPtr>  material) ;

/// @brief Method ovrAudio_CreateAudioSceneIR, addr 0x9eb1368, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateAudioSceneIR(::System::IntPtr  context, ::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method ovrAudio_CreateControlVolume, addr 0x9eb1f78, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateControlVolume(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control) ;

/// @brief Method ovrAudio_CreateControlZone, addr 0x9eb1ef8, size 0x80, virtual false, abstract: false, final false
static inline int32_t ovrAudio_CreateControlZone(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control) ;

/// @brief Method ovrAudio_DestroyAudioGeometry, addr 0x9eb0364, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method ovrAudio_DestroyAudioMaterial, addr 0x9eb10f8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method ovrAudio_DestroyAudioSceneIR, addr 0x9eb1400, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method ovrAudio_DestroyControlVolume, addr 0x9eb2124, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyControlVolume(::System::IntPtr  control) ;

/// @brief Method ovrAudio_DestroyControlZone, addr 0x9eb20a8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method ovrAudio_Enable, addr 0x9eb0214, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Acoustics::EnableFlagInternal  what, int32_t  enable) ;

/// @brief Method ovrAudio_Enable, addr 0x9eb015c, size 0x90, virtual false, abstract: false, final false
static inline int32_t ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable) ;

/// @brief Method ovrAudio_GetPluginContext, addr 0x9eafecc, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context) ;

/// @brief Method ovrAudio_GetVersion, addr 0x9eaff48, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr ovrAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch) ;

/// @brief Method ovrAudio_InitializeAudioSceneIRParameters, addr 0x9eb1658, size 0xd4, virtual false, abstract: false, final false
static inline int32_t ovrAudio_InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ovrAudio_ResetSharedReverb, addr 0x9eb00d0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ovrAudio_ResetSharedReverb(::System::IntPtr  context) ;

/// @brief Method ovrAudio_SetAcousticModel, addr 0x9eb0034, size 0x84, virtual false, abstract: false, final false
static inline int32_t ovrAudio_SetAcousticModel(::System::IntPtr  context, ::Meta::XR::Acoustics::AcousticModel  quality) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticNativeInterface_UnityNativeInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_UnityNativeInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticNativeInterface_UnityNativeInterface(MetaXRAcousticNativeInterface_UnityNativeInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_UnityNativeInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticNativeInterface_UnityNativeInterface(MetaXRAcousticNativeInterface_UnityNativeInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29938};

/// @brief Field binaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  binaryName{u"MetaXRAudioUnity"};

/// @brief Field context_, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___context_;

/// @brief Field version, offset: 0x18, size: 0x4, def value: None
 int32_t  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface, ___context_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface, ___version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticNativeInterface/INativeInterface
class CORDL_TYPE MetaXRAcousticNativeInterface_INativeInterface {
public:
// Declarations
/// @brief Method AudioGeometryGetSimplifiedMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices) ;

/// @brief Method AudioGeometryGetTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioGeometryReadMeshFile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryReadMeshMemory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioGeometrySetObjectFlag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled) ;

/// @brief Method AudioGeometrySetTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioGeometryUploadMeshArrays, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount) ;

/// @brief Method AudioGeometryUploadSimplifiedMeshArrays, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification) ;

/// @brief Method AudioGeometryWriteMeshFile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioGeometryWriteMeshFileObj, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath) ;

/// @brief Method AudioMaterialGetFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value) ;

/// @brief Method AudioMaterialReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property) ;

/// @brief Method AudioMaterialSetFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method AudioSceneIRCompute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRComputeCustomPoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method AudioSceneIRGetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled) ;

/// @brief Method AudioSceneIRGetPointCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount) ;

/// @brief Method AudioSceneIRGetPoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount) ;

/// @brief Method AudioSceneIRGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status) ;

/// @brief Method AudioSceneIRGetTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method AudioSceneIRReadFile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method AudioSceneIRReadMemory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength) ;

/// @brief Method AudioSceneIRSetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled) ;

/// @brief Method AudioSceneIRSetTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method AudioSceneIRWriteFile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath) ;

/// @brief Method ControlZoneGetBox, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ) ;

/// @brief Method ControlZoneGetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled) ;

/// @brief Method ControlZoneGetFadeDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ) ;

/// @brief Method ControlZoneGetTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4) ;

/// @brief Method ControlZoneReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property) ;

/// @brief Method ControlZoneSetBox, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ) ;

/// @brief Method ControlZoneSetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled) ;

/// @brief Method ControlZoneSetFadeDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ) ;

/// @brief Method ControlZoneSetFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value) ;

/// @brief Method ControlZoneSetTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method CreateAudioGeometry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry) ;

/// @brief Method CreateAudioMaterial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t CreateAudioMaterial(::by_ref<::System::IntPtr>  material) ;

/// @brief Method CreateAudioSceneIR, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR) ;

/// @brief Method CreateControlZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t CreateControlZone(::by_ref<::System::IntPtr>  control) ;

/// @brief Method DestroyAudioGeometry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t DestroyAudioGeometry(::System::IntPtr  geometry) ;

/// @brief Method DestroyAudioMaterial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t DestroyAudioMaterial(::System::IntPtr  material) ;

/// @brief Method DestroyAudioSceneIR, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t DestroyAudioSceneIR(::System::IntPtr  sceneIR) ;

/// @brief Method DestroyControlZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t DestroyControlZone(::System::IntPtr  control) ;

/// @brief Method InitializeAudioSceneIRParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters) ;

/// @brief Method ResetReverb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t ResetReverb() ;

/// @brief Method SetAcousticModel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model) ;

/// @brief Method SetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled) ;

/// @brief Method SetEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetEnabled(int32_t  feature, bool  enabled) ;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticNativeInterface_INativeInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticNativeInterface_INativeInterface(MetaXRAcousticNativeInterface_INativeInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29937};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
