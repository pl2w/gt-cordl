#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRuntimeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_ColorSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyTrackingFidelity2_def.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OVRRuntimeSettings)
namespace GlobalNamespace {
struct OVRHandSkeletonVersion;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingFidelity2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRRuntimeSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRRuntimeSettings*, "", "OVRRuntimeSettings");
// Dependencies OVRHandSkeletonVersion, OVRManager::ColorSpace, OVRPlugin::BodyJointSet, OVRPlugin::BodyTrackingFidelity2, OVRRuntimeAssetsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRRuntimeSettings
class CORDL_TYPE OVRRuntimeSettings : public ::GlobalNamespace::OVRRuntimeAssetsBase {
public:
// Declarations
 __declspec(property(get=get_BodyTrackingFidelity, put=set_BodyTrackingFidelity)) ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  BodyTrackingFidelity;

 __declspec(property(get=get_BodyTrackingJointSet, put=set_BodyTrackingJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet  BodyTrackingJointSet;

 __declspec(property(get=get_EnableFaceTrackingVisemesOutput, put=set_EnableFaceTrackingVisemesOutput)) bool  EnableFaceTrackingVisemesOutput;

 __declspec(property(get=get_HandSkeletonVersion, put=set_HandSkeletonVersion)) ::GlobalNamespace::OVRHandSkeletonVersion  HandSkeletonVersion;

/// @brief Field NewProjectDefaultSkeletonVersion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NewProjectDefaultSkeletonVersion, put=setStaticF_NewProjectDefaultSkeletonVersion)) ::GlobalNamespace::OVRHandSkeletonVersion  NewProjectDefaultSkeletonVersion;

/// @brief Field QuestVisibilityMeshOverriden, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_QuestVisibilityMeshOverriden, put=__cordl_internal_set_QuestVisibilityMeshOverriden)) bool  QuestVisibilityMeshOverriden;

 __declspec(property(get=get_RequestsAudioFaceTracking, put=set_RequestsAudioFaceTracking)) bool  RequestsAudioFaceTracking;

 __declspec(property(get=get_RequestsVisualFaceTracking, put=set_RequestsVisualFaceTracking)) bool  RequestsVisualFaceTracking;

 __declspec(property(get=get_TelemetryProjectGuid)) ::StringW  TelemetryProjectGuid;

 __declspec(property(get=get_VisibilityMesh, put=set_VisibilityMesh)) bool  VisibilityMesh;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::OVRRuntimeSettings>  _instance;

/// @brief Field allowVisibilityMesh, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowVisibilityMesh, put=__cordl_internal_set_allowVisibilityMesh)) bool  allowVisibilityMesh;

/// @brief Field bodyTrackingFidelity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyTrackingFidelity, put=__cordl_internal_set_bodyTrackingFidelity)) ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  bodyTrackingFidelity;

/// @brief Field bodyTrackingJointSet, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyTrackingJointSet, put=__cordl_internal_set_bodyTrackingJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet  bodyTrackingJointSet;

/// @brief Field colorSpace, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorSpace, put=__cordl_internal_set_colorSpace)) ::GlobalNamespace::OVRManager_ColorSpace  colorSpace;

/// @brief Field enableFaceTrackingVisemesOutput, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableFaceTrackingVisemesOutput, put=__cordl_internal_set_enableFaceTrackingVisemesOutput)) bool  enableFaceTrackingVisemesOutput;

/// @brief Field handSkeletonVersion, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_handSkeletonVersion, put=__cordl_internal_set_handSkeletonVersion)) ::GlobalNamespace::OVRHandSkeletonVersion  handSkeletonVersion;

/// @brief Field requestsAudioFaceTracking, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_requestsAudioFaceTracking, put=__cordl_internal_set_requestsAudioFaceTracking)) bool  requestsAudioFaceTracking;

/// @brief Field requestsVisualFaceTracking, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_requestsVisualFaceTracking, put=__cordl_internal_set_requestsVisualFaceTracking)) bool  requestsVisualFaceTracking;

/// @brief Field telemetryProjectGuid, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_telemetryProjectGuid, put=__cordl_internal_set_telemetryProjectGuid)) ::StringW  telemetryProjectGuid;

/// @brief Method GetRuntimeSettings, addr 0xa62bf24, size 0x188, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GetRuntimeSettings() ;

/// @brief Method HandleSettingsCreated, addr 0xa62c1c8, size 0x4, virtual false, abstract: false, final false
static inline void HandleSettingsCreated(::GlobalNamespace::OVRRuntimeSettings*  settings) ;

static inline ::GlobalNamespace::OVRRuntimeSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_QuestVisibilityMeshOverriden() const;

constexpr bool& __cordl_internal_get_QuestVisibilityMeshOverriden() ;

constexpr bool const& __cordl_internal_get_allowVisibilityMesh() const;

constexpr bool& __cordl_internal_get_allowVisibilityMesh() ;

constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 const& __cordl_internal_get_bodyTrackingFidelity() const;

constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2& __cordl_internal_get_bodyTrackingFidelity() ;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& __cordl_internal_get_bodyTrackingJointSet() const;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& __cordl_internal_get_bodyTrackingJointSet() ;

constexpr ::GlobalNamespace::OVRManager_ColorSpace const& __cordl_internal_get_colorSpace() const;

constexpr ::GlobalNamespace::OVRManager_ColorSpace& __cordl_internal_get_colorSpace() ;

constexpr bool const& __cordl_internal_get_enableFaceTrackingVisemesOutput() const;

constexpr bool& __cordl_internal_get_enableFaceTrackingVisemesOutput() ;

constexpr ::GlobalNamespace::OVRHandSkeletonVersion const& __cordl_internal_get_handSkeletonVersion() const;

constexpr ::GlobalNamespace::OVRHandSkeletonVersion& __cordl_internal_get_handSkeletonVersion() ;

constexpr bool const& __cordl_internal_get_requestsAudioFaceTracking() const;

constexpr bool& __cordl_internal_get_requestsAudioFaceTracking() ;

constexpr bool const& __cordl_internal_get_requestsVisualFaceTracking() const;

constexpr bool& __cordl_internal_get_requestsVisualFaceTracking() ;

constexpr ::StringW const& __cordl_internal_get_telemetryProjectGuid() const;

constexpr ::StringW& __cordl_internal_get_telemetryProjectGuid() ;

constexpr void __cordl_internal_set_QuestVisibilityMeshOverriden(bool  value) ;

constexpr void __cordl_internal_set_allowVisibilityMesh(bool  value) ;

constexpr void __cordl_internal_set_bodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  value) ;

constexpr void __cordl_internal_set_bodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

constexpr void __cordl_internal_set_colorSpace(::GlobalNamespace::OVRManager_ColorSpace  value) ;

constexpr void __cordl_internal_set_enableFaceTrackingVisemesOutput(bool  value) ;

constexpr void __cordl_internal_set_handSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion  value) ;

constexpr void __cordl_internal_set_requestsAudioFaceTracking(bool  value) ;

constexpr void __cordl_internal_set_requestsVisualFaceTracking(bool  value) ;

constexpr void __cordl_internal_set_telemetryProjectGuid(::StringW  value) ;

/// @brief Method .ctor, addr 0xa62c1cc, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVRHandSkeletonVersion getStaticF_NewProjectDefaultSkeletonVersion() ;

static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> getStaticF__instance() ;

/// @brief Method get_BodyTrackingFidelity, addr 0xa62c198, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 get_BodyTrackingFidelity() ;

/// @brief Method get_BodyTrackingJointSet, addr 0xa62c1a8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyJointSet get_BodyTrackingJointSet() ;

/// @brief Method get_EnableFaceTrackingVisemesOutput, addr 0xa62c0cc, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableFaceTrackingVisemesOutput() ;

/// @brief Method get_HandSkeletonVersion, addr 0xa62be34, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRHandSkeletonVersion get_HandSkeletonVersion() ;

/// @brief Method get_Instance, addr 0xa62be44, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> get_Instance() ;

/// @brief Method get_RequestsAudioFaceTracking, addr 0xa62c0bc, size 0x8, virtual false, abstract: false, final false
inline bool get_RequestsAudioFaceTracking() ;

/// @brief Method get_RequestsVisualFaceTracking, addr 0xa62c0ac, size 0x8, virtual false, abstract: false, final false
inline bool get_RequestsVisualFaceTracking() ;

/// @brief Method get_TelemetryProjectGuid, addr 0xa62c140, size 0x58, virtual false, abstract: false, final false
inline ::StringW get_TelemetryProjectGuid() ;

/// @brief Method get_VisibilityMesh, addr 0xa62c1b8, size 0x8, virtual false, abstract: false, final false
inline bool get_VisibilityMesh() ;

static inline void setStaticF_NewProjectDefaultSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVRRuntimeSettings>  value) ;

