#pragma once
// IWYU pragma private; include "GlobalNamespace/ScienceExperimentSceneElements.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScienceExperimentSceneElements_def.hpp"
#include "GlobalNamespace/zzzz__ScienceExperimentSceneElements_DisableByLiquidData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElements.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElements::*)()>(&::GlobalNamespace::ScienceExperimentSceneElements::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5983784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElements*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElements.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElements::*)()>(&::GlobalNamespace::ScienceExperimentSceneElements::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59837e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElements*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentSceneElements._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentSceneElements::*)()>(&::GlobalNamespace::ScienceExperimentSceneElements::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5983844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElements*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*& GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_get_disableByLiquidList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableByLiquidList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>* const& GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_get_disableByLiquidList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableByLiquidList;
}
constexpr void GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_set_disableByLiquidList(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableByLiquidList = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_get_sodaFizzParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaFizzParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_get_sodaFizzParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaFizzParticles;
}
constexpr void GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_set_sodaFizzParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sodaFizzParticles = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_get_sodaEruptionParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaEruptionParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_get_sodaEruptionParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaEruptionParticles;
}
constexpr void GlobalNamespace::ScienceExperimentSceneElements::__cordl_internal_set_sodaEruptionParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sodaEruptionParticles = value;
}
inline void GlobalNamespace::ScienceExperimentSceneElements::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElements*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScienceExperimentSceneElements::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElements*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScienceExperimentSceneElements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentSceneElements*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScienceExperimentSceneElements* GlobalNamespace::ScienceExperimentSceneElements::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScienceExperimentSceneElements*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScienceExperimentSceneElements::ScienceExperimentSceneElements()   {
}
