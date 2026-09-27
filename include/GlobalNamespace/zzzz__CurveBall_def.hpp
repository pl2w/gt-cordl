#pragma once
// IWYU pragma private; include "GlobalNamespace/CurveBall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CurveBall)
// Forward declare root types
namespace GlobalNamespace {
class CurveBall;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CurveBall*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CurveBall*, "", "CurveBall");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CurveBall
class CORDL_TYPE CurveBall : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Interval, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Interval, put=__cordl_internal_set_Interval)) float_t  Interval;

/// @brief Field m_speedX, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_speedX, put=__cordl_internal_set_m_speedX)) float_t  m_speedX;

/// @brief Field m_speedZ, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_speedZ, put=__cordl_internal_set_m_speedZ)) float_t  m_speedZ;

/// @brief Field m_timer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_timer, put=__cordl_internal_set_m_timer)) float_t  m_timer;

static inline ::GlobalNamespace::CurveBall* New_ctor() ;

/// @brief Method Reset, addr 0x55e9b88, size 0xec, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0x55e9c74, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55e9c78, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_Interval() const;

constexpr float_t& __cordl_internal_get_Interval() ;

constexpr float_t const& __cordl_internal_get_m_speedX() const;

constexpr float_t& __cordl_internal_get_m_speedX() ;

constexpr float_t const& __cordl_internal_get_m_speedZ() const;

constexpr float_t& __cordl_internal_get_m_speedZ() ;

constexpr float_t const& __cordl_internal_get_m_timer() const;

constexpr float_t& __cordl_internal_get_m_timer() ;

constexpr void __cordl_internal_set_Interval(float_t  value) ;

constexpr void __cordl_internal_set_m_speedX(float_t  value) ;

constexpr void __cordl_internal_set_m_speedZ(float_t  value) ;

constexpr void __cordl_internal_set_m_timer(float_t  value) ;

/// @brief Method .ctor, addr 0x55e9d28, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveBall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveBall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveBall(CurveBall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveBall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveBall(CurveBall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{34};

/// @brief Field Interval, offset: 0x20, size: 0x4, def value: None
 float_t  ___Interval;

/// @brief Field m_speedX, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_speedX;

/// @brief Field m_speedZ, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_speedZ;

/// @brief Field m_timer, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_timer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CurveBall, ___Interval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurveBall, ___m_speedX) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurveBall, ___m_speedZ) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurveBall, ___m_timer) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CurveBall) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
