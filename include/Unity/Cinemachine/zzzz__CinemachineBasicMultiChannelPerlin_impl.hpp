#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBasicMultiChannelPerlin.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBasicMultiChannelPerlin_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_get_NoiseAmplitudeFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<float_t,float_t> (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)()>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_get_NoiseAmplitudeFrequency)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae9e3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableNoise.get_NoiseAmplitudeFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_set_NoiseAmplitudeFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)(::System::ValueTuple_2<float_t,float_t>)>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_set_NoiseAmplitudeFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae9e404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableNoise.set_NoiseAmplitudeFrequency", {}, {::i2c::type_of<::System::ValueTuple_2<float_t,float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)()>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::get_IsValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae9e40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)()>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae9e48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::MutateCameraState)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xae9e494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin.ReSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)()>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::ReSeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae9ea34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"ReSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)()>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xae9e944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::*)()>(&::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae9eaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::NoiseSettings>& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_NoiseProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseProfile;
}
constexpr ::UnityW<::Unity::Cinemachine::NoiseSettings> const& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_NoiseProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseProfile;
}
constexpr void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_set_NoiseProfile(::UnityW<::Unity::Cinemachine::NoiseSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoiseProfile = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_PivotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PivotOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_PivotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PivotOffset;
}
constexpr void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_set_PivotOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PivotOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_AmplitudeGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmplitudeGain;
}
constexpr float_t const& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_AmplitudeGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmplitudeGain;
}
constexpr void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_set_AmplitudeGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AmplitudeGain = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_FrequencyGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrequencyGain;
}
constexpr float_t const& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_FrequencyGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrequencyGain;
}
constexpr void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_set_FrequencyGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrequencyGain = value;
}
constexpr bool& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_m_Initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Initialized;
}
constexpr bool const& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_m_Initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Initialized;
}
constexpr void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_set_m_Initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Initialized = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_m_NoiseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoiseTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_m_NoiseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoiseTime;
}
constexpr void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_set_m_NoiseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NoiseTime = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_m_NoiseOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoiseOffsets;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_get_m_NoiseOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoiseOffsets;
}
constexpr void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::__cordl_internal_set_m_NoiseOffsets(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NoiseOffsets = value;
}
inline ::System::ValueTuple_2<float_t,float_t> Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_get_NoiseAmplitudeFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableNoise.get_NoiseAmplitudeFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<float_t,float_t>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_set_NoiseAmplitudeFrequency(::System::ValueTuple_2<float_t,float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableNoise.set_NoiseAmplitudeFrequency", {}, {::i2c::type_of<::System::ValueTuple_2<float_t,float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::ReSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"ReSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin* Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise"
constexpr  Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise* Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableNoise() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin::CinemachineBasicMultiChannelPerlin()   {
}
