#pragma once
// IWYU pragma private; include "com/AnotherAxiom/MonkeArcade/Joust/JoustPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(JoustPlayer)
// Forward declare root types
namespace com::AnotherAxiom::MonkeArcade::Joust {
class JoustPlayer;
}
// Write type traits
MARK_REF_T(::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*);
DEFINE_IL2CPP_CLASS(::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*, "com.AnotherAxiom.MonkeArcade.Joust", "JoustPlayer");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.RaycastHit2D, UnityEngine.Vector2
namespace com::AnotherAxiom::MonkeArcade::Joust {
// Is value type: false
// CS Name: com.AnotherAxiom.MonkeArcade.Joust.JoustPlayer
class CORDL_TYPE JoustPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field HSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_HSpeed, put=__cordl_internal_set_HSpeed)) float_t  HSpeed;

 __declspec(property(get=get_HorizontalSpeed, put=set_HorizontalSpeed)) float_t  HorizontalSpeed;

/// @brief Field flap, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_flap, put=__cordl_internal_set_flap)) bool  flap;

/// @brief Field raycastHitResults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycastHitResults, put=__cordl_internal_set_raycastHitResults)) ::ArrayW<::UnityEngine::RaycastHit2D>  raycastHitResults;

/// @brief Field velocity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector2  velocity;

/// @brief Method Flap, addr 0x5cd5540, size 0xc, virtual false, abstract: false, final false
inline void Flap() ;

/// @brief Method LateUpdate, addr 0x5cd5798, size 0x410, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer* New_ctor() ;

constexpr float_t const& __cordl_internal_get_HSpeed() const;

constexpr float_t& __cordl_internal_get_HSpeed() ;

constexpr bool const& __cordl_internal_get_flap() const;

constexpr bool& __cordl_internal_get_flap() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D> const& __cordl_internal_get_raycastHitResults() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D>& __cordl_internal_get_raycastHitResults() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_HSpeed(float_t  value) ;

constexpr void __cordl_internal_set_flap(bool  value) ;

constexpr void __cordl_internal_set_raycastHitResults(::ArrayW<::UnityEngine::RaycastHit2D>  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x5cd5ba8, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HorizontalSpeed, addr 0x5cd5788, size 0x8, virtual false, abstract: false, final false
inline float_t get_HorizontalSpeed() ;

/// @brief Method set_HorizontalSpeed, addr 0x5cd5790, size 0x8, virtual false, abstract: false, final false
inline void set_HorizontalSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoustPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoustPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoustPlayer(JoustPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoustPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoustPlayer(JoustPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4481};

/// @brief Field velocity, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___velocity;

/// @brief Field raycastHitResults, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit2D>  ___raycastHitResults;

/// @brief Field HSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___HSpeed;

/// @brief Field flap, offset: 0x34, size: 0x1, def value: None
 bool  ___flap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer, ___velocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer, ___raycastHitResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer, ___HSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer, ___flap) == 0x34, "Offset mismatch!");

static_assert(sizeof(::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer) == 0x38, "Size mismatch!");

} // namespace end def com::AnotherAxiom::MonkeArcade::Joust
