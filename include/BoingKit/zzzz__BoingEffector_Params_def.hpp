#pragma once
// IWYU pragma private; include "BoingKit/BoingEffector_Params.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Bits32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingEffector_Params)
namespace BoingKit {
class BoingEffector;
}
// Forward declare root types
namespace GlobalNamespace {
struct BoingEffector_Params;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingEffector_Params);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingEffector_Params, "BoingKit", "BoingEffector/Params");
// Dependencies BoingKit.Bits32, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingEffector/Params
struct CORDL_TYPE BoingEffector_Params {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method Fill, addr 0x5e164f0, size 0x40, virtual false, abstract: false, final false
inline void Fill(::BoingKit::BoingEffector*  effector) ;

/// @brief Method SuppressWarnings, addr 0x5e16530, size 0x14, virtual false, abstract: false, final false
inline void SuppressWarnings() ;

/// @brief Method .ctor, addr 0x5e16308, size 0x1e8, virtual false, abstract: false, final false
inline void _ctor(::BoingKit::BoingEffector*  effector) ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoingEffector_Params() ;

// Ctor Parameters [CppParam { name: "PrevPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CurrPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LinearVelocityDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FullEffectRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MoveDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LinearImpulse", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotateAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngularImpulse", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bits", ty: "::BoingKit::Bits32", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding3", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingEffector_Params(::UnityEngine::Vector3  PrevPosition, float_t  m_padding0, ::UnityEngine::Vector3  CurrPosition, float_t  m_padding1, ::UnityEngine::Vector3  LinearVelocityDir, float_t  m_padding2, float_t  Radius, float_t  FullEffectRadius, float_t  MoveDistance, float_t  LinearImpulse, float_t  RotateAngle, float_t  AngularImpulse, ::BoingKit::Bits32  Bits, int32_t  m_padding3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field PrevPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  PrevPosition;

/// @brief Field m_padding0, offset: 0xc, size: 0x4, def value: None
 float_t  m_padding0;

/// @brief Field CurrPosition, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  CurrPosition;

/// @brief Field m_padding1, offset: 0x1c, size: 0x4, def value: None
 float_t  m_padding1;

/// @brief Field LinearVelocityDir, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  LinearVelocityDir;

/// @brief Field m_padding2, offset: 0x2c, size: 0x4, def value: None
 float_t  m_padding2;

/// @brief Field Radius, offset: 0x30, size: 0x4, def value: None
 float_t  Radius;

/// @brief Field FullEffectRadius, offset: 0x34, size: 0x4, def value: None
 float_t  FullEffectRadius;

/// @brief Field MoveDistance, offset: 0x38, size: 0x4, def value: None
 float_t  MoveDistance;

/// @brief Field LinearImpulse, offset: 0x3c, size: 0x4, def value: None
 float_t  LinearImpulse;

/// @brief Field RotateAngle, offset: 0x40, size: 0x4, def value: None
 float_t  RotateAngle;

/// @brief Field AngularImpulse, offset: 0x44, size: 0x4, def value: None
 float_t  AngularImpulse;

/// @brief Field Bits, offset: 0x48, size: 0x4, def value: None
 ::BoingKit::Bits32  Bits;

/// @brief Field m_padding3, offset: 0x4c, size: 0x4, def value: None
 int32_t  m_padding3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, PrevPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, m_padding0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, CurrPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, m_padding1) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, LinearVelocityDir) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, m_padding2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, Radius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, FullEffectRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, MoveDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, LinearImpulse) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, RotateAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, AngularImpulse) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, Bits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingEffector_Params, m_padding3) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingEffector_Params) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
