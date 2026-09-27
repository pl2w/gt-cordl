#pragma once
// IWYU pragma private; include "GorillaTagScripts/EnvItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvItem)
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace GorillaTagScripts {
class EnvItem;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::EnvItem*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::EnvItem*, "GorillaTagScripts", "EnvItem");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.EnvItem
class CORDL_TYPE EnvItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field spawnedByPhotonViewId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnedByPhotonViewId, put=__cordl_internal_set_spawnedByPhotonViewId)) int32_t  spawnedByPhotonViewId;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

static inline ::GorillaTagScripts::EnvItem* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bb93a8, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bb93a4, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPhotonInstantiate, addr 0x5bb93ac, size 0x68, virtual true, abstract: false, final true
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

constexpr int32_t const& __cordl_internal_get_spawnedByPhotonViewId() const;

constexpr int32_t& __cordl_internal_get_spawnedByPhotonViewId() ;

constexpr void __cordl_internal_set_spawnedByPhotonViewId(int32_t  value) ;

/// @brief Method .ctor, addr 0x5bb9414, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvItem(EnvItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvItem(EnvItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3971};

/// @brief Field spawnedByPhotonViewId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___spawnedByPhotonViewId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::EnvItem, ___spawnedByPhotonViewId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::EnvItem) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
