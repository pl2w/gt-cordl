#pragma once
// IWYU pragma private; include "GlobalNamespace/Spinner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Spinner)
// Forward declare root types
namespace GlobalNamespace {
class Spinner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Spinner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Spinner*, "", "Spinner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Spinner
class CORDL_TYPE Spinner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Speed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Speed, put=__cordl_internal_set_Speed)) float_t  Speed;

/// @brief Field m_angle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_angle, put=__cordl_internal_set_m_angle)) float_t  m_angle;

static inline ::GlobalNamespace::Spinner* New_ctor() ;

/// @brief Method OnEnable, addr 0x55eb6e0, size 0x28, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x55eb708, size 0x7c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_Speed() const;

constexpr float_t& __cordl_internal_get_Speed() ;

constexpr float_t const& __cordl_internal_get_m_angle() const;

constexpr float_t& __cordl_internal_get_m_angle() ;

constexpr void __cordl_internal_set_Speed(float_t  value) ;

constexpr void __cordl_internal_set_m_angle(float_t  value) ;

/// @brief Method .ctor, addr 0x55eb784, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spinner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spinner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Spinner(Spinner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spinner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spinner(Spinner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{43};

/// @brief Field Speed, offset: 0x20, size: 0x4, def value: None
 float_t  ___Speed;

/// @brief Field m_angle, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_angle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Spinner, ___Speed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Spinner, ___m_angle) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Spinner) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
