#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectProviderDummy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectProviderDummy)
namespace Fusion {
class INetworkObjectProvider;
}
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
class NetworkObjectProviderDummy;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectProviderDummy*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectProviderDummy*, "Fusion", "NetworkObjectProviderDummy");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectProviderDummy
class CORDL_TYPE NetworkObjectProviderDummy : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Fusion::INetworkObjectProvider"
constexpr operator  ::Fusion::INetworkObjectProvider*() noexcept;

/// @brief Method AcquirePrefabInstance, addr 0x5fcc898, size 0x38, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectAcquireResult AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  instance) ;

/// @brief Method Fusion.INetworkObjectProvider.AcquirePrefabInstance, addr 0x5fcc948, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::NetworkObjectAcquireResult Fusion_INetworkObjectProvider_AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  result) ;

/// @brief Method Fusion.INetworkObjectProvider.ReleaseInstance, addr 0x5fcc950, size 0x8, virtual true, abstract: false, final true
inline void Fusion_INetworkObjectProvider_ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context) ;

/// @brief Method GetPrefabId, addr 0x5fcc908, size 0x38, virtual true, abstract: false, final true
inline ::Fusion::NetworkPrefabId GetPrefabId(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObjectGuid  prefabGuid) ;

static inline ::Fusion::NetworkObjectProviderDummy* New_ctor() ;

/// @brief Method ReleaseInstance, addr 0x5fcc8d0, size 0x38, virtual false, abstract: false, final false
inline void ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context) ;

/// @brief Method .ctor, addr 0x5fcc940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkObjectProvider"
constexpr ::Fusion::INetworkObjectProvider* i___Fusion__INetworkObjectProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectProviderDummy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectProviderDummy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectProviderDummy(NetworkObjectProviderDummy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectProviderDummy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectProviderDummy(NetworkObjectProviderDummy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19163};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectProviderDummy) == 0x10, "Size mismatch!");

} // namespace end def Fusion
