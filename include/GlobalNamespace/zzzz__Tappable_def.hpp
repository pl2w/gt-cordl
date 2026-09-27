#pragma once
// IWYU pragma private; include "GlobalNamespace/Tappable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Tappable)
namespace GlobalNamespace {
class IClickable;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class TappableManager;
}
// Forward declare root types
namespace GlobalNamespace {
class Tappable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Tappable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tappable*, "", "Tappable");
// Dependencies Photon.Pun.RpcTarget, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Tappable
class CORDL_TYPE Tappable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsLocalOnly)) bool  IsLocalOnly;

/// @brief Field localOnly, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_localOnly, put=__cordl_internal_set_localOnly)) bool  localOnly;

/// @brief Field manager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::TappableManager>  manager;

/// @brief Field overrideTapCooldown, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideTapCooldown, put=__cordl_internal_set_overrideTapCooldown)) bool  overrideTapCooldown;

/// @brief Field rpcTarget, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rpcTarget, put=__cordl_internal_set_rpcTarget)) ::Photon::Pun::RpcTarget  rpcTarget;

/// @brief Field staticId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticId, put=__cordl_internal_set_staticId)) ::StringW  staticId;

/// @brief Field tappableId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_tappableId, put=__cordl_internal_set_tappableId)) int32_t  tappableId;

/// @brief Field useStaticId, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useStaticId, put=__cordl_internal_set_useStaticId)) bool  useStaticId;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method CalculateId, addr 0x595f39c, size 0x290, virtual false, abstract: false, final false
inline void CalculateId(bool  force) ;

/// @brief Method CanTap, addr 0x595f8f0, size 0x8, virtual true, abstract: false, final false
inline bool CanTap(bool  isLeftHand) ;

/// @brief Method Click, addr 0x595fb4c, size 0x8, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

/// @brief Method EdRecalculateId, addr 0x595fb3c, size 0x8, virtual false, abstract: false, final false
inline void EdRecalculateId() ;

static inline ::GlobalNamespace::Tappable* New_ctor() ;

/// @brief Method OnDisable, addr 0x595f798, size 0x54, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x595f62c, size 0x68, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x594fc04, size 0x1b4, virtual false, abstract: false, final false
inline void OnGrab() ;

/// @brief Method OnGrabLocal, addr 0x595fb34, size 0x4, virtual true, abstract: false, final false
inline void OnGrabLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

/// @brief Method OnRelease, addr 0x594ff14, size 0x1ac, virtual false, abstract: false, final false
inline void OnRelease() ;

/// @brief Method OnReleaseLocal, addr 0x595fb38, size 0x4, virtual true, abstract: false, final false
inline void OnReleaseLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

/// @brief Method OnTap, addr 0x595f8f8, size 0x8, virtual false, abstract: false, final false
inline void OnTap() ;

/// @brief Method OnTap, addr 0x595f900, size 0x230, virtual false, abstract: false, final false
inline void OnTap(float_t  tapStrength) ;

/// @brief Method OnTapLocal, addr 0x595fb30, size 0x4, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method OnValidate, addr 0x595fb44, size 0x8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Validate, addr 0x595f394, size 0x8, virtual false, abstract: false, final false
inline void Validate() ;

constexpr bool const& __cordl_internal_get_localOnly() const;

constexpr bool& __cordl_internal_get_localOnly() ;

constexpr ::UnityW<::GlobalNamespace::TappableManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::GlobalNamespace::TappableManager>& __cordl_internal_get_manager() ;

constexpr bool const& __cordl_internal_get_overrideTapCooldown() const;

constexpr bool& __cordl_internal_get_overrideTapCooldown() ;

constexpr ::Photon::Pun::RpcTarget const& __cordl_internal_get_rpcTarget() const;

constexpr ::Photon::Pun::RpcTarget& __cordl_internal_get_rpcTarget() ;

constexpr ::StringW const& __cordl_internal_get_staticId() const;

constexpr ::StringW& __cordl_internal_get_staticId() ;

constexpr int32_t const& __cordl_internal_get_tappableId() const;

constexpr int32_t& __cordl_internal_get_tappableId() ;

constexpr bool const& __cordl_internal_get_useStaticId() const;

constexpr bool& __cordl_internal_get_useStaticId() ;

constexpr void __cordl_internal_set_localOnly(bool  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::TappableManager>  value) ;

constexpr void __cordl_internal_set_overrideTapCooldown(bool  value) ;

constexpr void __cordl_internal_set_rpcTarget(::Photon::Pun::RpcTarget  value) ;

constexpr void __cordl_internal_set_staticId(::StringW  value) ;

constexpr void __cordl_internal_set_tappableId(int32_t  value) ;

constexpr void __cordl_internal_set_useStaticId(bool  value) ;

/// @brief Method .ctor, addr 0x595fb54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLocalOnly, addr 0x595f38c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLocalOnly() ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tappable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tappable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tappable(Tappable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tappable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tappable(Tappable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2354};

/// @brief Field tappableId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___tappableId;

/// @brief Field staticId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___staticId;

/// @brief Field useStaticId, offset: 0x30, size: 0x1, def value: None
 bool  ___useStaticId;

/// [Tooltip("If true, tap cooldown will be ignored.  Tapping will be allowed/disallowed based on result of CanTap()")]
/// @brief Field overrideTapCooldown, offset: 0x31, size: 0x1, def value: None
 bool  ___overrideTapCooldown;

/// [Space]
/// @brief Field manager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TappableManager>  ___manager;

/// @brief Field rpcTarget, offset: 0x40, size: 0x4, def value: None
 ::Photon::Pun::RpcTarget  ___rpcTarget;

/// [Tooltip("If true, OnTapped only fires on the client of the player who initiated the tap. Offline play counts as local, so the event still fires when not in a room.")]
/// [SerializeField]
/// @brief Field localOnly, offset: 0x44, size: 0x1, def value: None
 bool  ___localOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tappable, ___tappableId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tappable, ___staticId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tappable, ___useStaticId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tappable, ___overrideTapCooldown) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tappable, ___manager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tappable, ___rpcTarget) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tappable, ___localOnly) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tappable) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
