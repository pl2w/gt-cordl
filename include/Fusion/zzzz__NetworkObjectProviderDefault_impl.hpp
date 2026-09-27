#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectProviderDefault.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__NetworkObjectProviderDefault_def.hpp"
#include "Fusion/zzzz__INetworkObjectProvider_def.hpp"
#include "Fusion/zzzz__NetworkObjectAcquireResult_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObjectReleaseContext_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkPrefabAcquireContext_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__NetworkSceneObjectId_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault.AcquirePrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectAcquireResult (::Fusion::NetworkObjectProviderDefault::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkPrefabAcquireContext>, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::NetworkObjectProviderDefault::AcquirePrefabInstance)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x60ee940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault.ReleaseInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDefault::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkObjectReleaseContext>)>(&::Fusion::NetworkObjectProviderDefault::ReleaseInstance)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x60eebc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault.GetPrefabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (::Fusion::NetworkObjectProviderDefault::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectProviderDefault::GetPrefabId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60eee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                        {"GetPrefabId", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault.InstantiatePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkObjectProviderDefault::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectProviderDefault::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60eee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault.DestroyPrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDefault::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkPrefabId, ::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectProviderDefault::DestroyPrefabInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60eeebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault.DestroyPrefabNestedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDefault::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectProviderDefault::DestroyPrefabNestedObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60eef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault.DestroySceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDefault::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkSceneObjectId, ::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectProviderDefault::DestroySceneObject)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60eefa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDefault._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDefault::*)()>(&::Fusion::NetworkObjectProviderDefault::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ef018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::NetworkObjectProviderDefault::__cordl_internal_get_DelayIfSceneManagerIsBusy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayIfSceneManagerIsBusy;
}
constexpr bool const& Fusion::NetworkObjectProviderDefault::__cordl_internal_get_DelayIfSceneManagerIsBusy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DelayIfSceneManagerIsBusy;
}
constexpr void Fusion::NetworkObjectProviderDefault::__cordl_internal_set_DelayIfSceneManagerIsBusy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DelayIfSceneManagerIsBusy = value;
}
inline ::Fusion::NetworkObjectAcquireResult Fusion::NetworkObjectProviderDefault::AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectAcquireResult>(this, ___internal_method, runner, context, instance);
}
inline void Fusion::NetworkObjectProviderDefault::ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, context);
}
inline ::Fusion::NetworkPrefabId Fusion::NetworkObjectProviderDefault::GetPrefabId(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObjectGuid  prefabGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                        {"GetPrefabId", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(this, ___internal_method, runner, prefabGuid);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkObjectProviderDefault::InstantiatePrefab(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  prefab)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, runner, prefab);
}
inline void Fusion::NetworkObjectProviderDefault::DestroyPrefabInstance(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkPrefabId  prefabId, ::Fusion::NetworkObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, prefabId, instance);
}
inline void Fusion::NetworkObjectProviderDefault::DestroyPrefabNestedObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, instance);
}
inline void Fusion::NetworkObjectProviderDefault::DestroySceneObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSceneObjectId  sceneObjectId, ::Fusion::NetworkObject*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, sceneObjectId, instance);
}
inline void Fusion::NetworkObjectProviderDefault::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDefault*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectProviderDefault* Fusion::NetworkObjectProviderDefault::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectProviderDefault*>());
}
/// @brief Convert operator to "::Fusion::INetworkObjectProvider"
constexpr  Fusion::NetworkObjectProviderDefault::operator ::Fusion::INetworkObjectProvider*() noexcept {
return static_cast<::Fusion::INetworkObjectProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkObjectProvider"
constexpr ::Fusion::INetworkObjectProvider* Fusion::NetworkObjectProviderDefault::i___Fusion__INetworkObjectProvider() noexcept {
return static_cast<::Fusion::INetworkObjectProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectProviderDefault::NetworkObjectProviderDefault()   {
}
