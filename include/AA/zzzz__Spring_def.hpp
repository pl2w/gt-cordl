#pragma once
// IWYU pragma private; include "AA/Spring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Spring)
// Forward declare root types
namespace AA {
class Spring;
}
// Write type traits
MARK_REF_T(::AA::Spring*);
DEFINE_IL2CPP_CLASS(::AA::Spring*, "AA", "Spring");
// Dependencies System.Object
namespace AA {
// Is value type: false
// CS Name: AA.Spring
class CORDL_TYPE Spring : public ::System::Object {
public:
// Declarations
/// @brief Method CopySign, addr 0x5b6eb60, size 0x14, virtual false, abstract: false, final false
static inline float_t CopySign(float_t  a, float_t  s) ;

/// @brief Method CriticalSpringDamperExact, addr 0x5b6f618, size 0xb8, virtual false, abstract: false, final false
static inline void CriticalSpringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  halflife, float_t  dt) ;

/// @brief Method Damper, addr 0x5b6e9cc, size 0x28, virtual false, abstract: false, final false
static inline float_t Damper(float_t  x, float_t  g, float_t  factor) ;

/// @brief Method DamperDecayExact, addr 0x5b6eb0c, size 0x54, virtual false, abstract: false, final false
static inline float_t DamperDecayExact(float_t  x, float_t  halflife, float_t  dt, float_t  eps) ;

/// @brief Method DamperExact, addr 0x5b6ea98, size 0x74, virtual false, abstract: false, final false
static inline float_t DamperExact(float_t  x, float_t  g, float_t  halflife, float_t  dt, float_t  eps) ;

/// @brief Method DamperExponential, addr 0x5b6e9f4, size 0x68, virtual false, abstract: false, final false
static inline float_t DamperExponential(float_t  x, float_t  g, float_t  damping, float_t  dt, float_t  ft) ;

/// @brief Method DampingRatioToDamping, addr 0x5b6f2e4, size 0x10, virtual false, abstract: false, final false
static inline float_t DampingRatioToDamping(float_t  ratio, float_t  stiffness) ;

/// @brief Method DampingRatioToStiffness, addr 0x5b6f2d4, size 0x10, virtual false, abstract: false, final false
static inline float_t DampingRatioToStiffness(float_t  ratio, float_t  damping) ;

/// @brief Method DampingToHalflife, addr 0x5b6ef00, size 0x14, virtual false, abstract: false, final false
static inline float_t DampingToHalflife(float_t  damping, float_t  eps) ;

/// @brief Method DecaySringDamperExact, addr 0x5b6f770, size 0x98, virtual false, abstract: false, final false
static inline void DecaySringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  halflife, float_t  dt) ;

/// @brief Method FastAtan, addr 0x5b6eb74, size 0x70, virtual false, abstract: false, final false
static inline float_t FastAtan(float_t  x) ;

/// @brief Method FastNegExp, addr 0x5b6ea5c, size 0x3c, virtual false, abstract: false, final false
static inline float_t FastNegExp(float_t  x) ;

/// @brief Method FrequencyToStiffness, addr 0x5b6ef14, size 0x14, virtual false, abstract: false, final false
static inline float_t FrequencyToStiffness(float_t  frequency) ;

/// @brief Method HalflifeToDamping, addr 0x5b6eeec, size 0x14, virtual false, abstract: false, final false
static inline float_t HalflifeToDamping(float_t  halflife, float_t  eps) ;

static inline ::AA::Spring* New_ctor() ;

/// @brief Method SimpleSpringDamperExact, addr 0x5b6f6d0, size 0xa0, virtual false, abstract: false, final false
static inline void SimpleSpringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  halflife, float_t  dt) ;

/// @brief Method SpringDamperExact, addr 0x5b6efac, size 0x328, virtual false, abstract: false, final false
static inline void SpringDamperExact(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  frequency, float_t  halflife, float_t  dt, float_t  eps) ;

/// @brief Method SpringDamperExactRatio, addr 0x5b6f2f4, size 0x324, virtual false, abstract: false, final false
static inline void SpringDamperExactRatio(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  damping_ratio, float_t  halflife, float_t  dt, float_t  eps) ;

/// @brief Method SpringDamperExactStiffnessDamping, addr 0x5b6ebec, size 0x300, virtual false, abstract: false, final false
static inline void SpringDamperExactStiffnessDamping(::by_ref<float_t>  x, ::by_ref<float_t>  v, float_t  x_goal, float_t  v_goal, float_t  stiffness, float_t  damping, float_t  dt, float_t  eps) ;

/// @brief Method Square, addr 0x5b6ebe4, size 0x8, virtual false, abstract: false, final false
static inline float_t Square(float_t  x) ;

/// @brief Method .ctor, addr 0x5b6f808, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method critical_frequency, addr 0x5b6ef74, size 0x38, virtual false, abstract: false, final false
static inline float_t critical_frequency(float_t  halflife) ;

/// @brief Method critical_halflife, addr 0x5b6ef3c, size 0x38, virtual false, abstract: false, final false
static inline float_t critical_halflife(float_t  frequency) ;

/// @brief Method stiffness_to_frequency, addr 0x5b6ef28, size 0x14, virtual false, abstract: false, final false
static inline float_t stiffness_to_frequency(float_t  stiffness) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spring", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Spring(Spring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spring", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spring(Spring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3859};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AA::Spring) == 0x10, "Size mismatch!");

} // namespace end def AA
