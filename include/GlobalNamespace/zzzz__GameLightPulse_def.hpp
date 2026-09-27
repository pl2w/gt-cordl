#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightPulse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameLightPulse)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLightPulse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameLightPulse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightPulse*, "", "GameLightPulse");
// Dependencies GameLight
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLightPulse
class CORDL_TYPE GameLightPulse : public ::GlobalNamespace::GameLight {
public:
// Declarations
/// @brief Field frequency, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_frequency, put=__cordl_internal_set_frequency)) float_t  frequency;

/// @brief Field offsetTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetTime, put=__cordl_internal_set_offsetTime)) float_t  offsetTime;

/// @brief Field startingIntensity, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingIntensity, put=__cordl_internal_set_startingIntensity)) float_t  startingIntensity;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5837b60, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GameLightPulse* New_ctor() ;

/// @brief Method OnDisable, addr 0x5837bbc, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5837ba0, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5837bd8, size 0x84, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr float_t const& __cordl_internal_get_frequency() const;

constexpr float_t& __cordl_internal_get_frequency() ;

constexpr float_t const& __cordl_internal_get_offsetTime() const;

constexpr float_t& __cordl_internal_get_offsetTime() ;

constexpr float_t const& __cordl_internal_get_startingIntensity() const;

constexpr float_t& __cordl_internal_get_startingIntensity() ;

constexpr void __cordl_internal_set_frequency(float_t  value) ;

constexpr void __cordl_internal_set_offsetTime(float_t  value) ;

constexpr void __cordl_internal_set_startingIntensity(float_t  value) ;

/// @brief Method .ctor, addr 0x5837c5c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameLightPulse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameLightPulse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLightPulse(GameLightPulse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLightPulse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLightPulse(GameLightPulse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1778};

/// @brief Field startingIntensity, offset: 0x5c, size: 0x4, def value: None
 float_t  ___startingIntensity;

/// @brief Field frequency, offset: 0x60, size: 0x4, def value: None
 float_t  ___frequency;

/// @brief Field offsetTime, offset: 0x64, size: 0x4, def value: None
 float_t  ___offsetTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLightPulse, ___startingIntensity) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightPulse, ___frequency) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightPulse, ___offsetTime) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLightPulse) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
