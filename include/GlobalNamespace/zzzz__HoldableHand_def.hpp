#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
CORDL_MODULE_EXPORT(HoldableHand)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HoldableHand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoldableHand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoldableHand*, "", "HoldableHand");
// Dependencies HoldableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoldableHand
class CORDL_TYPE HoldableHand : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
 __declspec(property(get=get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  Rig;

/// @brief Field interactionPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPoint, put=__cordl_internal_set_interactionPoint)) ::UnityW<::GlobalNamespace::InteractionPoint>  interactionPoint;

/// @brief Field isBody, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBody, put=__cordl_internal_set_isBody)) bool  isBody;

/// @brief Field isLeftHand, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field myPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPlayer, put=__cordl_internal_set_myPlayer)) ::UnityW<::GlobalNamespace::VRRig>  myPlayer;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method ClearOtherGrabs, addr 0x5952c48, size 0x10c, virtual false, abstract: false, final false
inline void ClearOtherGrabs(bool  grabbedLeft) ;

/// @brief Method DropItemCleanup, addr 0x59531a8, size 0x18, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

static inline ::GlobalNamespace::HoldableHand* New_ctor() ;

/// @brief Method OnDisable, addr 0x59527e8, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59527dc, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x59528c4, size 0x384, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x59531a4, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x5952d54, size 0x450, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method SliceUpdate, addr 0x59527f4, size 0xd0, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5952708, size 0xd4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_interactionPoint() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_interactionPoint() ;

constexpr bool const& __cordl_internal_get_isBody() const;

constexpr bool& __cordl_internal_get_isBody() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myPlayer() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myPlayer() ;

constexpr void __cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_isBody(bool  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_myPlayer(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x59531c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Rig, addr 0x5952700, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_Rig() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoldableHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoldableHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoldableHand(HoldableHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoldableHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoldableHand(HoldableHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2307};

/// [SerializeField]
/// @brief Field myPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myPlayer;

/// [SerializeField]
/// @brief Field isBody, offset: 0x28, size: 0x1, def value: None
 bool  ___isBody;

/// [SerializeField]
/// @brief Field isLeftHand, offset: 0x29, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field interactionPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___interactionPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoldableHand, ___myPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableHand, ___isBody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableHand, ___isLeftHand) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableHand, ___interactionPoint) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoldableHand) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
