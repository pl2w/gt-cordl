#pragma once
// IWYU pragma private; include "GlobalNamespace/LckEntitlementsNetworked.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckEntitlementsNetworked)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRigSerializer;
}
// Forward declare root types
namespace GlobalNamespace {
class LckEntitlementsNetworked;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckEntitlementsNetworked*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsNetworked*, "", "LckEntitlementsNetworked");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckEntitlementsNetworked
class CORDL_TYPE LckEntitlementsNetworked : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_rigNetworkController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rigNetworkController, put=__cordl_internal_set_m_rigNetworkController)) ::UnityW<::GlobalNamespace::VRRigSerializer>  m_rigNetworkController;

/// @brief Method Awake, addr 0x56c896c, size 0x188, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::LckEntitlementsNetworked* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56c8ce4, size 0xe4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSuccessfulSpawn, addr 0x56c8af4, size 0x1f0, virtual false, abstract: false, final false
inline void OnSuccessfulSpawn(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::RigContainer*>  rig, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>  info) ;

constexpr ::UnityW<::GlobalNamespace::VRRigSerializer> const& __cordl_internal_get_m_rigNetworkController() const;

constexpr ::UnityW<::GlobalNamespace::VRRigSerializer>& __cordl_internal_get_m_rigNetworkController() ;

constexpr void __cordl_internal_set_m_rigNetworkController(::UnityW<::GlobalNamespace::VRRigSerializer>  value) ;

/// @brief Method .ctor, addr 0x56c8dc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEntitlementsNetworked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsNetworked", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEntitlementsNetworked(LckEntitlementsNetworked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEntitlementsNetworked", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEntitlementsNetworked(LckEntitlementsNetworked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1030};

/// [SerializeField]
/// @brief Field m_rigNetworkController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigSerializer>  ___m_rigNetworkController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsNetworked, ___m_rigNetworkController) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsNetworked) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
