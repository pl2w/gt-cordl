#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallTeam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallTeam)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallTeam;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallTeam*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallTeam*, "", "MonkeBallTeam");
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallTeam
class CORDL_TYPE MonkeBallTeam : public ::System::Object {
public:
// Declarations
/// @brief Field ballLaunchAngleXRange, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballLaunchAngleXRange, put=__cordl_internal_set_ballLaunchAngleXRange)) ::UnityEngine::Vector2  ballLaunchAngleXRange;

/// @brief Field ballLaunchAngleYRange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballLaunchAngleYRange, put=__cordl_internal_set_ballLaunchAngleYRange)) ::UnityEngine::Vector2  ballLaunchAngleYRange;

/// @brief Field ballLaunchPosition, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballLaunchPosition, put=__cordl_internal_set_ballLaunchPosition)) ::UnityW<::UnityEngine::Transform>  ballLaunchPosition;

/// @brief Field ballLaunchVelocityRange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballLaunchVelocityRange, put=__cordl_internal_set_ballLaunchVelocityRange)) ::UnityEngine::Vector2  ballLaunchVelocityRange;

/// @brief Field ballStartLocation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballStartLocation, put=__cordl_internal_set_ballStartLocation)) ::UnityW<::UnityEngine::Transform>  ballStartLocation;

/// @brief Field color, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field score, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_score, put=__cordl_internal_set_score)) int32_t  score;

static inline ::GlobalNamespace::MonkeBallTeam* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ballLaunchAngleXRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ballLaunchAngleXRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ballLaunchAngleYRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ballLaunchAngleYRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ballLaunchPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ballLaunchPosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ballLaunchVelocityRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ballLaunchVelocityRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ballStartLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ballStartLocation() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr int32_t const& __cordl_internal_get_score() const;

constexpr int32_t& __cordl_internal_get_score() ;

constexpr void __cordl_internal_set_ballLaunchAngleXRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ballLaunchAngleYRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ballLaunchPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ballLaunchVelocityRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ballStartLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_score(int32_t  value) ;

/// @brief Method .ctor, addr 0x57aad54, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallTeam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallTeam", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallTeam(MonkeBallTeam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallTeam", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallTeam(MonkeBallTeam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1549};

/// @brief Field color, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field score, offset: 0x20, size: 0x4, def value: None
 int32_t  ___score;

/// @brief Field ballStartLocation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ballStartLocation;

/// @brief Field ballLaunchPosition, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ballLaunchPosition;

/// [Tooltip("The min/max random velocity of the ball when launched.")]
/// @brief Field ballLaunchVelocityRange, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ballLaunchVelocityRange;

/// [Tooltip("The min/max random x-angle of the ball when launched.")]
/// @brief Field ballLaunchAngleXRange, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ballLaunchAngleXRange;

/// [Tooltip("The min/max random y-angle of the ball when launched.")]
/// @brief Field ballLaunchAngleYRange, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ballLaunchAngleYRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallTeam, ___color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallTeam, ___score) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallTeam, ___ballStartLocation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallTeam, ___ballLaunchPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallTeam, ___ballLaunchVelocityRange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallTeam, ___ballLaunchAngleXRange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallTeam, ___ballLaunchAngleYRange) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallTeam) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
