#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabSourceAddressable.hpp"
#include "Fusion/zzzz__NetworkAssetSourceAddressable_1_impl.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabSourceAddressable_def.hpp"
#include "Fusion/zzzz__INetworkAssetSource_1_def.hpp"
#include "Fusion/zzzz__INetworkPrefabSource_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkPrefabSourceAddressable.Fusion_INetworkPrefabSource_get_AssetGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (::Fusion::NetworkPrefabSourceAddressable::*)()>(&::Fusion::NetworkPrefabSourceAddressable::Fusion_INetworkPrefabSource_get_AssetGuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e5bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceAddressable*>(),
                        {"Fusion.INetworkPrefabSource.get_AssetGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabSourceAddressable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabSourceAddressable::*)()>(&::Fusion::NetworkPrefabSourceAddressable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60e5be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceAddressable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkObjectGuid& Fusion::NetworkPrefabSourceAddressable::__cordl_internal_get_AssetGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetGuid;
}
constexpr ::Fusion::NetworkObjectGuid const& Fusion::NetworkPrefabSourceAddressable::__cordl_internal_get_AssetGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetGuid;
}
constexpr void Fusion::NetworkPrefabSourceAddressable::__cordl_internal_set_AssetGuid(::Fusion::NetworkObjectGuid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssetGuid = value;
}
inline ::Fusion::NetworkObjectGuid Fusion::NetworkPrefabSourceAddressable::Fusion_INetworkPrefabSource_get_AssetGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceAddressable*>(),
                        {"Fusion.INetworkPrefabSource.get_AssetGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(this, ___internal_method);
}
inline void Fusion::NetworkPrefabSourceAddressable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabSourceAddressable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabSourceAddressable* Fusion::NetworkPrefabSourceAddressable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkPrefabSourceAddressable*>());
}
/// @brief Convert operator to "::Fusion::INetworkPrefabSource"
constexpr  Fusion::NetworkPrefabSourceAddressable::operator ::Fusion::INetworkPrefabSource*() noexcept {
return static_cast<::Fusion::INetworkPrefabSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkPrefabSource"
constexpr ::Fusion::INetworkPrefabSource* Fusion::NetworkPrefabSourceAddressable::i___Fusion__INetworkPrefabSource() noexcept {
return static_cast<::Fusion::INetworkPrefabSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr  Fusion::NetworkPrefabSourceAddressable::operator ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*() noexcept {
return static_cast<::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkPrefabSourceAddressable::i___Fusion__INetworkAssetSource_1___UnityW___Fusion__NetworkObject__() noexcept {
return static_cast<::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabSourceAddressable::NetworkPrefabSourceAddressable()   {
}
