#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/CustomTranscriptionProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomTranscriptionProvider)
namespace Meta::WitAi::Events {
class WitMicLevelChangedEvent;
}
namespace Meta::WitAi::Events {
class WitTranscriptionEvent;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionProvider;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class CustomTranscriptionProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::CustomTranscriptionProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::CustomTranscriptionProvider*, "Meta.WitAi.Interfaces", "CustomTranscriptionProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.CustomTranscriptionProvider
class CORDL_TYPE CustomTranscriptionProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_LastTranscription)) ::StringW  LastTranscription;

 __declspec(property(get=get_OnFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnFullTranscription;

 __declspec(property(get=get_OnMicLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicLevelChanged;

 __declspec(property(get=get_OnPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  OnPartialTranscription;

 __declspec(property(get=get_OnStartListening)) ::UnityEngine::Events::UnityEvent*  OnStartListening;

 __declspec(property(get=get_OnStoppedListening)) ::UnityEngine::Events::UnityEvent*  OnStoppedListening;

 __declspec(property(get=get_OverrideMicLevel)) bool  OverrideMicLevel;

/// @brief Field <LastTranscription>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastTranscription_k__BackingField, put=__cordl_internal_set__LastTranscription_k__BackingField)) ::StringW  _LastTranscription_k__BackingField;

/// @brief Field onFullTranscription, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFullTranscription, put=__cordl_internal_set_onFullTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  onFullTranscription;

/// @brief Field onMicLevelChanged, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMicLevelChanged, put=__cordl_internal_set_onMicLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  onMicLevelChanged;

/// @brief Field onPartialTranscription, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPartialTranscription, put=__cordl_internal_set_onPartialTranscription)) ::Meta::WitAi::Events::WitTranscriptionEvent*  onPartialTranscription;

/// @brief Field onStartListening, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStartListening, put=__cordl_internal_set_onStartListening)) ::UnityEngine::Events::UnityEvent*  onStartListening;

/// @brief Field onStoppedListening, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStoppedListening, put=__cordl_internal_set_onStoppedListening)) ::UnityEngine::Events::UnityEvent*  onStoppedListening;

/// @brief Field overrideMicLevel, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideMicLevel, put=__cordl_internal_set_overrideMicLevel)) bool  overrideMicLevel;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::ITranscriptionProvider"
constexpr operator  ::Meta::WitAi::Interfaces::ITranscriptionProvider*() noexcept;

/// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Activate() ;

/// @brief Method Deactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Deactivate() ;

static inline ::Meta::WitAi::Interfaces::CustomTranscriptionProvider* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__LastTranscription_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LastTranscription_k__BackingField() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get_onFullTranscription() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get_onFullTranscription() ;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& __cordl_internal_get_onMicLevelChanged() const;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& __cordl_internal_get_onMicLevelChanged() ;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& __cordl_internal_get_onPartialTranscription() const;

constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& __cordl_internal_get_onPartialTranscription() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStartListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStartListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStoppedListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStoppedListening() ;

constexpr bool const& __cordl_internal_get_overrideMicLevel() const;

constexpr bool& __cordl_internal_get_overrideMicLevel() ;

constexpr void __cordl_internal_set__LastTranscription_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_onFullTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

constexpr void __cordl_internal_set_onMicLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value) ;

constexpr void __cordl_internal_set_onPartialTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value) ;

constexpr void __cordl_internal_set_onStartListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onStoppedListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_overrideMicLevel(bool  value) ;

/// @brief Method .ctor, addr 0x9e94b68, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LastTranscription, addr 0x9e94b30, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_LastTranscription() ;

/// @brief Method get_OnFullTranscription, addr 0x9e94b40, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnFullTranscription() ;

/// @brief Method get_OnMicLevelChanged, addr 0x9e94b58, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* get_OnMicLevelChanged() ;

/// @brief Method get_OnPartialTranscription, addr 0x9e94b38, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::WitTranscriptionEvent* get_OnPartialTranscription() ;

/// @brief Method get_OnStartListening, addr 0x9e94b50, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnStartListening() ;

/// @brief Method get_OnStoppedListening, addr 0x9e94b48, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnStoppedListening() ;

/// @brief Method get_OverrideMicLevel, addr 0x9e94b60, size 0x8, virtual true, abstract: false, final true
inline bool get_OverrideMicLevel() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::ITranscriptionProvider"
constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider* i___Meta__WitAi__Interfaces__ITranscriptionProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomTranscriptionProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomTranscriptionProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomTranscriptionProvider(CustomTranscriptionProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomTranscriptionProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomTranscriptionProvider(CustomTranscriptionProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25656};

/// [SerializeField]
/// @brief Field overrideMicLevel, offset: 0x20, size: 0x1, def value: None
 bool  ___overrideMicLevel;

/// @brief Field onPartialTranscription, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ___onPartialTranscription;

/// @brief Field onFullTranscription, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitTranscriptionEvent*  ___onFullTranscription;

/// @brief Field onStoppedListening, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStoppedListening;

/// @brief Field onStartListening, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStartListening;

/// @brief Field onMicLevelChanged, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitMicLevelChangedEvent*  ___onMicLevelChanged;

/// [CompilerGenerated]
/// @brief Field <LastTranscription>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____LastTranscription_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider, ___overrideMicLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider, ___onPartialTranscription) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider, ___onFullTranscription) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider, ___onStoppedListening) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider, ___onStartListening) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider, ___onMicLevelChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider, ____LastTranscription_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Interfaces::CustomTranscriptionProvider) == 0x58, "Size mismatch!");

} // namespace end def Meta::WitAi::Interfaces
