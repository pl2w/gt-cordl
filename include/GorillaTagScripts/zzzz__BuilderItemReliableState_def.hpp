#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderItemReliableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(BuilderItemReliableState)
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
class BuilderItemReliableState;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderItemReliableState*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderItemReliableState*, "GorillaTagScripts", "BuilderItemReliableState");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderItemReliableState
class CORDL_TYPE BuilderItemReliableState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dirty, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_dirty, put=__cordl_internal_set_dirty)) bool  dirty;

/// @brief Field leftHandAttachPos, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandAttachPos, put=__cordl_internal_set_leftHandAttachPos)) ::UnityEngine::Vector3  leftHandAttachPos;

/// @brief Field leftHandAttachRot, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftHandAttachRot, put=__cordl_internal_set_leftHandAttachRot)) ::UnityEngine::Quaternion  leftHandAttachRot;

/// @brief Field rightHandAttachPos, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandAttachPos, put=__cordl_internal_set_rightHandAttachPos)) ::UnityEngine::Vector3  rightHandAttachPos;

/// @brief Field rightHandAttachRot, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightHandAttachRot, put=__cordl_internal_set_rightHandAttachRot)) ::UnityEngine::Quaternion  rightHandAttachRot;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

static inline ::GorillaTagScripts::BuilderItemReliableState* New_ctor() ;

/// @brief Method OnPhotonSerializeView, addr 0x5b87688, size 0x518, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr bool const& __cordl_internal_get_dirty() const;

constexpr bool& __cordl_internal_get_dirty() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandAttachPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandAttachPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_leftHandAttachRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_leftHandAttachRot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandAttachPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandAttachPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rightHandAttachRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rightHandAttachRot() ;

constexpr void __cordl_internal_set_dirty(bool  value) ;

constexpr void __cordl_internal_set_leftHandAttachPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandAttachRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rightHandAttachPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHandAttachRot(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x5b87ba0, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderItemReliableState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderItemReliableState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderItemReliableState(BuilderItemReliableState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderItemReliableState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderItemReliableState(BuilderItemReliableState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3931};

/// @brief Field rightHandAttachPos, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandAttachPos;

/// @brief Field rightHandAttachRot, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rightHandAttachRot;

/// @brief Field leftHandAttachPos, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandAttachPos;

/// @brief Field leftHandAttachRot, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___leftHandAttachRot;

/// @brief Field dirty, offset: 0x58, size: 0x1, def value: None
 bool  ___dirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderItemReliableState, ___rightHandAttachPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItemReliableState, ___rightHandAttachRot) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItemReliableState, ___leftHandAttachPos) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItemReliableState, ___leftHandAttachRot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItemReliableState, ___dirty) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderItemReliableState) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts
