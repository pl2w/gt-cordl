#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKSettingsButtonsController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LCKSettingsButtonsController)
namespace Liv::Lck::Tablet {
struct CameraMode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LCKSettingsButtonsController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LCKSettingsButtonsController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LCKSettingsButtonsController*, "Liv.Lck.Tablet", "LCKSettingsButtonsController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LCKSettingsButtonsController
class CORDL_TYPE LCKSettingsButtonsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_OnCameraModeChanged, put=set_OnCameraModeChanged)) ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  OnCameraModeChanged;

/// @brief Field <OnCameraModeChanged>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnCameraModeChanged_k__BackingField, put=__cordl_internal_set__OnCameraModeChanged_k__BackingField)) ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  _OnCameraModeChanged_k__BackingField;

/// @brief Field _firstPersonSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonSettings, put=__cordl_internal_set__firstPersonSettings)) ::UnityW<::UnityEngine::GameObject>  _firstPersonSettings;

/// @brief Field _firstPersonToggle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonToggle, put=__cordl_internal_set__firstPersonToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _firstPersonToggle;

/// @brief Field _headsetViewSettings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetViewSettings, put=__cordl_internal_set__headsetViewSettings)) ::UnityW<::UnityEngine::GameObject>  _headsetViewSettings;

/// @brief Field _headsetViewToggle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetViewToggle, put=__cordl_internal_set__headsetViewToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _headsetViewToggle;

/// @brief Field _selfieSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieSettings, put=__cordl_internal_set__selfieSettings)) ::UnityW<::UnityEngine::GameObject>  _selfieSettings;

/// @brief Field _selfieToggle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieToggle, put=__cordl_internal_set__selfieToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _selfieToggle;

/// @brief Field _settingsDictionary, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsDictionary, put=__cordl_internal_set__settingsDictionary)) ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>*  _settingsDictionary;

/// @brief Field _thirdPersonSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonSettings, put=__cordl_internal_set__thirdPersonSettings)) ::UnityW<::UnityEngine::GameObject>  _thirdPersonSettings;

/// @brief Field _thirdPersonToggle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonToggle, put=__cordl_internal_set__thirdPersonToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _thirdPersonToggle;

/// @brief Field _toggleGroup, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleGroup, put=__cordl_internal_set__toggleGroup)) ::UnityW<::UnityEngine::UI::ToggleGroup>  _toggleGroup;

/// @brief Method Awake, addr 0x9d5bc84, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::Tablet::LCKSettingsButtonsController* New_ctor() ;

/// @brief Method OnEnable, addr 0x9d5bd6c, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SwitchCameraModes, addr 0x9d57384, size 0x218, virtual false, abstract: false, final false
inline void SwitchCameraModes(::Liv::Lck::Tablet::CameraMode  mode) ;

constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>* const& __cordl_internal_get__OnCameraModeChanged_k__BackingField() const;

constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*& __cordl_internal_get__OnCameraModeChanged_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__firstPersonSettings() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__firstPersonSettings() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__firstPersonToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__firstPersonToggle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__headsetViewSettings() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__headsetViewSettings() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__headsetViewToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__headsetViewToggle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__selfieSettings() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__selfieSettings() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__selfieToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__selfieToggle() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__settingsDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__settingsDictionary() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__thirdPersonSettings() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__thirdPersonSettings() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__thirdPersonToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__thirdPersonToggle() ;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get__toggleGroup() const;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get__toggleGroup() ;

constexpr void __cordl_internal_set__OnCameraModeChanged_k__BackingField(::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  value) ;

constexpr void __cordl_internal_set__firstPersonSettings(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__firstPersonToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__headsetViewSettings(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__headsetViewToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__selfieSettings(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__selfieToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__settingsDictionary(::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__thirdPersonSettings(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__thirdPersonToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__toggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value) ;

/// @brief Method .ctor, addr 0x9d5bdcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_OnCameraModeChanged, addr 0x9d5bc74, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::Liv::Lck::Tablet::CameraMode>* get_OnCameraModeChanged() ;

/// [CompilerGenerated]
/// @brief Method set_OnCameraModeChanged, addr 0x9d5bc7c, size 0x8, virtual false, abstract: false, final false
inline void set_OnCameraModeChanged(::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKSettingsButtonsController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKSettingsButtonsController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKSettingsButtonsController(LCKSettingsButtonsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKSettingsButtonsController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKSettingsButtonsController(LCKSettingsButtonsController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24947};

/// [CompilerGenerated]
/// @brief Field <OnCameraModeChanged>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  ____OnCameraModeChanged_k__BackingField;

/// [Header("Camera Mode Settings Groups")]
/// [SerializeField]
/// @brief Field _selfieSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____selfieSettings;

/// [SerializeField]
/// @brief Field _firstPersonSettings, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____firstPersonSettings;

/// [SerializeField]
/// @brief Field _thirdPersonSettings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____thirdPersonSettings;

/// [SerializeField]
/// @brief Field _headsetViewSettings, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____headsetViewSettings;

/// [Header("Toggle References")]
/// [SerializeField]
/// @brief Field _toggleGroup, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ToggleGroup>  ____toggleGroup;

/// [SerializeField]
/// @brief Field _selfieToggle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____selfieToggle;

/// [SerializeField]
/// @brief Field _firstPersonToggle, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____firstPersonToggle;

/// [SerializeField]
/// @brief Field _thirdPersonToggle, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____thirdPersonToggle;

/// [SerializeField]
/// @brief Field _headsetViewToggle, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____headsetViewToggle;

/// @brief Field _settingsDictionary, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>*  ____settingsDictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____OnCameraModeChanged_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____selfieSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____firstPersonSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____thirdPersonSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____headsetViewSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____toggleGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____selfieToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____firstPersonToggle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____thirdPersonToggle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____headsetViewToggle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKSettingsButtonsController, ____settingsDictionary) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LCKSettingsButtonsController) == 0x78, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
