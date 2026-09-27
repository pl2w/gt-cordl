#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSEventTrigger_2.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventTrigger_2_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__ITTSEvent_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEventContainer_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSEventPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TEvent,typename TData>
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TEvent,typename TData>
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
template<typename TEvent,typename TData>
constexpr int32_t& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__sample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample;
}
template<typename TEvent,typename TData>
constexpr int32_t const& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__sample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sample;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_set__sample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sample = value;
}
template<typename TEvent,typename TData>
constexpr ::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get_queuedEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedEvents;
}
template<typename TEvent,typename TData>
constexpr ::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* const& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get_queuedEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedEvents;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_set_queuedEvents(::System::Collections::Generic::Queue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedEvents = value;
}
template<typename TEvent,typename TData>
constexpr ::UnityW<::UnityEngine::Object>& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename TEvent,typename TData>
constexpr ::UnityW<::UnityEngine::Object> const& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_set__player(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
template<typename TEvent,typename TData>
constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer*& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__currentEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEvents;
}
template<typename TEvent,typename TData>
constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer* const& Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_get__currentEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEvents;
}
template<typename TEvent,typename TData>
constexpr void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::__cordl_internal_set__currentEvents(::Meta::WitAi::TTS::Data::TTSEventContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentEvents = value;
}
template<typename TEvent,typename TData>
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer* Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::get_Player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(),
                        {"get_Player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::set_Player(::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(),
                        {"set_Player", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::ClearCurrentEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(),
                        {"ClearCurrentEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::OnEventAdded(::Meta::WitAi::TTS::Data::ITTSEvent*  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(),
                        {"OnEventAdded", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::ITTSEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::RefreshSample(bool  force)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::OnEventTriggered(TEvent  queuedEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queuedEvent);
}
template<typename TEvent,typename TData>
inline void Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TData>
inline ::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>* Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>*>());
}
// Ctor Parameters []
template<typename TEvent,typename TData>
constexpr ::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<TEvent,TData>::TTSEventTrigger_2()   {
}
