#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSEventAnimator_2.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventAnimator_2_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEventContainer_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSEventPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TEvent,typename TData>
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TEvent,typename TData>
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
template<typename TEvent,typename TData>
constexpr ::UnityW<::UnityEngine::Object>& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename TEvent,typename TData>
constexpr ::UnityW<::UnityEngine::Object> const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__player(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
template<typename TEvent,typename TData>
constexpr bool& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_easeIgnored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___easeIgnored;
}
template<typename TEvent,typename TData>
constexpr bool const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_easeIgnored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___easeIgnored;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set_easeIgnored(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___easeIgnored = value;
}
template<typename TEvent,typename TData>
constexpr ::UnityEngine::AnimationCurve*& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_easeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___easeCurve;
}
template<typename TEvent,typename TData>
constexpr ::UnityEngine::AnimationCurve* const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_easeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___easeCurve;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set_easeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___easeCurve = value;
}
template<typename TEvent,typename TData>
constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer*& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__EventContainer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventContainer_k__BackingField;
}
template<typename TEvent,typename TData>
constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer* const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__EventContainer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventContainer_k__BackingField;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__EventContainer_k__BackingField(::Meta::WitAi::TTS::Data::TTSEventContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EventContainer_k__BackingField = value;
}
template<typename TEvent,typename TData>
constexpr bool& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_sendMinEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendMinEvent;
}
template<typename TEvent,typename TData>
constexpr bool const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_sendMinEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendMinEvent;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set_sendMinEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendMinEvent = value;
}
template<typename TEvent,typename TData>
constexpr bool& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_sendMaxEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendMaxEvent;
}
template<typename TEvent,typename TData>
constexpr bool const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get_sendMaxEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendMaxEvent;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set_sendMaxEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendMaxEvent = value;
}
template<typename TEvent,typename TData>
constexpr int32_t& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__sample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample;
}
template<typename TEvent,typename TData>
constexpr int32_t const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__sample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__sample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sample = value;
}
template<typename TEvent,typename TData>
constexpr int32_t& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__prevEventIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevEventIndex;
}
template<typename TEvent,typename TData>
constexpr int32_t const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__prevEventIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevEventIndex;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__prevEventIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevEventIndex = value;
}
template<typename TEvent,typename TData>
constexpr TEvent& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__prevEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevEvent;
}
template<typename TEvent,typename TData>
constexpr TEvent const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__prevEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevEvent;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__prevEvent(TEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevEvent = value;
}
template<typename TEvent,typename TData>
constexpr TEvent& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__nextEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextEvent;
}
template<typename TEvent,typename TData>
constexpr TEvent const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__nextEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextEvent;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__nextEvent(TEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextEvent = value;
}
template<typename TEvent,typename TData>
constexpr TEvent& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__minEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minEvent;
}
template<typename TEvent,typename TData>
constexpr TEvent const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__minEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minEvent;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__minEvent(TEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minEvent = value;
}
template<typename TEvent,typename TData>
constexpr TEvent& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__maxEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxEvent;
}
template<typename TEvent,typename TData>
constexpr TEvent const& Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_get__maxEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxEvent;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::__cordl_internal_set__maxEvent(TEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxEvent = value;
}
template<typename TEvent,typename TData>
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer* Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::get_Player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(),
                        {"get_Player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::set_Player(::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(),
                        {"set_Player", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TEvent,typename TData>
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::get_EventContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(),
                        {"get_EventContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSEventContainer*>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::set_EventContainer(::Meta::WitAi::TTS::Data::TTSEventContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(),
                        {"set_EventContainer", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::RefreshSample(bool  force)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
template<typename TEvent,typename TData>
inline float_t Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::GetSampleEventProgress(int32_t  sample, int32_t  previousEventSample, int32_t  nextEventSample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(),
                        {"GetSampleEventProgress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, sample, previousEventSample, nextEventSample);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::LerpEvent(TEvent  fromEvent, TEvent  toEvent, float_t  percentage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromEvent, toEvent, percentage);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline ::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>* Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>*>());
}
// Ctor Parameters []
template<typename TEvent,typename TData>
constexpr ::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<TEvent,TData>::TTSEventAnimator_2()   {
}
