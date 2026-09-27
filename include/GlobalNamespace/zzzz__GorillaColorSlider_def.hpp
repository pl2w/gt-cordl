#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColorSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaColorSlider)
namespace GlobalNamespace {
class GorillaTriggerBox;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaColorSlider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaColorSlider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaColorSlider*, "", "GorillaColorSlider");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaColorSlider
class CORDL_TYPE GorillaColorSlider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gorilla, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorilla, put=__cordl_internal_set_gorilla)) ::UnityW<::GlobalNamespace::GorillaTriggerBox>  gorilla;

/// @brief Field maxValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) float_t  maxValue;

/// @brief Field minValue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) float_t  minValue;

/// @brief Field setRandomly, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_setRandomly, put=__cordl_internal_set_setRandomly)) bool  setRandomly;

/// @brief Field startingLocation, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingLocation, put=__cordl_internal_set_startingLocation)) ::UnityEngine::Vector3  startingLocation;

/// @brief Field startingZ, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingZ, put=__cordl_internal_set_startingZ)) float_t  startingZ;

/// @brief Field valueImReporting, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueImReporting, put=__cordl_internal_set_valueImReporting)) float_t  valueImReporting;

/// @brief Field valueIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueIndex, put=__cordl_internal_set_valueIndex)) int32_t  valueIndex;

/// @brief Field zRange, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_zRange, put=__cordl_internal_set_zRange)) float_t  zRange;

/// @brief Method InterpolateValue, addr 0x5996a54, size 0x34, virtual false, abstract: false, final false
inline float_t InterpolateValue(float_t  value) ;

static inline ::GlobalNamespace::GorillaColorSlider* New_ctor() ;

/// @brief Method OnSliderRelease, addr 0x5996a88, size 0x18c, virtual false, abstract: false, final false
inline void OnSliderRelease() ;

/// @brief Method SetPosition, addr 0x5996994, size 0xc0, virtual false, abstract: false, final false
inline void SetPosition(float_t  speed) ;

/// @brief Method Start, addr 0x599695c, size 0x38, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerBox> const& __cordl_internal_get_gorilla() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerBox>& __cordl_internal_get_gorilla() ;

constexpr float_t const& __cordl_internal_get_maxValue() const;

constexpr float_t& __cordl_internal_get_maxValue() ;

constexpr float_t const& __cordl_internal_get_minValue() const;

constexpr float_t& __cordl_internal_get_minValue() ;

constexpr bool const& __cordl_internal_get_setRandomly() const;

constexpr bool& __cordl_internal_get_setRandomly() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingLocation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingLocation() ;

constexpr float_t const& __cordl_internal_get_startingZ() const;

constexpr float_t& __cordl_internal_get_startingZ() ;

constexpr float_t const& __cordl_internal_get_valueImReporting() const;

constexpr float_t& __cordl_internal_get_valueImReporting() ;

constexpr int32_t const& __cordl_internal_get_valueIndex() const;

constexpr int32_t& __cordl_internal_get_valueIndex() ;

constexpr float_t const& __cordl_internal_get_zRange() const;

constexpr float_t& __cordl_internal_get_zRange() ;

constexpr void __cordl_internal_set_gorilla(::UnityW<::GlobalNamespace::GorillaTriggerBox>  value) ;

constexpr void __cordl_internal_set_maxValue(float_t  value) ;

constexpr void __cordl_internal_set_minValue(float_t  value) ;

constexpr void __cordl_internal_set_setRandomly(bool  value) ;

constexpr void __cordl_internal_set_startingLocation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingZ(float_t  value) ;

constexpr void __cordl_internal_set_valueImReporting(float_t  value) ;

constexpr void __cordl_internal_set_valueIndex(int32_t  value) ;

constexpr void __cordl_internal_set_zRange(float_t  value) ;

/// @brief Method .ctor, addr 0x5996c14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaColorSlider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaColorSlider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaColorSlider(GorillaColorSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaColorSlider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaColorSlider(GorillaColorSlider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2593};

/// @brief Field setRandomly, offset: 0x20, size: 0x1, def value: None
 bool  ___setRandomly;

/// @brief Field zRange, offset: 0x24, size: 0x4, def value: None
 float_t  ___zRange;

/// @brief Field maxValue, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxValue;

/// @brief Field minValue, offset: 0x2c, size: 0x4, def value: None
 float_t  ___minValue;

/// @brief Field startingLocation, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingLocation;

/// @brief Field valueIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___valueIndex;

/// @brief Field valueImReporting, offset: 0x40, size: 0x4, def value: None
 float_t  ___valueImReporting;

/// @brief Field gorilla, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerBox>  ___gorilla;

/// @brief Field startingZ, offset: 0x50, size: 0x4, def value: None
 float_t  ___startingZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___setRandomly) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___zRange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___maxValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___minValue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___startingLocation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___valueIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___valueImReporting) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___gorilla) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaColorSlider, ___startingZ) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaColorSlider) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
