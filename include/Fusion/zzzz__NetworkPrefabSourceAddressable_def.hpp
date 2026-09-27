#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabSourceAddressable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkAssetSourceAddressable_1_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
CORDL_MODULE_EXPORT(NetworkPrefabSourceAddressable)
namespace Fusion {
template<typename T>
class INetworkAssetSource_1;
}
namespace Fusion {
class INetworkPrefabSource;
}
namespace Fusion {
struct NetworkObjectGuid;
}
namespace Fusion {
class NetworkObject;
}
// Forward declare root types
namespace Fusion {
class NetworkPrefabSourceAddressable;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkPrefabSourceAddressable*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabSourceAddressable*, "Fusion", "NetworkPrefabSourceAddressable");
// Dependencies Fusion.NetworkAssetSourceAddressable`1<T>, Fusion.NetworkObjectGuid
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkPrefabSourceAddressable
class CORDL_TYPE NetworkPrefabSourceAddressable : public ::Fusion::NetworkAssetSourceAddressable_1<::UnityW<::Fusion::NetworkObject>> {
public:
// Declarations
/// @brief Field AssetGuid, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_AssetGuid, put=__cordl_internal_set_AssetGuid)) ::Fusion::NetworkObjectGuid  AssetGuid;

 __declspec(property(get=Fusion_INetworkPrefabSource_get_AssetGuid)) ::Fusion::NetworkObjectGuid  Fusion_INetworkPrefabSource_AssetGuid;

/// @brief Convert operator to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr operator  ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*() noexcept;

/// @brief Convert operator to "::Fusion::INetworkPrefabSource"
constexpr operator  ::Fusion::INetworkPrefabSource*() noexcept;

/// @brief Method Fusion.INetworkPrefabSource.get_AssetGuid, addr 0x60e5bd8, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::NetworkObjectGuid Fusion_INetworkPrefabSource_get_AssetGuid() ;

static inline ::Fusion::NetworkPrefabSourceAddressable* New_ctor() ;

constexpr ::Fusion::NetworkObjectGuid const& __cordl_internal_get_AssetGuid() const;

constexpr ::Fusion::NetworkObjectGuid& __cordl_internal_get_AssetGuid() ;

constexpr void __cordl_internal_set_AssetGuid(::Fusion::NetworkObjectGuid  value) ;

/// @brief Method .ctor, addr 0x60e5be4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>* i___Fusion__INetworkAssetSource_1___UnityW___Fusion__NetworkObject__() noexcept;

/// @brief Convert to "::Fusion::INetworkPrefabSource"
constexpr ::Fusion::INetworkPrefabSource* i___Fusion__INetworkPrefabSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabSourceAddressable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabSourceAddressable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPrefabSourceAddressable(NetworkPrefabSourceAddressable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabSourceAddressable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPrefabSourceAddressable(NetworkPrefabSourceAddressable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23449};

/// @brief Field AssetGuid, offset: 0x38, size: 0x10, def value: None
 ::Fusion::NetworkObjectGuid  ___AssetGuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkPrefabSourceAddressable, ___AssetGuid) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkPrefabSourceAddressable) == 0x48, "Size mismatch!");

} // namespace end def Fusion
