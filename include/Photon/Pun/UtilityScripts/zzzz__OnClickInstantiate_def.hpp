#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnClickInstantiate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_InstantiateOption_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_InputButton_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnClickInstantiate)
namespace GlobalNamespace {
struct OnClickInstantiate_InstantiateOption;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnClickInstantiate;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::OnClickInstantiate*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::OnClickInstantiate*, "Photon.Pun.UtilityScripts", "OnClickInstantiate");
// Dependencies Photon.Pun.UtilityScripts.OnClickInstantiate::InstantiateOption, UnityEngine.EventSystems.PointerEventData::InputButton, UnityEngine.KeyCode, UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.OnClickInstantiate
class CORDL_TYPE OnClickInstantiate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InstantiateOption = ::GlobalNamespace::OnClickInstantiate_InstantiateOption;

/// @brief Field Button, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Button, put=__cordl_internal_set_Button)) ::GlobalNamespace::PointerEventData_InputButton  Button;

/// @brief Field InstantiateType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_InstantiateType, put=__cordl_internal_set_InstantiateType)) ::GlobalNamespace::OnClickInstantiate_InstantiateOption  InstantiateType;

/// @brief Field ModifierKey, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ModifierKey, put=__cordl_internal_set_ModifierKey)) ::UnityEngine::KeyCode  ModifierKey;

/// @brief Field Prefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prefab, put=__cordl_internal_set_Prefab)) ::UnityW<::UnityEngine::GameObject>  Prefab;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

static inline ::Photon::Pun::UtilityScripts::OnClickInstantiate* New_ctor() ;

/// @brief Method UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick, addr 0xa73a45c, size 0x24c, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

constexpr ::GlobalNamespace::PointerEventData_InputButton const& __cordl_internal_get_Button() const;

constexpr ::GlobalNamespace::PointerEventData_InputButton& __cordl_internal_get_Button() ;

constexpr ::GlobalNamespace::OnClickInstantiate_InstantiateOption const& __cordl_internal_get_InstantiateType() const;

constexpr ::GlobalNamespace::OnClickInstantiate_InstantiateOption& __cordl_internal_get_InstantiateType() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_ModifierKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_ModifierKey() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Prefab() ;

constexpr void __cordl_internal_set_Button(::GlobalNamespace::PointerEventData_InputButton  value) ;

constexpr void __cordl_internal_set_InstantiateType(::GlobalNamespace::OnClickInstantiate_InstantiateOption  value) ;

constexpr void __cordl_internal_set_ModifierKey(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_Prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xa73a6a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnClickInstantiate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnClickInstantiate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnClickInstantiate(OnClickInstantiate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnClickInstantiate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnClickInstantiate(OnClickInstantiate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31228};

/// @brief Field Button, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::PointerEventData_InputButton  ___Button;

/// @brief Field ModifierKey, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___ModifierKey;

/// @brief Field Prefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Prefab;

/// [SerializeField]
/// @brief Field InstantiateType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OnClickInstantiate_InstantiateOption  ___InstantiateType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___Button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___ModifierKey) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___Prefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickInstantiate, ___InstantiateType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::OnClickInstantiate) == 0x38, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
