#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfigAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionGlobalScriptableObject_1_def.hpp"
#include "Fusion/zzzz__NetworkPrefabTableOptions_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkProjectConfigAsset)
namespace Fusion {
class INetworkPrefabSource;
}
namespace Fusion {
class NetworkProjectConfig;
}
namespace GlobalNamespace {
struct NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Fusion {
class NetworkProjectConfigAsset;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkProjectConfigAsset*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkProjectConfigAsset*, "Fusion", "NetworkProjectConfigAsset");
// [ScriptHelp]
// [FusionGlobalScriptableObject("Assets/Photon/Fusion/Resources/NetworkProjectConfig.fusion", DefaultContentsGeneratorMethod = "GenerateDefaultContents")]
// Dependencies Fusion.FusionGlobalScriptableObject`1<T>, Fusion.NetworkPrefabTableOptions, Fusion.NetworkProjectConfigAsset::SerializableSimulationBehaviourMeta
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkProjectConfigAsset
class CORDL_TYPE NetworkProjectConfigAsset : public ::Fusion::FusionGlobalScriptableObject_1<::UnityW<::Fusion::NetworkProjectConfigAsset>> {
public:
// Declarations
using SerializableSimulationBehaviourMeta = ::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta;

/// @brief Field BehaviourMeta, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BehaviourMeta, put=__cordl_internal_set_BehaviourMeta)) ::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta>  BehaviourMeta;

/// @brief Field Config, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::Fusion::NetworkProjectConfig*  Config;

/// @brief Field PrefabOptions, offset 0x30, size 0x2 
 __declspec(property(get=__cordl_internal_get_PrefabOptions, put=__cordl_internal_set_PrefabOptions)) ::Fusion::NetworkPrefabTableOptions  PrefabOptions;

/// @brief Field Prefabs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prefabs, put=__cordl_internal_set_Prefabs)) ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  Prefabs;

/// @brief Method GenerateDefaultContents, addr 0x5fd95c4, size 0x58, virtual false, abstract: false, final false
static inline ::StringW GenerateDefaultContents() ;

static inline ::Fusion::NetworkProjectConfigAsset* New_ctor() ;

/// @brief Method OnDisable, addr 0x5fd9538, size 0x8c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5fd908c, size 0x4ac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TryGetGlobal, addr 0x5fd9004, size 0x48, virtual false, abstract: false, final false
static inline bool TryGetGlobal(::by_ref<::Fusion::NetworkProjectConfigAsset*>  global) ;

/// @brief Method UnloadGlobal, addr 0x5fd8700, size 0x40, virtual false, abstract: false, final false
static inline void UnloadGlobal() ;

constexpr ::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta> const& __cordl_internal_get_BehaviourMeta() const;

constexpr ::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta>& __cordl_internal_get_BehaviourMeta() ;

constexpr ::Fusion::NetworkProjectConfig* const& __cordl_internal_get_Config() const;

constexpr ::Fusion::NetworkProjectConfig*& __cordl_internal_get_Config() ;

constexpr ::Fusion::NetworkPrefabTableOptions const& __cordl_internal_get_PrefabOptions() const;

constexpr ::Fusion::NetworkPrefabTableOptions& __cordl_internal_get_PrefabOptions() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>* const& __cordl_internal_get_Prefabs() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*& __cordl_internal_get_Prefabs() ;

constexpr void __cordl_internal_set_BehaviourMeta(::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta>  value) ;

constexpr void __cordl_internal_set_Config(::Fusion::NetworkProjectConfig*  value) ;

constexpr void __cordl_internal_set_PrefabOptions(::Fusion::NetworkPrefabTableOptions  value) ;

constexpr void __cordl_internal_set_Prefabs(::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  value) ;

/// @brief Method .ctor, addr 0x5fd961c, size 0x184, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Global, addr 0x5fd86bc, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::Fusion::NetworkProjectConfigAsset> get_Global() ;

/// @brief Method get_IsGlobalLoaded, addr 0x5fd904c, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsGlobalLoaded() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkProjectConfigAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkProjectConfigAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkProjectConfigAsset(NetworkProjectConfigAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkProjectConfigAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkProjectConfigAsset(NetworkProjectConfigAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19251};

/// [SerializeField]
/// [DrawInline]
/// @brief Field Config, offset: 0x20, size: 0x8, def value: None
 ::Fusion::NetworkProjectConfig*  ___Config;

/// [ResolveNetworkPrefabSource]
/// [SerializeReference]
/// [HideArrayElementLabel]
/// [InlineHelp]
/// @brief Field Prefabs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::INetworkPrefabSource*>*  ___Prefabs;

/// @brief Field PrefabOptions, offset: 0x30, size: 0x2, def value: None
 ::Fusion::NetworkPrefabTableOptions  ___PrefabOptions;

/// [ReadOnly]
/// [InlineHelp]
/// [SerializeField]
/// @brief Field BehaviourMeta, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetworkProjectConfigAsset_SerializableSimulationBehaviourMeta>  ___BehaviourMeta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkProjectConfigAsset, ___Config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfigAsset, ___Prefabs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfigAsset, ___PrefabOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkProjectConfigAsset, ___BehaviourMeta) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkProjectConfigAsset) == 0x40, "Size mismatch!");

} // namespace end def Fusion
