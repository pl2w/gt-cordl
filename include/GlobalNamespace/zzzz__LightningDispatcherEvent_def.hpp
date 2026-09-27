#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningDispatcherEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(LightningDispatcherEvent)
// Forward declare root types
namespace GlobalNamespace {
class LightningDispatcherEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightningDispatcherEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightningDispatcherEvent*, "", "LightningDispatcherEvent");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightningDispatcherEvent
class CORDL_TYPE LightningDispatcherEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityEngine::Vector3,::UnityEngine::Vector3> {
public:
// Declarations
static inline ::GlobalNamespace::LightningDispatcherEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5b2ea84, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightningDispatcherEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightningDispatcherEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightningDispatcherEvent(LightningDispatcherEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightningDispatcherEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightningDispatcherEvent(LightningDispatcherEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3649};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightningDispatcherEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
