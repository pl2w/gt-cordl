#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceShiftCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceShiftCosmetic)
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceShiftCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceShiftCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceShiftCosmetic*, "", "VoiceShiftCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceShiftCosmetic
class CORDL_TYPE VoiceShiftCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsShifted)) bool  IsShifted;

 __declspec(property(get=get_ModifyPitch)) bool  ModifyPitch;

 __declspec(property(get=get_ModifyVolume)) bool  ModifyVolume;

 __declspec(property(get=get_Pitch, put=set_Pitch)) float_t  Pitch;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field isShifted, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_isShifted, put=__cordl_internal_set_isShifted)) bool  isShifted;

/// @brief Field modifyPitch, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyPitch, put=__cordl_internal_set_modifyPitch)) bool  modifyPitch;

/// @brief Field modifyVolume, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyVolume, put=__cordl_internal_set_modifyVolume)) bool  modifyVolume;

/// @brief Field myRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field pitch, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field shiftedPitch, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftedPitch, put=__cordl_internal_set_shiftedPitch)) float_t  shiftedPitch;

/// @brief Field shiftedVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftedVolume, put=__cordl_internal_set_shiftedVolume)) float_t  shiftedVolume;

/// @brief Field volume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

static inline ::GlobalNamespace::VoiceShiftCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x565e09c, size 0xb4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x565df50, size 0x14c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StartVoiceShift, addr 0x565e150, size 0x4c, virtual false, abstract: false, final false
inline void StartVoiceShift() ;

/// @brief Method StopVoiceShift, addr 0x565e19c, size 0x24, virtual false, abstract: false, final false
inline void StopVoiceShift() ;

/// @brief Method ToggleVoiceShift, addr 0x565e1c0, size 0x28, virtual false, abstract: false, final false
inline void ToggleVoiceShift() ;

constexpr bool const& __cordl_internal_get_isShifted() const;

constexpr bool& __cordl_internal_get_isShifted() ;

constexpr bool const& __cordl_internal_get_modifyPitch() const;

constexpr bool& __cordl_internal_get_modifyPitch() ;

constexpr bool const& __cordl_internal_get_modifyVolume() const;

constexpr bool& __cordl_internal_get_modifyVolume() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr float_t const& __cordl_internal_get_shiftedPitch() const;

constexpr float_t& __cordl_internal_get_shiftedPitch() ;

constexpr float_t const& __cordl_internal_get_shiftedVolume() const;

constexpr float_t& __cordl_internal_get_shiftedVolume() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr void __cordl_internal_set_isShifted(bool  value) ;

constexpr void __cordl_internal_set_modifyPitch(bool  value) ;

constexpr void __cordl_internal_set_modifyVolume(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_shiftedPitch(float_t  value) ;

constexpr void __cordl_internal_set_shiftedVolume(float_t  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

/// @brief Method .ctor, addr 0x565e1e8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsShifted, addr 0x565debc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsShifted() ;

/// @brief Method get_ModifyPitch, addr 0x565deac, size 0x8, virtual false, abstract: false, final false
inline bool get_ModifyPitch() ;

/// @brief Method get_ModifyVolume, addr 0x565deb4, size 0x8, virtual false, abstract: false, final false
inline bool get_ModifyVolume() ;

/// @brief Method get_Pitch, addr 0x565dec4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Pitch() ;

/// @brief Method get_Volume, addr 0x565df0c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_Pitch, addr 0x565decc, size 0x40, virtual false, abstract: false, final false
inline void set_Pitch(float_t  value) ;

/// @brief Method set_Volume, addr 0x565df14, size 0x3c, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceShiftCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceShiftCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceShiftCosmetic(VoiceShiftCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceShiftCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceShiftCosmetic(VoiceShiftCosmetic const& ) = delete;

/// @brief Field PITCH_MAX offset 0xffffffff size 0x4
static constexpr float_t  PITCH_MAX{static_cast<float_t>(1.5f)};

/// @brief Field PITCH_MIN offset 0xffffffff size 0x4
static constexpr float_t  PITCH_MIN{static_cast<float_t>(0.6666667f)};

/// @brief Field VOLUME_MAX offset 0xffffffff size 0x4
static constexpr float_t  VOLUME_MAX{static_cast<float_t>(1.0f)};

/// @brief Field VOLUME_MIN offset 0xffffffff size 0x4
static constexpr float_t  VOLUME_MIN{static_cast<float_t>(0.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{773};

/// [SerializeField]
/// @brief Field modifyPitch, offset: 0x20, size: 0x1, def value: None
 bool  ___modifyPitch;

/// [SerializeField]
/// @brief Field modifyVolume, offset: 0x21, size: 0x1, def value: None
 bool  ___modifyVolume;

/// [Range(0.6666667, 1.5)]
/// [SerializeField]
/// @brief Field shiftedPitch, offset: 0x24, size: 0x4, def value: None
 float_t  ___shiftedPitch;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field shiftedVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___shiftedVolume;

/// @brief Field pitch, offset: 0x2c, size: 0x4, def value: None
 float_t  ___pitch;

/// @brief Field volume, offset: 0x30, size: 0x4, def value: None
 float_t  ___volume;

/// @brief Field isShifted, offset: 0x34, size: 0x1, def value: None
 bool  ___isShifted;

/// @brief Field myRig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___modifyPitch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___modifyVolume) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___shiftedPitch) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___shiftedVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___pitch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___volume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___isShifted) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceShiftCosmetic, ___myRig) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceShiftCosmetic) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
