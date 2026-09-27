#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineClearShot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineClearShot_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineClearShot_Pair_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineClearShot_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineClearShot::*)()>(&::Unity::Cinemachine::CinemachineClearShot::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae88f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineClearShot::*)(int32_t)>(&::Unity::Cinemachine::CinemachineClearShot::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xae88fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineClearShot::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineClearShot::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae89138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot.ResetRandomization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineClearShot::*)()>(&::Unity::Cinemachine::CinemachineClearShot::ResetRandomization)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xae891b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                        {"ResetRandomization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot.ChooseCurrentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineClearShot::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineClearShot::ChooseCurrentCamera)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0xae891e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot.Randomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* (*)(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*)>(&::Unity::Cinemachine::CinemachineClearShot::Randomize)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xae89788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                        {"Randomize", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineClearShot::*)()>(&::Unity::Cinemachine::CinemachineClearShot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae89ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_ActivateAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivateAfter;
}
constexpr float_t const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_ActivateAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivateAfter;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_ActivateAfter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActivateAfter = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_MinDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinDuration;
}
constexpr float_t const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_MinDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinDuration;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_MinDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinDuration = value;
}
constexpr bool& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_RandomizeChoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizeChoice;
}
constexpr bool const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_RandomizeChoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomizeChoice;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_RandomizeChoice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RandomizeChoice = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_LegacyLookAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyLookAt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_LegacyLookAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyLookAt;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_m_LegacyLookAt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyLookAt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_LegacyFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_LegacyFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyFollow;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_m_LegacyFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyFollow = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_ActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_ActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationTime;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_m_ActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivationTime = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_PendingActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingActivationTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_PendingActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingActivationTime;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_m_PendingActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PendingActivationTime = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_PendingCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingCamera;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_PendingCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingCamera;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_m_PendingCamera(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PendingCamera = value;
}
constexpr bool& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_RandomizeNow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RandomizeNow;
}
constexpr bool const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_RandomizeNow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RandomizeNow;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_m_RandomizeNow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RandomizeNow = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_RandomizedChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RandomizedChildren;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* const& Unity::Cinemachine::CinemachineClearShot::__cordl_internal_get_m_RandomizedChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RandomizedChildren;
}
constexpr void Unity::Cinemachine::CinemachineClearShot::__cordl_internal_set_m_RandomizedChildren(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RandomizedChildren = value;
}
inline void Unity::Cinemachine::CinemachineClearShot::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineClearShot::PerformLegacyUpgrade(int32_t  streamedVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamedVersion);
}
inline void Unity::Cinemachine::CinemachineClearShot::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineClearShot::ResetRandomization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                        {"ResetRandomization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineClearShot::ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method, worldUp, deltaTime);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* Unity::Cinemachine::CinemachineClearShot::Randomize(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                        {"Randomize", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>(nullptr, ___internal_method, src);
}
inline void Unity::Cinemachine::CinemachineClearShot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineClearShot* Unity::Cinemachine::CinemachineClearShot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineClearShot*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineClearShot::CinemachineClearShot()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineClearShot___c::*)()>(&::Unity::Cinemachine::CinemachineClearShot___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae89b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineClearShot___c._Randomize_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineClearShot___c::*)(::GlobalNamespace::CinemachineClearShot_Pair, ::GlobalNamespace::CinemachineClearShot_Pair)>(&::Unity::Cinemachine::CinemachineClearShot___c::_Randomize_b__16_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae89b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot___c*>(),
                        {"<Randomize>b__16_0", {}, {::i2c::type_of<::GlobalNamespace::CinemachineClearShot_Pair>(), ::i2c::type_of<::GlobalNamespace::CinemachineClearShot_Pair>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineClearShot___c::setStaticF___9(::Unity::Cinemachine::CinemachineClearShot___c*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineClearShot___c*, "<>9", ::Unity::Cinemachine::CinemachineClearShot___c*>(std::forward<::Unity::Cinemachine::CinemachineClearShot___c*>(value));
}
inline ::Unity::Cinemachine::CinemachineClearShot___c* Unity::Cinemachine::CinemachineClearShot___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineClearShot___c*, "<>9", ::Unity::Cinemachine::CinemachineClearShot___c*>();
}
inline void Unity::Cinemachine::CinemachineClearShot___c::setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>*, "<>9__16_0", ::Unity::Cinemachine::CinemachineClearShot___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>* Unity::Cinemachine::CinemachineClearShot___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>*, "<>9__16_0", ::Unity::Cinemachine::CinemachineClearShot___c*>();
}
inline void Unity::Cinemachine::CinemachineClearShot___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CinemachineClearShot___c::_Randomize_b__16_0(::GlobalNamespace::CinemachineClearShot_Pair  p1, ::GlobalNamespace::CinemachineClearShot_Pair  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineClearShot___c*>(),
                        {"<Randomize>b__16_0", {}, {::i2c::type_of<::GlobalNamespace::CinemachineClearShot_Pair>(), ::i2c::type_of<::GlobalNamespace::CinemachineClearShot_Pair>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p1, p2);
}
inline ::Unity::Cinemachine::CinemachineClearShot___c* Unity::Cinemachine::CinemachineClearShot___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineClearShot___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineClearShot___c::CinemachineClearShot___c()   {
}
