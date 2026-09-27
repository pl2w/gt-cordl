#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHapticsClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHapticsClip)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHapticsClip;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRHapticsClip*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRHapticsClip*, "", "OVRHapticsClip");
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-haptics-apis/")]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHapticsClip
class CORDL_TYPE OVRHapticsClip : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Samples, put=set_Samples)) ::ArrayW<uint8_t>  Samples;

/// @brief Field <Capacity>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capacity_k__BackingField, put=__cordl_internal_set__Capacity_k__BackingField)) int32_t  _Capacity_k__BackingField;

/// @brief Field <Count>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field <Samples>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Samples_k__BackingField, put=__cordl_internal_set__Samples_k__BackingField)) ::ArrayW<uint8_t>  _Samples_k__BackingField;

/// @brief Method InitializeFromAudioFloatTrack, addr 0xa5c23d0, size 0x354, virtual false, abstract: false, final false
inline void InitializeFromAudioFloatTrack(::ArrayW<float_t>  sourceData, double_t  sourceFrequency, int32_t  sourceChannelCount, int32_t  sourceChannel) ;

static inline ::GlobalNamespace::OVRHapticsClip* New_ctor() ;

static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(::GlobalNamespace::OVRHapticsClip*  a, ::GlobalNamespace::OVRHapticsClip*  b) ;

static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(::UnityEngine::AudioClip*  audioClip, int32_t  channel) ;

static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(int32_t  capacity) ;

static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(::ArrayW<uint8_t>  samples, int32_t  samplesCount) ;

/// @brief Method Reset, addr 0xa5c2724, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method WriteSample, addr 0xa5c1d84, size 0x130, virtual false, abstract: false, final false
inline void WriteSample(uint8_t  sample) ;

constexpr int32_t const& __cordl_internal_get__Capacity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Capacity_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__Samples_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__Samples_k__BackingField() ;

constexpr void __cordl_internal_set__Capacity_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Samples_k__BackingField(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa5c1f04, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa5c20e4, size 0x218, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRHapticsClip*  a, ::GlobalNamespace::OVRHapticsClip*  b) ;

/// @brief Method .ctor, addr 0xa5c22fc, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AudioClip*  audioClip, int32_t  channel) ;

/// @brief Method .ctor, addr 0xa5c1ca4, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0xa5c200c, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  samples, int32_t  samplesCount) ;

/// [CompilerGenerated]
/// @brief Method get_Capacity, addr 0xa5c1ee4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// [CompilerGenerated]
/// @brief Method get_Count, addr 0xa5c1ed4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_Samples, addr 0xa5c1ef4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Samples() ;

/// [CompilerGenerated]
/// @brief Method set_Capacity, addr 0xa5c1eec, size 0x8, virtual false, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Count, addr 0xa5c1edc, size 0x8, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Samples, addr 0xa5c1efc, size 0x8, virtual false, abstract: false, final false
inline void set_Samples(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRHapticsClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRHapticsClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRHapticsClip(OVRHapticsClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRHapticsClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRHapticsClip(OVRHapticsClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11927};

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Capacity>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Capacity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Samples>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____Samples_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHapticsClip, ____Count_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHapticsClip, ____Capacity_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHapticsClip, ____Samples_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRHapticsClip) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
