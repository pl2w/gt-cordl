#pragma once
// IWYU pragma private; include "GlobalNamespace/GameGrabbable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameGrabbable_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameGrab_def.hpp"
#include "GlobalNamespace/zzzz__GameGrabbable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameGrabbable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameGrabbable::*)()>(&::GlobalNamespace::GameGrabbable::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5833774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameGrabbable.GetBestGrabPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameGrabbable::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, ::by_ref<::GlobalNamespace::GameGrab>)>(&::GlobalNamespace::GameGrabbable::GetBestGrabPoint)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x5833778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable*>(),
                        {"GetBestGrabPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameGrab>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameGrabbable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameGrabbable::*)()>(&::GlobalNamespace::GameGrabbable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5833d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameGrabbable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameGrabbable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameGrabbable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*& GlobalNamespace::GameGrabbable::__cordl_internal_get_snapGrabPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapGrabPoints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>* const& GlobalNamespace::GameGrabbable::__cordl_internal_get_snapGrabPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapGrabPoints;
}
constexpr void GlobalNamespace::GameGrabbable::__cordl_internal_set_snapGrabPoints(::System::Collections::Generic::List_1<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapGrabPoints = value;
}
inline void GlobalNamespace::GameGrabbable::setStaticF_GRAB_UP(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "GRAB_UP", ::GlobalNamespace::GameGrabbable*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::GameGrabbable::getStaticF_GRAB_UP()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GRAB_UP", ::GlobalNamespace::GameGrabbable*>();
}
inline void GlobalNamespace::GameGrabbable::setStaticF_GRAB_PALM(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "GRAB_PALM", ::GlobalNamespace::GameGrabbable*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::GameGrabbable::getStaticF_GRAB_PALM()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GRAB_PALM", ::GlobalNamespace::GameGrabbable*>();
}
inline void GlobalNamespace::GameGrabbable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameGrabbable::GetBestGrabPoint(::UnityEngine::Vector3  handPos, ::UnityEngine::Quaternion  handRot, int32_t  handIndex, ::by_ref<::GlobalNamespace::GameGrab>  grab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable*>(),
                        {"GetBestGrabPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameGrab>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handPos, handRot, handIndex, grab);
}
inline void GlobalNamespace::GameGrabbable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameGrabbable* GlobalNamespace::GameGrabbable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameGrabbable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameGrabbable::GameGrabbable()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameGrabbable_SnapGrabPoints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameGrabbable_SnapGrabPoints::*)()>(&::GlobalNamespace::GameGrabbable_SnapGrabPoints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5833d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GameGrabbable_SnapGrabPoints::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::GameGrabbable_SnapGrabPoints::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::GameGrabbable_SnapGrabPoints::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GameGrabbable_SnapGrabPoints::__cordl_internal_get_handTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GameGrabbable_SnapGrabPoints::__cordl_internal_get_handTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTransform;
}
constexpr void GlobalNamespace::GameGrabbable_SnapGrabPoints::__cordl_internal_set_handTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTransform = value;
}
inline void GlobalNamespace::GameGrabbable_SnapGrabPoints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameGrabbable_SnapGrabPoints* GlobalNamespace::GameGrabbable_SnapGrabPoints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameGrabbable_SnapGrabPoints::GameGrabbable_SnapGrabPoints()   {
}
