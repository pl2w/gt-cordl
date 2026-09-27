#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSEventTrigger_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSEventTrigger_2)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::TTS::Data {
class ITTSEvent;
}
namespace Meta::WitAi::TTS::Data {
class TTSEventContainer;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSEventPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
template<typename TEvent,typename TData>
class TTSEventTrigger_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2, "Meta.WitAi.TTS.Integrations", "TTSEventTrigger`2");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Integrations {
// cpp template
template<typename TEvent,typename TData>
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSEventTrigger`2<TEvent,TData>
class CORDL_TYPE TTSEventTrigger_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_Player, put=set_Player)) ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*  Player;

/// @brief Field <Logger>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _currentEvents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentEvents, put=__cordl_internal_set__currentEvents)) ::Meta::WitAi::TTS::Data::TTSEventContainer*  _currentEvents;

/// @brief Field _player, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::UnityEngine::Object>  _player;

/// @brief Field _sample, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__sample, put=__cordl_internal_set__sample)) int32_t  _sample;

/// @brief Field queuedEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_queuedEvents, put=__cordl_internal_set_queuedEvents)) ::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  queuedEvents;

/// @brief Method ClearCurrentEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearCurrentEvents() ;

static inline ::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEventAdded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnEventAdded(::Meta::WitAi::TTS::Data::ITTSEvent*  ev) ;

/// @brief Method OnEventTriggered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEventTriggered(TEvent  queuedEvent) ;

/// @brief Method RefreshSample, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RefreshSample(bool  force) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer* const& __cordl_internal_get__currentEvents() const;

constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer*& __cordl_internal_get__currentEvents() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__player() ;

constexpr int32_t const& __cordl_internal_get__sample() const;

constexpr int32_t& __cordl_internal_get__sample() ;

constexpr ::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* const& __cordl_internal_get_queuedEvents() const;

constexpr ::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*& __cordl_internal_get_queuedEvents() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__currentEvents(::Meta::WitAi::TTS::Data::TTSEventContainer*  value) ;

constexpr void __cordl_internal_set__player(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__sample(int32_t  value) ;

constexpr void __cordl_internal_set_queuedEvents(::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// @brief Method get_Player, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer* get_Player() ;

/// @brief Method set_Player, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Player(::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSEventTrigger_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSEventTrigger_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSEventTrigger_2(TTSEventTrigger_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSEventTrigger_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSEventTrigger_2(TTSEventTrigger_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29112};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _sample, offset: 0x28, size: 0x4, def value: None
 int32_t  ____sample;

/// @brief Field queuedEvents, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  ___queuedEvents;

/// [SerializeField]
/// [ObjectType(typeof(Meta.WitAi.TTS.Interfaces.ITTSEventPlayer), new[] {  })]
/// @brief Field _player, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____player;

/// @brief Field _currentEvents, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSEventContainer*  ____currentEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Integrations
