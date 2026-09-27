#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionPlayerProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionPlayerProperties)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionary_2;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
class FusionPlayerProperties_PlayerAttributeOnChanged;
}
namespace GlobalNamespace {
struct FusionPlayerProperties_PlayerInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FusionPlayerProperties;
}
namespace GlobalNamespace {
class FusionPlayerProperties_PlayerAttributeOnChanged;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FusionPlayerProperties*);
MARK_REF_T(::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionPlayerProperties*, "", "FusionPlayerProperties");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*, "", "FusionPlayerProperties/PlayerAttributeOnChanged");
// [NetworkBehaviourWeaved(0)]
// Dependencies Fusion.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionPlayerProperties
class CORDL_TYPE FusionPlayerProperties : public ::Fusion::NetworkBehaviour {
public:
// Declarations
using PlayerAttributeOnChanged = ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged;

using PlayerInfo = ::GlobalNamespace::FusionPlayerProperties_PlayerInfo;

 __declspec(property(get=get_PlayerProperties)) ::GlobalNamespace::FusionPlayerProperties_PlayerInfo  PlayerProperties;

/// @brief [Capacity(20)]
 __declspec(property(get=get_netPlayerAttributes)) ::Fusion::NetworkDictionary_2<::Fusion::PlayerRef,::GlobalNamespace::FusionPlayerProperties_PlayerInfo>  netPlayerAttributes;

/// @brief Field playerAttributeOnChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerAttributeOnChanged, put=__cordl_internal_set_playerAttributeOnChanged)) ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*  playerAttributeOnChanged;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x56d8494, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x56d8498, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetDisplayName, addr 0x56d7dd4, size 0x100, virtual false, abstract: false, final false
inline ::StringW GetDisplayName(::Fusion::PlayerRef  player) ;

/// @brief Method GetLocalDisplayName, addr 0x56d7ed4, size 0x134, virtual false, abstract: false, final false
inline ::StringW GetLocalDisplayName() ;

/// @brief Method GetProperty, addr 0x56d8008, size 0x19c, virtual false, abstract: false, final false
inline bool GetProperty(::Fusion::PlayerRef  player, ::StringW  propertyName, ::by_ref<::StringW>  propertyValue) ;

static inline ::GlobalNamespace::FusionPlayerProperties* New_ctor() ;

/// @brief Method OnAttributesChanged, addr 0x56d77ec, size 0x1c, virtual false, abstract: false, final false
inline void OnAttributesChanged() ;

/// @brief Method PlayerHasEntry, addr 0x56d8234, size 0x68, virtual false, abstract: false, final false
inline bool PlayerHasEntry(::Fusion::PlayerRef  player) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)7, InvokeLocal = true, TickAligned = true)]
/// @brief Method RPC_UpdatePlayerAttributes, addr 0x56d7808, size 0x4c0, virtual false, abstract: false, final false
inline void RPC_UpdatePlayerAttributes(::GlobalNamespace::FusionPlayerProperties_PlayerInfo  newInfo, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_UpdatePlayerAttributes@Invoker, addr 0x56d849c, size 0x130, virtual false, abstract: false, final false
static inline void RPC_UpdatePlayerAttributes@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method RemovePlayerEntry, addr 0x56d829c, size 0x1f0, virtual false, abstract: false, final false
inline void RemovePlayerEntry(::Fusion::PlayerRef  player) ;

/// @brief Method Spawned, addr 0x56d7d10, size 0xc4, virtual true, abstract: false, final false
inline void Spawned() ;

constexpr ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged* const& __cordl_internal_get_playerAttributeOnChanged() const;

constexpr ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*& __cordl_internal_get_playerAttributeOnChanged() ;

constexpr void __cordl_internal_set_playerAttributeOnChanged(::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*  value) ;

/// @brief Method .ctor, addr 0x56d848c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayerProperties, addr 0x56d7724, size 0xc8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FusionPlayerProperties_PlayerInfo get_PlayerProperties() ;

/// @brief Method get_netPlayerAttributes, addr 0x56d7714, size 0x10, virtual false, abstract: false, final false
inline ::Fusion::NetworkDictionary_2<::Fusion::PlayerRef,::GlobalNamespace::FusionPlayerProperties_PlayerInfo> get_netPlayerAttributes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionPlayerProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionPlayerProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionPlayerProperties(FusionPlayerProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionPlayerProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionPlayerProperties(FusionPlayerProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1082};

/// @brief Field playerAttributeOnChanged, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*  ___playerAttributeOnChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionPlayerProperties, ___playerAttributeOnChanged) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionPlayerProperties) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionPlayerProperties/PlayerAttributeOnChanged
class CORDL_TYPE FusionPlayerProperties_PlayerAttributeOnChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56d86c4, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56d86e0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56d86b0, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56d8614, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionPlayerProperties_PlayerAttributeOnChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionPlayerProperties_PlayerAttributeOnChanged", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionPlayerProperties_PlayerAttributeOnChanged(FusionPlayerProperties_PlayerAttributeOnChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionPlayerProperties_PlayerAttributeOnChanged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionPlayerProperties_PlayerAttributeOnChanged(FusionPlayerProperties_PlayerAttributeOnChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1081};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
