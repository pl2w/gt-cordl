#pragma once
// IWYU pragma private; include "GlobalNamespace/MoonController.hpp"
#include "GlobalNamespace/zzzz__MoonController_Placement_impl.hpp"
#include "GlobalNamespace/zzzz__MoonController_Scenes_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MoonController_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__MoonController_Placement_def.hpp"
#include "GlobalNamespace/zzzz__MoonController_SceneData_def.hpp"
#include "GlobalNamespace/zzzz__MoonController_Scenes_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoonController.get_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::get_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56185b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"get_Distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.get_TimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x56185b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"get_TimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.SetEyeOpenAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::SetEyeOpenAnimation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56186c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"SetEyeOpenAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.StartEyeCloseAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::StartEyeCloseAnimation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56186e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"StartEyeCloseAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::Start)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5618708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5618fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::OnZoneChanged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5619118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.UpdateActiveScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)(::GlobalNamespace::MoonController_Scenes)>(&::GlobalNamespace::MoonController::UpdateActiveScene)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5619238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateActiveScene", {}, {::i2c::type_of<::GlobalNamespace::MoonController_Scenes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::Update)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5619254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.UpdateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)(float_t)>(&::GlobalNamespace::MoonController::UpdateDistance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5619378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::UpdateVisualState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5619394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.UpdatePlacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::UpdatePlacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5618fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdatePlacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.UpdatePlacementSimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::UpdatePlacementSimple)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x56194d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdatePlacementSimple", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.UpdatePlacementOrbit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::UpdatePlacementOrbit)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x561970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdatePlacementOrbit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController.UpdateCrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::UpdateCrack)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5618c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateCrack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoonController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoonController::*)()>(&::GlobalNamespace::MoonController::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5619e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>*& GlobalNamespace::MoonController::__cordl_internal_get_scenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>* const& GlobalNamespace::MoonController::__cordl_internal_get_scenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenes;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_scenes(::System::Collections::Generic::List_1<::GlobalNamespace::MoonController_SceneData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenes = value;
}
constexpr ::GlobalNamespace::MoonController_Scenes& GlobalNamespace::MoonController::__cordl_internal_get_activeScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeScene;
}
constexpr ::GlobalNamespace::MoonController_Scenes const& GlobalNamespace::MoonController::__cordl_internal_get_activeScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeScene;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_activeScene(::GlobalNamespace::MoonController_Scenes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeScene = value;
}
constexpr ::GlobalNamespace::MoonController_Placement& GlobalNamespace::MoonController::__cordl_internal_get_defaultPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPlacement;
}
constexpr ::GlobalNamespace::MoonController_Placement const& GlobalNamespace::MoonController::__cordl_internal_get_defaultPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPlacement;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_defaultPlacement(::GlobalNamespace::MoonController_Placement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultPlacement = value;
}
constexpr float_t& GlobalNamespace::MoonController::__cordl_internal_get_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr float_t const& GlobalNamespace::MoonController::__cordl_internal_get_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distance = value;
}
constexpr bool& GlobalNamespace::MoonController::__cordl_internal_get_alwaysInTheSky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysInTheSky;
}
constexpr bool const& GlobalNamespace::MoonController::__cordl_internal_get_alwaysInTheSky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysInTheSky;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_alwaysInTheSky(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysInTheSky = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MoonController::__cordl_internal_get_defaultMoon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMoon;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MoonController::__cordl_internal_get_defaultMoon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMoon;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_defaultMoon(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMoon = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MoonController::__cordl_internal_get_openMoon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openMoon;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MoonController::__cordl_internal_get_openMoon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openMoon;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_openMoon(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openMoon = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::MoonController::__cordl_internal_get_openMoonAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openMoonAnimator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::MoonController::__cordl_internal_get_openMoonAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openMoonAnimator;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_openMoonAnimator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openMoonAnimator = value;
}
constexpr float_t& GlobalNamespace::MoonController::__cordl_internal_get_eyeOpenDistThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOpenDistThreshold;
}
constexpr float_t const& GlobalNamespace::MoonController::__cordl_internal_get_eyeOpenDistThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOpenDistThreshold;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_eyeOpenDistThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeOpenDistThreshold = value;
}
constexpr float_t& GlobalNamespace::MoonController::__cordl_internal_get_eyeCloseDistThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeCloseDistThreshold;
}
constexpr float_t const& GlobalNamespace::MoonController::__cordl_internal_get_eyeCloseDistThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeCloseDistThreshold;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_eyeCloseDistThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeCloseDistThreshold = value;
}
constexpr bool& GlobalNamespace::MoonController::__cordl_internal_get_debugOverrideTimeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverrideTimeOfDay;
}
constexpr bool const& GlobalNamespace::MoonController::__cordl_internal_get_debugOverrideTimeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverrideTimeOfDay;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_debugOverrideTimeOfDay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugOverrideTimeOfDay = value;
}
constexpr float_t& GlobalNamespace::MoonController::__cordl_internal_get_timeOfDayOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayOverride;
}
constexpr float_t const& GlobalNamespace::MoonController::__cordl_internal_get_timeOfDayOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayOverride;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_timeOfDayOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOfDayOverride = value;
}
constexpr bool& GlobalNamespace::MoonController::__cordl_internal_get_debugOverrideCrackProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverrideCrackProgress;
}
constexpr bool const& GlobalNamespace::MoonController::__cordl_internal_get_debugOverrideCrackProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverrideCrackProgress;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_debugOverrideCrackProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugOverrideCrackProgress = value;
}
constexpr float_t& GlobalNamespace::MoonController::__cordl_internal_get_crackProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackProgress;
}
constexpr float_t const& GlobalNamespace::MoonController::__cordl_internal_get_crackProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackProgress;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_crackProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crackProgress = value;
}
constexpr bool& GlobalNamespace::MoonController::__cordl_internal_get_debugOverrideCrackDayInOctober()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverrideCrackDayInOctober;
}
constexpr bool const& GlobalNamespace::MoonController::__cordl_internal_get_debugOverrideCrackDayInOctober() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverrideCrackDayInOctober;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_debugOverrideCrackDayInOctober(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugOverrideCrackDayInOctober = value;
}
constexpr int32_t& GlobalNamespace::MoonController::__cordl_internal_get_crackDayInOctoberOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackDayInOctoberOverride;
}
constexpr int32_t const& GlobalNamespace::MoonController::__cordl_internal_get_crackDayInOctoberOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackDayInOctoberOverride;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_crackDayInOctoberOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crackDayInOctoberOverride = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::MoonController::__cordl_internal_get_crackRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::MoonController::__cordl_internal_get_crackRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackRenderer;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_crackRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crackRenderer = value;
}
constexpr int32_t& GlobalNamespace::MoonController::__cordl_internal_get_crackStartDayOfYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackStartDayOfYear;
}
constexpr int32_t const& GlobalNamespace::MoonController::__cordl_internal_get_crackStartDayOfYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackStartDayOfYear;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_crackStartDayOfYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crackStartDayOfYear = value;
}
constexpr int32_t& GlobalNamespace::MoonController::__cordl_internal_get_crackEndDayOfYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackEndDayOfYear;
}
constexpr int32_t const& GlobalNamespace::MoonController::__cordl_internal_get_crackEndDayOfYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackEndDayOfYear;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_crackEndDayOfYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crackEndDayOfYear = value;
}
constexpr float_t& GlobalNamespace::MoonController::__cordl_internal_get_orbitAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitAngle;
}
constexpr float_t const& GlobalNamespace::MoonController::__cordl_internal_get_orbitAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitAngle;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_orbitAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitAngle = value;
}
constexpr int32_t& GlobalNamespace::MoonController::__cordl_internal_get_eyeOpenHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOpenHash;
}
constexpr int32_t const& GlobalNamespace::MoonController::__cordl_internal_get_eyeOpenHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeOpenHash;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_eyeOpenHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeOpenHash = value;
}
constexpr bool& GlobalNamespace::MoonController::__cordl_internal_get_openEyeModelEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEyeModelEnabled;
}
constexpr bool const& GlobalNamespace::MoonController::__cordl_internal_get_openEyeModelEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEyeModelEnabled;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_openEyeModelEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openEyeModelEnabled = value;
}
constexpr float_t& GlobalNamespace::MoonController::__cordl_internal_get_currentlySetCrackProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlySetCrackProgress;
}
constexpr float_t const& GlobalNamespace::MoonController::__cordl_internal_get_currentlySetCrackProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlySetCrackProgress;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_currentlySetCrackProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlySetCrackProgress = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::MoonController::__cordl_internal_get_crackMaterialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackMaterialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::MoonController::__cordl_internal_get_crackMaterialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crackMaterialPropertyBlock;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_crackMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crackMaterialPropertyBlock = value;
}
constexpr bool& GlobalNamespace::MoonController::__cordl_internal_get_debugDrawOrbit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawOrbit;
}
constexpr bool const& GlobalNamespace::MoonController::__cordl_internal_get_debugDrawOrbit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawOrbit;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_debugDrawOrbit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawOrbit = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>*& GlobalNamespace::MoonController::__cordl_internal_get_zoneToSceneMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneToSceneMapping;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>* const& GlobalNamespace::MoonController::__cordl_internal_get_zoneToSceneMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneToSceneMapping;
}
constexpr void GlobalNamespace::MoonController::__cordl_internal_set_zoneToSceneMapping(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::GlobalNamespace::MoonController_Scenes>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneToSceneMapping = value;
}
inline float_t GlobalNamespace::MoonController::get_Distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"get_Distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::MoonController::get_TimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"get_TimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::SetEyeOpenAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"SetEyeOpenAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::StartEyeCloseAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"StartEyeCloseAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::UpdateActiveScene(::GlobalNamespace::MoonController_Scenes  nextScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateActiveScene", {}, {::i2c::type_of<::GlobalNamespace::MoonController_Scenes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextScene);
}
inline void GlobalNamespace::MoonController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::UpdateDistance(float_t  nextDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextDistance);
}
inline void GlobalNamespace::MoonController::UpdateVisualState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::UpdatePlacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdatePlacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::UpdatePlacementSimple()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdatePlacementSimple", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::UpdatePlacementOrbit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdatePlacementOrbit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::UpdateCrack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {"UpdateCrack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoonController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoonController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MoonController* GlobalNamespace::MoonController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MoonController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoonController::MoonController()   {
}
