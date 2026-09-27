#pragma once
// IWYU pragma private; include "CjLib/Vector4Spring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector4Spring)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace CjLib {
struct Vector4Spring;
}
// Write type traits
MARK_VAL_T(::CjLib::Vector4Spring);
DEFINE_IL2CPP_CLASS(::CjLib::Vector4Spring, "CjLib", "Vector4Spring");
// Dependencies UnityEngine.Vector4
namespace CjLib {
// Is value type: true
// CS Name: CjLib.Vector4Spring
struct CORDL_TYPE Vector4Spring {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method Reset, addr 0x5e0d550, size 0x60, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x5e0d5b0, size 0x58, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector4  initValue) ;

/// @brief Method Reset, addr 0x5e0d608, size 0x14, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector4  initValue, ::UnityEngine::Vector4  initVelocity) ;

/// @brief Method TrackDampingRatio, addr 0x5e0d61c, size 0x2a4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 TrackDampingRatio(::UnityEngine::Vector4  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime) ;

/// @brief Method TrackExponential, addr 0x5e0da38, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 TrackExponential(::UnityEngine::Vector4  targetValue, float_t  halfLife, float_t  deltaTime) ;

/// @brief Method TrackHalfLife, addr 0x5e0d8c0, size 0x178, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 TrackHalfLife(::UnityEngine::Vector4  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime) ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector4Spring() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr Vector4Spring(::UnityEngine::Vector4  Value, ::UnityEngine::Vector4  Velocity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Value, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  Value;

/// @brief Field Velocity, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  Velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::CjLib::Vector4Spring, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::CjLib::Vector4Spring, Velocity) == 0x10, "Offset mismatch!");

static_assert(sizeof(::CjLib::Vector4Spring) == 0x20, "Size mismatch!");

} // namespace end def CjLib
