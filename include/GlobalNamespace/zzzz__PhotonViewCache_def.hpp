#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonViewCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PhotonViewCache)
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotonViewCache;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonViewCache*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonViewCache*, "", "PhotonViewCache");
// Dependencies Photon.Pun.PhotonView, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonViewCache
class CORDL_TYPE PhotonViewCache : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

/// @brief Field <Initialized>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field m_isRoomObject, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_isRoomObject, put=__cordl_internal_set_m_isRoomObject)) bool  m_isRoomObject;

/// @brief Field m_photonViews, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_photonViews, put=__cordl_internal_set_m_photonViews)) ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  m_photonViews;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

static inline ::GlobalNamespace::PhotonViewCache* New_ctor() ;

/// @brief Method Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate, addr 0x58f71f4, size 0x4, virtual true, abstract: false, final true
inline void Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_isRoomObject() const;

constexpr bool& __cordl_internal_get_m_isRoomObject() ;

constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> const& __cordl_internal_get_m_photonViews() const;

constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>& __cordl_internal_get_m_photonViews() ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_isRoomObject(bool  value) ;

constexpr void __cordl_internal_set_m_photonViews(::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  value) ;

/// @brief Method .ctor, addr 0x58f71f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x58f71e4, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x58f71ec, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonViewCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonViewCache(PhotonViewCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonViewCache(PhotonViewCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2131};

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// @brief Field m_photonViews, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  ___m_photonViews;

/// [SerializeField]
/// @brief Field m_isRoomObject, offset: 0x30, size: 0x1, def value: None
 bool  ___m_isRoomObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonViewCache, ____Initialized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonViewCache, ___m_photonViews) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonViewCache, ___m_isRoomObject) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonViewCache) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
