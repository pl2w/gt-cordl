#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Damper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__Damper_def.hpp"
#include "Unity/Cinemachine/zzzz__Damper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Damper.DecayConstant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Unity::Cinemachine::Damper::DecayConstant)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeb9410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"DecayConstant", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper.DecayedRemainder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::Damper::DecayedRemainder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeb943c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"DecayedRemainder", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper.Damp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::Damper::Damp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb3944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"Damp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper.Damp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::Damper::Damp)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaeb3a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"Damp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper.Damp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t, float_t)>(&::Unity::Cinemachine::Damper::Damp)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaeb3c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"Damp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper.StandardDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::Damper::StandardDamp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb9464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"StandardDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper.StableDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Unity::Cinemachine::Damper::StableDamp)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xaeb94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"StableDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Unity::Cinemachine::Damper::DecayConstant(float_t  time, float_t  residual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"DecayConstant", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, time, residual);
}
inline float_t Unity::Cinemachine::Damper::DecayedRemainder(float_t  initial, float_t  decayConstant, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"DecayedRemainder", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, initial, decayConstant, deltaTime);
}
inline float_t Unity::Cinemachine::Damper::Damp(float_t  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"Damp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, initial, dampTime, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::Damper::Damp(::UnityEngine::Vector3  initial, ::UnityEngine::Vector3  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"Damp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, initial, dampTime, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::Damper::Damp(::UnityEngine::Vector3  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"Damp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, initial, dampTime, deltaTime);
}
inline float_t Unity::Cinemachine::Damper::StandardDamp(float_t  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"StandardDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, initial, dampTime, deltaTime);
}
inline float_t Unity::Cinemachine::Damper::StableDamp(float_t  initial, float_t  dampTime, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper*>(),
                        {"StableDamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, initial, dampTime, deltaTime);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Damper::Damper()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.get_FPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::get_FPS)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaeb96b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"get_FPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.set_FPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::set_FPS)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaeb9710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"set_FPS", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.get_DampTimeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::get_DampTimeScale)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaeb9774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"get_DampTimeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.set_DampTimeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::set_DampTimeScale)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaeb97cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"set_DampTimeScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::Initialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaeb9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaeb994c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaeb987c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::Append)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xaeb9a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"Append", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Damper_AverageFrameRateTracker.SetDampTimeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Unity::Cinemachine::Damper_AverageFrameRateTracker::SetDampTimeScale)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaeb9998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"SetDampTimeScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::setStaticF_s_Buffer(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_Buffer", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Unity::Cinemachine::Damper_AverageFrameRateTracker::getStaticF_s_Buffer()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_Buffer", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>();
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::setStaticF_s_NumItems(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_NumItems", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::Damper_AverageFrameRateTracker::getStaticF_s_NumItems()  {
return ::cordl_internals::getStaticField<int32_t, "s_NumItems", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>();
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::setStaticF_s_Head(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Head", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(std::forward<int32_t>(value));
}
inline int32_t Unity::Cinemachine::Damper_AverageFrameRateTracker::getStaticF_s_Head()  {
return ::cordl_internals::getStaticField<int32_t, "s_Head", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>();
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::setStaticF_s_Sum(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_Sum", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::Damper_AverageFrameRateTracker::getStaticF_s_Sum()  {
return ::cordl_internals::getStaticField<float_t, "s_Sum", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>();
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::setStaticF__FPS_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<FPS>k__BackingField", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::Damper_AverageFrameRateTracker::getStaticF__FPS_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<FPS>k__BackingField", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>();
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::setStaticF__DampTimeScale_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<DampTimeScale>k__BackingField", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::Damper_AverageFrameRateTracker::getStaticF__DampTimeScale_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<DampTimeScale>k__BackingField", ::Unity::Cinemachine::Damper_AverageFrameRateTracker*>();
}
inline float_t Unity::Cinemachine::Damper_AverageFrameRateTracker::get_FPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"get_FPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::set_FPS(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"set_FPS", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t Unity::Cinemachine::Damper_AverageFrameRateTracker::get_DampTimeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"get_DampTimeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::set_DampTimeScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"set_DampTimeScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, mode);
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::Append()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"Append", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::Damper_AverageFrameRateTracker::SetDampTimeScale(float_t  fps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Damper_AverageFrameRateTracker*>(),
                        {"SetDampTimeScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fps);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Damper_AverageFrameRateTracker::Damper_AverageFrameRateTracker()   {
}
