#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectProviderDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(NetworkObjectProviderDefault)
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
namespace Fusion {
struct NetworkSceneObjectId;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectProviderDefault;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectProviderDefault*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectProviderDefault*, "Fusion", "NetworkObjectProviderDefault");
// Dependencies Fusion.Behaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectProviderDefault
class CORDL_TYPE NetworkObjectProviderDefault : public ::Fusion::Behaviour {
public:
// Declarations
/// @brief Field DelayIfSceneManagerIsBusy, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_DelayIfSceneManagerIsBusy, put=__cordl_internal_set_DelayIfSceneManagerIsBusy)) bool  DelayIfSceneManagerIsBusy;

/// @brief Convert operator to "::Fusion::INetworkObjectProvider"
constexpr operator  ::Fusion::INetworkObjectProvider*() noexcept;

/// @brief Method AcquirePrefabInstance, addr 0x60ee940, size 0x284, virtual true, abstract: false, final false
inline ::Fusion::NetworkObjectAcquireResult AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  instance) ;

/// @brief Method DestroyPrefabInstance, addr 0x60eeebc, size 0x74, virtual true, abstract: false, final false
inline void DestroyPrefabInstance(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkPrefabId  prefabId, ::Fusion::NetworkObject*  instance) ;

/// @brief Method DestroyPrefabNestedObject, addr 0x60eef30, size 0x74, virtual true, abstract: false, final false
inline void DestroyPrefabNestedObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  instance) ;

/// @brief Method DestroySceneObject, addr 0x60eefa4, size 0x74, virtual true, abstract: false, final false
inline void DestroySceneObject(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkSceneObjectId  sceneObjectId, ::Fusion::NetworkObject*  instance) ;

/// @brief Method GetPrefabId, addr 0x60eee10, size 0x40, virtual true, abstract: false, final true
inline ::Fusion::NetworkPrefabId GetPrefabId(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObjectGuid  prefabGuid) ;

/// @brief Method InstantiatePrefab, addr 0x60eee50, size 0x6c, virtual true, abstract: false, final false
inline ::UnityW<::Fusion::NetworkObject> InstantiatePrefab(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  prefab) ;

static inline ::Fusion::NetworkObjectProviderDefault* New_ctor() ;

/// @brief Method ReleaseInstance, addr 0x60eebc4, size 0x24c, virtual true, abstract: false, final false
inline void ReleaseInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkObjectReleaseContext>  context) ;

constexpr bool const& __cordl_internal_get_DelayIfSceneManagerIsBusy() const;

constexpr bool& __cordl_internal_get_DelayIfSceneManagerIsBusy() ;

constexpr void __cordl_internal_set_DelayIfSceneManagerIsBusy(bool  value) ;

/// @brief Method .ctor, addr 0x60ef018, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::INetworkObjectProvider"
constexpr ::Fusion::INetworkObjectProvider* i___Fusion__INetworkObjectProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectProviderDefault() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectProviderDefault", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectProviderDefault(NetworkObjectProviderDefault && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectProviderDefault", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectProviderDefault(NetworkObjectProviderDefault const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23469};

/// [InlineHelp]
/// @brief Field DelayIfSceneManagerIsBusy, offset: 0x20, size: 0x1, def value: None
 bool  ___DelayIfSceneManagerIsBusy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectProviderDefault, ___DelayIfSceneManagerIsBusy) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectProviderDefault) == 0x28, "Size mismatch!");

} // namespace end def Fusion
