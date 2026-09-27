#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/ControllerButtonsMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControllerButtonsMapper)
namespace GlobalNamespace {
struct ButtonClickAction_ControllerButtonsMapper_ButtonClickMode;
}
namespace GlobalNamespace {
struct ControllerButtonsMapper_ButtonClickAction;
}
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class ControllerButtonsMapper;
}
// Write type traits
MARK_REF_T(::Meta::XR::BuildingBlocks::ControllerButtonsMapper*);
DEFINE_IL2CPP_CLASS(::Meta::XR::BuildingBlocks::ControllerButtonsMapper*, "Meta.XR.BuildingBlocks", "ControllerButtonsMapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.ControllerButtonsMapper
class CORDL_TYPE ControllerButtonsMapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonClickAction = ::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction;

 __declspec(property(get=get_ButtonClickActions, put=set_ButtonClickActions)) ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*  ButtonClickActions;

/// @brief Field _buttonClickActions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonClickActions, put=__cordl_internal_set__buttonClickActions)) ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*  _buttonClickActions;

/// @brief Method IsActionTriggered, addr 0x9ec2738, size 0x30, virtual false, abstract: false, final false
static inline bool IsActionTriggered(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction  buttonClickAction) ;

/// @brief Method IsLegacyInputActionTriggered, addr 0x9ec2768, size 0x8, virtual false, abstract: false, final false
static inline bool IsLegacyInputActionTriggered(::GlobalNamespace::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode  buttonMode, ::GlobalNamespace::OVRInput_Button  button) ;

/// @brief Method IsNewInputSystemActionTriggered, addr 0x9ec2770, size 0x94, virtual false, abstract: false, final false
static inline bool IsNewInputSystemActionTriggered(::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction  buttonClickAction) ;

static inline ::Meta::XR::BuildingBlocks::ControllerButtonsMapper* New_ctor() ;

/// @brief Method OnDisable, addr 0x9ec2350, size 0x288, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9ec20c8, size 0x288, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x9ec25d8, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>* const& __cordl_internal_get__buttonClickActions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*& __cordl_internal_get__buttonClickActions() ;

constexpr void __cordl_internal_set__buttonClickActions(::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*  value) ;

/// @brief Method .ctor, addr 0x9ec2804, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ButtonClickActions, addr 0x9ec20b8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>* get_ButtonClickActions() ;

/// @brief Method set_ButtonClickActions, addr 0x9ec20c0, size 0x8, virtual false, abstract: false, final false
inline void set_ButtonClickActions(::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerButtonsMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerButtonsMapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerButtonsMapper(ControllerButtonsMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerButtonsMapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerButtonsMapper(ControllerButtonsMapper const& ) = delete;

/// @brief Field UseLegacyInputSystem offset 0xffffffff size 0x1
static constexpr bool  UseLegacyInputSystem{false};

/// @brief Field UseNewInputSystem offset 0xffffffff size 0x1
static constexpr bool  UseNewInputSystem{true};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31440};

/// [SerializeField]
/// @brief Field _buttonClickActions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ControllerButtonsMapper_ButtonClickAction>*  ____buttonClickActions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper, ____buttonClickActions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::BuildingBlocks
