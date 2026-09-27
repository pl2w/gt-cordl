#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEnvironmentRaycastStatus_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEventListener_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukHit_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLabelFilter_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLabel_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLogLevel_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukMesh2f_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukMesh3f_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukPlane_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukPolygon2f_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukResult_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukRoomAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSceneAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSceneModel_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSharedRoomsData_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSurfaceType_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukVolume_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs__MrukUuidAlignmentTest_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs.LoadNativeFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs::LoadNativeFunctions)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x9f10950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(),
                        {"LoadNativeFunctions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs.UnloadNativeFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs::UnloadNativeFunctions)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x9f11410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(),
                        {"UnloadNativeFunctions", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_SetLogPrinter(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*, "SetLogPrinter", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_SetLogPrinter()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*, "SetLogPrinter", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreCreate(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*, "AnchorStoreCreate", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreCreate()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*, "AnchorStoreCreate", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreCreateWithoutOpenXr(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*, "AnchorStoreCreateWithoutOpenXr", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreCreateWithoutOpenXr()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*, "AnchorStoreCreateWithoutOpenXr", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreShutdownOpenXr(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*, "AnchorStoreShutdownOpenXr", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreShutdownOpenXr()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*, "AnchorStoreShutdownOpenXr", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreDestroy(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*, "AnchorStoreDestroy", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreDestroy()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*, "AnchorStoreDestroy", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreSetBaseSpace(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*, "AnchorStoreSetBaseSpace", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreSetBaseSpace()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*, "AnchorStoreSetBaseSpace", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreStartDiscovery(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*, "AnchorStoreStartDiscovery", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreStartDiscovery()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*, "AnchorStoreStartDiscovery", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreStartQueryByLocalGroup(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*, "AnchorStoreStartQueryByLocalGroup", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreStartQueryByLocalGroup()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*, "AnchorStoreStartQueryByLocalGroup", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreLoadSceneFromJson(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*, "AnchorStoreLoadSceneFromJson", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreLoadSceneFromJson()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*, "AnchorStoreLoadSceneFromJson", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreSaveSceneToJson(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*, "AnchorStoreSaveSceneToJson", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreSaveSceneToJson()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*, "AnchorStoreSaveSceneToJson", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreFreeJson(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*, "AnchorStoreFreeJson", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreFreeJson()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*, "AnchorStoreFreeJson", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreLoadSceneFromPrefab(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*, "AnchorStoreLoadSceneFromPrefab", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreLoadSceneFromPrefab()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*, "AnchorStoreLoadSceneFromPrefab", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreClearRooms(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*, "AnchorStoreClearRooms", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreClearRooms()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*, "AnchorStoreClearRooms", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreClearRoom(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*, "AnchorStoreClearRoom", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreClearRoom()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*, "AnchorStoreClearRoom", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreOnOpenXrEvent(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*, "AnchorStoreOnOpenXrEvent", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreOnOpenXrEvent()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*, "AnchorStoreOnOpenXrEvent", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreTick(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*, "AnchorStoreTick", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreTick()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*, "AnchorStoreTick", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreRegisterEventListener(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*, "AnchorStoreRegisterEventListener", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreRegisterEventListener()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*, "AnchorStoreRegisterEventListener", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreRaycastRoom(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*, "AnchorStoreRaycastRoom", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreRaycastRoom()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*, "AnchorStoreRaycastRoom", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreRaycastRoomAll(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*, "AnchorStoreRaycastRoomAll", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreRaycastRoomAll()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*, "AnchorStoreRaycastRoomAll", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreRaycastAnchor(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*, "AnchorStoreRaycastAnchor", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreRaycastAnchor()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*, "AnchorStoreRaycastAnchor", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreRaycastAnchorAll(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*, "AnchorStoreRaycastAnchorAll", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreRaycastAnchorAll()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*, "AnchorStoreRaycastAnchorAll", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreIsDiscoveryRunning(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*, "AnchorStoreIsDiscoveryRunning", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreIsDiscoveryRunning()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*, "AnchorStoreIsDiscoveryRunning", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AnchorStoreGetWorldLockOffset(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*, "AnchorStoreGetWorldLockOffset", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AnchorStoreGetWorldLockOffset()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*, "AnchorStoreGetWorldLockOffset", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_AddVectors(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*, "AddVectors", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_AddVectors()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*, "AddVectors", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_TriangulatePolygon(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*, "TriangulatePolygon", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_TriangulatePolygon()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*, "TriangulatePolygon", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_FreeMesh(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*, "FreeMesh", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_FreeMesh()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*, "FreeMesh", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_ComputeMeshSegmentation(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*, "ComputeMeshSegmentation", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_ComputeMeshSegmentation()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*, "ComputeMeshSegmentation", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_FreeMeshSegmentation(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*, "FreeMeshSegmentation", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_FreeMeshSegmentation()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*, "FreeMeshSegmentation", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF__TestUuidMarshalling(::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*, "_TestUuidMarshalling", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF__TestUuidMarshalling()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*, "_TestUuidMarshalling", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_StringToMrukLabel(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*, "StringToMrukLabel", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_StringToMrukLabel()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*, "StringToMrukLabel", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_CreateEnvironmentRaycaster(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*, "CreateEnvironmentRaycaster", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_CreateEnvironmentRaycaster()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*, "CreateEnvironmentRaycaster", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_DestroyEnvironmentRaycaster(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*, "DestroyEnvironmentRaycaster", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_DestroyEnvironmentRaycaster()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*, "DestroyEnvironmentRaycaster", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_PerformEnvironmentRaycast(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*, "PerformEnvironmentRaycast", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_PerformEnvironmentRaycast()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*, "PerformEnvironmentRaycast", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_SetTrackingSpacePoseGetter(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*, "SetTrackingSpacePoseGetter", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_SetTrackingSpacePoseGetter()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*, "SetTrackingSpacePoseGetter", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::setStaticF_SetTrackingSpacePoseSetter(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*, "SetTrackingSpacePoseSetter", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(std::forward<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(value));
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs::getStaticF_SetTrackingSpacePoseSetter()  {
return ::cordl_internals::getStaticField<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*, "SetTrackingSpacePoseSetter", ::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>();
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::LoadNativeFunctions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(),
                        {"LoadNativeFunctions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs::UnloadNativeFunctions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs*>(),
                        {"UnloadNativeFunctions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs::MRUKNativeFuncs()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f15a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::*)(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f15ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::*)(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f15ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f15ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::Invoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*  setter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setter);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::BeginInvoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*  setter, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, setter, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate::MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f15914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::*)(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f159c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::*)(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f159d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f159f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::Invoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*  getter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getter);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::BeginInvoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*  getter, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, getter, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate::MRUKNativeFuncs_SetTrackingSpacePoseGetterDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f15764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f15818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f1582c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f158f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>  info, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>  hitPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, hitPoint);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>  info, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>  hitPoint, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, info, hitPoint, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPointGetInfo>  info, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukEnvironmentRaycastHitPoint>  hitPoint, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, hitPoint, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate::MRUKNativeFuncs_PerformEnvironmentRaycastDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f1568c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f15728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f15758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate::MRUKNativeFuncs_DestroyEnvironmentRaycasterDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f154e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f15580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f15594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f155b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate::MRUKNativeFuncs_CreateEnvironmentRaycasterDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f153d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukLabel (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::*)(::StringW)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f15488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f1549c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukLabel (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f154bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukLabel Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::Invoke(::StringW  label)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukLabel>(this, ___internal_method, label);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::BeginInvoke(::StringW  label, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, label, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukLabel Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukLabel>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_StringToMrukLabelDelegate::MRUKNativeFuncs_StringToMrukLabelDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f15244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::*)(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9f152e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::*)(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f15320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f153ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Guid Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::Invoke(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest  packedUuid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method, packedUuid);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs__MrukUuidAlignmentTest  packedUuid, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, packedUuid, callback, object);
}
inline ::System::Guid Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs__TestUuidMarshallingDelegate::MRUKNativeFuncs__TestUuidMarshallingDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f150ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*, uint32_t, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f15160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*, uint32_t, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f15174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f1522c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*  meshSegments, uint32_t  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshSegments, numSegments, reservedSegment);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*  meshSegments, uint32_t  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, meshSegments, numSegments, reservedSegment, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reservedSegment, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshSegmentationDelegate::MRUKNativeFuncs_FreeMeshSegmentationDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f14e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::*)(::ArrayW<::UnityEngine::Vector3>, uint32_t, ::ArrayW<uint32_t>, uint32_t, ::ArrayW<::UnityEngine::Vector3>, uint32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>, ::by_ref<uint32_t>, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f14eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::*)(::ArrayW<::UnityEngine::Vector3>, uint32_t, ::ArrayW<uint32_t>, uint32_t, ::ArrayW<::UnityEngine::Vector3>, uint32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>, ::by_ref<uint32_t>, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f14f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>, ::by_ref<uint32_t>, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f15078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::Invoke(::ArrayW<::UnityEngine::Vector3>  vertices, uint32_t  numVertices, ::ArrayW<uint32_t>  indices, uint32_t  numIndices, ::ArrayW<::UnityEngine::Vector3>  segmentationPoints, uint32_t  numSegmentationPoints, ::UnityEngine::Vector3  reservedMin, ::UnityEngine::Vector3  reservedMax, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>  meshSegments, ::by_ref<uint32_t>  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, vertices, numVertices, indices, numIndices, segmentationPoints, numSegmentationPoints, reservedMin, reservedMax, meshSegments, numSegments, reservedSegment);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::BeginInvoke(::ArrayW<::UnityEngine::Vector3>  vertices, uint32_t  numVertices, ::ArrayW<uint32_t>  indices, uint32_t  numIndices, ::ArrayW<::UnityEngine::Vector3>  segmentationPoints, uint32_t  numSegmentationPoints, ::UnityEngine::Vector3  reservedMin, ::UnityEngine::Vector3  reservedMax, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>  meshSegments, ::by_ref<uint32_t>  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, vertices, numVertices, indices, numIndices, segmentationPoints, numSegmentationPoints, reservedMin, reservedMax, meshSegments, numSegments, reservedSegment, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f*>  meshSegments, ::by_ref<uint32_t>  numSegments, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f>  reservedSegment, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, meshSegments, numSegments, reservedSegment, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_ComputeMeshSegmentationDelegate::MRUKNativeFuncs_ComputeMeshSegmentationDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f14cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f14d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f14d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f14e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>  mesh)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>  mesh, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, mesh, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>  mesh, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_FreeMeshDelegate::MRUKNativeFuncs_FreeMeshDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f14b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::*)(::ArrayW<::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f>, uint32_t)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f14c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::*)(::ArrayW<::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f14c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f14ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::Invoke(::ArrayW<::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f>  polygons, uint32_t  numPolygons)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>(this, ___internal_method, polygons, numPolygons);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::BeginInvoke(::ArrayW<::GlobalNamespace::MRUKNativeFuncs_MrukPolygon2f>  polygons, uint32_t  numPolygons, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, polygons, numPolygons, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TriangulatePolygonDelegate::MRUKNativeFuncs_TriangulatePolygonDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f149f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f14a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f14aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f14b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::Invoke(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, a, b);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::BeginInvoke(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, a, b, callback, object);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AddVectorsDelegate::MRUKNativeFuncs_AddVectorsDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f14858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::*)(::System::Guid, ::by_ref<::UnityEngine::Pose>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f148f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::*)(::System::Guid, ::by_ref<::UnityEngine::Pose>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f1490c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::*)(::by_ref<::UnityEngine::Pose>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f149c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::Invoke(::System::Guid  roomUuid, ::by_ref<::UnityEngine::Pose>  offset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomUuid, offset);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::BeginInvoke(::System::Guid  roomUuid, ::by_ref<::UnityEngine::Pose>  offset, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomUuid, offset, callback, object);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::EndInvoke(::by_ref<::UnityEngine::Pose>  offset, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offset, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate::MRUKNativeFuncs_AnchorStoreGetWorldLockOffsetDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f14764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f14800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f14814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f14830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate::MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f14518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, uint32_t, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::by_ref<uint32_t>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f145b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, uint32_t, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9f145cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f14730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::Invoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneAnchorUuid, origin, direction, maxDistance, surfaceTypes, outHits, outHitsCount);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::BeginInvoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sceneAnchorUuid, origin, direction, maxDistance, surfaceTypes, outHits, outHitsCount, callback, object);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outHits, outHitsCount, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate::MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f142ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, uint32_t, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f1438c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, uint32_t, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9f143a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f144f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::Invoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneAnchorUuid, origin, direction, maxDistance, surfaceTypes, outHit);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::BeginInvoke(::System::Guid  sceneAnchorUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, uint32_t  surfaceTypes, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sceneAnchorUuid, origin, direction, maxDistance, surfaceTypes, outHit, callback, object);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outHit, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate::MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f1407c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::by_ref<uint32_t>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f1411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f14134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f142b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::Invoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomUuid, origin, direction, maxDistance, labelFilter, outHits, outHitsCount);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::BeginInvoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomUuid, origin, direction, maxDistance, labelFilter, outHits, outHitsCount, callback, object);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHits, ::by_ref<uint32_t>  outHitsCount, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outHits, outHitsCount, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate::MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f13e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f13ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::*)(::System::Guid, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9f13eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f14054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::Invoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomUuid, origin, direction, maxDistance, labelFilter, outHit);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::BeginInvoke(::System::Guid  roomUuid, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter  labelFilter, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomUuid, origin, direction, maxDistance, labelFilter, outHit, callback, object);
}
inline bool Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukHit>  outHit, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outHit, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate::MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f13cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9f13d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f13d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f13e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener  listener, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, listener, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate::MRUKNativeFuncs_AnchorStoreRegisterEventListenerDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f13b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::*)(uint64_t)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f13c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f13c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f13cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::Invoke(uint64_t  nextPredictedDisplayTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextPredictedDisplayTime);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::BeginInvoke(uint64_t  nextPredictedDisplayTime, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, nextPredictedDisplayTime, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreTickDelegate::MRUKNativeFuncs_AnchorStoreTickDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f13a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::*)(::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f13b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f13b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f13b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::Invoke(::System::IntPtr  baseEventHeader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseEventHeader);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::BeginInvoke(::System::IntPtr  baseEventHeader, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, baseEventHeader, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate::MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f1393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::*)(::System::Guid)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f139dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::*)(::System::Guid, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f139f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f13a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::Invoke(::System::Guid  roomUuid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomUuid);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::BeginInvoke(::System::Guid  roomUuid, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomUuid, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomDelegate::MRUKNativeFuncs_AnchorStoreClearRoomDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f13864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f13900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f13914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f13930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate::MRUKNativeFuncs_AnchorStoreClearRoomsDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f136ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor*, uint32_t, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor*, uint32_t)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f137a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor*, uint32_t, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f137b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f1383c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor*  roomAnchors, uint32_t  numRoomAnchors, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor*  sceneAnchors, uint32_t  numSceneAnchors)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, roomAnchors, numRoomAnchors, sceneAnchors, numSceneAnchors);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor*  roomAnchors, uint32_t  numRoomAnchors, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor*  sceneAnchors, uint32_t  numSceneAnchors, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomAnchors, numRoomAnchors, sceneAnchors, numSceneAnchors, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate::MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f135fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::*)(char16_t*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f136ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::*)(char16_t*, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f136c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f136e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::Invoke(char16_t*  jsonString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::BeginInvoke(char16_t*  jsonString, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, jsonString, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate::MRUKNativeFuncs_AnchorStoreFreeJsonDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f134b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::*)(bool, ::ArrayW<::System::Guid>, uint32_t)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f13558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::*)(bool, ::ArrayW<::System::Guid>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f1356c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f135f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline char16_t* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::Invoke(bool  includeGlobalMesh, ::ArrayW<::System::Guid>  roomUuids, uint32_t  numRoomUuids)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t*>(this, ___internal_method, includeGlobalMesh, roomUuids, numRoomUuids);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::BeginInvoke(bool  includeGlobalMesh, ::ArrayW<::System::Guid>  roomUuids, uint32_t  numRoomUuids, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, includeGlobalMesh, roomUuids, numRoomUuids, callback, object);
}
inline char16_t* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t*>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate::MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f13310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::*)(::StringW, bool, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f133c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::*)(::StringW, bool, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f133d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f13490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::Invoke(::StringW  jsonString, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, jsonString, shouldRemoveMissingRooms, sceneModel);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::BeginInvoke(::StringW  jsonString, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, jsonString, shouldRemoveMissingRooms, sceneModel, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate::MRUKNativeFuncs_AnchorStoreLoadSceneFromJsonDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f13110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, bool, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f131b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::*)(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData, bool, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f1320c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f132e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData  sharedRoomsData, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, sharedRoomsData, shouldRemoveMissingRooms, sceneModel);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukSharedRoomsData  sharedRoomsData, bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sharedRoomsData, shouldRemoveMissingRooms, sceneModel, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate::MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f12f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::*)(bool, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f1302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::*)(bool, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f13040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f130e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::Invoke(bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, shouldRemoveMissingRooms, sceneModel);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::BeginInvoke(bool  shouldRemoveMissingRooms, ::GlobalNamespace::MRUKNativeFuncs_MrukSceneModel  sceneModel, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, shouldRemoveMissingRooms, sceneModel, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate::MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f12e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::*)(uint64_t)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f12f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f12f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::Invoke(uint64_t  baseSpace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseSpace);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::BeginInvoke(uint64_t  baseSpace, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, baseSpace, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate::MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f12d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f12e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f12e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreDestroyDelegate::MRUKNativeFuncs_AnchorStoreDestroyDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f12cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f12d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f12d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate::MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f12bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f12c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f12c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate::MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f12a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::*)(uint64_t, uint64_t, ::System::IntPtr, uint64_t, ::ArrayW<::StringW>, uint32_t)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::*)(uint64_t, uint64_t, ::System::IntPtr, uint64_t, ::ArrayW<::StringW>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f12ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukResult (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f12ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::Invoke(uint64_t  xrInstance, uint64_t  xrSession, ::System::IntPtr  xrInstanceProcAddrFunc, uint64_t  baseSpace, ::ArrayW<::StringW>  availableOpenXrExtensions, uint32_t  availableOpenXrExtensionsCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, xrInstance, xrSession, xrInstanceProcAddrFunc, baseSpace, availableOpenXrExtensions, availableOpenXrExtensionsCount);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::BeginInvoke(uint64_t  xrInstance, uint64_t  xrSession, ::System::IntPtr  xrInstanceProcAddrFunc, uint64_t  baseSpace, ::ArrayW<::StringW>  availableOpenXrExtensions, uint32_t  availableOpenXrExtensionsCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, xrInstance, xrSession, xrInstanceProcAddrFunc, baseSpace, availableOpenXrExtensions, availableOpenXrExtensionsCount, callback, object);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukResult Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_AnchorStoreCreateDelegate::MRUKNativeFuncs_AnchorStoreCreateDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f12934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::*)(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f129e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::*)(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f129f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f12a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::Invoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*  printer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, printer);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::BeginInvoke(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*  printer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, printer, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate* Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_SetLogPrinterDelegate::MRUKNativeFuncs_SetLogPrinterDelegate()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f127c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9f12860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::*)(::UnityEngine::Pose, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f1289c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f12928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::Invoke(::UnityEngine::Pose  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::BeginInvoke(::UnityEngine::Pose  pose, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pose, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter* Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseSetter::MRUKNativeFuncs_TrackingSpacePoseSetter()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f126bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::*)()>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::*)(::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f1276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::EndInvoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f12788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter* Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_TrackingSpacePoseGetter::MRUKNativeFuncs_TrackingSpacePoseGetter()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f12554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::*)(::GlobalNamespace::MRUKNativeFuncs_MrukResult, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f125f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::*)(::GlobalNamespace::MRUKNativeFuncs_MrukResult, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f12608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f126b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f123ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::*)(::GlobalNamespace::MRUKNativeFuncs_MrukResult, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f1248c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::*)(::GlobalNamespace::MRUKNativeFuncs_MrukResult, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f124a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f12548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished::MRUKNativeFuncs_MrukOnDiscoveryFinished()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f1225c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f12324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f123d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneAnchor, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sceneAnchor, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneAnchor, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved::MRUKNativeFuncs_MrukOnSceneAnchorRemoved()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f120b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, bool, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f12168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, bool, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f1217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f12244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, bool  significantChange, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneAnchor, significantChange, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, bool  significantChange, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sceneAnchor, significantChange, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneAnchor, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated::MRUKNativeFuncs_MrukOnSceneAnchorUpdated()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f11f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f11fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f11fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f1209c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneAnchor, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sceneAnchor, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneAnchor, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded::MRUKNativeFuncs_MrukOnSceneAnchorAdded()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f11d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f11e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f11e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f11f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomAnchor, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved::MRUKNativeFuncs_MrukOnRoomAnchorRemoved()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f11ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::by_ref<::System::Guid>, bool, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f11c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::by_ref<::System::Guid>, bool, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f11c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::by_ref<::System::Guid>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f11d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, bool  significantChange, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, oldRoomAnchorUuid, significantChange, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, bool  significantChange, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomAnchor, oldRoomAnchorUuid, significantChange, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, oldRoomAnchorUuid, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated::MRUKNativeFuncs_MrukOnRoomAnchorUpdated()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f11a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f11acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f11ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f11b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomAnchor, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded::MRUKNativeFuncs_MrukOnRoomAnchorAdded()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f11888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f1193c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f11950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f11a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::Invoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, userContext);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::BeginInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, roomAnchor, userContext, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::EndInvoke(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomAnchor, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded* Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::*)(::System::Object*, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f11718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::*)(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel, char16_t*, uint32_t)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f117b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::*)(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel, char16_t*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f117cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::*)(::System::IAsyncResult*)>(&::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f1187c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::Invoke(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  logLevel, char16_t*  message, uint32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel, message, length);
}
inline ::System::IAsyncResult* Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::BeginInvoke(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  logLevel, char16_t*  message, uint32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, logLevel, message, length, callback, object);
}
inline void Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter* Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_LogPrinter::MRUKNativeFuncs_LogPrinter()   {
}
