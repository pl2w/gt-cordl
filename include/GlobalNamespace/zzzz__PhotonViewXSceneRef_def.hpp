#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonViewXSceneRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PhotonViewXSceneRef)
namespace Photon::Pun {
class PhotonView;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotonViewXSceneRef;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonViewXSceneRef*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonViewXSceneRef*, "", "PhotonViewXSceneRef");
// Dependencies UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonViewXSceneRef
class CORDL_TYPE PhotonViewXSceneRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field reference, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_reference, put=__cordl_internal_set_reference)) ::GlobalNamespace::XSceneRef  reference;

static inline ::GlobalNamespace::PhotonViewXSceneRef* New_ctor() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_reference() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_reference() ;

constexpr void __cordl_internal_set_reference(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x56b983c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_photonView, addr 0x56b97d4, size 0x68, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Pun::PhotonView> get_photonView() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonViewXSceneRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewXSceneRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonViewXSceneRef(PhotonViewXSceneRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewXSceneRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonViewXSceneRef(PhotonViewXSceneRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{964};

/// [SerializeField]
/// @brief Field reference, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___reference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonViewXSceneRef, ___reference) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonViewXSceneRef) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
