#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/FusionNetworkBootstrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__NetworkBootstrapperParams_def.hpp"
CORDL_MODULE_EXPORT(FusionNetworkBootstrapper)
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
class FusionMessenger;
}
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
class FusionNetworkData;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct PlatformInfo;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class FusionNetworkBootstrapper;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper*, "Meta.XR.MultiplayerBlocks.Fusion", "FusionNetworkBootstrapper");
// [NetworkBehaviourWeaved(0)]
// Dependencies Fusion.NetworkBehaviour, Meta.XR.MultiplayerBlocks.Shared.NetworkBootstrapperParams
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.FusionNetworkBootstrapper
class CORDL_TYPE FusionNetworkBootstrapper : public ::Fusion::NetworkBehaviour {
public:
// Declarations
/// @brief Field _params, offset 0x98, size 0x38 
 __declspec(property(get=__cordl_internal_get__params, put=__cordl_internal_set__params)) ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams  _params;

/// @brief Field anchorPrefab, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorPrefab, put=__cordl_internal_set_anchorPrefab)) ::UnityW<::UnityEngine::GameObject>  anchorPrefab;

/// @brief Field networkData, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkData, put=__cordl_internal_set_networkData)) ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData>  networkData;

/// @brief Field networkMessenger, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkMessenger, put=__cordl_internal_set_networkMessenger)) ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger>  networkMessenger;

/// @brief Method Awake, addr 0x9f59da8, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x9f5a0b8, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x9f5a0bc, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper* New_ctor() ;

/// @brief Method OnColocationReady, addr 0x9f59f28, size 0xa4, virtual false, abstract: false, final false
inline void OnColocationReady() ;

/// @brief Method Spawned, addr 0x9f59ea8, size 0x80, virtual true, abstract: false, final false
inline void Spawned() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__4_0, addr 0x9f59fd4, size 0x90, virtual false, abstract: false, final false
inline void _Awake_b__4_0() ;

/// [CompilerGenerated]
/// @brief Method <Spawned>b__5_0, addr 0x9f5a064, size 0x54, virtual false, abstract: false, final false
inline void _Spawned_b__5_0(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo  info) ;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams const& __cordl_internal_get__params() const;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams& __cordl_internal_get__params() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_anchorPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_anchorPrefab() ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData> const& __cordl_internal_get_networkData() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData>& __cordl_internal_get_networkData() ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger> const& __cordl_internal_get_networkMessenger() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger>& __cordl_internal_get_networkMessenger() ;

constexpr void __cordl_internal_set__params(::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams  value) ;

constexpr void __cordl_internal_set_anchorPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_networkData(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData>  value) ;

constexpr void __cordl_internal_set_networkMessenger(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger>  value) ;

/// @brief Method .ctor, addr 0x9f59fcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionNetworkBootstrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkBootstrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionNetworkBootstrapper(FusionNetworkBootstrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkBootstrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionNetworkBootstrapper(FusionNetworkBootstrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31167};

/// [SerializeField]
/// @brief Field anchorPrefab, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___anchorPrefab;

/// [SerializeField]
/// @brief Field networkData, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData>  ___networkData;

/// [SerializeField]
/// @brief Field networkMessenger, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger>  ___networkMessenger;

/// @brief Field _params, offset: 0x98, size: 0x38, def value: None
 ::Meta::XR::MultiplayerBlocks::Shared::NetworkBootstrapperParams  ____params;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper, ___anchorPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper, ___networkData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper, ___networkMessenger) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper, ____params) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::FusionNetworkBootstrapper) == 0xd0, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
