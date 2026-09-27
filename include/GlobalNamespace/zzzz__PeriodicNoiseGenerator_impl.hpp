#pragma once
// IWYU pragma private; include "GlobalNamespace/PeriodicNoiseGenerator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeriodicNoiseGenerator_def.hpp"
#include "GlobalNamespace/zzzz__CrittersLoudNoise_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeriodicNoiseGenerator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeriodicNoiseGenerator::*)()>(&::GlobalNamespace::PeriodicNoiseGenerator::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56fcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicNoiseGenerator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeriodicNoiseGenerator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeriodicNoiseGenerator::*)()>(&::GlobalNamespace::PeriodicNoiseGenerator::Update)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x56fcd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicNoiseGenerator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeriodicNoiseGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeriodicNoiseGenerator::*)()>(&::GlobalNamespace::PeriodicNoiseGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fce94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicNoiseGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_sleepDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepDuration;
}
constexpr float_t const& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_sleepDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepDuration;
}
constexpr void GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_set_sleepDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepDuration = value;
}
constexpr float_t& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_randomDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDuration;
}
constexpr float_t const& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_randomDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomDuration;
}
constexpr void GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_set_randomDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomDuration = value;
}
constexpr float_t& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise>& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_noiseActor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseActor;
}
constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise> const& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_noiseActor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseActor;
}
constexpr void GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_set_noiseActor(::UnityW<::GlobalNamespace::CrittersLoudNoise>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseActor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_transparent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparent;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_transparent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparent;
}
constexpr void GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_set_transparent(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transparent = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_solid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solid;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_solid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solid;
}
constexpr void GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_set_solid(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___solid = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_mR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mR;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_get_mR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mR;
}
constexpr void GlobalNamespace::PeriodicNoiseGenerator::__cordl_internal_set_mR(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mR = value;
}
inline void GlobalNamespace::PeriodicNoiseGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicNoiseGenerator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeriodicNoiseGenerator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicNoiseGenerator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeriodicNoiseGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicNoiseGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeriodicNoiseGenerator* GlobalNamespace::PeriodicNoiseGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeriodicNoiseGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeriodicNoiseGenerator::PeriodicNoiseGenerator()   {
}
