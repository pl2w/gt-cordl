#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSEventAnimator_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSEventAnimator_2)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::TTS::Data {
class TTSEventContainer;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSEventPlayer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
template<typename TEvent,typename TData>
class TTSEventAnimator_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2, "Meta.WitAi.TTS.Integrations", "TTSEventAnimator`2");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Integrations {
// cpp template
template<typename TEvent,typename TData>
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSEventAnimator`2<TEvent,TData>
class CORDL_TYPE TTSEventAnimator_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_EventContainer, put=set_EventContainer)) ::Meta::WitAi::TTS::Data::TTSEventContainer*  EventContainer;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_Player, put=set_Player)) ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*  Player;

/// @brief Field <EventContainer>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__EventContainer_k__BackingField, put=__cordl_internal_set__EventContainer_k__BackingField)) ::Meta::WitAi::TTS::Data::TTSEventContainer*  _EventContainer_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _maxEvent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxEvent, put=__cordl_internal_set__maxEvent)) TEvent  _maxEvent;

/// @brief Field _minEvent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__minEvent, put=__cordl_internal_set__minEvent)) TEvent  _minEvent;

/// @brief Field _nextEvent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextEvent, put=__cordl_internal_set__nextEvent)) TEvent  _nextEvent;

/// @brief Field _player, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::UnityEngine::Object>  _player;

/// @brief Field _prevEvent, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__prevEvent, put=__cordl_internal_set__prevEvent)) TEvent  _prevEvent;

/// @brief Field _prevEventIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevEventIndex, put=__cordl_internal_set__prevEventIndex)) int32_t  _prevEventIndex;

/// @brief Field _sample, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sample, put=__cordl_internal_set__sample)) int32_t  _sample;

/// @brief Field easeCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_easeCurve, put=__cordl_internal_set_easeCurve)) ::UnityEngine::AnimationCurve*  easeCurve;

/// @brief Field easeIgnored, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_easeIgnored, put=__cordl_internal_set_easeIgnored)) bool  easeIgnored;

/// @brief Field sendMaxEvent, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendMaxEvent, put=__cordl_internal_set_sendMaxEvent)) bool  sendMaxEvent;

/// @brief Field sendMinEvent, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendMinEvent, put=__cordl_internal_set_sendMinEvent)) bool  sendMinEvent;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSampleEventProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t GetSampleEventProgress(int32_t  sample, int32_t  previousEventSample, int32_t  nextEventSample) ;

/// @brief Method LerpEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LerpEvent(TEvent  fromEvent, TEvent  toEvent, float_t  percentage) ;

static inline ::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>* New_ctor() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshSample, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RefreshSample(bool  force) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer* const& __cordl_internal_get__EventContainer_k__BackingField() const;

constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer*& __cordl_internal_get__EventContainer_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr TEvent const& __cordl_internal_get__maxEvent() const;

constexpr TEvent& __cordl_internal_get__maxEvent() ;

constexpr TEvent const& __cordl_internal_get__minEvent() const;

constexpr TEvent& __cordl_internal_get__minEvent() ;

constexpr TEvent const& __cordl_internal_get__nextEvent() const;

constexpr TEvent& __cordl_internal_get__nextEvent() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__player() ;

constexpr TEvent const& __cordl_internal_get__prevEvent() const;

constexpr TEvent& __cordl_internal_get__prevEvent() ;

constexpr int32_t const& __cordl_internal_get__prevEventIndex() const;

constexpr int32_t& __cordl_internal_get__prevEventIndex() ;

constexpr int32_t const& __cordl_internal_get__sample() const;

constexpr int32_t& __cordl_internal_get__sample() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_easeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_easeCurve() ;

constexpr bool const& __cordl_internal_get_easeIgnored() const;

constexpr bool& __cordl_internal_get_easeIgnored() ;

constexpr bool const& __cordl_internal_get_sendMaxEvent() const;

constexpr bool& __cordl_internal_get_sendMaxEvent() ;

constexpr bool const& __cordl_internal_get_sendMinEvent() const;

constexpr bool& __cordl_internal_get_sendMinEvent() ;

constexpr void __cordl_internal_set__EventContainer_k__BackingField(::Meta::WitAi::TTS::Data::TTSEventContainer*  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__maxEvent(TEvent  value) ;

constexpr void __cordl_internal_set__minEvent(TEvent  value) ;

constexpr void __cordl_internal_set__nextEvent(TEvent  value) ;

constexpr void __cordl_internal_set__player(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__prevEvent(TEvent  value) ;

constexpr void __cordl_internal_set__prevEventIndex(int32_t  value) ;

constexpr void __cordl_internal_set__sample(int32_t  value) ;

constexpr void __cordl_internal_set_easeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_easeIgnored(bool  value) ;

constexpr void __cordl_internal_set_sendMaxEvent(bool  value) ;

constexpr void __cordl_internal_set_sendMinEvent(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_EventContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* get_EventContainer() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// @brief Method get_Player, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer* get_Player() ;

/// [CompilerGenerated]
/// @brief Method set_EventContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_EventContainer(::Meta::WitAi::TTS::Data::TTSEventContainer*  value) ;

/// @brief Method set_Player, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Player(::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSEventAnimator_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSEventAnimator_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSEventAnimator_2(TTSEventAnimator_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSEventAnimator_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSEventAnimator_2(TTSEventAnimator_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29111};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [SerializeField]
/// [ObjectType(typeof(Meta.WitAi.TTS.Interfaces.ITTSEventPlayer), new[] {  })]
/// @brief Field _player, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____player;

/// @brief Field easeIgnored, offset: 0x30, size: 0x1, def value: None
 bool  ___easeIgnored;

/// @brief Field easeCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___easeCurve;

/// [CompilerGenerated]
/// @brief Field <EventContainer>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSEventContainer*  ____EventContainer_k__BackingField;

/// @brief Field sendMinEvent, offset: 0x48, size: 0x1, def value: None
 bool  ___sendMinEvent;

/// @brief Field sendMaxEvent, offset: 0x49, size: 0x1, def value: None
 bool  ___sendMaxEvent;

/// @brief Field _sample, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____sample;

/// @brief Field _prevEventIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ____prevEventIndex;

/// @brief Field _prevEvent, offset: 0x58, size: 0x8, def value: None
 TEvent  ____prevEvent;

/// @brief Field _nextEvent, offset: 0x60, size: 0x8, def value: None
 TEvent  ____nextEvent;

/// @brief Field _minEvent, offset: 0x68, size: 0x8, def value: None
 TEvent  ____minEvent;

/// @brief Field _maxEvent, offset: 0x70, size: 0x8, def value: None
 TEvent  ____maxEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Integrations
