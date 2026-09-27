#pragma once
// IWYU pragma private; include "GlobalNamespace/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Utils_def.hpp"
#include "GlobalNamespace/zzzz__IPreDisable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PooledList_1_def.hpp"
#include "GorillaTag/zzzz__ObjectPool_1_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Utils.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::Utils::Disable)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5b1b984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"Disable", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.InRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::Utils::InRoom)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b1bc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"InRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.PlayerInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::Utils::PlayerInRoom)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b1bcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PlayerInRoom", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.PlayerInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Photon::Realtime::Player*>)>(&::GlobalNamespace::Utils::PlayerInRoom)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b1bdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PlayerInRoom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Photon::Realtime::Player*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.PlayerInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::GlobalNamespace::NetPlayer*>)>(&::GlobalNamespace::Utils::PlayerInRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b1bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PlayerInRoom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.PackVector3ToLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Utils::PackVector3ToLong)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5b1c008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PackVector3ToLong", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.UnpackVector3FromLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int64_t)>(&::GlobalNamespace::Utils::UnpackVector3FromLong)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b1c2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"UnpackVector3FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.IsASCIILetterOrDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::GlobalNamespace::Utils::IsASCIILetterOrDigit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b1c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"IsASCIILetterOrDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::GlobalNamespace::Utils::Log)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1c320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::Object*)>(&::GlobalNamespace::Utils::Log)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1c324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.ValidateServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, double_t)>(&::GlobalNamespace::Utils::ValidateServerTime)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b1c328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"ValidateServerTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utils.CalculateNetworkDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::GlobalNamespace::Utils::CalculateNetworkDeltaTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b1c3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"CalculateNetworkDeltaTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Utils::setStaticF_g_listPool(::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>*, "g_listPool", ::GlobalNamespace::Utils*>(std::forward<::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>*>(value));
}
inline ::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>* GlobalNamespace::Utils::getStaticF_g_listPool()  {
return ::cordl_internals::getStaticField<::GorillaTag::ObjectPool_1<::GlobalNamespace::PooledList_1<::GlobalNamespace::IPreDisable*>*>*, "g_listPool", ::GlobalNamespace::Utils*>();
}
inline void GlobalNamespace::Utils::setStaticF_reusableSB(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "reusableSB", ::GlobalNamespace::Utils*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GlobalNamespace::Utils::getStaticF_reusableSB()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "reusableSB", ::GlobalNamespace::Utils*>();
}
inline void GlobalNamespace::Utils::Disable(::UnityEngine::GameObject*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"Disable", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
template<typename T>
inline void GlobalNamespace::Utils::AddIfNew(::System::Collections::Generic::List_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Utils*>(),
                    {"AddIfNew", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item);
}
template<typename T>
inline void GlobalNamespace::Utils::RemoveIfContains(::System::Collections::Generic::List_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Utils*>(),
                    {"RemoveIfContains", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item);
}
inline bool GlobalNamespace::Utils::InRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"InRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player);
}
inline bool GlobalNamespace::Utils::PlayerInRoom(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PlayerInRoom", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNumber);
}
inline bool GlobalNamespace::Utils::PlayerInRoom(int32_t  actorNumer, ::by_ref<::Photon::Realtime::Player*>  photonPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PlayerInRoom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Photon::Realtime::Player*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNumer, photonPlayer);
}
inline bool GlobalNamespace::Utils::PlayerInRoom(int32_t  actorNumber, ::by_ref<::GlobalNamespace::NetPlayer*>  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PlayerInRoom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NetPlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNumber, player);
}
inline int64_t GlobalNamespace::Utils::PackVector3ToLong(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"PackVector3ToLong", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Utils::UnpackVector3FromLong(int64_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"UnpackVector3FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, data);
}
inline bool GlobalNamespace::Utils::IsASCIILetterOrDigit(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"IsASCIILetterOrDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline void GlobalNamespace::Utils::Log(::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::Utils::Log(::System::Object*  message, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline bool GlobalNamespace::Utils::ValidateServerTime(double_t  time, double_t  maximumLatency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"ValidateServerTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, maximumLatency);
}
inline double_t GlobalNamespace::Utils::CalculateNetworkDeltaTime(double_t  prevTime, double_t  newTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utils*>(),
                        {"CalculateNetworkDeltaTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, prevTime, newTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Utils::Utils()   {
}
