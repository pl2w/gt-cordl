#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersLoudNoise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersLoudNoise)
namespace GlobalNamespace {
class CrittersPawn;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersLoudNoise;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersLoudNoise*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersLoudNoise*, "", "CrittersLoudNoise");
// Dependencies CrittersActor
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersLoudNoise
class CORDL_TYPE CrittersLoudNoise : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field disableWhenSoundDisabled, offset 0x1a2, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableWhenSoundDisabled, put=__cordl_internal_set_disableWhenSoundDisabled)) bool  disableWhenSoundDisabled;

/// @brief Field soundDuration, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundDuration, put=__cordl_internal_set_soundDuration)) float_t  soundDuration;

/// @brief Field soundEnabled, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_soundEnabled, put=__cordl_internal_set_soundEnabled)) bool  soundEnabled;

/// @brief Field soundVolume, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundVolume, put=__cordl_internal_set_soundVolume)) float_t  soundVolume;

/// @brief Field timeSoundEnabled, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSoundEnabled, put=__cordl_internal_set_timeSoundEnabled)) double_t  timeSoundEnabled;

/// @brief Field volumeFearAttractionMultiplier, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_volumeFearAttractionMultiplier, put=__cordl_internal_set_volumeFearAttractionMultiplier)) float_t  volumeFearAttractionMultiplier;

/// @brief Field wasSoundEnabled, offset 0x1a1, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasSoundEnabled, put=__cordl_internal_set_wasSoundEnabled)) bool  wasSoundEnabled;

/// @brief Method AddActorDataToList, addr 0x55ffbf4, size 0x254, virtual true, abstract: false, final false
inline int32_t AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method CalculateAttraction, addr 0x55ff818, size 0x11c, virtual true, abstract: false, final false
inline void CalculateAttraction(::GlobalNamespace::CrittersPawn*  critter, float_t  multiplier) ;

/// @brief Method CalculateFear, addr 0x55ff694, size 0x11c, virtual true, abstract: false, final false
inline void CalculateFear(::GlobalNamespace::CrittersPawn*  critter, float_t  multiplier) ;

static inline ::GlobalNamespace::CrittersLoudNoise* New_ctor() ;

/// @brief Method OnEnable, addr 0x55ff3f8, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayHandTapLocal, addr 0x560001c, size 0x98, virtual false, abstract: false, final false
inline void PlayHandTapLocal(bool  isLeft) ;

/// @brief Method PlayHandTapRemote, addr 0x56000b4, size 0x10, virtual false, abstract: false, final false
inline void PlayHandTapRemote(double_t  serverTime, bool  isLeft) ;

/// @brief Method PlayVoiceSpeechLocal, addr 0x56000c4, size 0x18, virtual false, abstract: false, final false
inline void PlayVoiceSpeechLocal(double_t  serverTime, float_t  duration, float_t  volume) ;

/// @brief Method ProcessLocal, addr 0x55ff4bc, size 0x1c0, virtual true, abstract: false, final false
inline bool ProcessLocal() ;

/// @brief Method ProcessRemote, addr 0x55ff67c, size 0x18, virtual true, abstract: false, final false
inline void ProcessRemote() ;

/// @brief Method SendDataByCrittersActorType, addr 0x55ffb28, size 0xcc, virtual true, abstract: false, final false
inline void SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SetTimeEnabled, addr 0x55ff414, size 0x88, virtual false, abstract: false, final false
inline void SetTimeEnabled() ;

/// @brief Method SpawnData, addr 0x55ff49c, size 0x20, virtual false, abstract: false, final false
inline void SpawnData(float_t  _soundVolume, float_t  _soundDuration, float_t  _soundMultiplier, bool  _soundEnabled) ;

/// @brief Method TotalActorDataLength, addr 0x55ffe48, size 0x18, virtual true, abstract: false, final false
inline int32_t TotalActorDataLength() ;

/// @brief Method UpdateFromRPC, addr 0x55ffe60, size 0x1bc, virtual true, abstract: false, final false
inline int32_t UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateSpecificActor, addr 0x55ff99c, size 0x18c, virtual true, abstract: false, final false
inline bool UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream) ;

constexpr bool const& __cordl_internal_get_disableWhenSoundDisabled() const;

constexpr bool& __cordl_internal_get_disableWhenSoundDisabled() ;

constexpr float_t const& __cordl_internal_get_soundDuration() const;

constexpr float_t& __cordl_internal_get_soundDuration() ;

constexpr bool const& __cordl_internal_get_soundEnabled() const;

constexpr bool& __cordl_internal_get_soundEnabled() ;

constexpr float_t const& __cordl_internal_get_soundVolume() const;

constexpr float_t& __cordl_internal_get_soundVolume() ;

constexpr double_t const& __cordl_internal_get_timeSoundEnabled() const;

constexpr double_t& __cordl_internal_get_timeSoundEnabled() ;

constexpr float_t const& __cordl_internal_get_volumeFearAttractionMultiplier() const;

constexpr float_t& __cordl_internal_get_volumeFearAttractionMultiplier() ;

constexpr bool const& __cordl_internal_get_wasSoundEnabled() const;

constexpr bool& __cordl_internal_get_wasSoundEnabled() ;

constexpr void __cordl_internal_set_disableWhenSoundDisabled(bool  value) ;

constexpr void __cordl_internal_set_soundDuration(float_t  value) ;

constexpr void __cordl_internal_set_soundEnabled(bool  value) ;

constexpr void __cordl_internal_set_soundVolume(float_t  value) ;

constexpr void __cordl_internal_set_timeSoundEnabled(double_t  value) ;

constexpr void __cordl_internal_set_volumeFearAttractionMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_wasSoundEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x56000dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersLoudNoise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersLoudNoise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersLoudNoise(CrittersLoudNoise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersLoudNoise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersLoudNoise(CrittersLoudNoise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{101};

/// @brief Field soundVolume, offset: 0x188, size: 0x4, def value: None
 float_t  ___soundVolume;

/// @brief Field volumeFearAttractionMultiplier, offset: 0x18c, size: 0x4, def value: None
 float_t  ___volumeFearAttractionMultiplier;

/// @brief Field soundDuration, offset: 0x190, size: 0x4, def value: None
 float_t  ___soundDuration;

/// @brief Field timeSoundEnabled, offset: 0x198, size: 0x8, def value: None
 double_t  ___timeSoundEnabled;

/// @brief Field soundEnabled, offset: 0x1a0, size: 0x1, def value: None
 bool  ___soundEnabled;

/// @brief Field wasSoundEnabled, offset: 0x1a1, size: 0x1, def value: None
 bool  ___wasSoundEnabled;

/// @brief Field disableWhenSoundDisabled, offset: 0x1a2, size: 0x1, def value: None
 bool  ___disableWhenSoundDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersLoudNoise, ___soundVolume) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoise, ___volumeFearAttractionMultiplier) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoise, ___soundDuration) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoise, ___timeSoundEnabled) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoise, ___soundEnabled) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoise, ___wasSoundEnabled) == 0x1a1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersLoudNoise, ___disableWhenSoundDisabled) == 0x1a2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersLoudNoise) == 0x1a8, "Size mismatch!");

} // namespace end def GlobalNamespace
