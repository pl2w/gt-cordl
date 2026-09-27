#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabSourceStaticLazy.hpp"
#include "Fusion/zzzz__NetworkAssetSourceStaticLazy_1_impl.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabSourceStaticLazy_def.hpp"
#include "Fusion/zzzz__INetworkAssetSource_1_def.hpp"
#include "Fusion/zzzz__INetworkPrefabSource_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkPrefabSourceStaticLazy.Fusion_INetworkPrefabSource_get_AssetGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (::Fusion::NetworkPrefabSourceStaticLazy::*)()>(&::Fusion::NetworkPrefabSourceStaticLazy::Fusion_INetworkPrefabSource_get_AssetGuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e5b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceStaticLazy*>(),
                        {"Fusion.INetworkPrefabSource.get_AssetGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabSourceStaticLazy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabSourceStaticLazy::*)()>(&::Fusion::NetworkPrefabSourceStaticLazy::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60e5b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceStaticLazy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkObjectGuid& Fusion::NetworkPrefabSourceStaticLazy::__cordl_internal_get_AssetGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetGuid;
}
constexpr ::Fusion::NetworkObjectGuid const& Fusion::NetworkPrefabSourceStaticLazy::__cordl_internal_get_AssetGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetGuid;
}
constexpr void Fusion::NetworkPrefabSourceStaticLazy::__cordl_internal_set_AssetGuid(::Fusion::NetworkObjectGuid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssetGuid = value;
}
inline ::Fusion::NetworkObjectGuid Fusion::NetworkPrefabSourceStaticLazy::Fusion_INetworkPrefabSource_get_AssetGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceStaticLazy*>(),
                        {"Fusion.INetworkPrefabSource.get_AssetGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(this, ___internal_method);
}
inline void Fusion::NetworkPrefabSourceStaticLazy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceStaticLazy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabSourceStaticLazy* Fusion::NetworkPrefabSourceStaticLazy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkPrefabSourceStaticLazy*>());
}
/// @brief Convert operator to "::Fusion::INetworkPrefabSource"
constexpr  Fusion::NetworkPrefabSourceStaticLazy::operator ::Fusion::INetworkPrefabSource*() noexcept {
return static_cast<::Fusion::INetworkPrefabSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkPrefabSource"
constexpr ::Fusion::INetworkPrefabSource* Fusion::NetworkPrefabSourceStaticLazy::i___Fusion__INetworkPrefabSource() noexcept {
return static_cast<::Fusion::INetworkPrefabSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr  Fusion::NetworkPrefabSourceStaticLazy::operator ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*() noexcept {
return static_cast<::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkPrefabSourceStaticLazy::i___Fusion__INetworkAssetSource_1___UnityW___Fusion__NetworkObject__() noexcept {
return static_cast<::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabSourceStaticLazy::NetworkPrefabSourceStaticLazy()   {
}
