#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
CORDL_MODULE_EXPORT(GorillaTriggerBoxEvent)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTriggerBoxEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTriggerBoxEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTriggerBoxEvent*, "", "GorillaTriggerBoxEvent");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTriggerBoxEvent
class CORDL_TYPE GorillaTriggerBoxEvent : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field onBoxExited, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBoxExited, put=__cordl_internal_set_onBoxExited)) ::UnityEngine::Events::UnityEvent*  onBoxExited;

/// @brief Field onBoxTriggered, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBoxTriggered, put=__cordl_internal_set_onBoxTriggered)) ::UnityEngine::Events::UnityEvent*  onBoxTriggered;

static inline ::GlobalNamespace::GorillaTriggerBoxEvent* New_ctor() ;

/// @brief Method OnBoxExited, addr 0x579dec8, size 0x14, virtual true, abstract: false, final false
inline void OnBoxExited() ;

/// @brief Method OnBoxTriggered, addr 0x579deb4, size 0x14, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onBoxExited() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onBoxExited() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onBoxTriggered() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onBoxTriggered() ;

constexpr void __cordl_internal_set_onBoxExited(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onBoxTriggered(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x579dedc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTriggerBoxEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTriggerBoxEvent(GorillaTriggerBoxEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTriggerBoxEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTriggerBoxEvent(GorillaTriggerBoxEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1511};

/// @brief Field onBoxTriggered, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onBoxTriggered;

/// @brief Field onBoxExited, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onBoxExited;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxEvent, ___onBoxTriggered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTriggerBoxEvent, ___onBoxExited) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTriggerBoxEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
