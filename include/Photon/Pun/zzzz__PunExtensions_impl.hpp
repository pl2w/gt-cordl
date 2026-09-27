#pragma once
// IWYU pragma private; include "Photon/Pun/PunExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PunExtensions_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PunExtensions.GetCachedParemeters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::Reflection::MethodInfo*)>(&::Photon::Pun::PunExtensions::GetCachedParemeters)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa724588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"GetCachedParemeters", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.GetPhotonViewsInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Photon::Pun::PhotonView>> (*)(::UnityEngine::GameObject*)>(&::Photon::Pun::PunExtensions::GetPhotonViewsInChildren)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa71f654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"GetPhotonViewsInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.GetPhotonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(::UnityEngine::GameObject*)>(&::Photon::Pun::PunExtensions::GetPhotonView)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa72cb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"GetPhotonView", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.AlmostEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Photon::Pun::PunExtensions::AlmostEquals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa7288dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.AlmostEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::Photon::Pun::PunExtensions::AlmostEquals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa728908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.AlmostEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float_t)>(&::Photon::Pun::PunExtensions::AlmostEquals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa728928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.AlmostEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::Photon::Pun::PunExtensions::AlmostEquals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa728998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.CheckIsAssignableFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::Photon::Pun::PunExtensions::CheckIsAssignableFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa72cb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"CheckIsAssignableFrom", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PunExtensions.CheckIsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Photon::Pun::PunExtensions::CheckIsInterface)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa72cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"CheckIsInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::PunExtensions::setStaticF_ParametersOfMethods(::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>*, "ParametersOfMethods", ::Photon::Pun::PunExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>* Photon::Pun::PunExtensions::getStaticF_ParametersOfMethods()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*,::ArrayW<::System::Reflection::ParameterInfo*>>*, "ParametersOfMethods", ::Photon::Pun::PunExtensions*>();
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> Photon::Pun::PunExtensions::GetCachedParemeters(::System::Reflection::MethodInfo*  mo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"GetCachedParemeters", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(nullptr, ___internal_method, mo);
}
inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> Photon::Pun::PunExtensions::GetPhotonViewsInChildren(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"GetPhotonViewsInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Photon::Pun::PhotonView>>>(nullptr, ___internal_method, go);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PunExtensions::GetPhotonView(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"GetPhotonView", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>>(nullptr, ___internal_method, go);
}
inline bool Photon::Pun::PunExtensions::AlmostEquals(::UnityEngine::Vector3  target, ::UnityEngine::Vector3  second, float_t  sqrMagnitudePrecision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target, second, sqrMagnitudePrecision);
}
inline bool Photon::Pun::PunExtensions::AlmostEquals(::UnityEngine::Vector2  target, ::UnityEngine::Vector2  second, float_t  sqrMagnitudePrecision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target, second, sqrMagnitudePrecision);
}
inline bool Photon::Pun::PunExtensions::AlmostEquals(::UnityEngine::Quaternion  target, ::UnityEngine::Quaternion  second, float_t  maxAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target, second, maxAngle);
}
inline bool Photon::Pun::PunExtensions::AlmostEquals(float_t  target, float_t  second, float_t  floatDiff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"AlmostEquals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target, second, floatDiff);
}
inline bool Photon::Pun::PunExtensions::CheckIsAssignableFrom(::System::Type*  to, ::System::Type*  from)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"CheckIsAssignableFrom", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, to, from);
}
inline bool Photon::Pun::PunExtensions::CheckIsInterface(::System::Type*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PunExtensions*>(),
                        {"CheckIsInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, to);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PunExtensions::PunExtensions()   {
}
