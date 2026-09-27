#pragma once
// IWYU pragma private; include "Photon/Pun/MonoBehaviourPun.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonoBehaviourPun)
namespace Photon::Pun {
class PhotonView;
}
// Forward declare root types
namespace Photon::Pun {
class MonoBehaviourPun;
}
// Write type traits
MARK_REF_T(::Photon::Pun::MonoBehaviourPun*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::MonoBehaviourPun*, "Photon.Pun", "MonoBehaviourPun");
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.MonoBehaviourPun
class CORDL_TYPE MonoBehaviourPun : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field pvCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pvCache, put=__cordl_internal_set_pvCache)) ::UnityW<::Photon::Pun::PhotonView>  pvCache;

static inline ::Photon::Pun::MonoBehaviourPun* New_ctor() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_pvCache() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_pvCache() ;

constexpr void __cordl_internal_set_pvCache(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0xa72b73c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_photonView, addr 0xa72b6b4, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Pun::PhotonView> get_photonView() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviourPun() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourPun", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourPun(MonoBehaviourPun && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourPun", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourPun(MonoBehaviourPun const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29713};

/// @brief Field pvCache, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___pvCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::MonoBehaviourPun, ___pvCache) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::MonoBehaviourPun) == 0x28, "Size mismatch!");

} // namespace end def Photon::Pun
