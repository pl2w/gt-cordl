#pragma once
// IWYU pragma private; include "GorillaTagScripts/NetworkedPlayerColourNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(NetworkedPlayerColourNotifier)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GorillaTagScripts {
class NetworkedPlayerColourNotifier;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::NetworkedPlayerColourNotifier*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::NetworkedPlayerColourNotifier*, "GorillaTagScripts", "NetworkedPlayerColourNotifier");
// Dependencies System.Object, UnityEngine.Color
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.NetworkedPlayerColourNotifier
class CORDL_TYPE NetworkedPlayerColourNotifier : public ::System::Object {
public:
// Declarations
/// @brief Field m_initialNetColour, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_initialNetColour, put=setStaticF_m_initialNetColour)) ::UnityEngine::Color  m_initialNetColour;

/// @brief Field m_localRig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_localRig, put=setStaticF_m_localRig)) ::UnityW<::GlobalNamespace::VRRig>  m_localRig;

/// @brief Field m_localRigContainer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_localRigContainer, put=setStaticF_m_localRigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  m_localRigContainer;

/// @brief Field m_netColourDirty, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_netColourDirty, put=setStaticF_m_netColourDirty)) bool  m_netColourDirty;

/// @brief Method NotifyOthers, addr 0x5bc4dc8, size 0x27c, virtual false, abstract: false, final false
static inline void NotifyOthers() ;

/// @brief Method OnJoinedRoom, addr 0x5bc539c, size 0x70, virtual false, abstract: false, final false
static inline void OnJoinedRoom() ;

/// @brief Method OnLocalColourChanged, addr 0x5bc5044, size 0xec, virtual false, abstract: false, final false
static inline void OnLocalColourChanged(::UnityEngine::Color  color) ;

/// @brief Method OnPlayerJoinedRoom, addr 0x5bc5130, size 0x26c, virtual false, abstract: false, final false
static inline void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetLocalRigReference, addr 0x5bc4cc8, size 0x100, virtual false, abstract: false, final false
static inline void SetLocalRigReference(::GlobalNamespace::RigContainer*  rig) ;

static inline ::UnityEngine::Color getStaticF_m_initialNetColour() ;

static inline ::UnityW<::GlobalNamespace::VRRig> getStaticF_m_localRig() ;

static inline ::UnityW<::GlobalNamespace::RigContainer> getStaticF_m_localRigContainer() ;

static inline bool getStaticF_m_netColourDirty() ;

static inline void setStaticF_m_initialNetColour(::UnityEngine::Color  value) ;

static inline void setStaticF_m_localRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

static inline void setStaticF_m_localRigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

static inline void setStaticF_m_netColourDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedPlayerColourNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedPlayerColourNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedPlayerColourNotifier(NetworkedPlayerColourNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedPlayerColourNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedPlayerColourNotifier(NetworkedPlayerColourNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::NetworkedPlayerColourNotifier) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts
