#pragma once
// IWYU pragma private; include "GlobalNamespace/LckTabletSizeManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LckTabletSizeManager_def.hpp"
#include "GlobalNamespace/zzzz__LckDirectGrabbable_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTabletFollower_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::Start)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x56cc5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::OnDestroy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x56cc6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.OnHorizontalModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)(bool)>(&::GlobalNamespace::LckTabletSizeManager::OnHorizontalModeChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56cc828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"OnHorizontalModeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.UpdateCustomNearClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)(::Liv::Lck::GorillaTag::CameraMode)>(&::GlobalNamespace::LckTabletSizeManager::UpdateCustomNearClip)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56cc848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"UpdateCustomNearClip", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.SetCustomNearClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::LckTabletSizeManager::SetCustomNearClip)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x56cc924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"SetCustomNearClip", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.ClearCustomNearClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::ClearCustomNearClip)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56cca78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"ClearCustomNearClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.PlayerBecameSmall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::PlayerBecameSmall)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56ccaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"PlayerBecameSmall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.PlayerBecameDefaultSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::PlayerBecameDefaultSize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56cccbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"PlayerBecameDefaultSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.SetCameraOnNeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::SetCameraOnNeck)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x56ccb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"SetCameraOnNeck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::Update)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x56ccd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckTabletSizeManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckTabletSizeManager::*)()>(&::GlobalNamespace::LckTabletSizeManager::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56ccf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__controller(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable>& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__lckDirectGrabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckDirectGrabbable;
}
constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable> const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__lckDirectGrabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckDirectGrabbable;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__lckDirectGrabbable(::UnityW<::GlobalNamespace::LckDirectGrabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckDirectGrabbable = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__tabletFollower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletFollower;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower> const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__tabletFollower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletFollower;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__tabletFollower(::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabletFollower = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__firstPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__firstPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__firstPersonCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonCamera = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__selfieCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__selfieCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__selfieCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieCamera = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__firstPersonCamShrinkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamShrinkPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__firstPersonCamShrinkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamShrinkPosition;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__firstPersonCamShrinkPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonCamShrinkPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__firstPersonCamDefaultPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamDefaultPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__firstPersonCamDefaultPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamDefaultPosition;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__firstPersonCamDefaultPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonCamDefaultPosition = value;
}
constexpr float_t& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__shrinkSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shrinkSize;
}
constexpr float_t const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__shrinkSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shrinkSize;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__shrinkSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shrinkSize = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__shrinkVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shrinkVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__shrinkVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shrinkVector;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__shrinkVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shrinkVector = value;
}
constexpr float_t& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__customNearClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customNearClip;
}
constexpr float_t const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__customNearClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customNearClip;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__customNearClip(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customNearClip = value;
}
constexpr bool& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__isDefaultScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefaultScale;
}
constexpr bool const& GlobalNamespace::LckTabletSizeManager::__cordl_internal_get__isDefaultScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefaultScale;
}
constexpr void GlobalNamespace::LckTabletSizeManager::__cordl_internal_set__isDefaultScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDefaultScale = value;
}
inline void GlobalNamespace::LckTabletSizeManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckTabletSizeManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckTabletSizeManager::OnHorizontalModeChanged(bool  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"OnHorizontalModeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void GlobalNamespace::LckTabletSizeManager::UpdateCustomNearClip(::Liv::Lck::GorillaTag::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"UpdateCustomNearClip", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void GlobalNamespace::LckTabletSizeManager::SetCustomNearClip(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"SetCustomNearClip", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam);
}
inline void GlobalNamespace::LckTabletSizeManager::ClearCustomNearClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"ClearCustomNearClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckTabletSizeManager::PlayerBecameSmall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"PlayerBecameSmall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckTabletSizeManager::PlayerBecameDefaultSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"PlayerBecameDefaultSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckTabletSizeManager::SetCameraOnNeck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"SetCameraOnNeck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckTabletSizeManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckTabletSizeManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckTabletSizeManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckTabletSizeManager* GlobalNamespace::LckTabletSizeManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckTabletSizeManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckTabletSizeManager::LckTabletSizeManager()   {
}
