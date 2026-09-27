#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedGameObjectEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_def.hpp"
CORDL_MODULE_EXPORT(LocalizedGameObjectEvent)
namespace UnityEngine::Localization::Events {
class UnityEventGameObject;
}
namespace UnityEngine::Localization {
class LocalizedGameObject;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Localization::Components {
class LocalizedGameObjectEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Components::LocalizedGameObjectEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Components::LocalizedGameObjectEvent*, "UnityEngine.Localization.Components", "LocalizedGameObjectEvent");
// [AddComponentMenu("Localization/Asset/Localize Prefab Event")]
// Dependencies UnityEngine.Localization.Components.LocalizedAssetEvent`3<TObject, TReference, TEvent>
namespace UnityEngine::Localization::Components {
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizedGameObjectEvent
class CORDL_TYPE LocalizedGameObjectEvent : public ::UnityEngine::Localization::Components::LocalizedAssetEvent_3<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Localization::LocalizedGameObject*,::UnityEngine::Localization::Events::UnityEventGameObject*> {
public:
// Declarations
/// @brief Field m_Current, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Current, put=__cordl_internal_set_m_Current)) ::UnityW<::UnityEngine::GameObject>  m_Current;

static inline ::UnityEngine::Localization::Components::LocalizedGameObjectEvent* New_ctor() ;

/// @brief Method UpdateAsset, addr 0xb04eda8, size 0x174, virtual true, abstract: false, final false
inline void UpdateAsset(::UnityEngine::GameObject*  localizedAsset) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Current() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Current() ;

constexpr void __cordl_internal_set_m_Current(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xb04ef1c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedGameObjectEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedGameObjectEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedGameObjectEvent(LocalizedGameObjectEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedGameObjectEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedGameObjectEvent(LocalizedGameObjectEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25321};

/// @brief Field m_Current, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_Current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Components::LocalizedGameObjectEvent, ___m_Current) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Components::LocalizedGameObjectEvent) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Components
