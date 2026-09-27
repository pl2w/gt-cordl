#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ActionResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_Status_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ActionResult)
namespace GlobalNamespace {
struct ActionResult_Status;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ActionResult;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::ActionResult*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::ActionResult*, "UnityEngine.ProBuilder", "ActionResult");
// Dependencies System.Object, UnityEngine.ProBuilder.ActionResult::Status
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ActionResult
class CORDL_TYPE ActionResult : public ::System::Object {
public:
// Declarations
using Status = ::GlobalNamespace::ActionResult_Status;

/// @brief Field <notification>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__notification_k__BackingField, put=__cordl_internal_set__notification_k__BackingField)) ::StringW  _notification_k__BackingField;

/// @brief Field <status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__status_k__BackingField, put=__cordl_internal_set__status_k__BackingField)) ::GlobalNamespace::ActionResult_Status  _status_k__BackingField;

 __declspec(property(get=get_notification, put=set_notification)) ::StringW  notification;

 __declspec(property(get=get_status, put=set_status)) ::GlobalNamespace::ActionResult_Status  status;

/// @brief Method FromBool, addr 0xb082e44, size 0xa4, virtual false, abstract: false, final false
static inline bool FromBool(bool  success) ;

static inline ::UnityEngine::ProBuilder::ActionResult* New_ctor(::GlobalNamespace::ActionResult_Status  status, ::StringW  notification) ;

/// @brief Method ToBool, addr 0xb082e34, size 0x10, virtual false, abstract: false, final false
inline bool ToBool() ;

constexpr ::StringW const& __cordl_internal_get__notification_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__notification_k__BackingField() ;

constexpr ::GlobalNamespace::ActionResult_Status const& __cordl_internal_get__status_k__BackingField() const;

constexpr ::GlobalNamespace::ActionResult_Status& __cordl_internal_get__status_k__BackingField() ;

constexpr void __cordl_internal_set__notification_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__status_k__BackingField(::GlobalNamespace::ActionResult_Status  value) ;

/// @brief Method .ctor, addr 0xb082de8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ActionResult_Status  status, ::StringW  notification) ;

/// @brief Method get_NoSelection, addr 0xb082f68, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::ActionResult* get_NoSelection() ;

/// @brief Method get_Success, addr 0xb082ee8, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::ActionResult* get_Success() ;

/// @brief Method get_UserCanceled, addr 0xb082fec, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::ActionResult* get_UserCanceled() ;

/// [CompilerGenerated]
/// @brief Method get_notification, addr 0xb082dd8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_notification() ;

/// [CompilerGenerated]
/// @brief Method get_status, addr 0xb082dc8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ActionResult_Status get_status() ;

/// @brief Method op_Implicit, addr 0xb082e20, size 0x14, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult*  res) ;

/// [CompilerGenerated]
/// @brief Method set_notification, addr 0xb082de0, size 0x8, virtual false, abstract: false, final false
inline void set_notification(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_status, addr 0xb082dd0, size 0x8, virtual false, abstract: false, final false
inline void set_status(::GlobalNamespace::ActionResult_Status  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionResult(ActionResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionResult(ActionResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24179};

/// [CompilerGenerated]
/// @brief Field <status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ActionResult_Status  ____status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <notification>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____notification_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ActionResult, ____status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ActionResult, ____notification_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::ActionResult) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
