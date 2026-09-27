#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiSourceLoudness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiSourceLoudness)
namespace GlobalNamespace {
class ISpeakerLoudness;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiSourceLoudness;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MultiSourceLoudness*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiSourceLoudness*, "", "MultiSourceLoudness");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiSourceLoudness
class CORDL_TYPE MultiSourceLoudness : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsMicEnabled, put=set_IsMicEnabled)) bool  IsMicEnabled;

 __declspec(property(get=get_IsSpeaking, put=set_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Loudness, put=set_Loudness)) float_t  Loudness;

/// @brief Field <IsMicEnabled>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMicEnabled_k__BackingField, put=__cordl_internal_set__IsMicEnabled_k__BackingField)) bool  _IsMicEnabled_k__BackingField;

/// @brief Field <IsSpeaking>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpeaking_k__BackingField, put=__cordl_internal_set__IsSpeaking_k__BackingField)) bool  _IsSpeaking_k__BackingField;

/// @brief Field <Loudness>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Loudness_k__BackingField, put=__cordl_internal_set__Loudness_k__BackingField)) float_t  _Loudness_k__BackingField;

/// @brief Field loudnessMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudnessMultiplier, put=__cordl_internal_set_loudnessMultiplier)) float_t  loudnessMultiplier;

/// @brief Field sourceBehaviours, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceBehaviours, put=__cordl_internal_set_sourceBehaviours)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  sourceBehaviours;

/// @brief Field sources, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sources, put=__cordl_internal_set_sources)) ::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>*  sources;

/// @brief Convert operator to "::GlobalNamespace::ISpeakerLoudness"
constexpr operator  ::GlobalNamespace::ISpeakerLoudness*() noexcept;

/// @brief Method AddSource, addr 0x596c00c, size 0xf0, virtual false, abstract: false, final false
inline void AddSource(::GlobalNamespace::ISpeakerLoudness*  source) ;

/// @brief Method Awake, addr 0x596beac, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MultiSourceLoudness* New_ctor() ;

/// @brief Method RebuildSources, addr 0x596beb0, size 0x15c, virtual false, abstract: false, final false
inline void RebuildSources() ;

/// @brief Method RemoveSource, addr 0x596c0fc, size 0x58, virtual false, abstract: false, final false
inline void RemoveSource(::GlobalNamespace::ISpeakerLoudness*  source) ;

/// @brief Method Update, addr 0x596c154, size 0x274, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__IsMicEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMicEnabled_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpeaking_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpeaking_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Loudness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Loudness_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_loudnessMultiplier() const;

constexpr float_t& __cordl_internal_get_loudnessMultiplier() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& __cordl_internal_get_sourceBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& __cordl_internal_get_sourceBehaviours() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>* const& __cordl_internal_get_sources() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>*& __cordl_internal_get_sources() ;

constexpr void __cordl_internal_set__IsMicEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSpeaking_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Loudness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_loudnessMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_sourceBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value) ;

constexpr void __cordl_internal_set_sources(::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>*  value) ;

/// @brief Method .ctor, addr 0x596c3c8, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsMicEnabled, addr 0x596be9c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsMicEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpeaking, addr 0x596be7c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpeaking() ;

/// [CompilerGenerated]
/// @brief Method get_Loudness, addr 0x596be8c, size 0x8, virtual true, abstract: false, final true
inline float_t get_Loudness() ;

/// @brief Convert to "::GlobalNamespace::ISpeakerLoudness"
constexpr ::GlobalNamespace::ISpeakerLoudness* i___GlobalNamespace__ISpeakerLoudness() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsMicEnabled, addr 0x596bea4, size 0x8, virtual false, abstract: false, final false
inline void set_IsMicEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpeaking, addr 0x596be84, size 0x8, virtual false, abstract: false, final false
inline void set_IsSpeaking(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Loudness, addr 0x596be94, size 0x8, virtual false, abstract: false, final false
inline void set_Loudness(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiSourceLoudness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiSourceLoudness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiSourceLoudness(MultiSourceLoudness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiSourceLoudness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiSourceLoudness(MultiSourceLoudness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2388};

/// [Tooltip("Sources to combine. Each must be a component implementing ISpeakerLoudness (e.g. AudioSourceLoudness or GorillaSpeakerLoudness).")]
/// [SerializeField]
/// @brief Field sourceBehaviours, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  ___sourceBehaviours;

/// [Tooltip("Scales the combined loudness before it is reported. Use to tune the result onto the scale GorillaMouthFlap\'s volume thresholds expect.")]
/// [SerializeField]
/// @brief Field loudnessMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___loudnessMultiplier;

/// @brief Field sources, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ISpeakerLoudness*>*  ___sources;

/// [CompilerGenerated]
/// @brief Field <IsSpeaking>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsSpeaking_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Loudness>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____Loudness_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsMicEnabled>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsMicEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiSourceLoudness, ___sourceBehaviours) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiSourceLoudness, ___loudnessMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiSourceLoudness, ___sources) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiSourceLoudness, ____IsSpeaking_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiSourceLoudness, ____Loudness_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiSourceLoudness, ____IsMicEnabled_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiSourceLoudness) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
