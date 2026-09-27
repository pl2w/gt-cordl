#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticCameraDisableNotifier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/zzzz__CosmeticCameraDisableNotifier_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRigCollection_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GorillaTag::CosmeticCameraDisableNotifier.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticCameraDisableNotifier::*)()>(&::GorillaTag::CosmeticCameraDisableNotifier::Awake)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5d2809c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticCameraDisableNotifier.PlayerEnteredTryOnSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticCameraDisableNotifier::*)(::GlobalNamespace::RigContainer*)>(&::GorillaTag::CosmeticCameraDisableNotifier::PlayerEnteredTryOnSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d28298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {"PlayerEnteredTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticCameraDisableNotifier.PlayerLeftTryOnSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticCameraDisableNotifier::*)(::GlobalNamespace::RigContainer*)>(&::GorillaTag::CosmeticCameraDisableNotifier::PlayerLeftTryOnSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d282dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {"PlayerLeftTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticCameraDisableNotifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticCameraDisableNotifier::*)()>(&::GorillaTag::CosmeticCameraDisableNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d28320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& GorillaTag::CosmeticCameraDisableNotifier::__cordl_internal_get__vrrigCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrrigCollection;
}
constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& GorillaTag::CosmeticCameraDisableNotifier::__cordl_internal_get__vrrigCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrrigCollection;
}
constexpr void GorillaTag::CosmeticCameraDisableNotifier::__cordl_internal_set__vrrigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrrigCollection = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GorillaTag::CosmeticCameraDisableNotifier::__cordl_internal_get__cosmeticCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GorillaTag::CosmeticCameraDisableNotifier::__cordl_internal_get__cosmeticCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cosmeticCamera;
}
constexpr void GorillaTag::CosmeticCameraDisableNotifier::__cordl_internal_set__cosmeticCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cosmeticCamera = value;
}
inline void GorillaTag::CosmeticCameraDisableNotifier::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::CosmeticCameraDisableNotifier::PlayerEnteredTryOnSpace(::GlobalNamespace::RigContainer*  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {"PlayerEnteredTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRig);
}
inline void GorillaTag::CosmeticCameraDisableNotifier::PlayerLeftTryOnSpace(::GlobalNamespace::RigContainer*  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {"PlayerLeftTryOnSpace", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRig);
}
inline void GorillaTag::CosmeticCameraDisableNotifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticCameraDisableNotifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::CosmeticCameraDisableNotifier* GorillaTag::CosmeticCameraDisableNotifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::CosmeticCameraDisableNotifier*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticCameraDisableNotifier::CosmeticCameraDisableNotifier()   {
}
