#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizeSpriteEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_def.hpp"
CORDL_MODULE_EXPORT(LocalizeSpriteEvent)
namespace UnityEngine::Localization::Events {
class UnityEventSprite;
}
namespace UnityEngine::Localization {
class LocalizedSprite;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::Localization::Components {
class LocalizeSpriteEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Components::LocalizeSpriteEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Components::LocalizeSpriteEvent*, "UnityEngine.Localization.Components", "LocalizeSpriteEvent");
// [AddComponentMenu("Localization/Asset/Localize Sprite Event")]
// Dependencies UnityEngine.Localization.Components.LocalizedAssetEvent`3<TObject, TReference, TEvent>
namespace UnityEngine::Localization::Components {
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizeSpriteEvent
class CORDL_TYPE LocalizeSpriteEvent : public ::UnityEngine::Localization::Components::LocalizedAssetEvent_3<::UnityW<::UnityEngine::Sprite>,::UnityEngine::Localization::LocalizedSprite*,::UnityEngine::Localization::Events::UnityEventSprite*> {
public:
// Declarations
static inline ::UnityEngine::Localization::Components::LocalizeSpriteEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ef6c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizeSpriteEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizeSpriteEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizeSpriteEvent(LocalizeSpriteEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizeSpriteEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizeSpriteEvent(LocalizeSpriteEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Components::LocalizeSpriteEvent) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Components
