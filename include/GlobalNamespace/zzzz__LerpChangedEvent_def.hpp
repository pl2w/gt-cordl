#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpChangedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LerpChangedEvent)
// Forward declare root types
namespace GlobalNamespace {
class LerpChangedEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LerpChangedEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LerpChangedEvent*, "", "LerpChangedEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LerpChangedEvent
class CORDL_TYPE LerpChangedEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
static inline ::GlobalNamespace::LerpChangedEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5a1d56c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LerpChangedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LerpChangedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LerpChangedEvent(LerpChangedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LerpChangedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LerpChangedEvent(LerpChangedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LerpChangedEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
