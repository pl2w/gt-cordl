#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOEContextEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__AOEReceiver_AOEContext_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(AOEContextEvent)
// Forward declare root types
namespace GorillaTag::Cosmetics {
class AOEContextEvent;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::AOEContextEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::AOEContextEvent*, "GorillaTag.Cosmetics", "AOEContextEvent");
// Dependencies GorillaTag.Cosmetics.AOEReceiver::AOEContext, UnityEngine.Events.UnityEvent`1<T0>
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.AOEContextEvent
class CORDL_TYPE AOEContextEvent : public ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::AOEReceiver_AOEContext> {
public:
// Declarations
static inline ::GorillaTag::Cosmetics::AOEContextEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5d6d6cc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AOEContextEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AOEContextEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AOEContextEvent(AOEContextEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AOEContextEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AOEContextEvent(AOEContextEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4842};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Cosmetics::AOEContextEvent) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
