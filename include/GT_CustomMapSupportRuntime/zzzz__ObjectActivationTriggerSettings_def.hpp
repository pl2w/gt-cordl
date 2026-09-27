#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ObjectActivationTriggerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
CORDL_MODULE_EXPORT(ObjectActivationTriggerSettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class ObjectActivationTriggerSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings*, "GT_CustomMapSupportRuntime", "ObjectActivationTriggerSettings");
// [NullableContext(1)]
// [Nullable(0)]
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies GT_CustomMapSupportRuntime.TriggerSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.ObjectActivationTriggerSettings
class CORDL_TYPE ObjectActivationTriggerSettings : public ::GT_CustomMapSupportRuntime::TriggerSettings {
public:
// Declarations
/// @brief Field objectsToActivate, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToActivate, put=__cordl_internal_set_objectsToActivate)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsToActivate;

/// @brief Field objectsToDeactivate, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToDeactivate, put=__cordl_internal_set_objectsToDeactivate)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsToDeactivate;

/// @brief Field onlyResetTriggerCount, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyResetTriggerCount, put=__cordl_internal_set_onlyResetTriggerCount)) bool  onlyResetTriggerCount;

/// @brief Field syncedToAllPlayers, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncedToAllPlayers, put=__cordl_internal_set_syncedToAllPlayers)) bool  syncedToAllPlayers;

/// @brief Field triggersToReset, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggersToReset, put=__cordl_internal_set_triggersToReset)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  triggersToReset;

static inline ::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings* New_ctor() ;

/// @brief Method PropagateProperties, addr 0x9cb80ac, size 0xc, virtual true, abstract: false, final false
inline void PropagateProperties() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsToActivate() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsToActivate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsToDeactivate() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsToDeactivate() ;

constexpr bool const& __cordl_internal_get_onlyResetTriggerCount() const;

constexpr bool& __cordl_internal_get_onlyResetTriggerCount() ;

constexpr bool const& __cordl_internal_get_syncedToAllPlayers() const;

constexpr bool& __cordl_internal_get_syncedToAllPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_triggersToReset() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_triggersToReset() ;

constexpr void __cordl_internal_set_objectsToActivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_objectsToDeactivate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_onlyResetTriggerCount(bool  value) ;

constexpr void __cordl_internal_set_syncedToAllPlayers(bool  value) ;

constexpr void __cordl_internal_set_triggersToReset(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x9cb80b8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectActivationTriggerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivationTriggerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectActivationTriggerSettings(ObjectActivationTriggerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivationTriggerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectActivationTriggerSettings(ObjectActivationTriggerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30920};

/// [Tooltip("Should this Trigger sync to all players, or only be processed for the person who triggered it?\nObjectActivationTriggers generally need to do this to ensure activated/deactivated objects are in the same state for all players. Disable with caution.")]
/// @brief Field syncedToAllPlayers, offset: 0x59, size: 0x1, def value: None
 bool  ___syncedToAllPlayers;

/// [Tooltip("Any objects that should be activated when this is triggered")]
/// @brief Field objectsToActivate, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsToActivate;

/// [Tooltip("Any objects that should be deactivated when this is triggered")]
/// @brief Field objectsToDeactivate, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsToDeactivate;

/// [Tooltip("Any other triggers that should be reset when this is triggered. Resetting a Trigger will reset it\'s internal triggerCount to 0.")]
/// @brief Field triggersToReset, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___triggersToReset;

/// [Tooltip("If TRUE, only the TriggerCount for the Triggers in \"Triggers to Reset\" will be reset. LastTriggerTime will be unchanged.")]
/// @brief Field onlyResetTriggerCount, offset: 0x78, size: 0x1, def value: None
 bool  ___onlyResetTriggerCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings, ___syncedToAllPlayers) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings, ___objectsToActivate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings, ___objectsToDeactivate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings, ___triggersToReset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings, ___onlyResetTriggerCount) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::ObjectActivationTriggerSettings) == 0x80, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
