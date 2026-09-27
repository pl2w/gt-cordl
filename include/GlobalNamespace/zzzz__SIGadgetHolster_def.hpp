#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetHolster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetHolster_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetHolster)
namespace GlobalNamespace {
class I_SIDisruptable;
}
namespace GlobalNamespace {
struct SIGadgetHolster_State;
}
namespace GlobalNamespace {
class SuperInfectionSnapPoint;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetHolster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetHolster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetHolster*, "", "SIGadgetHolster");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// Dependencies SIGadget, SIGadgetHolster::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetHolster
class CORDL_TYPE SIGadgetHolster : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetHolster_State;

/// @brief Field gtPlayer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_gtPlayer, put=__cordl_internal_set_gtPlayer)) ::UnityW<::GorillaLocomotion::GTPlayer>  gtPlayer;

/// @brief Field imageMask, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_imageMask, put=__cordl_internal_set_imageMask)) ::UnityW<::UnityEngine::UI::Image>  imageMask;

/// @brief Field snapPoints, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapPoints, put=__cordl_internal_set_snapPoints)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  snapPoints;

/// @brief Field state, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetHolster_State  state;

/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr operator  ::GlobalNamespace::I_SIDisruptable*() noexcept;

/// @brief Method Disrupt, addr 0x58dff90, size 0x4, virtual true, abstract: false, final true
inline void Disrupt(float_t  disruptTime) ;

static inline ::GlobalNamespace::SIGadgetHolster* New_ctor() ;

/// @brief Method Start, addr 0x58dfefc, size 0x94, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_gtPlayer() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_gtPlayer() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_imageMask() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_imageMask() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* const& __cordl_internal_get_snapPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*& __cordl_internal_get_snapPoints() ;

constexpr ::GlobalNamespace::SIGadgetHolster_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetHolster_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_gtPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_imageMask(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_snapPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetHolster_State  value) ;

/// @brief Method .ctor, addr 0x58dff94, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* i___GlobalNamespace__I_SIDisruptable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetHolster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetHolster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetHolster(SIGadgetHolster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetHolster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetHolster(SIGadgetHolster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{270};

/// [SerializeField]
/// @brief Field imageMask, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___imageMask;

/// @brief Field snapPoints, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  ___snapPoints;

/// @brief Field state, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetHolster_State  ___state;

/// @brief Field gtPlayer, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___gtPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetHolster, ___imageMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolster, ___snapPoints) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolster, ___state) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetHolster, ___gtPlayer) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetHolster) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
