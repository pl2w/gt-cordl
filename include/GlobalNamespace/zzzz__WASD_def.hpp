#pragma once
// IWYU pragma private; include "GlobalNamespace/WASD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WASD)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class WASD;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WASD*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WASD*, "", "WASD");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: WASD
class CORDL_TYPE WASD : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Omega, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Omega, put=__cordl_internal_set_Omega)) float_t  Omega;

/// @brief Field Speed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Speed, put=__cordl_internal_set_Speed)) float_t  Speed;

 __declspec(property(get=get_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field m_velocity, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_velocity, put=__cordl_internal_set_m_velocity)) ::UnityEngine::Vector3  m_velocity;

static inline ::GlobalNamespace::WASD* New_ctor() ;

/// @brief Method Update, addr 0x55eb798, size 0x36c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_Omega() const;

constexpr float_t& __cordl_internal_get_Omega() ;

constexpr float_t const& __cordl_internal_get_Speed() const;

constexpr float_t& __cordl_internal_get_Speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_velocity() ;

constexpr void __cordl_internal_set_Omega(float_t  value) ;

constexpr void __cordl_internal_set_Speed(float_t  value) ;

constexpr void __cordl_internal_set_m_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x55ebb04, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Velocity, addr 0x55eb78c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Velocity() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WASD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WASD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WASD(WASD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WASD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WASD(WASD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{44};

/// @brief Field Speed, offset: 0x20, size: 0x4, def value: None
 float_t  ___Speed;

/// @brief Field Omega, offset: 0x24, size: 0x4, def value: None
 float_t  ___Omega;

/// @brief Field m_velocity, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WASD, ___Speed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WASD, ___Omega) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WASD, ___m_velocity) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WASD) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
