#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBasicMultiChannelPerlin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineBasicMultiChannelPerlin)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifiableNoise;
}
namespace Unity::Cinemachine {
class NoiseSettings;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineBasicMultiChannelPerlin;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin*, "Unity.Cinemachine", "CinemachineBasicMultiChannelPerlin");
// [AddComponentMenu("Cinemachine/Procedural/Noise/Cinemachine Basic Multi Channel Perlin")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)2)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineBasicMultiChannelPerlin.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBasicMultiChannelPerlin
class CORDL_TYPE CinemachineBasicMultiChannelPerlin : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
/// @brief Field AmplitudeGain, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_AmplitudeGain, put=__cordl_internal_set_AmplitudeGain)) float_t  AmplitudeGain;

/// @brief Field FrequencyGain, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_FrequencyGain, put=__cordl_internal_set_FrequencyGain)) float_t  FrequencyGain;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field NoiseProfile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_NoiseProfile, put=__cordl_internal_set_NoiseProfile)) ::UnityW<::Unity::Cinemachine::NoiseSettings>  NoiseProfile;

/// @brief Field PivotOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_PivotOffset, put=__cordl_internal_set_PivotOffset)) ::UnityEngine::Vector3  PivotOffset;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_get_NoiseAmplitudeFrequency, put=Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_set_NoiseAmplitudeFrequency)) ::System::ValueTuple_2<float_t,float_t>  Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_NoiseAmplitudeFrequency;

/// @brief Field m_Initialized, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Initialized, put=__cordl_internal_set_m_Initialized)) bool  m_Initialized;

/// @brief Field m_NoiseOffsets, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NoiseOffsets, put=__cordl_internal_set_m_NoiseOffsets)) ::UnityEngine::Vector3  m_NoiseOffsets;

/// @brief Field m_NoiseTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NoiseTime, put=__cordl_internal_set_m_NoiseTime)) float_t  m_NoiseTime;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise*() noexcept;

/// @brief Method Initialize, addr 0xae9e944, size 0xf0, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method MutateCameraState, addr 0xae9e494, size 0x4b0, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin* New_ctor() ;

/// @brief Method ReSeed, addr 0xae9ea34, size 0x70, virtual false, abstract: false, final false
inline void ReSeed() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableNoise.get_NoiseAmplitudeFrequency, addr 0xae9e3a4, size 0x60, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<float_t,float_t> Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_get_NoiseAmplitudeFrequency() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableNoise.set_NoiseAmplitudeFrequency, addr 0xae9e404, size 0x8, virtual true, abstract: false, final true
inline void Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableNoise_set_NoiseAmplitudeFrequency(::System::ValueTuple_2<float_t,float_t>  value) ;

constexpr float_t const& __cordl_internal_get_AmplitudeGain() const;

constexpr float_t& __cordl_internal_get_AmplitudeGain() ;

constexpr float_t const& __cordl_internal_get_FrequencyGain() const;

constexpr float_t& __cordl_internal_get_FrequencyGain() ;

constexpr ::UnityW<::Unity::Cinemachine::NoiseSettings> const& __cordl_internal_get_NoiseProfile() const;

constexpr ::UnityW<::Unity::Cinemachine::NoiseSettings>& __cordl_internal_get_NoiseProfile() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PivotOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PivotOffset() ;

constexpr bool const& __cordl_internal_get_m_Initialized() const;

constexpr bool& __cordl_internal_get_m_Initialized() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NoiseOffsets() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NoiseOffsets() ;

constexpr float_t const& __cordl_internal_get_m_NoiseTime() const;

constexpr float_t& __cordl_internal_get_m_NoiseTime() ;

constexpr void __cordl_internal_set_AmplitudeGain(float_t  value) ;

constexpr void __cordl_internal_set_FrequencyGain(float_t  value) ;

constexpr void __cordl_internal_set_NoiseProfile(::UnityW<::Unity::Cinemachine::NoiseSettings>  value) ;

constexpr void __cordl_internal_set_PivotOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Initialized(bool  value) ;

constexpr void __cordl_internal_set_m_NoiseOffsets(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_NoiseTime(float_t  value) ;

/// @brief Method .ctor, addr 0xae9eaa4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xae9e40c, size 0x80, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xae9e48c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableNoise* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableNoise() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBasicMultiChannelPerlin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBasicMultiChannelPerlin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineBasicMultiChannelPerlin(CinemachineBasicMultiChannelPerlin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBasicMultiChannelPerlin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBasicMultiChannelPerlin(CinemachineBasicMultiChannelPerlin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22221};

/// [Tooltip("The asset containing the Noise Profile.  Define the frequencies and amplitudes there to make a characteristic noise profile.  Make your own or just use one of the many presets.")]
/// [FormerlySerializedAs("m_Definition")]
/// [FormerlySerializedAs("m_NoiseProfile")]
/// @brief Field NoiseProfile, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::NoiseSettings>  ___NoiseProfile;

/// [Tooltip("When rotating the camera, offset the camera\'s pivot position by this much (camera space)")]
/// [FormerlySerializedAs("m_PivotOffset")]
/// @brief Field PivotOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PivotOffset;

/// [Tooltip("Gain to apply to the amplitudes defined in the NoiseSettings asset.  1 is normal.  Setting this to 0 completely mutes the noise.")]
/// [FormerlySerializedAs("m_AmplitudeGain")]
/// @brief Field AmplitudeGain, offset: 0x3c, size: 0x4, def value: None
 float_t  ___AmplitudeGain;

/// [Tooltip("Scale factor to apply to the frequencies defined in the NoiseSettings asset.  1 is normal.  Larger magnitudes will make the noise shake more rapidly.")]
/// [FormerlySerializedAs("m_FrequencyGain")]
/// @brief Field FrequencyGain, offset: 0x40, size: 0x4, def value: None
 float_t  ___FrequencyGain;

/// @brief Field m_Initialized, offset: 0x44, size: 0x1, def value: None
 bool  ___m_Initialized;

/// @brief Field m_NoiseTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_NoiseTime;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("mNoiseOffsets")]
/// @brief Field m_NoiseOffsets, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_NoiseOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin, ___NoiseProfile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin, ___PivotOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin, ___AmplitudeGain) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin, ___FrequencyGain) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin, ___m_Initialized) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin, ___m_NoiseTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin, ___m_NoiseOffsets) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineBasicMultiChannelPerlin) == 0x58, "Size mismatch!");

} // namespace end def Unity::Cinemachine
