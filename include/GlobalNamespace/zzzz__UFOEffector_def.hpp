#pragma once
// IWYU pragma private; include "GlobalNamespace/UFOEffector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UFOEffector)
// Forward declare root types
namespace GlobalNamespace {
class UFOEffector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UFOEffector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UFOEffector*, "", "UFOEffector");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UFOEffector
class CORDL_TYPE UFOEffector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_moveDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_moveDistance, put=__cordl_internal_set_m_moveDistance)) float_t  m_moveDistance;

/// @brief Field m_radius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_radius, put=__cordl_internal_set_m_radius)) float_t  m_radius;

/// @brief Field m_rotateAngle, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_rotateAngle, put=__cordl_internal_set_m_rotateAngle)) float_t  m_rotateAngle;

/// @brief Method FixedUpdate, addr 0x55e7b40, size 0x2cc, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::UFOEffector* New_ctor() ;

/// @brief Method Start, addr 0x55e7ad8, size 0x68, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_m_moveDistance() const;

constexpr float_t& __cordl_internal_get_m_moveDistance() ;

constexpr float_t const& __cordl_internal_get_m_radius() const;

constexpr float_t& __cordl_internal_get_m_radius() ;

constexpr float_t const& __cordl_internal_get_m_rotateAngle() const;

constexpr float_t& __cordl_internal_get_m_rotateAngle() ;

constexpr void __cordl_internal_set_m_moveDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_radius(float_t  value) ;

constexpr void __cordl_internal_set_m_rotateAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x55e7e0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UFOEffector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UFOEffector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UFOEffector(UFOEffector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UFOEffector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UFOEffector(UFOEffector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27};

/// @brief Field m_radius, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_radius;

/// @brief Field m_moveDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_moveDistance;

/// @brief Field m_rotateAngle, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_rotateAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UFOEffector, ___m_radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UFOEffector, ___m_moveDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UFOEffector, ___m_rotateAngle) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UFOEffector) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
