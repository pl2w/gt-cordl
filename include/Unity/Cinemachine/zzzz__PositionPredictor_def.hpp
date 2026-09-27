#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PositionPredictor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PositionPredictor)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct PositionPredictor;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::PositionPredictor);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PositionPredictor, "Unity.Cinemachine", "PositionPredictor");
// Dependencies UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.PositionPredictor
struct CORDL_TYPE PositionPredictor {
public:
// Declarations
 __declspec(property(get=get_CurrentPosition)) ::UnityEngine::Vector3  CurrentPosition;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Method AddPosition, addr 0xaeb92fc, size 0xf8, virtual false, abstract: false, final false
inline void AddPosition(::UnityEngine::Vector3  pos, float_t  deltaTime) ;

/// @brief Method ApplyRotationDelta, addr 0xaeb921c, size 0x70, virtual false, abstract: false, final false
inline void ApplyRotationDelta(::UnityEngine::Quaternion  rotationDelta) ;

/// @brief Method ApplyTransformDelta, addr 0xaeb91fc, size 0x20, virtual false, abstract: false, final false
inline void ApplyTransformDelta(::UnityEngine::Vector3  positionDelta) ;

/// @brief Method PredictPositionDelta, addr 0xaeb93f4, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PredictPositionDelta(float_t  lookaheadTime) ;

/// @brief Method Reset, addr 0xaeb928c, size 0x70, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method get_CurrentPosition, addr 0xaeb91f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CurrentPosition() ;

/// @brief Method get_IsEmpty, addr 0xaeb91e0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

// Ctor Parameters []
// @brief default ctor
constexpr PositionPredictor() ;

// Ctor Parameters [CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SmoothDampVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_HavePos", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Smoothing", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr PositionPredictor(::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_SmoothDampVelocity, ::UnityEngine::Vector3  m_Pos, bool  m_HavePos, float_t  Smoothing) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field m_Velocity, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_SmoothDampVelocity, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_SmoothDampVelocity;

/// @brief Field m_Pos, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Pos;

/// @brief Field m_HavePos, offset: 0x24, size: 0x1, def value: None
 bool  m_HavePos;

/// @brief Field Smoothing, offset: 0x28, size: 0x4, def value: None
 float_t  Smoothing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PositionPredictor, m_Velocity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PositionPredictor, m_SmoothDampVelocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PositionPredictor, m_Pos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PositionPredictor, m_HavePos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PositionPredictor, Smoothing) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PositionPredictor) == 0x2c, "Size mismatch!");

} // namespace end def Unity::Cinemachine
