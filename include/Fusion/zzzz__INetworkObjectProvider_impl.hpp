#pragma once
// IWYU pragma private; include "Fusion/INetworkObjectProvider.hpp"
#include "Fusion/zzzz__INetworkObjectProvider_def.hpp"
#include "Fusion/zzzz__NetworkObjectAcquireResult_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObjectReleaseContext_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkPrefabAcquireContext_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
//  Writing Method size for method: ::Fusion::INetworkObjectProvider.AcquirePrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectAcquireResult (::Fusion::INetworkObjectProvider::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkPrefabAcquireContext>, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::INetworkObjectProvider::AcquirePrefabInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkObjectProvider*>(),
                    {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkObjectProvider.ReleaseInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkObjectProvider::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkObjectReleaseContext>)>(&::Fusion::INetworkObjectProvider::ReleaseInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkObjectProvider*>(),
                    {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkObjectProvider.GetPrefabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (::Fusion::INetworkObjectProvider::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObjectGuid)>(&::Fusion::INetworkObjectProvider::GetPrefabId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkObjectProvider*>(),
                    {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkObjectProvider.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkObjectProvider::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkObjectProvider::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fcc568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkObjectProvider*>(),
                    {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkObjectProvider.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkObjectProvider::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkObjectProvider::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fcc56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkObjectProvider*>(),
                    {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::Fusion::NetworkObjectAcquireResult Fusion::INetworkObjectProvider::AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectAcquireResult>(this, ___internal_method, runner, context, result);
}
inline void Fusion::INetworkObjectProvider::ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, context);
}
inline ::Fusion::NetworkPrefabId Fusion::INetworkObjectProvider::GetPrefabId(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObjectGuid  prefabGuid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(this, ___internal_method, runner, prefabGuid);
}
inline void Fusion::INetworkObjectProvider::Shutdown(::Fusion::NetworkRunner*  networkRunner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkRunner);
}
inline void Fusion::INetworkObjectProvider::Initialize(::Fusion::NetworkRunner*  networkRunner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkObjectProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkRunner);
}
