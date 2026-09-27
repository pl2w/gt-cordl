#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSystemConfig_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkWrapper)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkSystem;
}
namespace GorillaNetworking {
class SO_NetworkVoiceSettings;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkWrapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkWrapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkWrapper*, "", "NetworkWrapper");
// Dependencies NetworkSystemConfig, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkWrapper
class CORDL_TYPE NetworkWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field VoiceSettings, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceSettings, put=__cordl_internal_set_VoiceSettings)) ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  VoiceSettings;

/// @brief Field activeNetworkSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeNetworkSystem, put=__cordl_internal_set_activeNetworkSystem)) ::UnityW<::GlobalNamespace::NetworkSystem>  activeNetworkSystem;

/// @brief Field devNetworkRegionNames, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_devNetworkRegionNames, put=__cordl_internal_set_devNetworkRegionNames)) ::ArrayW<::StringW>  devNetworkRegionNames;

/// @brief Field netSysConfig, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_netSysConfig, put=__cordl_internal_set_netSysConfig)) ::GlobalNamespace::NetworkSystemConfig  netSysConfig;

/// @brief Field networkRegionNames, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkRegionNames, put=__cordl_internal_set_networkRegionNames)) ::ArrayW<::StringW>  networkRegionNames;

/// @brief Field playerCountTextRef, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCountTextRef, put=__cordl_internal_set_playerCountTextRef)) ::UnityW<::UnityEngine::UI::Text>  playerCountTextRef;

/// @brief Field stateTextRef, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateTextRef, put=__cordl_internal_set_stateTextRef)) ::UnityW<::UnityEngine::UI::Text>  stateTextRef;

/// @brief Field titleRef, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleRef, put=__cordl_internal_set_titleRef)) ::UnityW<::UnityEngine::UI::Text>  titleRef;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method AutoInstantiate, addr 0x56ec924, size 0xb4, virtual false, abstract: false, final false
static inline void AutoInstantiate() ;

/// @brief Method Awake, addr 0x56ec9d8, size 0x320, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::NetworkWrapper* New_ctor() ;

/// @brief Method UpdatePlayerCount, addr 0x56eccfc, size 0x218, virtual false, abstract: false, final false
inline void UpdatePlayerCount() ;

/// @brief Method UpdatePlayerCountWrapper, addr 0x56eccf8, size 0x4, virtual false, abstract: false, final false
inline void UpdatePlayerCountWrapper(::GlobalNamespace::NetPlayer*  player) ;

constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings> const& __cordl_internal_get_VoiceSettings() const;

constexpr ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>& __cordl_internal_get_VoiceSettings() ;

constexpr ::UnityW<::GlobalNamespace::NetworkSystem> const& __cordl_internal_get_activeNetworkSystem() const;

constexpr ::UnityW<::GlobalNamespace::NetworkSystem>& __cordl_internal_get_activeNetworkSystem() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_devNetworkRegionNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_devNetworkRegionNames() ;

constexpr ::GlobalNamespace::NetworkSystemConfig const& __cordl_internal_get_netSysConfig() const;

constexpr ::GlobalNamespace::NetworkSystemConfig& __cordl_internal_get_netSysConfig() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_networkRegionNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_networkRegionNames() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerCountTextRef() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerCountTextRef() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_stateTextRef() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_stateTextRef() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_titleRef() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_titleRef() ;

constexpr void __cordl_internal_set_VoiceSettings(::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  value) ;

constexpr void __cordl_internal_set_activeNetworkSystem(::UnityW<::GlobalNamespace::NetworkSystem>  value) ;

constexpr void __cordl_internal_set_devNetworkRegionNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_netSysConfig(::GlobalNamespace::NetworkSystemConfig  value) ;

constexpr void __cordl_internal_set_networkRegionNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_playerCountTextRef(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_stateTextRef(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_titleRef(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x56ecf14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkWrapper(NetworkWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkWrapper(NetworkWrapper const& ) = delete;

/// @brief Field WrapperResourcePath offset 0xffffffff size 0x8
static constexpr ::ConstString  WrapperResourcePath{u"P_NetworkWrapper"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1138};

/// [HideInInspector]
/// @brief Field activeNetworkSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystem>  ___activeNetworkSystem;

/// @brief Field titleRef, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___titleRef;

/// [Header("NetSys settings")]
/// @brief Field netSysConfig, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::NetworkSystemConfig  ___netSysConfig;

/// @brief Field networkRegionNames, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___networkRegionNames;

/// @brief Field devNetworkRegionNames, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___devNetworkRegionNames;

/// [Header("Debug output refs")]
/// @brief Field stateTextRef, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___stateTextRef;

/// @brief Field playerCountTextRef, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerCountTextRef;

/// [SerializeField]
/// @brief Field VoiceSettings, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::SO_NetworkVoiceSettings>  ___VoiceSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___activeNetworkSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___titleRef) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___netSysConfig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___networkRegionNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___devNetworkRegionNames) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___stateTextRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___playerCountTextRef) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkWrapper, ___VoiceSettings) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkWrapper) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
