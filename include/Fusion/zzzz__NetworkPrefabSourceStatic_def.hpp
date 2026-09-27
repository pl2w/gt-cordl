#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabSourceStatic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkAssetSourceStatic_1_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
CORDL_MODULE_EXPORT(NetworkPrefabSourceStatic)
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
class NetworkPrefabSourceStatic;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkPrefabSourceStatic*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabSourceStatic*, "Fusion", "NetworkPrefabSourceStatic");
// Dependencies Fusion.NetworkAssetSourceStatic`1<T>, Fusion.NetworkObjectGuid
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkPrefabSourceStatic
class CORDL_TYPE NetworkPrefabSourceStatic : public ::Fusion::NetworkAssetSourceStatic_1<::UnityW<::Fusion::NetworkObject>> {
public:
// Declarations
/// @brief Field AssetGuid, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_AssetGuid, put=__cordl_internal_set_AssetGuid)) ::Fusion::NetworkObjectGuid  AssetGuid;

 __declspec(property(get=Fusion_INetworkPrefabSource_get_AssetGuid)) ::Fusion::NetworkObjectGuid  Fusion_INetworkPrefabSource_AssetGuid;

/// @brief Convert operator to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr operator  ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*() noexcept;

/// @brief Convert operator to "::Fusion::INetworkPrefabSource"
constexpr operator  ::Fusion::INetworkPrefabSource*() noexcept;

/// @brief Method Fusion.INetworkPrefabSource.get_AssetGuid, addr 0x60e5adc, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::NetworkObjectGuid Fusion_INetworkPrefabSource_get_AssetGuid() ;

static inline ::Fusion::NetworkPrefabSourceStatic* New_ctor() ;

constexpr ::Fusion::NetworkObjectGuid const& __cordl_internal_get_AssetGuid() const;

constexpr ::Fusion::NetworkObjectGuid& __cordl_internal_get_AssetGuid() ;

constexpr void __cordl_internal_set_AssetGuid(::Fusion::NetworkObjectGuid  value) ;

/// @brief Method .ctor, addr 0x60e5ae8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>* i___Fusion__INetworkAssetSource_1___UnityW___Fusion__NetworkObject__() noexcept;

/// @brief Convert to "::Fusion::INetworkPrefabSource"
constexpr ::Fusion::INetworkPrefabSource* i___Fusion__INetworkPrefabSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabSourceStatic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabSourceStatic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPrefabSourceStatic(NetworkPrefabSourceStatic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabSourceStatic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPrefabSourceStatic(NetworkPrefabSourceStatic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23446};

/// @brief Field AssetGuid, offset: 0x18, size: 0x10, def value: None
 ::Fusion::NetworkObjectGuid  ___AssetGuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkPrefabSourceStatic, ___AssetGuid) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkPrefabSourceStatic) == 0x28, "Size mismatch!");

} // namespace end def Fusion
