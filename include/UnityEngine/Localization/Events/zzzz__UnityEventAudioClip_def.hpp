#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Events/UnityEventAudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(UnityEventAudioClip)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Localization::Events {
class UnityEventAudioClip;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Events::UnityEventAudioClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Events::UnityEventAudioClip*, "UnityEngine.Localization.Events", "UnityEventAudioClip");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::Localization::Events {
// Is value type: false
// CS Name: UnityEngine.Localization.Events.UnityEventAudioClip
class CORDL_TYPE UnityEventAudioClip : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::AudioClip>> {
public:
// Declarations
static inline ::UnityEngine::Localization::Events::UnityEventAudioClip* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ebf8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventAudioClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventAudioClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventAudioClip(UnityEventAudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventAudioClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventAudioClip(UnityEventAudioClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25313};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Events::UnityEventAudioClip) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Events
