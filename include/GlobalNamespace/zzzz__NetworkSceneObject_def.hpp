#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSceneObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NetworkSceneObject)
namespace Photon::Pun {
class PhotonView;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkSceneObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkSceneObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSceneObject*, "", "NetworkSceneObject");
// [RequireComponent(typeof(Photon.Pun.PhotonView))]
// Dependencies Fusion.SimulationBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSceneObject
class CORDL_TYPE NetworkSceneObject : public ::Fusion::SimulationBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsMine)) bool  IsMine;

/// @brief Field photonView, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

static inline ::GlobalNamespace::NetworkSceneObject* New_ctor() ;

/// @brief Method OnDisable, addr 0x56e8b18, size 0xcc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56e8a4c, size 0xcc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterOnRunner, addr 0x56e8be4, size 0x10c, virtual false, abstract: false, final false
inline void RegisterOnRunner() ;

/// @brief Method RemoveFromRunner, addr 0x56e8cf0, size 0x10c, virtual false, abstract: false, final false
inline void RemoveFromRunner() ;

/// @brief Method Start, addr 0x56e89a8, size 0xa4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x56e8dfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsMine, addr 0x56e8990, size 0x18, virtual false, abstract: false, final false
inline bool get_IsMine() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneObject(NetworkSceneObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneObject(NetworkSceneObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1118};

/// @brief Field photonView, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSceneObject, ___photonView) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSceneObject) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
