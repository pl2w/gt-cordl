#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/UIHoverEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
CORDL_MODULE_EXPORT(UIHoverEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*, "UnityEngine.XR.Interaction.Toolkit.UI", "UIHoverEventArgs");
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEventArgs
class CORDL_TYPE UIHoverEventArgs : public ::System::Object {
public:
// Declarations
/// @brief Field <deviceModel>k__BackingField, offset 0x18, size 0x1a0 
 __declspec(property(get=__cordl_internal_get__deviceModel_k__BackingField, put=__cordl_internal_set__deviceModel_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  _deviceModel_k__BackingField;

/// @brief Field <interactorObject>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorObject_k__BackingField, put=__cordl_internal_set__interactorObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  _interactorObject_k__BackingField;

/// @brief Field <uiObject>k__BackingField, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiObject_k__BackingField, put=__cordl_internal_set__uiObject_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _uiObject_k__BackingField;

 __declspec(property(get=get_deviceModel, put=set_deviceModel)) ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  deviceModel;

 __declspec(property(get=get_interactorObject, put=set_interactorObject)) ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactorObject;

 __declspec(property(get=get_uiObject, put=set_uiObject)) ::UnityW<::UnityEngine::GameObject>  uiObject;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel const& __cordl_internal_get__deviceModel_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel& __cordl_internal_get__deviceModel_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* const& __cordl_internal_get__interactorObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*& __cordl_internal_get__interactorObject_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__uiObject_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__uiObject_k__BackingField() ;

constexpr void __cordl_internal_set__deviceModel_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  value) ;

constexpr void __cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  value) ;

constexpr void __cordl_internal_set__uiObject_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0xb43f0dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_deviceModel, addr 0xb43f090, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel get_deviceModel() ;

/// [CompilerGenerated]
/// @brief Method get_interactorObject, addr 0xb43f080, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* get_interactorObject() ;

/// [CompilerGenerated]
/// @brief Method get_uiObject, addr 0xb43f0c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_uiObject() ;

/// [CompilerGenerated]
/// @brief Method set_deviceModel, addr 0xb43f0a0, size 0x24, virtual false, abstract: false, final false
inline void set_deviceModel(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactorObject, addr 0xb43f088, size 0x8, virtual false, abstract: false, final false
inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_uiObject, addr 0xb43f0cc, size 0x10, virtual false, abstract: false, final false
inline void set_uiObject(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIHoverEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHoverEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHoverEventArgs(UIHoverEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHoverEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHoverEventArgs(UIHoverEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11306};

/// [CompilerGenerated]
/// @brief Field <interactorObject>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  ____interactorObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <deviceModel>k__BackingField, offset: 0x18, size: 0x1a0, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  ____deviceModel_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <uiObject>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____uiObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs, ____interactorObject_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs, ____deviceModel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs, ____uiObject_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs) == 0x1c0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
