#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSpotlight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRSpotlight)
// Forward declare root types
namespace GlobalNamespace {
class GRSpotlight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSpotlight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSpotlight*, "", "GRSpotlight");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSpotlight
class CORDL_TYPE GRSpotlight : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field timeOffset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOffset, put=__cordl_internal_set_timeOffset)) float_t  timeOffset;

/// @brief Field xAmplitude, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_xAmplitude, put=__cordl_internal_set_xAmplitude)) float_t  xAmplitude;

/// @brief Field xFrequency, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_xFrequency, put=__cordl_internal_set_xFrequency)) float_t  xFrequency;

/// @brief Field xStart, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_xStart, put=__cordl_internal_set_xStart)) float_t  xStart;

/// @brief Field yAmplitude, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_yAmplitude, put=__cordl_internal_set_yAmplitude)) float_t  yAmplitude;

/// @brief Field yFrequency, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_yFrequency, put=__cordl_internal_set_yFrequency)) float_t  yFrequency;

/// @brief Field yStart, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_yStart, put=__cordl_internal_set_yStart)) float_t  yStart;

/// @brief Method Awake, addr 0x58b73d4, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRSpotlight* New_ctor() ;

/// @brief Method Tick, addr 0x58b74b4, size 0xa0, virtual true, abstract: false, final false
inline void Tick() ;

constexpr float_t const& __cordl_internal_get_timeOffset() const;

constexpr float_t& __cordl_internal_get_timeOffset() ;

constexpr float_t const& __cordl_internal_get_xAmplitude() const;

constexpr float_t& __cordl_internal_get_xAmplitude() ;

constexpr float_t const& __cordl_internal_get_xFrequency() const;

constexpr float_t& __cordl_internal_get_xFrequency() ;

constexpr float_t const& __cordl_internal_get_xStart() const;

constexpr float_t& __cordl_internal_get_xStart() ;

constexpr float_t const& __cordl_internal_get_yAmplitude() const;

constexpr float_t& __cordl_internal_get_yAmplitude() ;

constexpr float_t const& __cordl_internal_get_yFrequency() const;

constexpr float_t& __cordl_internal_get_yFrequency() ;

constexpr float_t const& __cordl_internal_get_yStart() const;

constexpr float_t& __cordl_internal_get_yStart() ;

constexpr void __cordl_internal_set_timeOffset(float_t  value) ;

constexpr void __cordl_internal_set_xAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_xFrequency(float_t  value) ;

constexpr void __cordl_internal_set_xStart(float_t  value) ;

constexpr void __cordl_internal_set_yAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_yFrequency(float_t  value) ;

constexpr void __cordl_internal_set_yStart(float_t  value) ;

/// @brief Method .ctor, addr 0x58b7554, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSpotlight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSpotlight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSpotlight(GRSpotlight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSpotlight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSpotlight(GRSpotlight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2045};

/// @brief Field yAmplitude, offset: 0x24, size: 0x4, def value: None
 float_t  ___yAmplitude;

/// @brief Field xAmplitude, offset: 0x28, size: 0x4, def value: None
 float_t  ___xAmplitude;

/// @brief Field yFrequency, offset: 0x2c, size: 0x4, def value: None
 float_t  ___yFrequency;

/// @brief Field xFrequency, offset: 0x30, size: 0x4, def value: None
 float_t  ___xFrequency;

/// @brief Field yStart, offset: 0x34, size: 0x4, def value: None
 float_t  ___yStart;

/// @brief Field xStart, offset: 0x38, size: 0x4, def value: None
 float_t  ___xStart;

/// @brief Field timeOffset, offset: 0x3c, size: 0x4, def value: None
 float_t  ___timeOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSpotlight, ___yAmplitude) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpotlight, ___xAmplitude) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpotlight, ___yFrequency) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpotlight, ___xFrequency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpotlight, ___yStart) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpotlight, ___xStart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSpotlight, ___timeOffset) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSpotlight) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
