#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/PlayAnimationTriggerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayAnimationTriggerSettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class PlayAnimationTriggerSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings*, "GT_CustomMapSupportRuntime", "PlayAnimationTriggerSettings");
// [NullableContext(1)]
// [Nullable(0)]
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies GT_CustomMapSupportRuntime.TriggerSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.PlayAnimationTriggerSettings
class CORDL_TYPE PlayAnimationTriggerSettings : public ::GT_CustomMapSupportRuntime::TriggerSettings {
public:
// Declarations
/// @brief Field animatedObjects, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_animatedObjects, put=__cordl_internal_set_animatedObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  animatedObjects;

/// @brief Field animationName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationName, put=__cordl_internal_set_animationName)) ::StringW  animationName;

/// @brief Field syncedToAllPlayers, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncedToAllPlayers, put=__cordl_internal_set_syncedToAllPlayers)) bool  syncedToAllPlayers;

static inline ::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings* New_ctor() ;

/// @brief Method PropagateProperties, addr 0x9cb81c4, size 0xc, virtual true, abstract: false, final false
inline void PropagateProperties() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_animatedObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_animatedObjects() ;

constexpr ::StringW const& __cordl_internal_get_animationName() const;

constexpr ::StringW& __cordl_internal_get_animationName() ;

constexpr bool const& __cordl_internal_get_syncedToAllPlayers() const;

constexpr bool& __cordl_internal_get_syncedToAllPlayers() ;

constexpr void __cordl_internal_set_animatedObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_animationName(::StringW  value) ;

constexpr void __cordl_internal_set_syncedToAllPlayers(bool  value) ;

/// @brief Method .ctor, addr 0x9cb81d0, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayAnimationTriggerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayAnimationTriggerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayAnimationTriggerSettings(PlayAnimationTriggerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayAnimationTriggerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayAnimationTriggerSettings(PlayAnimationTriggerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30922};

/// [Tooltip("Should this Trigger sync to all players, or only be processed for the person who triggered it?\nPlayAnimationTriggers should generally have this enabled to ensure animated objects are in the same state for all players. Disable with caution.")]
/// @brief Field syncedToAllPlayers, offset: 0x59, size: 0x1, def value: None
 bool  ___syncedToAllPlayers;

/// [Tooltip("Any objects that should play the specified animation when this is triggered")]
/// @brief Field animatedObjects, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___animatedObjects;

/// [Tooltip("The name of the animation state to activate for any Animator components on the \"Animated Objects\".")]
/// @brief Field animationName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___animationName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings, ___syncedToAllPlayers) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings, ___animatedObjects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings, ___animationName) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::PlayAnimationTriggerSettings) == 0x70, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
