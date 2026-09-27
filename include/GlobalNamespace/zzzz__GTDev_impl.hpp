#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDev.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__GTDev_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTDev.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTDev::InitializeOnLoad)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5676130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDev.CallEditorOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GTDev::CallEditorOnly)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x567663c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"CallEditorOnly", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDev.get_DevID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::GTDev::get_DevID)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5676640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"get_DevID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDev.FetchDevID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::GTDev::FetchDevID)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x567617c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"FetchDevID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDev.SphereMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::GlobalNamespace::GTDev::SphereMesh)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x567668c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"SphereMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDev.Ping3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::GTDev::Ping3D)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x5676798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"Ping3D", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDev.Ping3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::GTDev::Ping3D)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x5676e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"Ping3D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTDev::setStaticF_gDevID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "gDevID", ::GlobalNamespace::GTDev*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GTDev::getStaticF_gDevID()  {
return ::cordl_internals::getStaticField<int32_t, "gDevID", ::GlobalNamespace::GTDev*>();
}
inline void GlobalNamespace::GTDev::setStaticF_gHasDevID(bool  value)  {
::cordl_internals::setStaticField<bool, "gHasDevID", ::GlobalNamespace::GTDev*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GTDev::getStaticF_gHasDevID()  {
return ::cordl_internals::getStaticField<bool, "gHasDevID", ::GlobalNamespace::GTDev*>();
}
inline void GlobalNamespace::GTDev::setStaticF_gDefaultColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "gDefaultColor", ::GlobalNamespace::GTDev*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GlobalNamespace::GTDev::getStaticF_gDefaultColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "gDefaultColor", ::GlobalNamespace::GTDev*>();
}
inline void GlobalNamespace::GTDev::setStaticF_gSphereMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "gSphereMesh", ::GlobalNamespace::GTDev*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::GTDev::getStaticF_gSphereMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "gSphereMesh", ::GlobalNamespace::GTDev*>();
}
inline void GlobalNamespace::GTDev::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTDev::Log(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"Log", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::Log(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"Log", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogError(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogError", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogError(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogError", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogWarning(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogWarning", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogWarning(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogWarning", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogSilent(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogSilent", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogSilent(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogSilent", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogEditorOnly(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogEditorOnly", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogEditorOnly(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogEditorOnly", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogBetaOnly(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogBetaOnly", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogBetaOnly(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogBetaOnly", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogErrorEd(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogErrorEd", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogErrorEd(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogErrorEd", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogErrorBeta(T  msg, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogErrorBeta", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, channel);
}
template<typename T>
inline void GlobalNamespace::GTDev::LogErrorBeta(T  msg, ::UnityEngine::Object*  context, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"LogErrorBeta", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, context, channel);
}
inline void GlobalNamespace::GTDev::CallEditorOnly(::System::Action*  call)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"CallEditorOnly", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, call);
}
inline int32_t GlobalNamespace::GTDev::get_DevID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"get_DevID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::GTDev::FetchDevID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"FetchDevID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::GTDev::_Log(::System::Action_2<::System::Object*,::UnityW<::UnityEngine::Object>>*  log, ::System::Action_1<::System::Object*>*  logNoCtx, T  msg, ::UnityEngine::Object*  ctx, ::StringW  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"_Log", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_2<::System::Object*,::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, log, logNoCtx, msg, ctx, channel);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::GTDev::SphereMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"SphereMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTDev::Ping3D(::UnityEngine::Collider*  col, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"Ping3D", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, col, color, duration);
}
inline void GlobalNamespace::GTDev::Ping3D(::UnityEngine::Vector3  vec, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                        {"Ping3D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vec, color, duration);
}
template<typename T>
inline void GlobalNamespace::GTDev::Ping3D(T  value, ::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTDev*>(),
                    {"Ping3D", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, position, color, duration);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTDev::GTDev()   {
}
