#pragma once
// IWYU pragma private; include "GorillaLocomotion/Surface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Surface)
// Forward declare root types
namespace GorillaLocomotion {
class Surface;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Surface*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Surface*, "GorillaLocomotion", "Surface");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion {
// Is value type: false
// CS Name: GorillaLocomotion.Surface
class CORDL_TYPE Surface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field slipPercentage, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_slipPercentage, put=__cordl_internal_set_slipPercentage)) float_t  slipPercentage;

static inline ::GorillaLocomotion::Surface* New_ctor() ;

constexpr float_t const& __cordl_internal_get_slipPercentage() const;

constexpr float_t& __cordl_internal_get_slipPercentage() ;

constexpr void __cordl_internal_set_slipPercentage(float_t  value) ;

/// @brief Method .ctor, addr 0x5cde228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Surface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Surface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Surface(Surface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Surface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Surface(Surface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4509};

/// @brief Field slipPercentage, offset: 0x20, size: 0x4, def value: None
 float_t  ___slipPercentage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Surface, ___slipPercentage) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Surface) == 0x28, "Size mismatch!");

} // namespace end def GorillaLocomotion
