#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ProximityEffect_def.hpp"
#include "GlobalNamespace/zzzz__IProximityEffectReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__ProximityEffectScoreCurvesSO_def.hpp"
#include "GlobalNamespace/zzzz__ProximityEffect_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56595d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.AddReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)(::GlobalNamespace::IProximityEffectReceiver*)>(&::GlobalNamespace::ProximityEffect::AddReceiver)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x56596a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"AddReceiver", {}, {::i2c::type_of<::GlobalNamespace::IProximityEffectReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.RemoveReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)(::GlobalNamespace::IProximityEffectReceiver*)>(&::GlobalNamespace::ProximityEffect::RemoveReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5659838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"RemoveReceiver", {}, {::i2c::type_of<::GlobalNamespace::IProximityEffectReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.StartCalculating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::StartCalculating)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5659890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"StartCalculating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.StopCalculating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::StopCalculating)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5659974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"StopCalculating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5659a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5659a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.AddTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::AddTrigger)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5659a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"AddTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.RemoveTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::RemoveTrigger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5659abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"RemoveTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.CalculateProximityScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::CalculateProximityScores)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5659af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"CalculateProximityScores", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.CalculateProximityScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)(::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::ProximityEffect::CalculateProximityScores)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5659db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"CalculateProximityScores", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.CalculateProximityScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)(bool, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::ProximityEffect::CalculateProximityScores)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5659b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"CalculateProximityScores", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.MoveTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)(::UnityEngine::Transform*, float_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::ProximityEffect::MoveTransform)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5659dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"MoveTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)(bool)>(&::GlobalNamespace::ProximityEffect::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::Tick)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x565a1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect::*)()>(&::GlobalNamespace::ProximityEffect::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x565a4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect._MoveTransform_g__ExpT_40_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::ProximityEffect::_MoveTransform_g__ExpT_40_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x565a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"<MoveTransform>g__ExpT|40_0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ProximityEffect::__cordl_internal_get_leftTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_leftTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftTransform;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_leftTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ProximityEffect::__cordl_internal_get_rightTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_rightTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightTransform;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_rightTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightTransform = value;
}
constexpr int32_t& GlobalNamespace::ProximityEffect::__cordl_internal_get_triggersToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggersToActivate;
}
constexpr int32_t const& GlobalNamespace::ProximityEffect::__cordl_internal_get_triggersToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggersToActivate;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_triggersToActivate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggersToActivate = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ProximityEffect::__cordl_internal_get_centerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_centerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerTransform;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_centerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerTransform = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect::__cordl_internal_get_positionCTLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionCTLerpSpeed;
}
constexpr float_t const& GlobalNamespace::ProximityEffect::__cordl_internal_get_positionCTLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionCTLerpSpeed;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_positionCTLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionCTLerpSpeed = value;
}
constexpr bool& GlobalNamespace::ProximityEffect::__cordl_internal_get_rotateCT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateCT;
}
constexpr bool const& GlobalNamespace::ProximityEffect::__cordl_internal_get_rotateCT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateCT;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_rotateCT(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateCT = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect::__cordl_internal_get_rotationCTLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationCTLerpSpeed;
}
constexpr float_t const& GlobalNamespace::ProximityEffect::__cordl_internal_get_rotationCTLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationCTLerpSpeed;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_rotationCTLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationCTLerpSpeed = value;
}
constexpr bool& GlobalNamespace::ProximityEffect::__cordl_internal_get_scaleCT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCT;
}
constexpr bool const& GlobalNamespace::ProximityEffect::__cordl_internal_get_scaleCT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCT;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_scaleCT(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleCT = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect::__cordl_internal_get_scaleCTLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCTLerpSpeed;
}
constexpr float_t const& GlobalNamespace::ProximityEffect::__cordl_internal_get_scaleCTLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCTLerpSpeed;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_scaleCTLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleCTLerpSpeed = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect::__cordl_internal_get_scaleCTMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCTMult;
}
constexpr float_t const& GlobalNamespace::ProximityEffect::__cordl_internal_get_scaleCTMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCTMult;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_scaleCTMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleCTMult = value;
}
constexpr ::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO>& GlobalNamespace::ProximityEffect::__cordl_internal_get_scoreCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreCurves;
}
constexpr ::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_scoreCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreCurves;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_scoreCurves(::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreCurves = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GlobalNamespace::ProximityEffect::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GlobalNamespace::ProximityEffect::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::ProximityEffect::__cordl_internal_get_onScoreCalculated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScoreCalculated;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::ProximityEffect::__cordl_internal_get_onScoreCalculated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScoreCalculated;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_onScoreCalculated(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onScoreCalculated = value;
}
constexpr ::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*>& GlobalNamespace::ProximityEffect::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_events(::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ProximityEffect::__cordl_internal_get_defaultLeftHandLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLeftHandLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ProximityEffect::__cordl_internal_get_defaultLeftHandLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLeftHandLocalPosition;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_defaultLeftHandLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLeftHandLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ProximityEffect::__cordl_internal_get_defaultLeftHandLocalEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLeftHandLocalEuler;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ProximityEffect::__cordl_internal_get_defaultLeftHandLocalEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLeftHandLocalEuler;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_defaultLeftHandLocalEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLeftHandLocalEuler = value;
}
constexpr bool& GlobalNamespace::ProximityEffect::__cordl_internal_get_enableVisualization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableVisualization;
}
constexpr bool const& GlobalNamespace::ProximityEffect::__cordl_internal_get_enableVisualization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableVisualization;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_enableVisualization(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableVisualization = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ProximityEffect::__cordl_internal_get_visualizationMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizationMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_visualizationMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizationMaterial;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_visualizationMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualizationMaterial = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect::__cordl_internal_get_visualizationLineThickness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizationLineThickness;
}
constexpr float_t const& GlobalNamespace::ProximityEffect::__cordl_internal_get_visualizationLineThickness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizationLineThickness;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_visualizationLineThickness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualizationLineThickness = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::ProximityEffect::__cordl_internal_get_visualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_visualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualizer;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_visualizer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualizer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>*& GlobalNamespace::ProximityEffect::__cordl_internal_get_receivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>* const& GlobalNamespace::ProximityEffect::__cordl_internal_get_receivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivers;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_receivers(::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivers = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::ProximityEffect::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::ProximityEffect::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr bool& GlobalNamespace::ProximityEffect::__cordl_internal_get_anyAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyAboveThreshold;
}
constexpr bool const& GlobalNamespace::ProximityEffect::__cordl_internal_get_anyAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyAboveThreshold;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_anyAboveThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyAboveThreshold = value;
}
constexpr int32_t& GlobalNamespace::ProximityEffect::__cordl_internal_get_numTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTriggers;
}
constexpr int32_t const& GlobalNamespace::ProximityEffect::__cordl_internal_get_numTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTriggers;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set_numTriggers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numTriggers = value;
}
constexpr bool& GlobalNamespace::ProximityEffect::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::ProximityEffect::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::ProximityEffect::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::ProximityEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::AddReceiver(::GlobalNamespace::IProximityEffectReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"AddReceiver", {}, {::i2c::type_of<::GlobalNamespace::IProximityEffectReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::ProximityEffect::RemoveReceiver(::GlobalNamespace::IProximityEffectReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"RemoveReceiver", {}, {::i2c::type_of<::GlobalNamespace::IProximityEffectReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::ProximityEffect::StartCalculating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"StartCalculating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::StopCalculating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"StopCalculating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::AddTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"AddTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::RemoveTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"RemoveTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::CalculateProximityScores()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"CalculateProximityScores", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::CalculateProximityScores(::by_ref<float_t>  distance, ::by_ref<float_t>  alignment, ::by_ref<float_t>  parallel, ::by_ref<::UnityEngine::Vector3>  midpoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"CalculateProximityScores", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, alignment, parallel, midpoint);
}
inline void GlobalNamespace::ProximityEffect::CalculateProximityScores(bool  drawGizmos, ::by_ref<float_t>  distance, ::by_ref<float_t>  alignment, ::by_ref<float_t>  parallel, ::by_ref<::UnityEngine::Vector3>  midpoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"CalculateProximityScores", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drawGizmos, distance, alignment, parallel, midpoint);
}
inline void GlobalNamespace::ProximityEffect::MoveTransform(::UnityEngine::Transform*  target, float_t  score, ::UnityEngine::Vector3  midpoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"MoveTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, score, midpoint);
}
inline bool GlobalNamespace::ProximityEffect::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProximityEffect::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::ProximityEffect::_MoveTransform_g__ExpT_40_0(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect*>(),
                        {"<MoveTransform>g__ExpT|40_0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, speed);
}
inline ::GlobalNamespace::ProximityEffect* GlobalNamespace::ProximityEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProximityEffect*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::ProximityEffect::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::ProximityEffect::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProximityEffect::ProximityEffect()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect_ProximityEvent.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProximityEffect_ProximityEvent::*)(float_t)>(&::GlobalNamespace::ProximityEffect_ProximityEvent::Evaluate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x565a41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect_ProximityEvent*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect_ProximityEvent.ResetAllEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect_ProximityEvent::*)()>(&::GlobalNamespace::ProximityEffect_ProximityEvent::ResetAllEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5659a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect_ProximityEvent*>(),
                        {"ResetAllEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProximityEffect_ProximityEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffect_ProximityEvent::*)()>(&::GlobalNamespace::ProximityEffect_ProximityEvent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x565a540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect_ProximityEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_highThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highThreshold;
}
constexpr float_t const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_highThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highThreshold;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_highThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highThreshold = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_highThresholdBufferTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highThresholdBufferTime;
}
constexpr float_t const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_highThresholdBufferTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highThresholdBufferTime;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_highThresholdBufferTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highThresholdBufferTime = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_lowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowThreshold;
}
constexpr float_t const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_lowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowThreshold;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_lowThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowThreshold = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_lowThresholdBufferTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowThresholdBufferTime;
}
constexpr float_t const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_lowThresholdBufferTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowThresholdBufferTime;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_lowThresholdBufferTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowThresholdBufferTime = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_onThresholdHigh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onThresholdHigh;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_onThresholdHigh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onThresholdHigh;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_onThresholdHigh(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onThresholdHigh = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_onThresholdLow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onThresholdLow;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_onThresholdLow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onThresholdLow;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_onThresholdLow(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onThresholdLow = value;
}
constexpr bool& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_wasAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr bool const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_wasAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_wasAboveThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasAboveThreshold = value;
}
constexpr bool& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_wasBelowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBelowThreshold;
}
constexpr bool const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_wasBelowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBelowThreshold;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_wasBelowThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasBelowThreshold = value;
}
constexpr float_t& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_lastThresholdTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastThresholdTime;
}
constexpr float_t const& GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_get_lastThresholdTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastThresholdTime;
}
constexpr void GlobalNamespace::ProximityEffect_ProximityEvent::__cordl_internal_set_lastThresholdTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastThresholdTime = value;
}
inline bool GlobalNamespace::ProximityEffect_ProximityEvent::Evaluate(float_t  score)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect_ProximityEvent*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, score);
}
inline void GlobalNamespace::ProximityEffect_ProximityEvent::ResetAllEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect_ProximityEvent*>(),
                        {"ResetAllEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProximityEffect_ProximityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffect_ProximityEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProximityEffect_ProximityEvent* GlobalNamespace::ProximityEffect_ProximityEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProximityEffect_ProximityEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProximityEffect_ProximityEvent::ProximityEffect_ProximityEvent()   {
}
