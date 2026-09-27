#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizeAudioClipEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_def.hpp"
CORDL_MODULE_EXPORT(LocalizeAudioClipEvent)
namespace UnityEngine::Localization::Events {
class UnityEventAudioClip;
}
namespace UnityEngine::Localization {
class LocalizedAudioClip;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Localization::Components {
class LocalizeAudioClipEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Components::LocalizeAudioClipEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Components::LocalizeAudioClipEvent*, "UnityEngine.Localization.Components", "LocalizeAudioClipEvent");
// [AddComponentMenu("Localization/Asset/Localize Audio Clip Event")]
// Dependencies UnityEngine.Localization.Components.LocalizedAssetEvent`3<TObject, TReference, TEvent>
namespace UnityEngine::Localization::Components {
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizeAudioClipEvent
class CORDL_TYPE LocalizeAudioClipEvent : public ::UnityEngine::Localization::Components::LocalizedAssetEvent_3<::UnityW<::UnityEngine::AudioClip>,::UnityEngine::Localization::LocalizedAudioClip*,::UnityEngine::Localization::Events::UnityEventAudioClip*> {
public:
// Declarations
static inline ::UnityEngine::Localization::Components::LocalizeAudioClipEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ed60, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizeAudioClipEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizeAudioClipEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizeAudioClipEvent(LocalizeAudioClipEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizeAudioClipEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizeAudioClipEvent(LocalizeAudioClipEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Components::LocalizeAudioClipEvent) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Components
