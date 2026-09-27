#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TagZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
CORDL_MODULE_EXPORT(TagZoneSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class TagZoneSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::TagZoneSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::TagZoneSettings*, "GT_CustomMapSupportRuntime", "TagZoneSettings");
// [RequireComponent(typeof(UnityEngine.Collider))]
// [DisallowMultipleComponent]
// Dependencies GT_CustomMapSupportRuntime.TriggerSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.TagZoneSettings
class CORDL_TYPE TagZoneSettings : public ::GT_CustomMapSupportRuntime::TriggerSettings {
public:
// Declarations
/// @brief Field syncedToAllPlayers, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncedToAllPlayers, put=__cordl_internal_set_syncedToAllPlayers)) bool  syncedToAllPlayers;

static inline ::GT_CustomMapSupportRuntime::TagZoneSettings* New_ctor() ;

/// @brief Method PropagateProperties, addr 0x9cb8c48, size 0xc, virtual true, abstract: false, final false
inline void PropagateProperties() ;

constexpr bool const& __cordl_internal_get_syncedToAllPlayers() const;

constexpr bool& __cordl_internal_get_syncedToAllPlayers() ;

constexpr void __cordl_internal_set_syncedToAllPlayers(bool  value) ;

/// @brief Method .ctor, addr 0x9cb8c54, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagZoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagZoneSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagZoneSettings(TagZoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagZoneSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagZoneSettings(TagZoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30931};

/// [Tooltip("Should this Trigger sync to all players, or only be processed for the person who triggered it?\nTagZones generally shouldn\'t need to do this, but doing so will sync it\'s internal TriggerCount to all players.")]
/// @brief Field syncedToAllPlayers, offset: 0x59, size: 0x1, def value: None
 bool  ___syncedToAllPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::TagZoneSettings, ___syncedToAllPlayers) == 0x59, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::TagZoneSettings) == 0x60, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
