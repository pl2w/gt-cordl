#pragma once
// IWYU pragma private; include "CjLib/Vector3Spring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Spring)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace CjLib {
struct Vector3Spring;
}
// Write type traits
MARK_VAL_T(::CjLib::Vector3Spring);
DEFINE_IL2CPP_CLASS(::CjLib::Vector3Spring, "CjLib", "Vector3Spring");
// Dependencies UnityEngine.Vector3
namespace CjLib {
// Is value type: true
// CS Name: CjLib.Vector3Spring
struct CORDL_TYPE Vector3Spring {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method Reset, addr 0x5e0cea8, size 0x70, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x5e0cf18, size 0x60, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector3  initValue) ;

/// @brief Method Reset, addr 0x5e0cf78, size 0x14, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector3  initValue, ::UnityEngine::Vector3  initVelocity) ;

/// @brief Method TrackDampingRatio, addr 0x5e0cf8c, size 0x2cc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TrackDampingRatio(::UnityEngine::Vector3  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime) ;

/// @brief Method TrackExponential, addr 0x5e0d3c0, size 0x144, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TrackExponential(::UnityEngine::Vector3  targetValue, float_t  halfLife, float_t  deltaTime) ;

/// @brief Method TrackHalfLife, addr 0x5e0d258, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TrackHalfLife(::UnityEngine::Vector3  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime) ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector3Spring() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding1", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Vector3Spring(::UnityEngine::Vector3  Value, float_t  m_padding0, ::UnityEngine::Vector3  Velocity, float_t  m_padding1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Value, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Value;

/// @brief Field m_padding0, offset: 0xc, size: 0x4, def value: None
 float_t  m_padding0;

/// @brief Field Velocity, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  Velocity;

/// @brief Field m_padding1, offset: 0x1c, size: 0x4, def value: None
 float_t  m_padding1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::CjLib::Vector3Spring, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::CjLib::Vector3Spring, m_padding0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::CjLib::Vector3Spring, Velocity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::CjLib::Vector3Spring, m_padding1) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::CjLib::Vector3Spring) == 0x20, "Size mismatch!");

} // namespace end def CjLib
