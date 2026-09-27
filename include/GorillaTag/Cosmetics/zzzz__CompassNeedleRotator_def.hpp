#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CompassNeedleRotator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CompassNeedleRotator)
// Forward declare root types
namespace GorillaTag::Cosmetics {
class CompassNeedleRotator;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::CompassNeedleRotator*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CompassNeedleRotator*, "GorillaTag.Cosmetics", "CompassNeedleRotator");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CompassNeedleRotator
class CORDL_TYPE CompassNeedleRotator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentVelocity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentVelocity, put=__cordl_internal_set_currentVelocity)) float_t  currentVelocity;

/// @brief Method LateUpdate, addr 0x5d60c38, size 0x1e0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Cosmetics::CompassNeedleRotator* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d60bcc, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_currentVelocity() const;

constexpr float_t& __cordl_internal_get_currentVelocity() ;

constexpr void __cordl_internal_set_currentVelocity(float_t  value) ;

/// @brief Method .ctor, addr 0x5d60e18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompassNeedleRotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompassNeedleRotator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompassNeedleRotator(CompassNeedleRotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompassNeedleRotator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompassNeedleRotator(CompassNeedleRotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4827};

/// @brief Field smoothTime offset 0xffffffff size 0x4
static constexpr float_t  smoothTime{static_cast<float_t>(0.005f)};

/// @brief Field currentVelocity, offset: 0x20, size: 0x4, def value: None
 float_t  ___currentVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CompassNeedleRotator, ___currentVelocity) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CompassNeedleRotator) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
