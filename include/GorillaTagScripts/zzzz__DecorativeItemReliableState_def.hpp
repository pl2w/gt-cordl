#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItemReliableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(DecorativeItemReliableState)
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GorillaTagScripts {
class DecorativeItemReliableState;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::DecorativeItemReliableState*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::DecorativeItemReliableState*, "GorillaTagScripts", "DecorativeItemReliableState");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.DecorativeItemReliableState
class CORDL_TYPE DecorativeItemReliableState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isSnapped, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSnapped, put=__cordl_internal_set_isSnapped)) bool  isSnapped;

/// @brief Field respawnPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_respawnPosition, put=__cordl_internal_set_respawnPosition)) ::UnityEngine::Vector3  respawnPosition;

/// @brief Field respawnRotation, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_respawnRotation, put=__cordl_internal_set_respawnRotation)) ::UnityEngine::Quaternion  respawnRotation;

/// @brief Field snapPosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_snapPosition, put=__cordl_internal_set_snapPosition)) ::UnityEngine::Vector3  snapPosition;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

static inline ::GorillaTagScripts::DecorativeItemReliableState* New_ctor() ;

/// @brief Method OnPhotonSerializeView, addr 0x5bb714c, size 0x418, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr bool const& __cordl_internal_get_isSnapped() const;

constexpr bool& __cordl_internal_get_isSnapped() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_respawnPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_respawnPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_respawnRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_respawnRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_snapPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_snapPosition() ;

constexpr void __cordl_internal_set_isSnapped(bool  value) ;

constexpr void __cordl_internal_set_respawnPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_respawnRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_snapPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5bb7564, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecorativeItemReliableState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecorativeItemReliableState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecorativeItemReliableState(DecorativeItemReliableState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecorativeItemReliableState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecorativeItemReliableState(DecorativeItemReliableState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3969};

/// @brief Field isSnapped, offset: 0x20, size: 0x1, def value: None
 bool  ___isSnapped;

/// @brief Field snapPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___snapPosition;

/// @brief Field respawnPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___respawnPosition;

/// @brief Field respawnRotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___respawnRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::DecorativeItemReliableState, ___isSnapped) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemReliableState, ___snapPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemReliableState, ___respawnPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemReliableState, ___respawnRotation) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::DecorativeItemReliableState) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts
