#pragma once
// IWYU pragma private; include "CjLib/Vector2Spring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Spring)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace CjLib {
struct Vector2Spring;
}
// Write type traits
MARK_VAL_T(::CjLib::Vector2Spring);
DEFINE_IL2CPP_CLASS(::CjLib::Vector2Spring, "CjLib", "Vector2Spring");
// Dependencies UnityEngine.Vector2
namespace CjLib {
// Is value type: true
// CS Name: CjLib.Vector2Spring
struct CORDL_TYPE Vector2Spring {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method Reset, addr 0x5e0c8d8, size 0x60, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x5e0c938, size 0x54, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector2  initValue) ;

/// @brief Method Reset, addr 0x5e0c98c, size 0xc, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector2  initValue, ::UnityEngine::Vector2  initVelocity) ;

/// @brief Method TrackDampingRatio, addr 0x5e0c998, size 0x258, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 TrackDampingRatio(::UnityEngine::Vector2  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime) ;

/// @brief Method TrackExponential, addr 0x5e0cd3c, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 TrackExponential(::UnityEngine::Vector2  targetValue, float_t  halfLife, float_t  deltaTime) ;

/// @brief Method TrackHalfLife, addr 0x5e0cbf0, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 TrackHalfLife(::UnityEngine::Vector2  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime) ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector2Spring() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr Vector2Spring(::UnityEngine::Vector2  Value, ::UnityEngine::Vector2  Velocity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5149};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  Value;

/// @brief Field Velocity, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  Velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::CjLib::Vector2Spring, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::CjLib::Vector2Spring, Velocity) == 0x8, "Offset mismatch!");

static_assert(sizeof(::CjLib::Vector2Spring) == 0x10, "Size mismatch!");

} // namespace end def CjLib
