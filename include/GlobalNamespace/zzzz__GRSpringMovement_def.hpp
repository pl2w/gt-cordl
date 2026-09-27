#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSpringMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRSpringMovement)
// Forward declare root types
namespace GlobalNamespace {
class GRSpringMovement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSpringMovement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSpringMovement*, "", "GRSpringMovement");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSpringMovement
class CORDL_TYPE GRSpringMovement : public ::System::Object {
public:
// Declarations
/// @brief Field dampening, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampening, put=__cordl_internal_set_dampening)) float_t  dampening;

/// @brief Field hardStopAtTarget, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hardStopAtTarget, put=__cordl_internal_set_hardStopAtTarget)) bool  hardStopAtTarget;

/// @brief Field pos, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) float_t  pos;

/// @brief Field speed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field target, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) float_t  target;

/// @brief Field tension, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_tension, put=__cordl_internal_set_tension)) float_t  tension;

/// @brief Field wasAlreadyAtTargetLastUpdate, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasAlreadyAtTargetLastUpdate, put=__cordl_internal_set_wasAlreadyAtTargetLastUpdate)) bool  wasAlreadyAtTargetLastUpdate;

/// @brief Method HitTargetLastUpdate, addr 0x58b76d4, size 0x34, virtual false, abstract: false, final false
inline bool HitTargetLastUpdate() ;

/// @brief Method IsAtTarget, addr 0x58b7708, size 0x28, virtual false, abstract: false, final false
inline bool IsAtTarget() ;

static inline ::GlobalNamespace::GRSpringMovement* New_ctor(float_t  _tension, float_t  _dampening) ;

/// @brief Method Reset, addr 0x58b75a8, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetHardStopAtTarget, addr 0x58b75b8, size 0x1c, virtual false, abstract: false, final false
inline void SetHardStopAtTarget(bool  _hardStopAtTarget) ;

/// @brief Method Update, addr 0x58b75d4, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_dampening() const;

constexpr float_t& __cordl_internal_get_dampening() ;

constexpr bool const& __cordl_internal_get_hardStopAtTarget() const;

constexpr bool& __cordl_internal_get_hardStopAtTarget() ;

constexpr float_t const& __cordl_internal_get_pos() const;

constexpr float_t& __cordl_internal_get_pos() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr float_t const& __cordl_internal_get_target() const;

constexpr float_t& __cordl_internal_get_target() ;

constexpr float_t const& __cordl_internal_get_tension() const;

constexpr float_t& __cordl_internal_get_tension() ;

constexpr bool const& __cordl_internal_get_wasAlreadyAtTargetLastUpdate() const;

constexpr bool& __cordl_internal_get_wasAlreadyAtTargetLastUpdate() ;

constexpr void __cordl_internal_set_dampening(float_t  value) ;

constexpr void __cordl_internal_set_hardStopAtTarget(bool  value) ;

constexpr void __cordl_internal_set_pos(float_t  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_target(float_t  value) ;

constexpr void __cordl_internal_set_tension(float_t  value) ;

constexpr void __cordl_internal_set_wasAlreadyAtTargetLastUpdate(bool  value) ;

/// @brief Method .ctor, addr 0x58b7568, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  _tension, float_t  _dampening) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSpringMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSpringMovement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSpringMovement(GRSpringMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSpringMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSpringMovement(GRSpringMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2046};

/// @brief Field tension, offset: 0x10, size: 0x4, def value: None
 float_t  ___tension;

/// @brief Field dampening, offset: 0x14, size: 0x4, def value: None
 float_t  ___dampening;

/// @brief Field target, offset: 0x18, size: 0x4, def value: None
 float_t  ___target;

/// @brief Field hardStopAtTarget, offset: 0x1c, size: 0x1, def value: None
 bool  ___hardStopAtTarget;

/// @brief Field pos, offset: 0x20, size: 0x4, def value: None
 float_t  ___pos;

/// @brief Field speed, offset: 0x24, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field wasAlreadyAtTargetLastUpdate, offset: 0x28, size: 0x1, def value: None
 bool  ___wasAlreadyAtTargetLastUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSpringMovement, ___tension) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpringMovement, ___dampening) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpringMovement, ___target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpringMovement, ___hardStopAtTarget) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpringMovement, ___pos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpringMovement, ___speed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpringMovement, ___wasAlreadyAtTargetLastUpdate) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSpringMovement) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
