#pragma once
// IWYU pragma private; include "Fusion/INetworkPrefabSource.hpp"
#include "Fusion/zzzz__INetworkPrefabSource_def.hpp"
#include "Fusion/zzzz__INetworkAssetSource_1_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::INetworkPrefabSource.get_AssetGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (::Fusion::INetworkPrefabSource::*)()>(&::Fusion::INetworkPrefabSource::get_AssetGuid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkPrefabSource*>(),
                    {::i2c::class_of<::Fusion::INetworkPrefabSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Fusion::NetworkObjectGuid Fusion::INetworkPrefabSource::get_AssetGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkPrefabSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr  Fusion::INetworkPrefabSource::operator ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*() noexcept {
return static_cast<::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>* Fusion::INetworkPrefabSource::i___Fusion__INetworkAssetSource_1___UnityW___Fusion__NetworkObject__() noexcept {
return static_cast<::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
