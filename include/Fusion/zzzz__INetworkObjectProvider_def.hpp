#pragma once
// IWYU pragma private; include "Fusion/INetworkObjectProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkObjectProvider)
namespace Fusion {
struct NetworkObjectAcquireResult;
}
namespace Fusion {
struct NetworkObjectGuid;
}
namespace Fusion {
struct NetworkObjectReleaseContext;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkPrefabAcquireContext;
}
namespace Fusion {
struct NetworkPrefabId;
}
namespace Fusion {
class NetworkRunner;
}
// Forward declare root types
namespace Fusion {
class INetworkObjectProvider;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkObjectProvider*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkObjectProvider*, "Fusion", "INetworkObjectProvider");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkObjectProvider
class CORDL_TYPE INetworkObjectProvider {
public:
// Declarations
/// @brief Method AcquirePrefabInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::NetworkObjectAcquireResult AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  result) ;

/// @brief Method GetPrefabId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::NetworkPrefabId GetPrefabId(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObjectGuid  prefabGuid) ;

/// @brief Method Initialize, addr 0x5fcc56c, size 0x4, virtual true, abstract: false, final false
inline void Initialize(::Fusion::NetworkRunner*  networkRunner) ;

/// @brief Method ReleaseInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context) ;

/// @brief Method Shutdown, addr 0x5fcc568, size 0x4, virtual true, abstract: false, final false
inline void Shutdown(::Fusion::NetworkRunner*  networkRunner) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkObjectProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkObjectProvider(INetworkObjectProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
