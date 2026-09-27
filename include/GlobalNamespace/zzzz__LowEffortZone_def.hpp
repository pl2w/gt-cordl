#pragma once
// IWYU pragma private; include "GlobalNamespace/LowEffortZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(LowEffortZone)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class LowEffortZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LowEffortZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LowEffortZone*, "", "LowEffortZone");
// Dependencies GorillaTriggerBox, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LowEffortZone
class CORDL_TYPE LowEffortZone : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field objectsToDisable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToDisable, put=__cordl_internal_set_objectsToDisable)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objectsToDisable;

/// @brief Field objectsToEnable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToEnable, put=__cordl_internal_set_objectsToEnable)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objectsToEnable;

/// @brief Field onTriggeredEvents, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTriggeredEvents, put=__cordl_internal_set_onTriggeredEvents)) ::UnityEngine::Events::UnityEvent*  onTriggeredEvents;

/// @brief Field triggerOnAwake, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerOnAwake, put=__cordl_internal_set_triggerOnAwake)) bool  triggerOnAwake;

/// @brief Method Awake, addr 0x56b6db0, size 0x18, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::LowEffortZone* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x56b6dc8, size 0x170, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objectsToDisable() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objectsToDisable() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objectsToEnable() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objectsToEnable() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTriggeredEvents() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTriggeredEvents() ;

constexpr bool const& __cordl_internal_get_triggerOnAwake() const;

constexpr bool& __cordl_internal_get_triggerOnAwake() ;

constexpr void __cordl_internal_set_objectsToDisable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_objectsToEnable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_onTriggeredEvents(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_triggerOnAwake(bool  value) ;

/// @brief Method .ctor, addr 0x56b6f38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LowEffortZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LowEffortZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LowEffortZone(LowEffortZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowEffortZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowEffortZone(LowEffortZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{954};

/// @brief Field objectsToEnable, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objectsToEnable;

/// @brief Field objectsToDisable, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objectsToDisable;

/// @brief Field triggerOnAwake, offset: 0x30, size: 0x1, def value: None
 bool  ___triggerOnAwake;

/// @brief Field onTriggeredEvents, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTriggeredEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LowEffortZone, ___objectsToEnable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LowEffortZone, ___objectsToDisable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LowEffortZone, ___triggerOnAwake) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LowEffortZone, ___onTriggeredEvents) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LowEffortZone) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
