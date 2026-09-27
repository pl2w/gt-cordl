#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Audio/AudioAffordanceTheme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioAffordanceTheme)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceThemeData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
class AudioAffordanceTheme;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio", "AudioAffordanceTheme");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme
class CORDL_TYPE AudioAffordanceTheme : public ::System::Object {
public:
// Declarations
/// @brief Field m_List, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_List, put=__cordl_internal_set_m_List)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData*>*  m_List;

/// @brief Method GetAffordanceThemeDataForIndex, addr 0xb4d1ef4, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData* GetAffordanceThemeDataForIndex(uint8_t  stateIndex) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme* New_ctor() ;

/// @brief Method ValidateTheme, addr 0xb4d1b34, size 0x320, virtual false, abstract: false, final false
inline void ValidateTheme() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData*>* const& __cordl_internal_get_m_List() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData*>*& __cordl_internal_get_m_List() ;

constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData*>*  value) ;

/// @brief Method .ctor, addr 0xb4d1654, size 0x4e0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioAffordanceTheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceTheme", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioAffordanceTheme(AudioAffordanceTheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioAffordanceTheme", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioAffordanceTheme(AudioAffordanceTheme const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11725};

/// [SerializeField]
/// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceThemeData*>*  ___m_List;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme, ___m_List) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio::AudioAffordanceTheme) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Audio
