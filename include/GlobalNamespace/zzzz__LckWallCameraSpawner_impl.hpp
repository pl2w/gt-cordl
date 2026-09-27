#pragma once
// IWYU pragma private; include "GlobalNamespace/LckWallCameraSpawner.hpp"
#include "GlobalNamespace/zzzz__LckWallCameraSpawner_WallSpawnerState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LckWallCameraSpawner_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_def.hpp"
#include "GlobalNamespace/zzzz__LckDirectGrabbable_def.hpp"
#include "GlobalNamespace/zzzz__LckWallCameraSpawner_WallSpawnerState_def.hpp"
#include "GlobalNamespace/zzzz__LckWallCameraSpawner_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckGameObjectSwapCosmetic_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtDummyTablet_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTagType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.GetOrCreateBodyCameraSpawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LckBodyCameraSpawner> (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::GetOrCreateBodyCameraSpawner)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x56cd014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"GetOrCreateBodyCameraSpawner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.AddGTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Liv::Lck::GorillaTag::GtTagType)>(&::GlobalNamespace::LckWallCameraSpawner::AddGTag)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56cd428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"AddGTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Liv::Lck::GorillaTag::GtTagType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.get_wallSpawnerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::get_wallSpawnerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56cd4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"get_wallSpawnerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.set_wallSpawnerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState)>(&::GlobalNamespace::LckWallCameraSpawner::set_wallSpawnerState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56cd500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"set_wallSpawnerState", {}, {::i2c::type_of<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56cd798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::OnEnable)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x56cd81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56cdad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::Update)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x56cde68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::OnDisable)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x56ce520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.get_cameraVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::get_cameraVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56ce7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"get_cameraVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.set_cameraVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)(bool)>(&::GlobalNamespace::LckWallCameraSpawner::set_cameraVisible)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56cd73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"set_cameraVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.SpawnCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)(::GlobalNamespace::GorillaGrabber*)>(&::GlobalNamespace::LckWallCameraSpawner::SpawnCamera)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x56ce2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"SpawnCamera", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.InitCameraStrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::InitCameraStrap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56cd79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"InitCameraStrap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.UpdateCameraStrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::UpdateCameraStrap)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56cd5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"UpdateCameraStrap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.ResetCameraModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::ResetCameraModel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x56cd548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"ResetCameraModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.ShouldSpawnCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckWallCameraSpawner::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::LckWallCameraSpawner::ShouldSpawnCamera)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56ce1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"ShouldSpawnCamera", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::OnGrabbed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56ce7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::OnReleased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ce804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.CreatePrewarmCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::CreatePrewarmCamera)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x56cdadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"CreatePrewarmCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.DestroyPrewarmCameraDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::DestroyPrewarmCameraDelayed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56ce80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"DestroyPrewarmCameraDelayed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner.DestroyPrewarmCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::DestroyPrewarmCamera)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x56ce8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"DestroyPrewarmCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner::*)()>(&::GlobalNamespace::LckWallCameraSpawner::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56ce9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__lckBodySpawnerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckBodySpawnerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__lckBodySpawnerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckBodySpawnerPrefab;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__lckBodySpawnerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckBodySpawnerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraHandleGrabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraHandleGrabbable;
}
constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraHandleGrabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraHandleGrabbable;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__cameraHandleGrabbable(::UnityW<::GlobalNamespace::LckDirectGrabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraHandleGrabbable = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraModelOriginTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelOriginTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraModelOriginTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelOriginTransform;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__cameraModelOriginTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraModelOriginTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraModelTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraModelTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraModelTransform;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__cameraModelTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraModelTransform = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraStrapRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraStrapRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapRenderer;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__cameraStrapRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraStrapRenderer = value;
}
constexpr float_t& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__activateDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateDistance;
}
constexpr float_t const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__activateDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateDistance;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__activateDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateDistance = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraStrapPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPoints;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraStrapPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPoints;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__cameraStrapPoints(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraStrapPoints = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraStrapPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__cameraStrapPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStrapPositions;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__cameraStrapPositions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraStrapPositions = value;
}
constexpr float_t& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__spawnRotationOffsetAndroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnRotationOffsetAndroid;
}
constexpr float_t const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__spawnRotationOffsetAndroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnRotationOffsetAndroid;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__spawnRotationOffsetAndroid(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnRotationOffsetAndroid = value;
}
constexpr float_t& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__spawnRotationOffsetWindows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnRotationOffsetWindows;
}
constexpr float_t const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__spawnRotationOffsetWindows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnRotationOffsetWindows;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__spawnRotationOffsetWindows(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnRotationOffsetWindows = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColor = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__dummyTablet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTablet;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__dummyTablet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTablet;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__dummyTablet(::UnityW<::Liv::Lck::GorillaTag::GtDummyTablet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dummyTablet = value;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__swapTablet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapTablet;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__swapTablet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapTablet;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__swapTablet(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____swapTablet = value;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__swapEmobi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapEmobi;
}
constexpr ::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic> const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__swapEmobi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swapEmobi;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__swapEmobi(::UnityW<::Liv::Lck::Cosmetics::LckGameObjectSwapCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____swapEmobi = value;
}
constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__wallSpawnerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wallSpawnerState;
}
constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState const& GlobalNamespace::LckWallCameraSpawner::__cordl_internal_get__wallSpawnerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wallSpawnerState;
}
constexpr void GlobalNamespace::LckWallCameraSpawner::__cordl_internal_set__wallSpawnerState(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wallSpawnerState = value;
}
inline void GlobalNamespace::LckWallCameraSpawner::setStaticF__bodySpawner(::UnityW<::GlobalNamespace::LckBodyCameraSpawner>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::LckBodyCameraSpawner>, "_bodySpawner", ::GlobalNamespace::LckWallCameraSpawner*>(std::forward<::UnityW<::GlobalNamespace::LckBodyCameraSpawner>>(value));
}
inline ::UnityW<::GlobalNamespace::LckBodyCameraSpawner> GlobalNamespace::LckWallCameraSpawner::getStaticF__bodySpawner()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::LckBodyCameraSpawner>, "_bodySpawner", ::GlobalNamespace::LckWallCameraSpawner*>();
}
inline void GlobalNamespace::LckWallCameraSpawner::setStaticF__prewarmCamera(::UnityW<::UnityEngine::Camera>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Camera>, "_prewarmCamera", ::GlobalNamespace::LckWallCameraSpawner*>(std::forward<::UnityW<::UnityEngine::Camera>>(value));
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::LckWallCameraSpawner::getStaticF__prewarmCamera()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Camera>, "_prewarmCamera", ::GlobalNamespace::LckWallCameraSpawner*>();
}
inline ::UnityW<::GlobalNamespace::LckBodyCameraSpawner> GlobalNamespace::LckWallCameraSpawner::GetOrCreateBodyCameraSpawner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"GetOrCreateBodyCameraSpawner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LckBodyCameraSpawner>>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::AddGTag(::UnityEngine::GameObject*  go, ::Liv::Lck::GorillaTag::GtTagType  gtTagType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"AddGTag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Liv::Lck::GorillaTag::GtTagType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, gtTagType);
}
inline ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState GlobalNamespace::LckWallCameraSpawner::get_wallSpawnerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"get_wallSpawnerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::set_wallSpawnerState(::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"set_wallSpawnerState", {}, {::i2c::type_of<::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckWallCameraSpawner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckWallCameraSpawner::get_cameraVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"get_cameraVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::set_cameraVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"set_cameraVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LckWallCameraSpawner::SpawnCamera(::GlobalNamespace::GorillaGrabber*  lastGorillaGrabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"SpawnCamera", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastGorillaGrabber);
}
inline void GlobalNamespace::LckWallCameraSpawner::InitCameraStrap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"InitCameraStrap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::UpdateCameraStrap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"UpdateCameraStrap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::ResetCameraModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"ResetCameraModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckWallCameraSpawner::ShouldSpawnCamera(::UnityEngine::Transform*  gorillaGrabberTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"ShouldSpawnCamera", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gorillaGrabberTransform);
}
inline void GlobalNamespace::LckWallCameraSpawner::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::CreatePrewarmCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"CreatePrewarmCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LckWallCameraSpawner::DestroyPrewarmCameraDelayed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"DestroyPrewarmCameraDelayed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::DestroyPrewarmCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {"DestroyPrewarmCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckWallCameraSpawner* GlobalNamespace::LckWallCameraSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckWallCameraSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckWallCameraSpawner::LckWallCameraSpawner()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::*)(int32_t)>(&::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56ce878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::*)()>(&::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ce9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::*)()>(&::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56ce9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::*)()>(&::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ceaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::*)()>(&::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56ceaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::*)()>(&::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ceae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LckWallCameraSpawner>& GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LckWallCameraSpawner> const& GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckWallCameraSpawner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39* GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39::LckWallCameraSpawner__DestroyPrewarmCameraDelayed_d__39()   {
}
