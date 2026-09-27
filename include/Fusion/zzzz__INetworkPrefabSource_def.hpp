#pragma once
// IWYU pragma private; include "Fusion/INetworkPrefabSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkPrefabSource)
namespace Fusion {
template<typename T>
class INetworkAssetSource_1;
}
namespace Fusion {
struct NetworkObjectGuid;
}
namespace Fusion {
class NetworkObject;
}
// Forward declare root types
namespace Fusion {
class INetworkPrefabSource;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkPrefabSource*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkPrefabSource*, "Fusion", "INetworkPrefabSource");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkPrefabSource
class CORDL_TYPE INetworkPrefabSource {
public:
// Declarations
 __declspec(property(get=get_AssetGuid)) ::Fusion::NetworkObjectGuid  AssetGuid;

/// @brief Convert operator to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr operator  ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>*() noexcept;

/// @brief Method get_AssetGuid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::NetworkObjectGuid get_AssetGuid() ;

/// @brief Convert to "::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::INetworkAssetSource_1<::UnityW<::Fusion::NetworkObject>>* i___Fusion__INetworkAssetSource_1___UnityW___Fusion__NetworkObject__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INetworkPrefabSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkPrefabSource(INetworkPrefabSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
