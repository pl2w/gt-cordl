#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs)
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEnvironmentRaycastStatus;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEventListener;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukHit;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLabelFilter;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLabel;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLogLevel;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukMesh2f;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukMesh3f;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukPlane;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukPolygon2f;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukResult;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukRoomAnchor;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSceneAnchor;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSceneModel;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSharedRoomsData;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSurfaceType;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukVolume;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs__MrukUuidAlignmentTest;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AddVectorsDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreClearRoomDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreClearRoomsDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreCreateDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreDestroyDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreFreeJsonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreTickDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_ComputeMeshSegmentationDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_FreeMeshDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_FreeMeshSegmentationDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_LogPrinter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnDiscoveryFinished;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnPreRoomAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorRemoved;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorUpdated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorRemoved;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorUpdated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_PerformEnvironmentRaycastDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_SetLogPrinterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_StringToMrukLabelDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_TrackingSpacePoseGetter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_TrackingSpacePoseSetter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_TriangulatePolygonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs__TestUuidMarshallingDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AddVectorsDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreClearRoomDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreClearRoomsDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreCreateDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreDestroyDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreFreeJsonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_AnchorStoreTickDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_ComputeMeshSegmentationDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_FreeMeshDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_FreeMeshSegmentationDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_LogPrinter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnDiscoveryFinished;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnPreRoomAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorRemoved;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorUpdated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorRemoved;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorUpdated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_PerformEnvironmentRaycastDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_SetLogPrinterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_StringToMrukLabelDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_TrackingSpacePoseGetter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_TrackingSpacePoseSetter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_TriangulatePolygonDelegate;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs__TestUuidMarshallingDelegate;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AddVectorsDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreClearRoomDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreClearRoomsDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreCreateDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreCreateWithoutOpenXrDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreDestroyDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreFreeJsonDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreGetWorldLockOffsetDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreIsDiscoveryRunningDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreLoadSceneFromJsonDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreLoadSceneFromPrefabDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreOnOpenXrEventDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreRaycastAnchorAllDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreRaycastAnchorDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreRaycastRoomAllDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreRaycastRoomDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreRegisterEventListenerDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreSaveSceneToJsonDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreSetBaseSpaceDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreShutdownOpenXrDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreStartDiscoveryDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreStartQueryByLocalGroupDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/AnchorStoreTickDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/ComputeMeshSegmentationDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/CreateEnvironmentRaycasterDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/DestroyEnvironmentRaycasterDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/FreeMeshDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/FreeMeshSegmentationDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/LogPrinter");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnDiscoveryFinished");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnEnvironmentRaycasterCreated");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnPreRoomAnchorAdded");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnRoomAnchorAdded");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnRoomAnchorRemoved");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnRoomAnchorUpdated");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnSceneAnchorAdded");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnSceneAnchorRemoved");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukOnSceneAnchorUpdated");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/PerformEnvironmentRaycastDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/SetLogPrinterDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/SetTrackingSpacePoseGetterDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/SetTrackingSpacePoseSetterDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/StringToMrukLabelDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/TrackingSpacePoseGetter");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/TrackingSpacePoseSetter");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/TriangulatePolygonDelegate");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/_TestUuidMarshallingDelegate");
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs
class CORDL_TYPE MRUKNativeFuncs : public ::System::Object {
public:
// Declarations
using MrukEnvironmentRaycastHitPoint = ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint;

using MrukEnvironmentRaycastHitPointGetInfo = ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo;

using MrukEnvironmentRaycastStatus = ::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastStatus;

using MrukEventListener = ::GlobalNamespace::MRUKNativeFuncs_MrukEventListener;

using MrukHit = ::GlobalNamespace::MRUKNativeFuncs_MrukHit;

using MrukLabel = ::GlobalNamespace::MRUKNativeFuncs_MrukLabel;

using MrukLabelFilter = ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter;

using MrukLogLevel = ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel;

using MrukMesh2f = ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f;

using MrukMesh3f = ::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f;

using MrukPlane = ::GlobalNamespace::MRUKNativeFuncs_MrukPlane;

using MrukPolygon2f = ::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f;

using MrukResult = ::GlobalNamespace::MRUKNativeFuncs_MrukResult;

using MrukRoomAnchor = ::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor;

using MrukSceneAnchor = ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor;

using MrukSceneModel = ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel;

using MrukSharedRoomsData = ::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData;

using MrukSurfaceType = ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType;

using MrukVolume = ::GlobalNamespace::MRUKNativeFuncs_MrukVolume;

using _MrukUuidAlignmentTest = ::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest;

using AddVectorsDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate;

using AnchorStoreClearRoomDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate;

using AnchorStoreClearRoomsDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate;

using AnchorStoreCreateDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate;

using AnchorStoreCreateWithoutOpenXrDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate;

using AnchorStoreDestroyDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate;

using AnchorStoreFreeJsonDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate;

using AnchorStoreGetWorldLockOffsetDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate;

using AnchorStoreIsDiscoveryRunningDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate;

using AnchorStoreLoadSceneFromJsonDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate;

using AnchorStoreLoadSceneFromPrefabDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate;

using AnchorStoreOnOpenXrEventDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate;

using AnchorStoreRaycastAnchorAllDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate;

using AnchorStoreRaycastAnchorDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate;

using AnchorStoreRaycastRoomAllDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate;

using AnchorStoreRaycastRoomDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate;

using AnchorStoreRegisterEventListenerDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate;

using AnchorStoreSaveSceneToJsonDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate;

using AnchorStoreSetBaseSpaceDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate;

using AnchorStoreShutdownOpenXrDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate;

using AnchorStoreStartDiscoveryDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate;

using AnchorStoreStartQueryByLocalGroupDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate;

using AnchorStoreTickDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate;

using ComputeMeshSegmentationDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate;

using CreateEnvironmentRaycasterDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate;

using DestroyEnvironmentRaycasterDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate;

using FreeMeshDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate;

using FreeMeshSegmentationDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate;

using LogPrinter = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter;

using MrukOnDiscoveryFinished = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished;

using MrukOnEnvironmentRaycasterCreated = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated;

using MrukOnPreRoomAnchorAdded = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded;

using MrukOnRoomAnchorAdded = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded;

using MrukOnRoomAnchorRemoved = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved;

using MrukOnRoomAnchorUpdated = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated;

using MrukOnSceneAnchorAdded = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded;

using MrukOnSceneAnchorRemoved = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved;

using MrukOnSceneAnchorUpdated = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated;

using PerformEnvironmentRaycastDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate;

using SetLogPrinterDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate;

using SetTrackingSpacePoseGetterDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate;

using SetTrackingSpacePoseSetterDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate;

using StringToMrukLabelDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate;

using TrackingSpacePoseGetter = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter;

using TrackingSpacePoseSetter = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter;

using TriangulatePolygonDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate;

using _TestUuidMarshallingDelegate = ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate;

/// @brief Field AddVectors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AddVectors, put=setStaticF_AddVectors)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*  AddVectors;

/// @brief Field AnchorStoreClearRoom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreClearRoom, put=setStaticF_AnchorStoreClearRoom)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*  AnchorStoreClearRoom;

/// @brief Field AnchorStoreClearRooms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreClearRooms, put=setStaticF_AnchorStoreClearRooms)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*  AnchorStoreClearRooms;

/// @brief Field AnchorStoreCreate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreCreate, put=setStaticF_AnchorStoreCreate)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*  AnchorStoreCreate;

/// @brief Field AnchorStoreCreateWithoutOpenXr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreCreateWithoutOpenXr, put=setStaticF_AnchorStoreCreateWithoutOpenXr)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*  AnchorStoreCreateWithoutOpenXr;

/// @brief Field AnchorStoreDestroy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreDestroy, put=setStaticF_AnchorStoreDestroy)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*  AnchorStoreDestroy;

/// @brief Field AnchorStoreFreeJson, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreFreeJson, put=setStaticF_AnchorStoreFreeJson)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*  AnchorStoreFreeJson;

/// @brief Field AnchorStoreGetWorldLockOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreGetWorldLockOffset, put=setStaticF_AnchorStoreGetWorldLockOffset)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*  AnchorStoreGetWorldLockOffset;

/// @brief Field AnchorStoreIsDiscoveryRunning, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreIsDiscoveryRunning, put=setStaticF_AnchorStoreIsDiscoveryRunning)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*  AnchorStoreIsDiscoveryRunning;

/// @brief Field AnchorStoreLoadSceneFromJson, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreLoadSceneFromJson, put=setStaticF_AnchorStoreLoadSceneFromJson)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*  AnchorStoreLoadSceneFromJson;

/// @brief Field AnchorStoreLoadSceneFromPrefab, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreLoadSceneFromPrefab, put=setStaticF_AnchorStoreLoadSceneFromPrefab)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*  AnchorStoreLoadSceneFromPrefab;

/// @brief Field AnchorStoreOnOpenXrEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreOnOpenXrEvent, put=setStaticF_AnchorStoreOnOpenXrEvent)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*  AnchorStoreOnOpenXrEvent;

/// @brief Field AnchorStoreRaycastAnchor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreRaycastAnchor, put=setStaticF_AnchorStoreRaycastAnchor)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*  AnchorStoreRaycastAnchor;

/// @brief Field AnchorStoreRaycastAnchorAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreRaycastAnchorAll, put=setStaticF_AnchorStoreRaycastAnchorAll)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*  AnchorStoreRaycastAnchorAll;

/// @brief Field AnchorStoreRaycastRoom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreRaycastRoom, put=setStaticF_AnchorStoreRaycastRoom)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*  AnchorStoreRaycastRoom;

/// @brief Field AnchorStoreRaycastRoomAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreRaycastRoomAll, put=setStaticF_AnchorStoreRaycastRoomAll)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*  AnchorStoreRaycastRoomAll;

/// @brief Field AnchorStoreRegisterEventListener, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreRegisterEventListener, put=setStaticF_AnchorStoreRegisterEventListener)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*  AnchorStoreRegisterEventListener;

/// @brief Field AnchorStoreSaveSceneToJson, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreSaveSceneToJson, put=setStaticF_AnchorStoreSaveSceneToJson)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*  AnchorStoreSaveSceneToJson;

/// @brief Field AnchorStoreSetBaseSpace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreSetBaseSpace, put=setStaticF_AnchorStoreSetBaseSpace)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*  AnchorStoreSetBaseSpace;

/// @brief Field AnchorStoreShutdownOpenXr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreShutdownOpenXr, put=setStaticF_AnchorStoreShutdownOpenXr)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*  AnchorStoreShutdownOpenXr;

/// @brief Field AnchorStoreStartDiscovery, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreStartDiscovery, put=setStaticF_AnchorStoreStartDiscovery)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*  AnchorStoreStartDiscovery;

/// @brief Field AnchorStoreStartQueryByLocalGroup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreStartQueryByLocalGroup, put=setStaticF_AnchorStoreStartQueryByLocalGroup)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*  AnchorStoreStartQueryByLocalGroup;

/// @brief Field AnchorStoreTick, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnchorStoreTick, put=setStaticF_AnchorStoreTick)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*  AnchorStoreTick;

/// @brief Field ComputeMeshSegmentation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ComputeMeshSegmentation, put=setStaticF_ComputeMeshSegmentation)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*  ComputeMeshSegmentation;

/// @brief Field CreateEnvironmentRaycaster, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CreateEnvironmentRaycaster, put=setStaticF_CreateEnvironmentRaycaster)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*  CreateEnvironmentRaycaster;

/// @brief Field DestroyEnvironmentRaycaster, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DestroyEnvironmentRaycaster, put=setStaticF_DestroyEnvironmentRaycaster)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*  DestroyEnvironmentRaycaster;

/// @brief Field FreeMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FreeMesh, put=setStaticF_FreeMesh)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*  FreeMesh;

/// @brief Field FreeMeshSegmentation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FreeMeshSegmentation, put=setStaticF_FreeMeshSegmentation)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*  FreeMeshSegmentation;

/// @brief Field PerformEnvironmentRaycast, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PerformEnvironmentRaycast, put=setStaticF_PerformEnvironmentRaycast)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*  PerformEnvironmentRaycast;

/// @brief Field SetLogPrinter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SetLogPrinter, put=setStaticF_SetLogPrinter)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*  SetLogPrinter;

/// @brief Field SetTrackingSpacePoseGetter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SetTrackingSpacePoseGetter, put=setStaticF_SetTrackingSpacePoseGetter)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*  SetTrackingSpacePoseGetter;

/// @brief Field SetTrackingSpacePoseSetter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SetTrackingSpacePoseSetter, put=setStaticF_SetTrackingSpacePoseSetter)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*  SetTrackingSpacePoseSetter;

/// @brief Field StringToMrukLabel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StringToMrukLabel, put=setStaticF_StringToMrukLabel)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*  StringToMrukLabel;

/// @brief Field TriangulatePolygon, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TriangulatePolygon, put=setStaticF_TriangulatePolygon)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*  TriangulatePolygon;

/// @brief Field _TestUuidMarshalling, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__TestUuidMarshalling, put=setStaticF__TestUuidMarshalling)) ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*  _TestUuidMarshalling;

/// @brief Method LoadNativeFunctions, addr 0x9f10950, size 0xac0, virtual false, abstract: false, final false
static inline void LoadNativeFunctions() ;

/// @brief Method UnloadNativeFunctions, addr 0x9f11410, size 0x308, virtual false, abstract: false, final false
static inline void UnloadNativeFunctions() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate* getStaticF_AddVectors() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate* getStaticF_AnchorStoreClearRoom() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate* getStaticF_AnchorStoreClearRooms() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate* getStaticF_AnchorStoreCreate() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate* getStaticF_AnchorStoreCreateWithoutOpenXr() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate* getStaticF_AnchorStoreDestroy() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate* getStaticF_AnchorStoreFreeJson() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate* getStaticF_AnchorStoreGetWorldLockOffset() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate* getStaticF_AnchorStoreIsDiscoveryRunning() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate* getStaticF_AnchorStoreLoadSceneFromJson() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate* getStaticF_AnchorStoreLoadSceneFromPrefab() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate* getStaticF_AnchorStoreOnOpenXrEvent() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate* getStaticF_AnchorStoreRaycastAnchor() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate* getStaticF_AnchorStoreRaycastAnchorAll() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate* getStaticF_AnchorStoreRaycastRoom() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate* getStaticF_AnchorStoreRaycastRoomAll() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate* getStaticF_AnchorStoreRegisterEventListener() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate* getStaticF_AnchorStoreSaveSceneToJson() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate* getStaticF_AnchorStoreSetBaseSpace() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate* getStaticF_AnchorStoreShutdownOpenXr() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate* getStaticF_AnchorStoreStartDiscovery() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate* getStaticF_AnchorStoreStartQueryByLocalGroup() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate* getStaticF_AnchorStoreTick() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate* getStaticF_ComputeMeshSegmentation() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate* getStaticF_CreateEnvironmentRaycaster() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate* getStaticF_DestroyEnvironmentRaycaster() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate* getStaticF_FreeMesh() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate* getStaticF_FreeMeshSegmentation() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate* getStaticF_PerformEnvironmentRaycast() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate* getStaticF_SetLogPrinter() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate* getStaticF_SetTrackingSpacePoseGetter() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate* getStaticF_SetTrackingSpacePoseSetter() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate* getStaticF_StringToMrukLabel() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate* getStaticF_TriangulatePolygon() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate* getStaticF__TestUuidMarshalling() ;

static inline void setStaticF_AddVectors(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*  value) ;

static inline void setStaticF_AnchorStoreClearRoom(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*  value) ;

static inline void setStaticF_AnchorStoreClearRooms(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*  value) ;

static inline void setStaticF_AnchorStoreCreate(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*  value) ;

static inline void setStaticF_AnchorStoreCreateWithoutOpenXr(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*  value) ;

static inline void setStaticF_AnchorStoreDestroy(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*  value) ;

static inline void setStaticF_AnchorStoreFreeJson(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*  value) ;

static inline void setStaticF_AnchorStoreGetWorldLockOffset(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*  value) ;

static inline void setStaticF_AnchorStoreIsDiscoveryRunning(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*  value) ;

static inline void setStaticF_AnchorStoreLoadSceneFromJson(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*  value) ;

static inline void setStaticF_AnchorStoreLoadSceneFromPrefab(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*  value) ;

static inline void setStaticF_AnchorStoreOnOpenXrEvent(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*  value) ;

static inline void setStaticF_AnchorStoreRaycastAnchor(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*  value) ;

static inline void setStaticF_AnchorStoreRaycastAnchorAll(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*  value) ;

static inline void setStaticF_AnchorStoreRaycastRoom(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*  value) ;

static inline void setStaticF_AnchorStoreRaycastRoomAll(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*  value) ;

static inline void setStaticF_AnchorStoreRegisterEventListener(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*  value) ;

static inline void setStaticF_AnchorStoreSaveSceneToJson(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*  value) ;

static inline void setStaticF_AnchorStoreSetBaseSpace(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*  value) ;

static inline void setStaticF_AnchorStoreShutdownOpenXr(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*  value) ;

static inline void setStaticF_AnchorStoreStartDiscovery(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*  value) ;

static inline void setStaticF_AnchorStoreStartQueryByLocalGroup(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*  value) ;

static inline void setStaticF_AnchorStoreTick(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*  value) ;

static inline void setStaticF_ComputeMeshSegmentation(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*  value) ;

static inline void setStaticF_CreateEnvironmentRaycaster(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*  value) ;

static inline void setStaticF_DestroyEnvironmentRaycaster(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*  value) ;

static inline void setStaticF_FreeMesh(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*  value) ;

static inline void setStaticF_FreeMeshSegmentation(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*  value) ;

static inline void setStaticF_PerformEnvironmentRaycast(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*  value) ;

static inline void setStaticF_SetLogPrinter(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*  value) ;

static inline void setStaticF_SetTrackingSpacePoseGetter(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*  value) ;

static inline void setStaticF_SetTrackingSpacePoseSetter(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*  value) ;

static inline void setStaticF_StringToMrukLabel(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*  value) ;

static inline void setStaticF_TriangulatePolygon(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*  value) ;

static inline void setStaticF__TestUuidMarshalling(::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs(MRUKNativeFuncs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs(MRUKNativeFuncs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25848};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/SetTrackingSpacePoseSetterDelegate
class CORDL_TYPE MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f15ac8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*  setter, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f15ae8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f15ab4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*  setter) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f15a04, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate(MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate(MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/SetTrackingSpacePoseGetterDelegate
class CORDL_TYPE MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f159d8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*  getter, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f159f8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f159c4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*  getter) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f15914, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate(MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate(MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/PerformEnvironmentRaycastDelegate
class CORDL_TYPE MRUKNativeFuncs_PerformEnvironmentRaycastDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1582c, size 0xc4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>  info, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>  hitPoint, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f158f0, size 0x24, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>  info, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>  hitPoint, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f15818, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>  info, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>  hitPoint) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f15764, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_PerformEnvironmentRaycastDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_PerformEnvironmentRaycastDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_PerformEnvironmentRaycastDelegate(MRUKNativeFuncs_PerformEnvironmentRaycastDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_PerformEnvironmentRaycastDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_PerformEnvironmentRaycastDelegate(MRUKNativeFuncs_PerformEnvironmentRaycastDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25845};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/DestroyEnvironmentRaycasterDelegate
class CORDL_TYPE MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1573c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f15758, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f15728, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f1568c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate(MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate(MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25844};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/CreateEnvironmentRaycasterDelegate
class CORDL_TYPE MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f15594, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f155b0, size 0xdc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f15580, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f154e4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate(MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate(MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/StringToMrukLabelDelegate
class CORDL_TYPE MRUKNativeFuncs_StringToMrukLabelDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1549c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  label, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f154bc, size 0x28, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukLabel EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f15488, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukLabel Invoke(::StringW  label) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f153d8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_StringToMrukLabelDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_StringToMrukLabelDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_StringToMrukLabelDelegate(MRUKNativeFuncs_StringToMrukLabelDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_StringToMrukLabelDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_StringToMrukLabelDelegate(MRUKNativeFuncs_StringToMrukLabelDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25842};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/_TestUuidMarshallingDelegate
class CORDL_TYPE MRUKNativeFuncs__TestUuidMarshallingDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f15320, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest  packedUuid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f153ac, size 0x2c, virtual true, abstract: false, final false
inline ::System::Guid EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f152e4, size 0x3c, virtual true, abstract: false, final false
inline ::System::Guid Invoke(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest  packedUuid) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f15244, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs__TestUuidMarshallingDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs__TestUuidMarshallingDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs__TestUuidMarshallingDelegate(MRUKNativeFuncs__TestUuidMarshallingDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs__TestUuidMarshallingDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs__TestUuidMarshallingDelegate(MRUKNativeFuncs__TestUuidMarshallingDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25841};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/FreeMeshSegmentationDelegate
class CORDL_TYPE MRUKNativeFuncs_FreeMeshSegmentationDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f15174, size 0xb8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*  meshSegments, uint32_t  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f1522c, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f15160, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*  meshSegments, uint32_t  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f150ac, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_FreeMeshSegmentationDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_FreeMeshSegmentationDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_FreeMeshSegmentationDelegate(MRUKNativeFuncs_FreeMeshSegmentationDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_FreeMeshSegmentationDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_FreeMeshSegmentationDelegate(MRUKNativeFuncs_FreeMeshSegmentationDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/ComputeMeshSegmentationDelegate
class CORDL_TYPE MRUKNativeFuncs_ComputeMeshSegmentationDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f14f0c, size 0x16c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::UnityEngine::Vector3>  vertices, uint32_t  numVertices, ::ArrayW<uint32_t>  indices, uint32_t  numIndices, ::ArrayW<::UnityEngine::Vector3>  segmentationPoints, uint32_t  numSegmentationPoints, ::UnityEngine::Vector3  reservedMin, ::UnityEngine::Vector3  reservedMax, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>  meshSegments, ::by_ref<uint32_t>  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f15078, size 0x34, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>  meshSegments, ::by_ref<uint32_t>  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f14eec, size 0x20, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Invoke(::ArrayW<::UnityEngine::Vector3>  vertices, uint32_t  numVertices, ::ArrayW<uint32_t>  indices, uint32_t  numIndices, ::ArrayW<::UnityEngine::Vector3>  segmentationPoints, uint32_t  numSegmentationPoints, ::UnityEngine::Vector3  reservedMin, ::UnityEngine::Vector3  reservedMax, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>  meshSegments, ::by_ref<uint32_t>  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f14e38, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_ComputeMeshSegmentationDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_ComputeMeshSegmentationDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_ComputeMeshSegmentationDelegate(MRUKNativeFuncs_ComputeMeshSegmentationDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_ComputeMeshSegmentationDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_ComputeMeshSegmentationDelegate(MRUKNativeFuncs_ComputeMeshSegmentationDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/FreeMeshDelegate
class CORDL_TYPE MRUKNativeFuncs_FreeMeshDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f14d94, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>  mesh, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f14e20, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>  mesh, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f14d80, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>  mesh) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f14cd0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_FreeMeshDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_FreeMeshDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_FreeMeshDelegate(MRUKNativeFuncs_FreeMeshDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_FreeMeshDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_FreeMeshDelegate(MRUKNativeFuncs_FreeMeshDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/TriangulatePolygonDelegate
class CORDL_TYPE MRUKNativeFuncs_TriangulatePolygonDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f14c40, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f>  polygons, uint32_t  numPolygons, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f14ca0, size 0x30, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f14c2c, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f Invoke(::ArrayW<::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f>  polygons, uint32_t  numPolygons) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f14b78, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_TriangulatePolygonDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_TriangulatePolygonDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_TriangulatePolygonDelegate(MRUKNativeFuncs_TriangulatePolygonDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_TriangulatePolygonDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_TriangulatePolygonDelegate(MRUKNativeFuncs_TriangulatePolygonDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AddVectorsDelegate
class CORDL_TYPE MRUKNativeFuncs_AddVectorsDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f14aa4, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f14b4c, size 0x2c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f14a90, size 0x14, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f149f0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AddVectorsDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AddVectorsDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AddVectorsDelegate(MRUKNativeFuncs_AddVectorsDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AddVectorsDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AddVectorsDelegate(MRUKNativeFuncs_AddVectorsDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25836};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreGetWorldLockOffsetDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1490c, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  roomUuid, ::by_ref<::UnityEngine::Pose>  offset, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f149c8, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::UnityEngine::Pose>  offset, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f148f8, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::Guid  roomUuid, ::by_ref<::UnityEngine::Pose>  offset) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f14858, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate(MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate(MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreIsDiscoveryRunningDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f14814, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f14830, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f14800, size 0x14, virtual true, abstract: false, final false
inline bool Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f14764, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate(MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate(MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreRaycastAnchorAllDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f145cc, size 0x164, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f14730, size 0x34, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f145b8, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f14518, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate(MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate(MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreRaycastAnchorDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f143a0, size 0x150, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f144f0, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f1438c, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f142ec, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate(MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate(MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreRaycastRoomAllDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f14134, size 0x184, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f142b8, size 0x34, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f1411c, size 0x18, virtual true, abstract: false, final false
inline bool Invoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f1407c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate(MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate(MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreRaycastRoomDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f13eec, size 0x168, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f14054, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f13ed4, size 0x18, virtual true, abstract: false, final false
inline bool Invoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f13e34, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate(MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate(MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25830};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreRegisterEventListenerDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f13d9c, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener  listener, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f13e28, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f13d58, size 0x44, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener  listener) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f13cb8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate(MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate(MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreTickDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreTickDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f13c50, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  nextPredictedDisplayTime, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f13cac, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f13c3c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(uint64_t  nextPredictedDisplayTime) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f13b9c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreTickDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreTickDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreTickDelegate(MRUKNativeFuncs_AnchorStoreTickDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreTickDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreTickDelegate(MRUKNativeFuncs_AnchorStoreTickDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreOnOpenXrEventDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f13b34, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  baseEventHeader, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f13b90, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f13b20, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  baseEventHeader) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f13a80, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate(MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate(MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreClearRoomDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreClearRoomDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f139f0, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  roomUuid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f13a74, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f139dc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Guid  roomUuid) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f1393c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreClearRoomDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreClearRoomDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreClearRoomDelegate(MRUKNativeFuncs_AnchorStoreClearRoomDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreClearRoomDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreClearRoomDelegate(MRUKNativeFuncs_AnchorStoreClearRoomDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreClearRoomsDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreClearRoomsDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f13914, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f13930, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f13900, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f13864, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreClearRoomsDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreClearRoomsDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreClearRoomsDelegate(MRUKNativeFuncs_AnchorStoreClearRoomsDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreClearRoomsDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreClearRoomsDelegate(MRUKNativeFuncs_AnchorStoreClearRoomsDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25825};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreLoadSceneFromPrefabDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f137b4, size 0x88, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor*  roomAnchors, uint32_t  numRoomAnchors, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor*  sceneAnchors, uint32_t  numSceneAnchors, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f1383c, size 0x28, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f137a0, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor*  roomAnchors, uint32_t  numRoomAnchors, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor*  sceneAnchors, uint32_t  numSceneAnchors) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f136ec, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate(MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate(MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreFreeJsonDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreFreeJsonDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f136c0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(char16_t*  jsonString, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f136e0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f136ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(char16_t*  jsonString) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f135fc, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreFreeJsonDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreFreeJsonDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreFreeJsonDelegate(MRUKNativeFuncs_AnchorStoreFreeJsonDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreFreeJsonDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreFreeJsonDelegate(MRUKNativeFuncs_AnchorStoreFreeJsonDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreSaveSceneToJsonDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1356c, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  includeGlobalMesh, ::ArrayW<::System::Guid>  roomUuids, uint32_t  numRoomUuids, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f135f0, size 0xc, virtual true, abstract: false, final false
inline char16_t* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f13558, size 0x14, virtual true, abstract: false, final false
inline char16_t* Invoke(bool  includeGlobalMesh, ::ArrayW<::System::Guid>  roomUuids, uint32_t  numRoomUuids) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f134b8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate(MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate(MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreLoadSceneFromJsonDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f133d8, size 0xb8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  jsonString, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f13490, size 0x28, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f133c4, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Invoke(::StringW  jsonString, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f13310, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate(MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate(MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreStartQueryByLocalGroupDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1320c, size 0xdc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData  sharedRoomsData, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f132e8, size 0x28, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f131b0, size 0x5c, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData  sharedRoomsData, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f13110, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate(MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate(MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreStartDiscoveryDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f13040, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f130e8, size 0x28, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f1302c, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Invoke(bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12f8c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate(MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate(MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreSetBaseSpaceDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f12f24, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  baseSpace, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12f80, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12f10, size 0x14, virtual true, abstract: false, final false
inline void Invoke(uint64_t  baseSpace) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12e70, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate(MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate(MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreDestroyDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreDestroyDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f12e48, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12e64, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12e34, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12d98, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreDestroyDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreDestroyDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreDestroyDelegate(MRUKNativeFuncs_AnchorStoreDestroyDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreDestroyDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreDestroyDelegate(MRUKNativeFuncs_AnchorStoreDestroyDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreShutdownOpenXrDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f12d70, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12d8c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12d5c, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12cc0, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate(MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate(MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreCreateWithoutOpenXrDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f12c7c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12c98, size 0x28, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12c68, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12bcc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate(MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate(MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/AnchorStoreCreateDelegate
class CORDL_TYPE MRUKNativeFuncs_AnchorStoreCreateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f12ad8, size 0xcc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  xrInstance, uint64_t  xrSession, ::System::IntPtr  xrInstanceProcAddrFunc, uint64_t  baseSpace, ::ArrayW<::StringW>  availableOpenXrExtensions, uint32_t  availableOpenXrExtensionsCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12ba4, size 0x28, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12ac4, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Invoke(uint64_t  xrInstance, uint64_t  xrSession, ::System::IntPtr  xrInstanceProcAddrFunc, uint64_t  baseSpace, ::ArrayW<::StringW>  availableOpenXrExtensions, uint32_t  availableOpenXrExtensionsCount) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12a24, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_AnchorStoreCreateDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreCreateDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_AnchorStoreCreateDelegate(MRUKNativeFuncs_AnchorStoreCreateDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_AnchorStoreCreateDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_AnchorStoreCreateDelegate(MRUKNativeFuncs_AnchorStoreCreateDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/SetLogPrinterDelegate
class CORDL_TYPE MRUKNativeFuncs_SetLogPrinterDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f129f8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*  printer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12a18, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f129e4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*  printer) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12934, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_SetLogPrinterDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_SetLogPrinterDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_SetLogPrinterDelegate(MRUKNativeFuncs_SetLogPrinterDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_SetLogPrinterDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_SetLogPrinterDelegate(MRUKNativeFuncs_SetLogPrinterDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/TrackingSpacePoseSetter
class CORDL_TYPE MRUKNativeFuncs_TrackingSpacePoseSetter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1289c, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Pose  pose, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12928, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12860, size 0x3c, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Pose  pose) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f127c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_TrackingSpacePoseSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_TrackingSpacePoseSetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_TrackingSpacePoseSetter(MRUKNativeFuncs_TrackingSpacePoseSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_TrackingSpacePoseSetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_TrackingSpacePoseSetter(MRUKNativeFuncs_TrackingSpacePoseSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25798};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/TrackingSpacePoseGetter
class CORDL_TYPE MRUKNativeFuncs_TrackingSpacePoseGetter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1276c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12788, size 0x38, virtual true, abstract: false, final false
inline ::UnityEngine::Pose EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12758, size 0x14, virtual true, abstract: false, final false
inline ::UnityEngine::Pose Invoke() ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f126bc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_TrackingSpacePoseGetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_TrackingSpacePoseGetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_TrackingSpacePoseGetter(MRUKNativeFuncs_TrackingSpacePoseGetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_TrackingSpacePoseGetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_TrackingSpacePoseGetter(MRUKNativeFuncs_TrackingSpacePoseGetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25797};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnEnvironmentRaycasterCreated
class CORDL_TYPE MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f12608, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f126b0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f125f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f12554, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated(MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated(MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnDiscoveryFinished
class CORDL_TYPE MRUKNativeFuncs_MrukOnDiscoveryFinished : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f124a0, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12548, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f1248c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f123ec, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnDiscoveryFinished() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnDiscoveryFinished", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnDiscoveryFinished(MRUKNativeFuncs_MrukOnDiscoveryFinished && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnDiscoveryFinished", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnDiscoveryFinished(MRUKNativeFuncs_MrukOnDiscoveryFinished const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnSceneAnchorRemoved
class CORDL_TYPE MRUKNativeFuncs_MrukOnSceneAnchorRemoved : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f12324, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f123d4, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12310, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f1225c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnSceneAnchorRemoved() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnSceneAnchorRemoved", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnSceneAnchorRemoved(MRUKNativeFuncs_MrukOnSceneAnchorRemoved && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnSceneAnchorRemoved", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnSceneAnchorRemoved(MRUKNativeFuncs_MrukOnSceneAnchorRemoved const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25794};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnSceneAnchorUpdated
class CORDL_TYPE MRUKNativeFuncs_MrukOnSceneAnchorUpdated : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f1217c, size 0xc8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, bool  significantChange, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f12244, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f12168, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, bool  significantChange, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f120b4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnSceneAnchorUpdated() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnSceneAnchorUpdated", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnSceneAnchorUpdated(MRUKNativeFuncs_MrukOnSceneAnchorUpdated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnSceneAnchorUpdated", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnSceneAnchorUpdated(MRUKNativeFuncs_MrukOnSceneAnchorUpdated const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25793};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnSceneAnchorAdded
class CORDL_TYPE MRUKNativeFuncs_MrukOnSceneAnchorAdded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f11fec, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f1209c, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f11fd8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f11f24, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnSceneAnchorAdded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnSceneAnchorAdded", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnSceneAnchorAdded(MRUKNativeFuncs_MrukOnSceneAnchorAdded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnSceneAnchorAdded", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnSceneAnchorAdded(MRUKNativeFuncs_MrukOnSceneAnchorAdded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25792};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnRoomAnchorRemoved
class CORDL_TYPE MRUKNativeFuncs_MrukOnRoomAnchorRemoved : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f11e5c, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f11f0c, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f11e48, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f11d94, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnRoomAnchorRemoved() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnRoomAnchorRemoved", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnRoomAnchorRemoved(MRUKNativeFuncs_MrukOnRoomAnchorRemoved && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnRoomAnchorRemoved", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnRoomAnchorRemoved(MRUKNativeFuncs_MrukOnRoomAnchorRemoved const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnRoomAnchorUpdated
class CORDL_TYPE MRUKNativeFuncs_MrukOnRoomAnchorUpdated : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f11c70, size 0x100, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, bool  significantChange, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f11d70, size 0x24, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f11c5c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, bool  significantChange, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f11ba8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnRoomAnchorUpdated() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnRoomAnchorUpdated", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnRoomAnchorUpdated(MRUKNativeFuncs_MrukOnRoomAnchorUpdated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnRoomAnchorUpdated", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnRoomAnchorUpdated(MRUKNativeFuncs_MrukOnRoomAnchorUpdated const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnRoomAnchorAdded
class CORDL_TYPE MRUKNativeFuncs_MrukOnRoomAnchorAdded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f11ae0, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f11b90, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f11acc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f11a18, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnRoomAnchorAdded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnRoomAnchorAdded", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnRoomAnchorAdded(MRUKNativeFuncs_MrukOnRoomAnchorAdded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnRoomAnchorAdded", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnRoomAnchorAdded(MRUKNativeFuncs_MrukOnRoomAnchorAdded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukOnPreRoomAnchorAdded
class CORDL_TYPE MRUKNativeFuncs_MrukOnPreRoomAnchorAdded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f11950, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f11a00, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f1193c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f11888, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukOnPreRoomAnchorAdded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnPreRoomAnchorAdded", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_MrukOnPreRoomAnchorAdded(MRUKNativeFuncs_MrukOnPreRoomAnchorAdded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_MrukOnPreRoomAnchorAdded", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_MrukOnPreRoomAnchorAdded(MRUKNativeFuncs_MrukOnPreRoomAnchorAdded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25788};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.MulticastDelegate
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/LogPrinter
class CORDL_TYPE MRUKNativeFuncs_LogPrinter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f117cc, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  logLevel, char16_t*  message, uint32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f1187c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f117b8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  logLevel, char16_t*  message, uint32_t  length) ;

static inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f11718, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_LogPrinter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_LogPrinter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNativeFuncs_LogPrinter(MRUKNativeFuncs_LogPrinter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNativeFuncs_LogPrinter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNativeFuncs_LogPrinter(MRUKNativeFuncs_LogPrinter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25787};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
