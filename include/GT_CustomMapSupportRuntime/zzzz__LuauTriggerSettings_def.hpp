#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/LuauTriggerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
CORDL_MODULE_EXPORT(LuauTriggerSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class LuauTriggerSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::LuauTriggerSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::LuauTriggerSettings*, "GT_CustomMapSupportRuntime", "LuauTriggerSettings");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies GT_CustomMapSupportRuntime.TriggerSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.LuauTriggerSettings
class CORDL_TYPE LuauTriggerSettings : public ::GT_CustomMapSupportRuntime::TriggerSettings {
public:
// Declarations
/// @brief Field syncedToAllPlayers, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncedToAllPlayers, put=__cordl_internal_set_syncedToAllPlayers)) bool  syncedToAllPlayers;

static inline ::GT_CustomMapSupportRuntime::LuauTriggerSettings* New_ctor() ;

/// @brief Method PropagateProperties, addr 0x9cb7170, size 0xc, virtual true, abstract: false, final false
inline void PropagateProperties() ;

constexpr bool const& __cordl_internal_get_syncedToAllPlayers() const;

constexpr bool& __cordl_internal_get_syncedToAllPlayers() ;

constexpr void __cordl_internal_set_syncedToAllPlayers(bool  value) ;

/// @brief Method .ctor, addr 0x9cb717c, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LuauTriggerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LuauTriggerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LuauTriggerSettings(LuauTriggerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LuauTriggerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LuauTriggerSettings(LuauTriggerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30906};

/// [Tooltip("Should this Trigger sync to all players, or only be processed for the person who triggered it?\nLuau Triggers generally shouldn\'t need to do this, but doing so will sync it\'s internal TriggerCount to all players.")]
/// @brief Field syncedToAllPlayers, offset: 0x59, size: 0x1, def value: None
 bool  ___syncedToAllPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::LuauTriggerSettings, ___syncedToAllPlayers) == 0x59, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::LuauTriggerSettings) == 0x60, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
