#pragma once
// IWYU pragma private; include "UnityEngine/ParticleCollisionEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleCollisionEvent)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ParticleCollisionEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleCollisionEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleCollisionEvent, "UnityEngine", "ParticleCollisionEvent");
// [RequiredByNativeCode(Optional = true)]
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleCollisionEvent
struct CORDL_TYPE ParticleCollisionEvent {
public:
// Declarations
 __declspec(property(get=get_intersection)) ::UnityEngine::Vector3  intersection;

 __declspec(property(get=get_normal)) ::UnityEngine::Vector3  normal;

/// @brief Method get_intersection, addr 0xb677084, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_intersection() ;

/// @brief Method get_normal, addr 0xb677090, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_normal() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleCollisionEvent() ;

// Ctor Parameters [CppParam { name: "m_Intersection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleCollisionEvent(::UnityEngine::Vector3  m_Intersection, ::UnityEngine::Vector3  m_Normal, ::UnityEngine::Vector3  m_Velocity, int32_t  m_ColliderInstanceID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_Intersection, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Intersection;

/// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_Velocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_ColliderInstanceID, offset: 0x24, size: 0x4, def value: None
 int32_t  m_ColliderInstanceID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleCollisionEvent, m_Intersection) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleCollisionEvent, m_Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleCollisionEvent, m_Velocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleCollisionEvent, m_ColliderInstanceID) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleCollisionEvent) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine
