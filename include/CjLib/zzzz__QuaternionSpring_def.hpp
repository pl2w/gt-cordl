#pragma once
// IWYU pragma private; include "CjLib/QuaternionSpring.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuaternionSpring)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace CjLib {
struct QuaternionSpring;
}
// Write type traits
MARK_VAL_T(::CjLib::QuaternionSpring);
DEFINE_IL2CPP_CLASS(::CjLib::QuaternionSpring, "CjLib", "QuaternionSpring");
// Dependencies UnityEngine.Vector4
namespace CjLib {
// Is value type: true
// CS Name: CjLib.QuaternionSpring
struct CORDL_TYPE QuaternionSpring {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

 __declspec(property(get=get_ValueQuat, put=set_ValueQuat)) ::UnityEngine::Quaternion  ValueQuat;

 __declspec(property(get=get_VelocityQuat, put=set_VelocityQuat)) ::UnityEngine::Quaternion  VelocityQuat;

/// @brief Method Reset, addr 0x5e0dd60, size 0x88, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x5e0de54, size 0x58, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Quaternion  initValue) ;

/// @brief Method Reset, addr 0x5e0deac, size 0x14, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Quaternion  initValue, ::UnityEngine::Quaternion  initVelocity) ;

/// @brief Method Reset, addr 0x5e0dde8, size 0x58, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector4  initValue) ;

/// @brief Method Reset, addr 0x5e0de40, size 0x14, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector4  initValue, ::UnityEngine::Vector4  initVelocity) ;

/// @brief Method TrackDampingRatio, addr 0x5e0dec0, size 0x2e0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion TrackDampingRatio(::UnityEngine::Quaternion  targetValue, float_t  angularFrequency, float_t  dampingRatio, float_t  deltaTime) ;

/// @brief Method TrackExponential, addr 0x5e0e318, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion TrackExponential(::UnityEngine::Quaternion  targetValue, float_t  halfLife, float_t  deltaTime) ;

/// @brief Method TrackHalfLife, addr 0x5e0e1a0, size 0x178, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion TrackHalfLife(::UnityEngine::Quaternion  targetValue, float_t  frequencyHz, float_t  halfLife, float_t  deltaTime) ;

static inline int32_t getStaticF_Stride() ;

/// @brief Method get_ValueQuat, addr 0x5e0dbd0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_ValueQuat() ;

/// @brief Method get_VelocityQuat, addr 0x5e0dd00, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_VelocityQuat() ;

static inline void setStaticF_Stride(int32_t  value) ;

/// @brief Method set_ValueQuat, addr 0x5e0dcf0, size 0xc, virtual false, abstract: false, final false
inline void set_ValueQuat(::UnityEngine::Quaternion  value) ;

/// @brief Method set_VelocityQuat, addr 0x5e0dd54, size 0xc, virtual false, abstract: false, final false
inline void set_VelocityQuat(::UnityEngine::Quaternion  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QuaternionSpring() ;

// Ctor Parameters [CppParam { name: "ValueVec", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "VelocityVec", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr QuaternionSpring(::UnityEngine::Vector4  ValueVec, ::UnityEngine::Vector4  VelocityVec) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ValueVec, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ValueVec;

/// @brief Field VelocityVec, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  VelocityVec;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::CjLib::QuaternionSpring, ValueVec) == 0x0, "Offset mismatch!");

static_assert(offsetof(::CjLib::QuaternionSpring, VelocityVec) == 0x10, "Offset mismatch!");

static_assert(sizeof(::CjLib::QuaternionSpring) == 0x20, "Size mismatch!");

} // namespace end def CjLib
