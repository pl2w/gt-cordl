#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSequencerCamera.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSequencerCamera_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSequencerCamera_Instruction_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSequencerCamera::*)()>(&::Unity::Cinemachine::CinemachineSequencerCamera::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xae971d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSequencerCamera::*)()>(&::Unity::Cinemachine::CinemachineSequencerCamera::OnValidate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xae971fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSequencerCamera::*)(int32_t)>(&::Unity::Cinemachine::CinemachineSequencerCamera::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xae97318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSequencerCamera::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineSequencerCamera::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae974a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.ChooseCurrentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineSequencerCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineSequencerCamera::ChooseCurrentCamera)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae97500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.LookupBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineSequencerCamera::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineSequencerCamera::LookupBlend)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae977ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.UpdateCameraCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineSequencerCamera::*)()>(&::Unity::Cinemachine::CinemachineSequencerCamera::UpdateCameraCache)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae97814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera.AdvanceCurrentInstruction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSequencerCamera::*)(float_t)>(&::Unity::Cinemachine::CinemachineSequencerCamera::AdvanceCurrentInstruction)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xae975c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                        {"AdvanceCurrentInstruction", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSequencerCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSequencerCamera::*)()>(&::Unity::Cinemachine::CinemachineSequencerCamera::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae978a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_Loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loop;
}
constexpr bool const& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_Loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loop;
}
constexpr void Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_set_Loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Loop = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>*& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_Instructions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instructions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>* const& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_Instructions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instructions;
}
constexpr void Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_set_Instructions(::System::Collections::Generic::List_1<::GlobalNamespace::CinemachineSequencerCamera_Instruction>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Instructions = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_LegacyLookAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyLookAt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_LegacyLookAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyLookAt;
}
constexpr void Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_set_m_LegacyLookAt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyLookAt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_LegacyFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_LegacyFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyFollow;
}
constexpr void Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_set_m_LegacyFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyFollow = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_ActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_ActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationTime;
}
constexpr void Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_set_m_ActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivationTime = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_CurrentInstruction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentInstruction;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_get_m_CurrentInstruction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentInstruction;
}
constexpr void Unity::Cinemachine::CinemachineSequencerCamera::__cordl_internal_set_m_CurrentInstruction(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentInstruction = value;
}
inline void Unity::Cinemachine::CinemachineSequencerCamera::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSequencerCamera::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSequencerCamera::PerformLegacyUpgrade(int32_t  streamedVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamedVersion);
}
inline void Unity::Cinemachine::CinemachineSequencerCamera::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineSequencerCamera::ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method, worldUp, deltaTime);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineSequencerCamera::LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, outgoing, incoming);
}
inline bool Unity::Cinemachine::CinemachineSequencerCamera::UpdateCameraCache()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSequencerCamera::AdvanceCurrentInstruction(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                        {"AdvanceCurrentInstruction", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void Unity::Cinemachine::CinemachineSequencerCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSequencerCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineSequencerCamera* Unity::Cinemachine::CinemachineSequencerCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineSequencerCamera*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineSequencerCamera::CinemachineSequencerCamera()   {
}
