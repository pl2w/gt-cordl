#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Audio/AudioAffordanceThemeDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(AudioAffordanceThemeDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceThemeDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceTheme;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceThemeDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio", "AudioAffordanceThemeDatumProperty");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatumProperty
class CORDL_TYPE AudioAffordanceThemeDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*  value) ;

/// @brief Method .ctor, addr 0xb4d1fcc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatum*  datum) ;

/// @brief Method .ctor, addr 0xb4d1f74, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioAffordanceThemeDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceThemeDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioAffordanceThemeDatumProperty(AudioAffordanceThemeDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceThemeDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioAffordanceThemeDatumProperty(AudioAffordanceThemeDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio
