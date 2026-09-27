#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizeTextureEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_def.hpp"
CORDL_MODULE_EXPORT(LocalizeTextureEvent)
namespace UnityEngine::Localization::Events {
class UnityEventTexture;
}
namespace UnityEngine::Localization {
class LocalizedTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Localization::Components {
class LocalizeTextureEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Components::LocalizeTextureEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Components::LocalizeTextureEvent*, "UnityEngine.Localization.Components", "LocalizeTextureEvent");
// [AddComponentMenu("Localization/Asset/Localize Texture Event")]
// Dependencies UnityEngine.Localization.Components.LocalizedAssetEvent`3<TObject, TReference, TEvent>
namespace UnityEngine::Localization::Components {
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizeTextureEvent
class CORDL_TYPE LocalizeTextureEvent : public ::UnityEngine::Localization::Components::LocalizedAssetEvent_3<::UnityW<::UnityEngine::Texture>,::UnityEngine::Localization::LocalizedTexture*,::UnityEngine::Localization::Events::UnityEventTexture*> {
public:
// Declarations
static inline ::UnityEngine::Localization::Components::LocalizeTextureEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb04f580, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizeTextureEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizeTextureEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizeTextureEvent(LocalizeTextureEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizeTextureEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizeTextureEvent(LocalizeTextureEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25325};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Components::LocalizeTextureEvent) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Components