/// @brief Method set_BodyTrackingFidelity, addr 0xa62c1a0, size 0x8, virtual false, abstract: false, final false
inline void set_BodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  value) ;

/// @brief Method set_BodyTrackingJointSet, addr 0xa62c1b0, size 0x8, virtual false, abstract: false, final false
inline void set_BodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

/// @brief Method set_EnableFaceTrackingVisemesOutput, addr 0xa62c0d4, size 0x6c, virtual false, abstract: false, final false
inline void set_EnableFaceTrackingVisemesOutput(bool  value) ;

/// @brief Method set_HandSkeletonVersion, addr 0xa62be3c, size 0x8, virtual false, abstract: false, final false
inline void set_HandSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion  value) ;

/// @brief Method set_RequestsAudioFaceTracking, addr 0xa62c0c4, size 0x8, virtual false, abstract: false, final false
inline void set_RequestsAudioFaceTracking(bool  value) ;

/// @brief Method set_RequestsVisualFaceTracking, addr 0xa62c0b4, size 0x8, virtual false, abstract: false, final false
inline void set_RequestsVisualFaceTracking(bool  value) ;

/// @brief Method set_VisibilityMesh, addr 0xa62c1c0, size 0x8, virtual false, abstract: false, final false
inline void set_VisibilityMesh(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRRuntimeSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRRuntimeSettings(OVRRuntimeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRRuntimeSettings(OVRRuntimeSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12404};

/// @brief Field _assetName offset 0xffffffff size 0x8
static constexpr ::ConstString  _assetName{u"OculusRuntimeSettings"};

/// [SerializeField]
/// @brief Field handSkeletonVersion, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRHandSkeletonVersion  ___handSkeletonVersion;

/// @brief Field colorSpace, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRManager_ColorSpace  ___colorSpace;

/// [SerializeField]
/// @brief Field requestsVisualFaceTracking, offset: 0x20, size: 0x1, def value: None
 bool  ___requestsVisualFaceTracking;

/// [SerializeField]
/// @brief Field requestsAudioFaceTracking, offset: 0x21, size: 0x1, def value: None
 bool  ___requestsAudioFaceTracking;

/// [SerializeField]
/// @brief Field enableFaceTrackingVisemesOutput, offset: 0x22, size: 0x1, def value: None
 bool  ___enableFaceTrackingVisemesOutput;

/// [SerializeField]
/// @brief Field telemetryProjectGuid, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___telemetryProjectGuid;

/// [SerializeField]
/// @brief Field bodyTrackingFidelity, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  ___bodyTrackingFidelity;

/// [SerializeField]
/// @brief Field bodyTrackingJointSet, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointSet  ___bodyTrackingJointSet;

/// [SerializeField]
/// @brief Field allowVisibilityMesh, offset: 0x38, size: 0x1, def value: None
 bool  ___allowVisibilityMesh;

/// @brief Field QuestVisibilityMeshOverriden, offset: 0x39, size: 0x1, def value: None
 bool  ___QuestVisibilityMeshOverriden;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___handSkeletonVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___colorSpace) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___requestsVisualFaceTracking) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___requestsAudioFaceTracking) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___enableFaceTrackingVisemesOutput) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___telemetryProjectGuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___bodyTrackingFidelity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___bodyTrackingJointSet) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___allowVisibilityMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___QuestVisibilityMeshOverriden) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRRuntimeSettings) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
