#pragma once
// IWYU pragma private; include "BuildSafe/SceneViewUtils.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__SceneViewUtils_def.hpp"
#include "BuildSafe/zzzz__SceneViewUtils_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::BuildSafe::SceneViewUtils.RaycastWorldSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::RaycastHit>)>(&::BuildSafe::SceneViewUtils::RaycastWorldSafe)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c4f43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneViewUtils*>(),
                        {"RaycastWorldSafe", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::SceneViewUtils::setStaticF_RaycastWorld(::BuildSafe::SceneViewUtils_FuncRaycastWorld*  value)  {
::cordl_internals::setStaticField<::BuildSafe::SceneViewUtils_FuncRaycastWorld*, "RaycastWorld", ::BuildSafe::SceneViewUtils*>(std::forward<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(value));
}
inline ::BuildSafe::SceneViewUtils_FuncRaycastWorld* BuildSafe::SceneViewUtils::getStaticF_RaycastWorld()  {
return ::cordl_internals::getStaticField<::BuildSafe::SceneViewUtils_FuncRaycastWorld*, "RaycastWorld", ::BuildSafe::SceneViewUtils*>();
}
inline bool BuildSafe::SceneViewUtils::RaycastWorldSafe(::UnityEngine::Vector2  screenPos, ::by_ref<::UnityEngine::RaycastHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneViewUtils*>(),
                        {"RaycastWorldSafe", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, screenPos, hit);
}
// Ctor Parameters []
constexpr ::BuildSafe::SceneViewUtils::SceneViewUtils()   {
}
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::*)(::System::Object*, ::System::IntPtr)>(&::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c4f688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::*)(::UnityEngine::Camera*, int32_t, ::UnityEngine::Vector2, ::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, ::by_ref<int32_t>)>(&::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c4f73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(),
                    {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::*)(::UnityEngine::Camera*, int32_t, ::UnityEngine::Vector2, ::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, ::by_ref<int32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c4f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(),
                    {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::*)(::by_ref<int32_t>, ::System::IAsyncResult*)>(&::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c4f838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(),
                    {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BuildSafe::SceneViewUtils_FuncPickClosestGameObject::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::GameObject> BuildSafe::SceneViewUtils_FuncPickClosestGameObject::Invoke(::UnityEngine::Camera*  cam, int32_t  layers, ::UnityEngine::Vector2  position, ::ArrayW<::UnityEngine::GameObject*>  ignore, ::ArrayW<::UnityEngine::GameObject*>  filter, ::by_ref<int32_t>  materialIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, cam, layers, position, ignore, filter, materialIndex);
}
inline ::System::IAsyncResult* BuildSafe::SceneViewUtils_FuncPickClosestGameObject::BeginInvoke(::UnityEngine::Camera*  cam, int32_t  layers, ::UnityEngine::Vector2  position, ::ArrayW<::UnityEngine::GameObject*>  ignore, ::ArrayW<::UnityEngine::GameObject*>  filter, ::by_ref<int32_t>  materialIndex, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, cam, layers, position, ignore, filter, materialIndex, callback, object);
}
inline ::UnityW<::UnityEngine::GameObject> BuildSafe::SceneViewUtils_FuncPickClosestGameObject::EndInvoke(::by_ref<int32_t>  materialIndex, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, materialIndex, result);
}
inline ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject* BuildSafe::SceneViewUtils_FuncPickClosestGameObject::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*>(object, method));
}
// Ctor Parameters []
constexpr ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject::SceneViewUtils_FuncPickClosestGameObject()   {
}
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncRaycastWorld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneViewUtils_FuncRaycastWorld::*)(::System::Object*, ::System::IntPtr)>(&::BuildSafe::SceneViewUtils_FuncRaycastWorld::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c4f4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncRaycastWorld.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BuildSafe::SceneViewUtils_FuncRaycastWorld::*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::RaycastHit>)>(&::BuildSafe::SceneViewUtils_FuncRaycastWorld::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c4f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(),
                    {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncRaycastWorld.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::BuildSafe::SceneViewUtils_FuncRaycastWorld::*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::RaycastHit>, ::System::AsyncCallback*, ::System::Object*)>(&::BuildSafe::SceneViewUtils_FuncRaycastWorld::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c4f5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(),
                    {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneViewUtils_FuncRaycastWorld.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BuildSafe::SceneViewUtils_FuncRaycastWorld::*)(::by_ref<::UnityEngine::RaycastHit>, ::System::IAsyncResult*)>(&::BuildSafe::SceneViewUtils_FuncRaycastWorld::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c4f660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(),
                    {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void BuildSafe::SceneViewUtils_FuncRaycastWorld::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool BuildSafe::SceneViewUtils_FuncRaycastWorld::Invoke(::UnityEngine::Vector2  screenPos, ::by_ref<::UnityEngine::RaycastHit>  hit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, screenPos, hit);
}
inline ::System::IAsyncResult* BuildSafe::SceneViewUtils_FuncRaycastWorld::BeginInvoke(::UnityEngine::Vector2  screenPos, ::by_ref<::UnityEngine::RaycastHit>  hit, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, screenPos, hit, callback, object);
}
inline bool BuildSafe::SceneViewUtils_FuncRaycastWorld::EndInvoke(::by_ref<::UnityEngine::RaycastHit>  hit, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit, result);
}
inline ::BuildSafe::SceneViewUtils_FuncRaycastWorld* BuildSafe::SceneViewUtils_FuncRaycastWorld::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::SceneViewUtils_FuncRaycastWorld*>(object, method));
}
// Ctor Parameters []
constexpr ::BuildSafe::SceneViewUtils_FuncRaycastWorld::SceneViewUtils_FuncRaycastWorld()   {
}
