#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeLerpEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VisemeLerpEvent)
// Forward declare root types
namespace Meta::WitAi::TTS::LipSync {
class VisemeLerpEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*, "Meta.WitAi.TTS.LipSync", "VisemeLerpEvent");
// Dependencies Meta.WitAi.TTS.Data.Viseme, UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Meta::WitAi::TTS::LipSync {
// Is value type: false
// CS Name: Meta.WitAi.TTS.LipSync.VisemeLerpEvent
class CORDL_TYPE VisemeLerpEvent : public ::UnityEngine::Events::UnityEvent_3<::Meta::WitAi::TTS::Data::Viseme,::Meta::WitAi::TTS::Data::Viseme,float_t> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e53e34, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisemeLerpEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisemeLerpEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisemeLerpEvent(VisemeLerpEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisemeLerpEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisemeLerpEvent(VisemeLerpEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::LipSync::VisemeLerpEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::LipSync
