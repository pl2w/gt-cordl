#pragma once
// IWYU pragma private; include "GTMathUtil/CriticalSpringDamper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CriticalSpringDamper)
// Forward declare root types
namespace GTMathUtil {
class CriticalSpringDamper;
}
// Write type traits
MARK_REF_T(::GTMathUtil::CriticalSpringDamper*);
DEFINE_IL2CPP_CLASS(::GTMathUtil::CriticalSpringDamper*, "GTMathUtil", "CriticalSpringDamper");
// Dependencies System.Object
namespace GTMathUtil {
// Is value type: false
// CS Name: GTMathUtil.CriticalSpringDamper
class CORDL_TYPE CriticalSpringDamper : public ::System::Object {
public:
// Declarations
/// @brief Field curVel, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_curVel, put=__cordl_internal_set_curVel)) float_t  curVel;

/// @brief Field halfLife, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_halfLife, put=__cordl_internal_set_halfLife)) float_t  halfLife;

/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) float_t  x;

/// @brief Field xGoal, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_xGoal, put=__cordl_internal_set_xGoal)) float_t  xGoal;

static inline ::GTMathUtil::CriticalSpringDamper* New_ctor() ;

/// @brief Method Update, addr 0x5b794fc, size 0x9c, virtual false, abstract: false, final false
inline float_t Update(float_t  dt) ;

constexpr float_t const& __cordl_internal_get_curVel() const;

constexpr float_t& __cordl_internal_get_curVel() ;

constexpr float_t const& __cordl_internal_get_halfLife() const;

constexpr float_t& __cordl_internal_get_halfLife() ;

constexpr float_t const& __cordl_internal_get_x() const;

constexpr float_t& __cordl_internal_get_x() ;

constexpr float_t const& __cordl_internal_get_xGoal() const;

constexpr float_t& __cordl_internal_get_xGoal() ;

constexpr void __cordl_internal_set_curVel(float_t  value) ;

constexpr void __cordl_internal_set_halfLife(float_t  value) ;

constexpr void __cordl_internal_set_x(float_t  value) ;

constexpr void __cordl_internal_set_xGoal(float_t  value) ;

/// @brief Method .ctor, addr 0x5b79598, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method fast_negexp, addr 0x5b794c0, size 0x3c, virtual false, abstract: false, final false
static inline float_t fast_negexp(float_t  x) ;

/// @brief Method halflife_to_damping, addr 0x5b794ac, size 0x14, virtual false, abstract: false, final false
static inline float_t halflife_to_damping(float_t  halflife, float_t  eps) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CriticalSpringDamper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CriticalSpringDamper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CriticalSpringDamper(CriticalSpringDamper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CriticalSpringDamper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CriticalSpringDamper(CriticalSpringDamper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3896};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 float_t  ___x;

/// @brief Field xGoal, offset: 0x14, size: 0x4, def value: None
 float_t  ___xGoal;

/// @brief Field halfLife, offset: 0x18, size: 0x4, def value: None
 float_t  ___halfLife;

/// @brief Field curVel, offset: 0x1c, size: 0x4, def value: None
 float_t  ___curVel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GTMathUtil::CriticalSpringDamper, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GTMathUtil::CriticalSpringDamper, ___xGoal) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GTMathUtil::CriticalSpringDamper, ___halfLife) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GTMathUtil::CriticalSpringDamper, ___curVel) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GTMathUtil::CriticalSpringDamper) == 0x20, "Size mismatch!");

} // namespace end def GTMathUtil
