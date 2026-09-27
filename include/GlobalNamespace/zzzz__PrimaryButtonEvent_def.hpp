#pragma once
// IWYU pragma private; include "GlobalNamespace/PrimaryButtonEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(PrimaryButtonEvent)
// Forward declare root types
namespace GlobalNamespace {
class PrimaryButtonEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PrimaryButtonEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrimaryButtonEvent*, "", "PrimaryButtonEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrimaryButtonEvent
class CORDL_TYPE PrimaryButtonEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
static inline ::GlobalNamespace::PrimaryButtonEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x579ec4c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimaryButtonEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimaryButtonEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimaryButtonEvent(PrimaryButtonEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimaryButtonEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimaryButtonEvent(PrimaryButtonEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1519};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PrimaryButtonEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
