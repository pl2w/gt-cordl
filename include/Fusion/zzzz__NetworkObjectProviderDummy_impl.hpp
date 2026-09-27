#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectProviderDummy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectProviderDummy_def.hpp"
#include "Fusion/zzzz__INetworkObjectProvider_def.hpp"
#include "Fusion/zzzz__NetworkObjectAcquireResult_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObjectReleaseContext_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkPrefabAcquireContext_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDummy.AcquirePrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectAcquireResult (::Fusion::NetworkObjectProviderDummy::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkPrefabAcquireContext>, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::NetworkObjectProviderDummy::AcquirePrefabInstance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fcc898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"AcquirePrefabInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabAcquireContext>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDummy.ReleaseInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDummy::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkObjectReleaseContext>)>(&::Fusion::NetworkObjectProviderDummy::ReleaseInstance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fcc8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"ReleaseInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectReleaseContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDummy.GetPrefabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (::Fusion::NetworkObjectProviderDummy::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectProviderDummy::GetPrefabId)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fcc908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"GetPrefabId", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDummy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDummy::*)()>(&::Fusion::NetworkObjectProviderDummy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcc940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDummy.Fusion_INetworkObjectProvider_AcquirePrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectAcquireResult (::Fusion::NetworkObjectProviderDummy::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkPrefabAcquireContext>, ::by_ref<::Fusion::NetworkObject*>)>(&::Fusion::NetworkObjectProviderDummy::Fusion_INetworkObjectProvider_AcquirePrefabInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcc948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"Fusion.INetworkObjectProvider.AcquirePrefabInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabAcquireContext>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectProviderDummy.Fusion_INetworkObjectProvider_ReleaseInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectProviderDummy::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkObjectReleaseContext>)>(&::Fusion::NetworkObjectProviderDummy::Fusion_INetworkObjectProvider_ReleaseInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcc950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"Fusion.INetworkObjectProvider.ReleaseInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectReleaseContext>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::NetworkObjectAcquireResult Fusion::NetworkObjectProviderDummy::AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"AcquirePrefabInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabAcquireContext>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectAcquireResult>(this, ___internal_method, runner, context, instance);
}
inline void Fusion::NetworkObjectProviderDummy::ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"ReleaseInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectReleaseContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, context);
}
inline ::Fusion::NetworkPrefabId Fusion::NetworkObjectProviderDummy::GetPrefabId(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObjectGuid  prefabGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"GetPrefabId", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(this, ___internal_method, runner, prefabGuid);
}
inline void Fusion::NetworkObjectProviderDummy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectAcquireResult Fusion::NetworkObjectProviderDummy::Fusion_INetworkObjectProvider_AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"Fusion.INetworkObjectProvider.AcquirePrefabInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabAcquireContext>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectAcquireResult>(this, ___internal_method, runner, context, result);
}
inline void Fusion::NetworkObjectProviderDummy::Fusion_INetworkObjectProvider_ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectProviderDummy*>(),
                        {"Fusion.INetworkObjectProvider.ReleaseInstance", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectReleaseContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, context);
}
inline ::Fusion::NetworkObjectProviderDummy* Fusion::NetworkObjectProviderDummy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectProviderDummy*>());
}
/// @brief Convert operator to "::Fusion::INetworkObjectProvider"
constexpr  Fusion::NetworkObjectProviderDummy::operator ::Fusion::INetworkObjectProvider*() noexcept {
return static_cast<::Fusion::INetworkObjectProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkObjectProvider"
constexpr ::Fusion::INetworkObjectProvider* Fusion::NetworkObjectProviderDummy::i___Fusion__INetworkObjectProvider() noexcept {
return static_cast<::Fusion::INetworkObjectProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectProviderDummy::NetworkObjectProviderDummy()   {
}
