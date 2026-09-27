#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSObjectActivationTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CMSObjectActivationTrigger)
namespace GT_CustomMapSupportRuntime {
class TriggerSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSObjectActivationTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger*, "GorillaTagScripts.CustomMapSupport", "CMSObjectActivationTrigger");
// Dependencies GorillaTagScripts.CustomMapSupport.CMSTrigger
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSObjectActivationTrigger
class CORDL_TYPE CMSObjectActivationTrigger : public ::GorillaTagScripts::CustomMapSupport::CMSTrigger {
public:
// Declarations
/// @brief Field objectsToActivate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToActivate, put=__cordl_internal_set_objectsToActivate)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsToActivate;

/// @brief Field objectsToDeactivate, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToDeactivate, put=__cordl_internal_set_objectsToDeactivate)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsToDeactivate;

/// @brief Field onlyResetTriggerCount, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyResetTriggerCount, put=__cordl_internal_set_onlyResetTriggerCount)) bool  onlyResetTriggerCount;

/// @brief Field triggersToReset, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggersToReset, put=__cordl_internal_set_triggersToReset)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  triggersToReset;

/// @brief Method CopyTriggerSettings, addr 0x5bd8e08, size 0x2dc, virtual true, abstract: false, final false
inline void CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings) ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger* New_ctor() ;

/// @brief Method Trigger, addr 0x5bd90e4, size 0x3e8, virtual true, abstract: false, final false
inline void Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsToActivate() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsToActivate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsToDeactivate() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsToDeactivate() ;

constexpr bool const& __cordl_internal_get_onlyResetTriggerCount() const;

constexpr bool& __cordl_internal_get_onlyResetTriggerCount() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_triggersToReset() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_triggersToReset() ;

constexpr void __cordl_internal_set_objectsToActivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_objectsToDeactivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_onlyResetTriggerCount(bool  value) ;

constexpr void __cordl_internal_set_triggersToReset(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x5bd95bc, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSObjectActivationTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSObjectActivationTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSObjectActivationTrigger(CMSObjectActivationTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSObjectActivationTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSObjectActivationTrigger(CMSObjectActivationTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4028};

/// @brief Field objectsToActivate, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsToActivate;

/// @brief Field objectsToDeactivate, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsToDeactivate;

/// @brief Field triggersToReset, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___triggersToReset;

/// @brief Field onlyResetTriggerCount, offset: 0x88, size: 0x1, def value: None
 bool  ___onlyResetTriggerCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger, ___objectsToActivate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger, ___objectsToDeactivate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger, ___triggersToReset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger, ___onlyResetTriggerCount) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSObjectActivationTrigger) == 0x90, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
