#pragma once
// IWYU pragma private; include "GlobalNamespace/TabletSpawnInstance.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TabletSpawnInstance_def.hpp"
#include "GlobalNamespace/zzzz__GameEvents_def.hpp"
#include "GlobalNamespace/zzzz__LckDirectGrabbable_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCameraManager_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.add_onGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(::System::Action*)>(&::GlobalNamespace::TabletSpawnInstance::add_onGrabbed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c22ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"add_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.remove_onGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(::System::Action*)>(&::GlobalNamespace::TabletSpawnInstance::remove_onGrabbed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c2348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"remove_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.add_onReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(::System::Action*)>(&::GlobalNamespace::TabletSpawnInstance::add_onReleased)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c23e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"add_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.remove_onReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(::System::Action*)>(&::GlobalNamespace::TabletSpawnInstance::remove_onReleased)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56c2480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"remove_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.get_directGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LckDirectGrabbable> (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::get_directGrabbable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56c251c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_directGrabbable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.ResetLocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::ResetLocalPose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56c2534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"ResetLocalPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.ResetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::ResetParent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56c264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"ResetParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.SetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TabletSpawnInstance::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TabletSpawnInstance::SetParent)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56c26d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SetParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.get_cameraActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::get_cameraActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c2770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_cameraActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.set_cameraActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(bool)>(&::GlobalNamespace::TabletSpawnInstance::set_cameraActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56c2778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"set_cameraActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.get_uiVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::get_uiVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c28ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_uiVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.set_uiVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(bool)>(&::GlobalNamespace::TabletSpawnInstance::set_uiVisible)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56c28b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"set_uiVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.get_isSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::get_isSpawned)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56c297c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_isSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&::GlobalNamespace::TabletSpawnInstance::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56c29dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::Update)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56c2a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.SpawnCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::SpawnCamera)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x56c2b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SpawnCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::get_position)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56c2e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.get_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::get_rotation)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56c2f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.SetPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::TabletSpawnInstance::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56c2fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.SetLocalScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::TabletSpawnInstance::SetLocalScale)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56c30b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SetLocalScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56c3164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance._SpawnCamera_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::_SpawnCamera_b__30_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56c3204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"<SpawnCamera>b__30_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TabletSpawnInstance._SpawnCamera_b__30_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TabletSpawnInstance::*)()>(&::GlobalNamespace::TabletSpawnInstance::_SpawnCamera_b__30_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56c3220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"<SpawnCamera>b__30_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get_onGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrabbed;
}
constexpr ::System::Action* const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get_onGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrabbed;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set_onGrabbed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGrabbed = value;
}
constexpr ::System::Action*& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get_onReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReleased;
}
constexpr ::System::Action* const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get_onReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReleased;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set_onReleased(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReleased = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraGameObjectInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraGameObjectInstance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraGameObjectInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraGameObjectInstance;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__cameraGameObjectInstance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraGameObjectInstance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraSpawnPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraSpawnPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnPrefab;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__cameraSpawnPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraSpawnPrefab = value;
}
constexpr ::GlobalNamespace::GameEvents*& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__GtCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GtCamera;
}
constexpr ::GlobalNamespace::GameEvents* const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__GtCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GtCamera;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__GtCamera(::GlobalNamespace::GameEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GtCamera = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraSpawnParentTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraSpawnParentTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnParentTransform;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__cameraSpawnParentTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraSpawnParentTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraSpawnInstanceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnInstanceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraSpawnInstanceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraSpawnInstanceTransform;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__cameraSpawnInstanceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraSpawnInstanceTransform = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get_Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get_Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set_Controller(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Controller = value;
}
constexpr ::UnityW<::GlobalNamespace::LckSocialCameraManager>& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__lckSocialCameraManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckSocialCameraManager;
}
constexpr ::UnityW<::GlobalNamespace::LckSocialCameraManager> const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__lckSocialCameraManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckSocialCameraManager;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__lckSocialCameraManager(::UnityW<::GlobalNamespace::LckSocialCameraManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckSocialCameraManager = value;
}
constexpr bool& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraActive;
}
constexpr bool const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__cameraActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraActive;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__cameraActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraActive = value;
}
constexpr bool& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__uiVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiVisible;
}
constexpr bool const& GlobalNamespace::TabletSpawnInstance::__cordl_internal_get__uiVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiVisible;
}
constexpr void GlobalNamespace::TabletSpawnInstance::__cordl_internal_set__uiVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uiVisible = value;
}
inline void GlobalNamespace::TabletSpawnInstance::add_onGrabbed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"add_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TabletSpawnInstance::remove_onGrabbed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"remove_onGrabbed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TabletSpawnInstance::add_onReleased(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"add_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TabletSpawnInstance::remove_onReleased(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"remove_onReleased", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LckDirectGrabbable> GlobalNamespace::TabletSpawnInstance::get_directGrabbable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_directGrabbable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LckDirectGrabbable>>(this, ___internal_method);
}
inline bool GlobalNamespace::TabletSpawnInstance::ResetLocalPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"ResetLocalPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TabletSpawnInstance::ResetParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"ResetParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TabletSpawnInstance::SetParent(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SetParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transform);
}
inline bool GlobalNamespace::TabletSpawnInstance::get_cameraActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_cameraActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TabletSpawnInstance::set_cameraActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"set_cameraActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TabletSpawnInstance::get_uiVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_uiVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TabletSpawnInstance::set_uiVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"set_uiVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TabletSpawnInstance::get_isSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_isSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TabletSpawnInstance::_ctor(::UnityEngine::GameObject*  cameraSpawnPrefab, ::UnityEngine::Transform*  cameraSpawnParentTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraSpawnPrefab, cameraSpawnParentTransform);
}
inline void GlobalNamespace::TabletSpawnInstance::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TabletSpawnInstance::SpawnCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SpawnCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::TabletSpawnInstance::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::TabletSpawnInstance::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"get_rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void GlobalNamespace::TabletSpawnInstance::SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void GlobalNamespace::TabletSpawnInstance::SetLocalScale(::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"SetLocalScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline void GlobalNamespace::TabletSpawnInstance::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TabletSpawnInstance::_SpawnCamera_b__30_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"<SpawnCamera>b__30_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TabletSpawnInstance::_SpawnCamera_b__30_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TabletSpawnInstance*>(),
                        {"<SpawnCamera>b__30_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TabletSpawnInstance* GlobalNamespace::TabletSpawnInstance::New_ctor(::UnityEngine::GameObject*  cameraSpawnPrefab, ::UnityEngine::Transform*  cameraSpawnParentTransform)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TabletSpawnInstance*>(cameraSpawnPrefab, cameraSpawnParentTransform));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TabletSpawnInstance::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TabletSpawnInstance::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TabletSpawnInstance::TabletSpawnInstance()   {
}
