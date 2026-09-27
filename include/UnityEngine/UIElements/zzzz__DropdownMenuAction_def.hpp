#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_Status_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DropdownMenuAction)
namespace GlobalNamespace {
struct DropdownMenuAction_Status;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::DropdownMenuAction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DropdownMenuAction*, "UnityEngine.UIElements", "DropdownMenuAction");
// Dependencies UnityEngine.UIElements.DropdownMenuAction::Status, UnityEngine.UIElements.DropdownMenuItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DropdownMenuAction
class CORDL_TYPE DropdownMenuAction : public ::UnityEngine::UIElements::DropdownMenuItem {
public:
// Declarations
using Status = ::GlobalNamespace::DropdownMenuAction_Status;

/// @brief Field <eventInfo>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventInfo_k__BackingField, put=__cordl_internal_set__eventInfo_k__BackingField)) ::UnityEngine::UIElements::DropdownMenuEventInfo*  _eventInfo_k__BackingField;

/// @brief Field <name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name_k__BackingField, put=__cordl_internal_set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field <status>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__status_k__BackingField, put=__cordl_internal_set__status_k__BackingField)) ::GlobalNamespace::DropdownMenuAction_Status  _status_k__BackingField;

/// @brief Field <userData>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__userData_k__BackingField, put=__cordl_internal_set__userData_k__BackingField)) ::System::Object*  _userData_k__BackingField;

/// @brief Field actionCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionCallback, put=__cordl_internal_set_actionCallback)) ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  actionCallback;

/// @brief Field actionStatusCallback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionStatusCallback, put=__cordl_internal_set_actionStatusCallback)) ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  actionStatusCallback;

 __declspec(property(put=set_eventInfo)) ::UnityEngine::UIElements::DropdownMenuEventInfo*  eventInfo;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(put=set_status)) ::GlobalNamespace::DropdownMenuAction_Status  status;

 __declspec(property(put=set_userData)) ::System::Object*  userData;

/// @brief Method AlwaysDisabled, addr 0xb88b534, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DropdownMenuAction_Status AlwaysDisabled(::UnityEngine::UIElements::DropdownMenuAction*  a) ;

/// @brief Method AlwaysEnabled, addr 0xb88b52c, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DropdownMenuAction_Status AlwaysEnabled(::UnityEngine::UIElements::DropdownMenuAction*  a) ;

static inline ::UnityEngine::UIElements::DropdownMenuAction* New_ctor(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  actionStatusCallback, ::System::Object*  userData) ;

/// @brief Method UpdateActionStatus, addr 0xb88b5b0, size 0x50, virtual false, abstract: false, final false
inline void UpdateActionStatus(::UnityEngine::UIElements::DropdownMenuEventInfo*  eventInfo) ;

constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo* const& __cordl_internal_get__eventInfo_k__BackingField() const;

constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& __cordl_internal_get__eventInfo_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__name_k__BackingField() ;

constexpr ::GlobalNamespace::DropdownMenuAction_Status const& __cordl_internal_get__status_k__BackingField() const;

constexpr ::GlobalNamespace::DropdownMenuAction_Status& __cordl_internal_get__status_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__userData_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__userData_k__BackingField() ;

constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* const& __cordl_internal_get_actionCallback() const;

constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*& __cordl_internal_get_actionCallback() ;

constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>* const& __cordl_internal_get_actionStatusCallback() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*& __cordl_internal_get_actionStatusCallback() ;

constexpr void __cordl_internal_set__eventInfo_k__BackingField(::UnityEngine::UIElements::DropdownMenuEventInfo*  value) ;

constexpr void __cordl_internal_set__name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__status_k__BackingField(::GlobalNamespace::DropdownMenuAction_Status  value) ;

constexpr void __cordl_internal_set__userData_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set_actionCallback(::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  value) ;

constexpr void __cordl_internal_set_actionStatusCallback(::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  value) ;

/// @brief Method .ctor, addr 0xb88b53c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  actionStatusCallback, ::System::Object*  userData) ;

/// [CompilerGenerated]
/// @brief Method get_name, addr 0xb88b50c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// [CompilerGenerated]
/// @brief Method set_eventInfo, addr 0xb88b51c, size 0x8, virtual false, abstract: false, final false
inline void set_eventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method set_status, addr 0xb88b514, size 0x8, virtual false, abstract: false, final false
inline void set_status(::GlobalNamespace::DropdownMenuAction_Status  value) ;

/// [CompilerGenerated]
/// @brief Method set_userData, addr 0xb88b524, size 0x8, virtual false, abstract: false, final false
inline void set_userData(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DropdownMenuAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DropdownMenuAction(DropdownMenuAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropdownMenuAction(DropdownMenuAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7566};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <status>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::DropdownMenuAction_Status  ____status_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <eventInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::DropdownMenuEventInfo*  ____eventInfo_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <userData>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____userData_k__BackingField;

/// @brief Field actionCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  ___actionCallback;

/// @brief Field actionStatusCallback, offset: 0x38, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  ___actionStatusCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____status_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____eventInfo_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ____userData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ___actionCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DropdownMenuAction, ___actionStatusCallback) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DropdownMenuAction) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
