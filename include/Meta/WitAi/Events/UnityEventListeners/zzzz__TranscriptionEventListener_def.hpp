#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/UnityEventListeners/TranscriptionEventListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TranscriptionEventListener)
namespace Meta::WitAi::Events {
class WitTranscriptionEvent;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionEvent;
}
// Forward declare root types
namespace Meta::WitAi::Events::UnityEventListeners {
class TranscriptionEventListener;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*, "Meta.WitAi.Events.UnityEventListeners", "TranscriptionEventListener");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Events::UnityEventListeners {
// Is value type: false
// CS Name: Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener
class CORDL_TYPE TranscriptionEventListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_OnFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnFullTranscription;

 __declspec(property(get=get_OnPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnPartialTranscription;

 __declspec(property(get=get_TranscriptionEvents)) ::Meta::WitAi::Interfaces::ITranscriptionEvent*  TranscriptionEvents;

/// @brief Field _events, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Meta::WitAi::Interfaces::ITranscriptionEvent*  _events;

/// @brief Field onFullTranscription, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFullTranscription, put=__cordl_internal_set_onFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  onFullTranscription;

/// @brief Field onPartialTranscription, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPartialTranscription, put=__cordl_internal_set_onPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  onPartialTranscription;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr operator  ::Meta::WitAi::Interfaces::ITranscriptionEvent*() noexcept;

static inline ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e961b0, size 0x1e8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e95fc8, size 0x1e8, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent* const& __cordl_internal_get__events() const;

constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent*& __cordl_internal_get__events() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get_onFullTranscription() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get_onFullTranscription() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get_onPartialTranscription() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get_onPartialTranscription() ;

constexpr void __cordl_internal_set__events(::Meta::WitAi::Interfaces::ITranscriptionEvent*  value) ;

constexpr void __cordl_internal_set_onFullTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

constexpr void __cordl_internal_set_onPartialTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

/// @brief Method .ctor, addr 0x9e96398, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnFullTranscription, addr 0x9e95ee0, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnFullTranscription() ;

/// @brief Method get_OnPartialTranscription, addr 0x9e95ed8, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnPartialTranscription() ;

/// @brief Method get_TranscriptionEvents, addr 0x9e95ee8, size 0xe0, virtual false, abstract: false, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionEvent* get_TranscriptionEvents() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent* i___Meta__WitAi__Interfaces__ITranscriptionEvent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TranscriptionEventListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionEventListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TranscriptionEventListener(TranscriptionEventListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionEventListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranscriptionEventListener(TranscriptionEventListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25688};

/// [SerializeField]
/// @brief Field onPartialTranscription, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ___onPartialTranscription;

/// [SerializeField]
/// @brief Field onFullTranscription, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ___onFullTranscription;

/// @brief Field _events, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Interfaces::ITranscriptionEvent*  ____events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener, ___onPartialTranscription) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener, ___onFullTranscription) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener, ____events) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::Events::UnityEventListeners
