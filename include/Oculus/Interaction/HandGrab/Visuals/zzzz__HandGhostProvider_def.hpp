#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandGhostProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(HandGhostProvider)
namespace Oculus::Interaction::HandGrab::Visuals {
class HandGhost;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Visuals {
class HandGhostProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider*, "Oculus.Interaction.HandGrab.Visuals", "HandGhostProvider");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Pose Authoring/Hand Ghost Provider")]
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Interaction::HandGrab::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Visuals.HandGhostProvider
class CORDL_TYPE HandGhostProvider : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _leftHand, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  _leftHand;

/// @brief Field _rightHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  _rightHand;

/// @brief Method GetHand, addr 0xa4e5acc, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost> GetHand(::Oculus::Interaction::Input::Handedness  handedness) ;

static inline ::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider* New_ctor() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>& __cordl_internal_get__leftHand() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>& __cordl_internal_get__rightHand() ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  value) ;

/// @brief Method .ctor, addr 0xa4e5ae4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGhostProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGhostProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGhostProvider(HandGhostProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGhostProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGhostProvider(HandGhostProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16343};

/// [SerializeField]
/// @brief Field _leftHand, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  ____leftHand;

/// [SerializeField]
/// @brief Field _rightHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhost>  ____rightHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider, ____leftHand) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider, ____rightHand) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Visuals
