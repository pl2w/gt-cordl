#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMetalEnergyGate.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_DoorParams_impl.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_def.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_DoorParams_def.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_State_def.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)()>(&::GlobalNamespace::GRMetalEnergyGate::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x589e258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)()>(&::GlobalNamespace::GRMetalEnergyGate::OnDisable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x589e344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.OnEnergyChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)(::GlobalNamespace::GRTool*, int32_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRMetalEnergyGate::OnEnergyChange)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x589e4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.OnEntityStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)(int64_t, int64_t)>(&::GlobalNamespace::GRMetalEnergyGate::OnEntityStateChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x589e938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)(::GlobalNamespace::GRMetalEnergyGate_State)>(&::GlobalNamespace::GRMetalEnergyGate::SetState)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x589e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRMetalEnergyGate_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.OpenGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)()>(&::GlobalNamespace::GRMetalEnergyGate::OpenGate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OpenGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.CloseGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)()>(&::GlobalNamespace::GRMetalEnergyGate::CloseGate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"CloseGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate.UpdateDoorAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRMetalEnergyGate::*)()>(&::GlobalNamespace::GRMetalEnergyGate::UpdateDoorAnimation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x589e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate::*)()>(&::GlobalNamespace::GRMetalEnergyGate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x589ea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_upperDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperDoor;
}
constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_upperDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperDoor;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_upperDoor(::GlobalNamespace::GRMetalEnergyGate_DoorParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upperDoor = value;
}
constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_lowerDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerDoor;
}
constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_lowerDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowerDoor;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_lowerDoor(::GlobalNamespace::GRMetalEnergyGate_DoorParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowerDoor = value;
}
constexpr float_t& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorOpenTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenTime;
}
constexpr float_t const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorOpenTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenTime;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_doorOpenTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenTime = value;
}
constexpr float_t& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorCloseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseTime;
}
constexpr float_t const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorCloseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseTime;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_doorCloseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorOpenCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorOpenCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenCurve;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_doorOpenCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorCloseCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorCloseCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseCurve;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_doorCloseCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseCurve = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorOpenClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorOpenClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenClip;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_doorOpenClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorCloseClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorCloseClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseClip;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_doorCloseClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseClip = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_enableObjectsOnOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableObjectsOnOpen;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_enableObjectsOnOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableObjectsOnOpen;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_enableObjectsOnOpen(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableObjectsOnOpen = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_disableObjectsOnOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableObjectsOnOpen;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_disableObjectsOnOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableObjectsOnOpen;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_disableObjectsOnOpen(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableObjectsOnOpen = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::GlobalNamespace::GRMetalEnergyGate_State& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRMetalEnergyGate_State const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_state(::GlobalNamespace::GRMetalEnergyGate_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_openProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openProgress;
}
constexpr float_t const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_openProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openProgress;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_openProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openProgress = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorAnimationCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorAnimationCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRMetalEnergyGate::__cordl_internal_get_doorAnimationCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorAnimationCoroutine;
}
constexpr void GlobalNamespace::GRMetalEnergyGate::__cordl_internal_set_doorAnimationCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorAnimationCoroutine = value;
}
inline void GlobalNamespace::GRMetalEnergyGate::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRMetalEnergyGate::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRMetalEnergyGate::OnEnergyChange(::GlobalNamespace::GRTool*  tool, int32_t  energyChange, ::GlobalNamespace::GameEntityId  chargingEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, energyChange, chargingEntityId);
}
inline void GlobalNamespace::GRMetalEnergyGate::OnEntityStateChanged(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRMetalEnergyGate::SetState(::GlobalNamespace::GRMetalEnergyGate_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRMetalEnergyGate_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRMetalEnergyGate::OpenGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"OpenGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRMetalEnergyGate::CloseGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"CloseGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRMetalEnergyGate::UpdateDoorAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {"UpdateDoorAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GRMetalEnergyGate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRMetalEnergyGate* GlobalNamespace::GRMetalEnergyGate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRMetalEnergyGate*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRMetalEnergyGate::GRMetalEnergyGate()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::*)(int32_t)>(&::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x589e9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::*)()>(&::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589ead8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::*)()>(&::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x589eadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::*)()>(&::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589ecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::*)()>(&::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x589ecf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::*)()>(&::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589ed2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate>& GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate> const& GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRMetalEnergyGate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25* GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25::GRMetalEnergyGate__UpdateDoorAnimation_d__25()   {
}
