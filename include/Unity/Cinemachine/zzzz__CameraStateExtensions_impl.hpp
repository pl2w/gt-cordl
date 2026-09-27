#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraStateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraStateExtensions_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_CustomBlendableItems_Item_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.HasLookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CameraStateExtensions::HasLookAt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaeac804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"HasLookAt", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.GetCorrectedPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CameraStateExtensions::GetCorrectedPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeac868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetCorrectedPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.GetCorrectedOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CameraStateExtensions::GetCorrectedOrientation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaeacc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetCorrectedOrientation", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.GetFinalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CameraStateExtensions::GetFinalPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeacd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetFinalPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.GetFinalOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CameraStateExtensions::GetFinalOrientation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaeacd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetFinalOrientation", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.GetNumCustomBlendables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CameraStateExtensions::GetNumCustomBlendables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeace7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetNumCustomBlendables", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.GetCustomBlendable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CustomBlendableItems_CameraState_Item (*)(::Unity::Cinemachine::CameraState, int32_t)>(&::Unity::Cinemachine::CameraStateExtensions::GetCustomBlendable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaeab834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetCustomBlendable", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.FindCustomBlendable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Cinemachine::CameraState, ::UnityEngine::Object*)>(&::Unity::Cinemachine::CameraStateExtensions::FindCustomBlendable)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaeab698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"FindCustomBlendable", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraStateExtensions.IsTargetOffscreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CameraStateExtensions::IsTargetOffscreen)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xaeace84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"IsTargetOffscreen", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::CameraStateExtensions::HasLookAt(::Unity::Cinemachine::CameraState  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"HasLookAt", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CameraStateExtensions::GetCorrectedPosition(::Unity::Cinemachine::CameraState  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetCorrectedPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, s);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CameraStateExtensions::GetCorrectedOrientation(::Unity::Cinemachine::CameraState  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetCorrectedOrientation", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, s);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CameraStateExtensions::GetFinalPosition(::Unity::Cinemachine::CameraState  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetFinalPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, s);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CameraStateExtensions::GetFinalOrientation(::Unity::Cinemachine::CameraState  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetFinalOrientation", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, s);
}
inline int32_t Unity::Cinemachine::CameraStateExtensions::GetNumCustomBlendables(::Unity::Cinemachine::CameraState  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetNumCustomBlendables", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline ::GlobalNamespace::CustomBlendableItems_CameraState_Item Unity::Cinemachine::CameraStateExtensions::GetCustomBlendable(::Unity::Cinemachine::CameraState  s, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"GetCustomBlendable", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CustomBlendableItems_CameraState_Item>(nullptr, ___internal_method, s, index);
}
inline int32_t Unity::Cinemachine::CameraStateExtensions::FindCustomBlendable(::Unity::Cinemachine::CameraState  s, ::UnityEngine::Object*  custom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"FindCustomBlendable", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, custom);
}
inline bool Unity::Cinemachine::CameraStateExtensions::IsTargetOffscreen(::Unity::Cinemachine::CameraState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraStateExtensions*>(),
                        {"IsTargetOffscreen", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraStateExtensions::CameraStateExtensions()   {
}
