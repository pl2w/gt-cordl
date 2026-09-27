#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTurnSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaTurnSlider)
namespace GlobalNamespace {
class GorillaTurning;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTurnSlider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTurnSlider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTurnSlider*, "", "GorillaTurnSlider");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTurnSlider
class CORDL_TYPE GorillaTurnSlider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gorillaTurn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaTurn, put=__cordl_internal_set_gorillaTurn)) ::UnityW<::GlobalNamespace::GorillaTurning>  gorillaTurn;

/// @brief Field maxValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) float_t  maxValue;

/// @brief Field minValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) float_t  minValue;

/// @brief Field startingLocation, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingLocation, put=__cordl_internal_set_startingLocation)) ::UnityEngine::Vector3  startingLocation;

/// @brief Field startingZ, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingZ, put=__cordl_internal_set_startingZ)) float_t  startingZ;

/// @brief Field zRange, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zRange, put=__cordl_internal_set_zRange)) float_t  zRange;

/// @brief Method Awake, addr 0x59a2424, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x59a24dc, size 0x4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method InterpolateValue, addr 0x59a24e0, size 0x38, virtual false, abstract: false, final false
inline float_t InterpolateValue(float_t  value) ;

static inline ::GlobalNamespace::GorillaTurnSlider* New_ctor() ;

/// @brief Method OnSliderRelease, addr 0x59a2518, size 0x150, virtual false, abstract: false, final false
inline void OnSliderRelease() ;

/// @brief Method SetPosition, addr 0x59a2464, size 0x78, virtual false, abstract: false, final false
inline void SetPosition(float_t  speed) ;

constexpr ::UnityW<::GlobalNamespace::GorillaTurning> const& __cordl_internal_get_gorillaTurn() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTurning>& __cordl_internal_get_gorillaTurn() ;

constexpr float_t const& __cordl_internal_get_maxValue() const;

constexpr float_t& __cordl_internal_get_maxValue() ;

constexpr float_t const& __cordl_internal_get_minValue() const;

constexpr float_t& __cordl_internal_get_minValue() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingLocation() ;

constexpr float_t const& __cordl_internal_get_startingZ() const;

constexpr float_t& __cordl_internal_get_startingZ() ;

constexpr float_t const& __cordl_internal_get_zRange() const;

constexpr float_t& __cordl_internal_get_zRange() ;

constexpr void __cordl_internal_set_gorillaTurn(::UnityW<::GlobalNamespace::GorillaTurning>  value) ;

constexpr void __cordl_internal_set_maxValue(float_t  value) ;

constexpr void __cordl_internal_set_minValue(float_t  value) ;

constexpr void __cordl_internal_set_startingLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingZ(float_t  value) ;

constexpr void __cordl_internal_set_zRange(float_t  value) ;

/// @brief Method .ctor, addr 0x59a2668, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTurnSlider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTurnSlider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTurnSlider(GorillaTurnSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTurnSlider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTurnSlider(GorillaTurnSlider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2626};

/// @brief Field zRange, offset: 0x20, size: 0x4, def value: None
 float_t  ___zRange;

/// @brief Field maxValue, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxValue;

/// @brief Field minValue, offset: 0x28, size: 0x4, def value: None
 float_t  ___minValue;

/// @brief Field gorillaTurn, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTurning>  ___gorillaTurn;

/// @brief Field startingZ, offset: 0x38, size: 0x4, def value: None
 float_t  ___startingZ;

/// @brief Field startingLocation, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingLocation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTurnSlider, ___zRange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurnSlider, ___maxValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurnSlider, ___minValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurnSlider, ___gorillaTurn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurnSlider, ___startingZ) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurnSlider, ___startingLocation) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTurnSlider) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
