#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersLoudNoiseSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActorSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersLoudNoiseSettings)
// Forward declare root types
namespace GlobalNamespace {
class CrittersLoudNoiseSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersLoudNoiseSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersLoudNoiseSettings*, "", "CrittersLoudNoiseSettings");
// Dependencies CrittersActorSettings
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersLoudNoiseSettings
class CORDL_TYPE CrittersLoudNoiseSettings : public ::GlobalNamespace::CrittersActorSettings {
public:
// Declarations
/// @brief Field _disableWhenSoundDisabled, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableWhenSoundDisabled, put=__cordl_internal_set__disableWhenSoundDisabled)) bool  _disableWhenSoundDisabled;

/// @brief Field _soundDuration, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__soundDuration, put=__cordl_internal_set__soundDuration)) float_t  _soundDuration;

/// @brief Field _soundEnabled, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__soundEnabled, put=__cordl_internal_set__soundEnabled)) bool  _soundEnabled;

/// @brief Field _soundVolume, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__soundVolume, put=__cordl_internal_set__soundVolume)) float_t  _soundVolume;

/// @brief Field _volumeFearAttractionMultiplier, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__volumeFearAttractionMultiplier, put=__cordl_internal_set__volumeFearAttractionMultiplier)) float_t  _volumeFearAttractionMultiplier;

static inline ::GlobalNamespace::CrittersLoudNoiseSettings* New_ctor() ;

/// @brief Method UpdateActorSettings, addr 0x56000e4, size 0xa8, virtual true, abstract: false, final false
inline void UpdateActorSettings() ;

constexpr bool const& __cordl_internal_get__disableWhenSoundDisabled() const;

constexpr bool& __cordl_internal_get__disableWhenSoundDisabled() ;

constexpr float_t const& __cordl_internal_get__soundDuration() const;

constexpr float_t& __cordl_internal_get__soundDuration() ;

constexpr bool const& __cordl_internal_get__soundEnabled() const;

constexpr bool& __cordl_internal_get__soundEnabled() ;

constexpr float_t const& __cordl_internal_get__soundVolume() const;

constexpr float_t& __cordl_internal_get__soundVolume() ;

constexpr float_t const& __cordl_internal_get__volumeFearAttractionMultiplier() const;

constexpr float_t& __cordl_internal_get__volumeFearAttractionMultiplier() ;

constexpr void __cordl_internal_set__disableWhenSoundDisabled(bool  value) ;

constexpr void __cordl_internal_set__soundDuration(float_t  value) ;

constexpr void __cordl_internal_set__soundEnabled(bool  value) ;

constexpr void __cordl_internal_set__soundVolume(float_t  value) ;

constexpr void __cordl_internal_set__volumeFearAttractionMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x560018c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersLoudNoiseSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersLoudNoiseSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersLoudNoiseSettings(CrittersLoudNoiseSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersLoudNoiseSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersLoudNoiseSettings(CrittersLoudNoiseSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{102};

/// @brief Field _soundVolume, offset: 0x40, size: 0x4, def value: None
 float_t  ____soundVolume;

/// @brief Field _soundDuration, offset: 0x44, size: 0x4, def value: None
 float_t  ____soundDuration;

/// @brief Field _soundEnabled, offset: 0x48, size: 0x1, def value: None
 bool  ____soundEnabled;

/// @brief Field _disableWhenSoundDisabled, offset: 0x49, size: 0x1, def value: None
 bool  ____disableWhenSoundDisabled;

/// @brief Field _volumeFearAttractionMultiplier, offset: 0x4c, size: 0x4, def value: None
 float_t  ____volumeFearAttractionMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersLoudNoiseSettings, ____soundVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoiseSettings, ____soundDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoiseSettings, ____soundEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoiseSettings, ____disableWhenSoundDisabled) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoiseSettings, ____volumeFearAttractionMultiplier) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersLoudNoiseSettings) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
