#pragma once
// IWYU pragma private; include "BoingKit/FloatSpring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatSpring)
// Forward declare root types
namespace BoingKit {
struct FloatSpring;
}
// Write type traits
MARK_VAL_T(::BoingKit::FloatSpring);
DEFINE_IL2CPP_CLASS(::BoingKit::FloatSpring, "BoingKit", "FloatSpring");
// Dependencies 
namespace BoingKit {
// Is value type: true
// CS Name: BoingKit.FloatSpring
struct CORDL_TYPE FloatSpring {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method Reset, addr 0x5e2cb20, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x5e2cb28, size 0xc, virtual false, abstract: false, final false
inline void Reset(float_t  initValue) ;

/// @brief Method Reset, addr 0x5e2cb34, size 0x8, virtual false, abstract: false, final false
inline void Reset(float_t  initValue, float_t  initVelocity) ;

/// @brief Method TrackDampingRatio, addr 0x5e2cb3c, size 0x138, virtual false, abstract: false, final false
inline float_t TrackDampingRatio(float_t  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime) ;

/// @brief Method TrackExponential, addr 0x5e2cd7c, size 0xe4, virtual false, abstract: false, final false
inline float_t TrackExponential(float_t  targetValue, float_t  halfLife, float_t  deltaTime) ;

/// @brief Method TrackHalfLife, addr 0x5e2cc74, size 0x108, virtual false, abstract: false, final false
inline float_t TrackHalfLife(float_t  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime) ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloatSpring() ;

// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Velocity", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr FloatSpring(float_t  Value, float_t  Velocity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 float_t  Value;

/// @brief Field Velocity, offset: 0x4, size: 0x4, def value: None
 float_t  Velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::FloatSpring, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::FloatSpring, Velocity) == 0x4, "Offset mismatch!");

static_assert(sizeof(::BoingKit::FloatSpring) == 0x8, "Size mismatch!");

} // namespace end def BoingKit
