#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_Basis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AlignCameraToAnchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationController_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_Basis_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_SpaceSharingInfo_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__LoadScene_d__14_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__OnSessionDiscoveredWithSpaceSharing_d__16_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__OnSessionDiscoveredWithSpatialAnchor_d__11_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__SpaceSharingBeforeHostStart_d__12_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9f66874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Start)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x9f669b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnSessionCreatedWithSpatialAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)(::System::Guid)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionCreatedWithSpatialAnchor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f66e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionCreatedWithSpatialAnchor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnSessionDiscoveredWithSpatialAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)(::System::Guid)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionDiscoveredWithSpatialAnchor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f66f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionDiscoveredWithSpatialAnchor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.SpaceSharingBeforeHostStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::SpaceSharingBeforeHostStart)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f66fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"SpaceSharingBeforeHostStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.RequestScenePermissionIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::RequestScenePermissionIfNeeded)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f670c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"RequestScenePermissionIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::LoadScene)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f671b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"LoadScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnSessionCreatedWithSpaceSharing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)(::System::Guid)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionCreatedWithSpaceSharing)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9f6729c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionCreatedWithSpaceSharing", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnSessionDiscoveredWithSpaceSharing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)(::System::Guid)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionDiscoveredWithSpaceSharing)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f6735c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionDiscoveredWithSpaceSharing", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9f67418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f67670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColocationSessionEventHandler_Basis& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get_basis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basis;
}
constexpr ::GlobalNamespace::ColocationSessionEventHandler_Basis const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get_basis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basis;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set_basis(::GlobalNamespace::ColocationSessionEventHandler_Basis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___basis = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get_AnchorPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get_AnchorPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorPrefab;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set_AnchorPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorPrefab = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__colocationController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colocationController;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__colocationController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colocationController;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__colocationController(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colocationController = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__sharedAnchorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedAnchorManager;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__sharedAnchorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedAnchorManager;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__sharedAnchorManager(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sharedAnchorManager = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__alignCameraToAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alignCameraToAnchor;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor> const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__alignCameraToAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alignCameraToAnchor;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__alignCameraToAnchor(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alignCameraToAnchor = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__cameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__cameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRig = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionCreatedWithSpatialAnchor(::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionCreatedWithSpatialAnchor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupUuid);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionDiscoveredWithSpatialAnchor(::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionDiscoveredWithSpatialAnchor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupUuid);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::SpaceSharingBeforeHostStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"SpaceSharingBeforeHostStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::RequestScenePermissionIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"RequestScenePermissionIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::LoadScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"LoadScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionCreatedWithSpaceSharing(::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionCreatedWithSpaceSharing", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupUuid);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionDiscoveredWithSpaceSharing(::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnSessionDiscoveredWithSpaceSharing", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupUuid);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::ColocationSessionEventHandler()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f678c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0._RequestScenePermissionIfNeeded_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::_RequestScenePermissionIfNeeded_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9f678d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*>(),
                        {"<RequestScenePermissionIfNeeded>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0._RequestScenePermissionIfNeeded_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::_RequestScenePermissionIfNeeded_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f67a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*>(),
                        {"<RequestScenePermissionIfNeeded>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::__cordl_internal_get_taskCompletion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskCompletion;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::__cordl_internal_get_taskCompletion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskCompletion;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::__cordl_internal_set_taskCompletion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taskCompletion = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::_RequestScenePermissionIfNeeded_b__0(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*>(),
                        {"<RequestScenePermissionIfNeeded>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::_RequestScenePermissionIfNeeded_b__1(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*>(),
                        {"<RequestScenePermissionIfNeeded>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0::ColocationSessionEventHandler___c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f676e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c._LoadScene_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::*)()>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::_LoadScene_b__14_0)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9f676e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>(),
                        {"<LoadScene>b__14_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::setStaticF___9(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*  value)  {
::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*, "<>9", ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>(std::forward<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*, "<>9", ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::setStaticF___9__14_0(::UnityEngine::Events::UnityAction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction*, "<>9__14_0", ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>(std::forward<::UnityEngine::Events::UnityAction*>(value));
}
inline ::UnityEngine::Events::UnityAction* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction*, "<>9__14_0", ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::_LoadScene_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>(),
                        {"<LoadScene>b__14_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c::ColocationSessionEventHandler___c()   {
}
