#pragma once
// IWYU pragma private; include "GlobalNamespace/ShadeRevealer.hpp"
#include "GlobalNamespace/zzzz__ShadeRevealer_State_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "GlobalNamespace/zzzz__ShadeRevealer_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterCatcherShade_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "GlobalNamespace/zzzz__ShadeRevealer_State_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)()>(&::GlobalNamespace::ShadeRevealer::Awake)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x57f3d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                    {::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.GetDistanceToBeamRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ShadeRevealer::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ShadeRevealer::GetDistanceToBeamRay)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57f3fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"GetDistanceToBeamRay", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.GetBeamStateForPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ShadeRevealer_State (::GlobalNamespace::ShadeRevealer::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::ShadeRevealer::GetBeamStateForPosition)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x57f407c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"GetBeamStateForPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.GetBeamStateForCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ShadeRevealer_State (::GlobalNamespace::ShadeRevealer::*)(::GlobalNamespace::CosmeticCritter*, float_t)>(&::GlobalNamespace::ShadeRevealer::GetBeamStateForCritter)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57f4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"GetBeamStateForCritter", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritter*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.CritterWithinBeamThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ShadeRevealer::*)(::GlobalNamespace::CosmeticCritter*, ::GlobalNamespace::ShadeRevealer_State, float_t)>(&::GlobalNamespace::ShadeRevealer::CritterWithinBeamThreshold)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57f26e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"CritterWithinBeamThreshold", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritter*>(), ::i2c::type_of<::GlobalNamespace::ShadeRevealer_State>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.SetBestBeamState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)(::GlobalNamespace::ShadeRevealer_State)>(&::GlobalNamespace::ShadeRevealer::SetBestBeamState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57f2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"SetBestBeamState", {}, {::i2c::type_of<::GlobalNamespace::ShadeRevealer_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.SetObjectsEnabledFromState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)(::GlobalNamespace::ShadeRevealer_State)>(&::GlobalNamespace::ShadeRevealer::SetObjectsEnabledFromState)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57f4294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"SetObjectsEnabledFromState", {}, {::i2c::type_of<::GlobalNamespace::ShadeRevealer_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)()>(&::GlobalNamespace::ShadeRevealer::LateUpdateShared)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57f4388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                    {::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.StartScanning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)()>(&::GlobalNamespace::ShadeRevealer::StartScanning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57f43fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"StartScanning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.StopScanning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)()>(&::GlobalNamespace::ShadeRevealer::StopScanning)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57f4458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"StopScanning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer.ShadeCaught
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)()>(&::GlobalNamespace::ShadeRevealer::ShadeCaught)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57f2ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"ShadeCaught", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeRevealer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeRevealer::*)()>(&::GlobalNamespace::ShadeRevealer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57f44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_initialActivationSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialActivationSFX;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_initialActivationSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialActivationSFX;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_initialActivationSFX(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialActivationSFX = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_beamSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamSFX;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_beamSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamSFX;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_beamSFX(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beamSFX = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_catchSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSFX;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_catchSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSFX;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_catchSFX(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_catchFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_catchFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchFX;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_catchFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchFX = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_shadeCatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeCatcher;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_shadeCatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeCatcher;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_shadeCatcher(::UnityW<::GlobalNamespace::CosmeticCritterCatcherShade>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadeCatcher = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_beamForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamForward;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_beamForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamForward;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_beamForward(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beamForward = value;
}
constexpr float_t& GlobalNamespace::ShadeRevealer::__cordl_internal_get_beamLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamLength;
}
constexpr float_t const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_beamLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamLength;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_beamLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beamLength = value;
}
constexpr float_t& GlobalNamespace::ShadeRevealer::__cordl_internal_get_trackThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackThreshold;
}
constexpr float_t const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_trackThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackThreshold;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_trackThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackThreshold = value;
}
constexpr float_t& GlobalNamespace::ShadeRevealer::__cordl_internal_get_lockThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockThreshold;
}
constexpr float_t const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_lockThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockThreshold;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_lockThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_thresholdTester()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdTester;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_thresholdTester() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdTester;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_thresholdTester(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thresholdTester = value;
}
constexpr bool& GlobalNamespace::ShadeRevealer::__cordl_internal_get_drawThresholdTesterInEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawThresholdTesterInEditor;
}
constexpr bool const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_drawThresholdTesterInEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawThresholdTesterInEditor;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_drawThresholdTesterInEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawThresholdTesterInEditor = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenScanning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenScanning;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenScanning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenScanning;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_enableWhenScanning(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableWhenScanning = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenTracking;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenTracking;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_enableWhenTracking(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableWhenTracking = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenLocked;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenLocked;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_enableWhenLocked(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableWhenLocked = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenPrimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenPrimed;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_enableWhenPrimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhenPrimed;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_enableWhenPrimed(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableWhenPrimed = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ShadeRevealer::__cordl_internal_get_onShadeLaunched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onShadeLaunched;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_onShadeLaunched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onShadeLaunched;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_onShadeLaunched(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onShadeLaunched = value;
}
constexpr bool& GlobalNamespace::ShadeRevealer::__cordl_internal_get_isScanning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isScanning;
}
constexpr bool const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_isScanning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isScanning;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_isScanning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isScanning = value;
}
constexpr ::GlobalNamespace::ShadeRevealer_State& GlobalNamespace::ShadeRevealer::__cordl_internal_get_currentBeamState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBeamState;
}
constexpr ::GlobalNamespace::ShadeRevealer_State const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_currentBeamState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBeamState;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_currentBeamState(::GlobalNamespace::ShadeRevealer_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBeamState = value;
}
constexpr ::GlobalNamespace::ShadeRevealer_State& GlobalNamespace::ShadeRevealer::__cordl_internal_get_pendingBeamState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingBeamState;
}
constexpr ::GlobalNamespace::ShadeRevealer_State const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_pendingBeamState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingBeamState;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_pendingBeamState(::GlobalNamespace::ShadeRevealer_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingBeamState = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ShadeRevealer::__cordl_internal_get_objectsToDisableWhenOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDisableWhenOff;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ShadeRevealer::__cordl_internal_get_objectsToDisableWhenOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDisableWhenOff;
}
constexpr void GlobalNamespace::ShadeRevealer::__cordl_internal_set_objectsToDisableWhenOff(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToDisableWhenOff = value;
}
inline void GlobalNamespace::ShadeRevealer::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::ShadeRevealer::GetDistanceToBeamRay(::UnityEngine::Vector3  toPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"GetDistanceToBeamRay", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, toPosition);
}
inline ::GlobalNamespace::ShadeRevealer_State GlobalNamespace::ShadeRevealer::GetBeamStateForPosition(::UnityEngine::Vector3  toPosition, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"GetBeamStateForPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ShadeRevealer_State>(this, ___internal_method, toPosition, tolerance);
}
inline ::GlobalNamespace::ShadeRevealer_State GlobalNamespace::ShadeRevealer::GetBeamStateForCritter(::GlobalNamespace::CosmeticCritter*  critter, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"GetBeamStateForCritter", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritter*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ShadeRevealer_State>(this, ___internal_method, critter, tolerance);
}
inline bool GlobalNamespace::ShadeRevealer::CritterWithinBeamThreshold(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::ShadeRevealer_State  criteria, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"CritterWithinBeamThreshold", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritter*>(), ::i2c::type_of<::GlobalNamespace::ShadeRevealer_State>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, critter, criteria, tolerance);
}
inline void GlobalNamespace::ShadeRevealer::SetBestBeamState(::GlobalNamespace::ShadeRevealer_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"SetBestBeamState", {}, {::i2c::type_of<::GlobalNamespace::ShadeRevealer_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::ShadeRevealer::SetObjectsEnabledFromState(::GlobalNamespace::ShadeRevealer_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"SetObjectsEnabledFromState", {}, {::i2c::type_of<::GlobalNamespace::ShadeRevealer_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::ShadeRevealer::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShadeRevealer::StartScanning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"StartScanning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShadeRevealer::StopScanning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"StopScanning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShadeRevealer::ShadeCaught()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {"ShadeCaught", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShadeRevealer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeRevealer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShadeRevealer* GlobalNamespace::ShadeRevealer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShadeRevealer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShadeRevealer::ShadeRevealer()   {
}
