#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeCandle.hpp"
#include "GlobalNamespace/zzzz__RubberDuck_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeCandle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeCandle.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeCandle::*)()>(&::GlobalNamespace::MonkeCandle::Start)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57929d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeCandle*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeCandle*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeCandle.TriggeredLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeCandle::*)()>(&::GlobalNamespace::MonkeCandle::TriggeredLateUpdate)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x5792a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeCandle*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeCandle*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeCandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeCandle::*)()>(&::GlobalNamespace::MonkeCandle::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57932ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeCandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>& GlobalNamespace::MonkeCandle::__cordl_internal_get_fxParticleArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxParticleArray;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle> const& GlobalNamespace::MonkeCandle::__cordl_internal_get_fxParticleArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxParticleArray;
}
constexpr void GlobalNamespace::MonkeCandle::__cordl_internal_set_fxParticleArray(::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxParticleArray = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MonkeCandle::__cordl_internal_get_movingFxAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingFxAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MonkeCandle::__cordl_internal_get_movingFxAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingFxAudio;
}
constexpr void GlobalNamespace::MonkeCandle::__cordl_internal_set_movingFxAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movingFxAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MonkeCandle::__cordl_internal_get_fxExplodeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxExplodeAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MonkeCandle::__cordl_internal_get_fxExplodeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxExplodeAudio;
}
constexpr void GlobalNamespace::MonkeCandle::__cordl_internal_set_fxExplodeAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxExplodeAudio = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& GlobalNamespace::MonkeCandle::__cordl_internal_get_currentParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentParticles;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& GlobalNamespace::MonkeCandle::__cordl_internal_get_currentParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentParticles;
}
constexpr void GlobalNamespace::MonkeCandle::__cordl_internal_set_currentParticles(::System::Collections::Generic::List_1<uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentParticles = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*& GlobalNamespace::MonkeCandle::__cordl_internal_get_particleInfoDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleInfoDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>* const& GlobalNamespace::MonkeCandle::__cordl_internal_get_particleInfoDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleInfoDict;
}
constexpr void GlobalNamespace::MonkeCandle::__cordl_internal_set_particleInfoDict(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleInfoDict = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeCandle::__cordl_internal_get_outPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeCandle::__cordl_internal_get_outPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outPosition;
}
constexpr void GlobalNamespace::MonkeCandle::__cordl_internal_set_outPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outPosition = value;
}
inline void GlobalNamespace::MonkeCandle::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeCandle*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeCandle::TriggeredLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeCandle*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeCandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeCandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeCandle* GlobalNamespace::MonkeCandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeCandle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeCandle::MonkeCandle()   {
}
