#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomObjectProvider.hpp"
#include "Fusion/zzzz__NetworkObjectProviderDefault_impl.hpp"
#include "GlobalNamespace/zzzz__CustomObjectProvider_def.hpp"
#include "Fusion/zzzz__NetworkObjectAcquireResult_def.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkPrefabAcquireContext_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__NetworkSceneObjectId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomObjectProvider.get_Baker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectBaker* (*)()>(&::GlobalNamespace::CustomObjectProvider::get_Baker)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56d3c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                        {"get_Baker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomObjectProvider.AcquirePrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectAcquireResult (::GlobalNamespace::CustomObjectProvider::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkPrefabAcquireContext>, ::by_ref<::Fusion::NetworkObject*>)>(&::GlobalNamespace::CustomObjectProvider::AcquirePrefabInstance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56d3cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomObjectProvider.IsGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomObjectProvider::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::CustomObjectProvider::IsGameMode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56d3d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                        {"IsGameMode", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomObjectProvider.DestroySceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomObjectProvider::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkSceneObjectId, ::Fusion::NetworkObject*)>(&::GlobalNamespace::CustomObjectProvider::DestroySceneObject)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56d3e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomObjectProvider.DestroyPrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomObjectProvider::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkPrefabId, ::Fusion::NetworkObject*)>(&::GlobalNamespace::CustomObjectProvider::DestroyPrefabInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomObjectProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomObjectProvider::*)()>(&::GlobalNamespace::CustomObjectProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d3f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CustomObjectProvider::__cordl_internal_get_SceneObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::CustomObjectProvider::__cordl_internal_get_SceneObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneObjects;
}
constexpr void GlobalNamespace::CustomObjectProvider::__cordl_internal_set_SceneObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneObjects = value;
}
inline void GlobalNamespace::CustomObjectProvider::setStaticF_baker(::Fusion::NetworkObjectBaker*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkObjectBaker*, "baker", ::GlobalNamespace::CustomObjectProvider*>(std::forward<::Fusion::NetworkObjectBaker*>(value));
}
inline ::Fusion::NetworkObjectBaker* GlobalNamespace::CustomObjectProvider::getStaticF_baker()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkObjectBaker*, "baker", ::GlobalNamespace::CustomObjectProvider*>();
}
inline ::Fusion::NetworkObjectBaker* GlobalNamespace::CustomObjectProvider::get_Baker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                        {"get_Baker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectBaker*>(nullptr, ___internal_method);
}
inline ::Fusion::NetworkObjectAcquireResult GlobalNamespace::CustomObjectProvider::AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectAcquireResult>(this, ___internal_method, runner, context, instance);
}
inline void GlobalNamespace::CustomObjectProvider::IsGameMode(::Fusion::NetworkObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                        {"IsGameMode", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void GlobalNamespace::CustomObjectProvider::DestroySceneObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSceneObjectId  sceneObjectId, ::Fusion::NetworkObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sceneObjectId, instance);
}
inline void GlobalNamespace::CustomObjectProvider::DestroyPrefabInstance(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkPrefabId  prefabId, ::Fusion::NetworkObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, prefabId, instance);
}
inline void GlobalNamespace::CustomObjectProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomObjectProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomObjectProvider* GlobalNamespace::CustomObjectProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomObjectProvider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomObjectProvider::CustomObjectProvider()   {
}
