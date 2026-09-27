#pragma once
// IWYU pragma private; include "Meta/Voice/VoiceRequest_4.hpp"
#include "Meta/Voice/zzzz__VoiceRequestState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/zzzz__VoiceRequest_4_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequestState_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequest_4_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequest`4_<>c__DisplayClass46_0___WaitForHold_b__0_d_def.hpp"
#include "Meta/WitAi/Data/zzzz__SimulatedResponse_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceRequestState& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceRequestState const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__State_k__BackingField(::Meta::Voice::VoiceRequestState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Completion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Completion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Completion_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Threading::Tasks::Task*& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__HoldTask_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HoldTask_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Threading::Tasks::Task* const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__HoldTask_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HoldTask_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__HoldTask_k__BackingField(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HoldTask_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr float_t& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__DownloadProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadProgress_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr float_t const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__DownloadProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadProgress_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__DownloadProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DownloadProgress_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr float_t& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__UploadProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UploadProgress_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr float_t const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__UploadProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UploadProgress_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__UploadProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UploadProgress_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr TOptions& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Options_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr TOptions const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Options_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__Options_k__BackingField(TOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Options_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr TEvents& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Events_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr TEvents const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Events_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__Events_k__BackingField(TEvents  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr TResults& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Results_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Results_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr TResults const& Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get__Results_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Results_k__BackingField;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set__Results_k__BackingField(TResults  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Results_k__BackingField = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::setStaticF_simulatedResponse(::Meta::WitAi::Data::SimulatedResponse*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Data::SimulatedResponse*, "simulatedResponse", ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(std::forward<::Meta::WitAi::Data::SimulatedResponse*>(value));
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::Meta::WitAi::Data::SimulatedResponse* Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::getStaticF_simulatedResponse()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Data::SimulatedResponse*, "simulatedResponse", ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>();
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_Logger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::Meta::Voice::VoiceRequestState Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::VoiceRequestState>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::set_State(::Meta::Voice::VoiceRequestState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"set_State", {}, {::i2c::type_of<::Meta::Voice::VoiceRequestState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline bool Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_Completion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_Completion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::System::Threading::Tasks::Task* Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_HoldTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_HoldTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline float_t Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_DownloadProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_DownloadProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::set_DownloadProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"set_DownloadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline float_t Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_UploadProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_UploadProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::set_UploadProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"set_UploadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline TOptions Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TOptions>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline TEvents Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEvents>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline TResults Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResults>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::_ctor(TOptions  newOptions, TEvents  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {".ctor", {}, {::i2c::type_of<TOptions>(), ::i2c::type_of<TEvents>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOptions, newEvents);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline TResults Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::GetNewResults()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<TResults>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::AddEventListeners(TEvents  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"AddEventListeners", {}, {::i2c::type_of<TEvents>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEvents);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::SetEventListeners(TEvents  newEvents, bool  addListeners)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEvents, addListeners);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::RaiseEvent(TUnityEvent  requestEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestEvent);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::SetState(::Meta::Voice::VoiceRequestState  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnStateChange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::WaitForHold(::System::Action*  onReady)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"WaitForHold", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onReady);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HoldSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::SetDownloadProgress(float_t  newProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"SetDownloadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newProgress);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::SetUploadProgress(float_t  newProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"SetUploadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newProgress);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::Log(::StringW  log, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log, logLevel);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::LogW(::StringW  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"LogW", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::LogE(::StringW  log, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"LogE", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log, e);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::StringW Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::GetSendError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::Send()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HandleSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline bool Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnSimulateResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HandleFailure(::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HandleFailure(int32_t  errorStatusCode, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorStatusCode, errorMessage);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline bool Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::ShouldIgnoreError(int32_t  errorStatusCode, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, errorStatusCode, errorMessage);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnFailed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HandleSuccess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnSuccess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::Cancel(::StringW  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::HandleCancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnCancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::OnComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::MainThreadCallback(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"MainThreadCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>* Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::New_ctor(TOptions  newOptions, TEvents  newEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*>(newOptions, newEvents));
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>::VoiceRequest_4()   {
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*& Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>* const& Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set___4__this(::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Action*& Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get_onReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReady;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Action* const& Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get_onReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReady;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set_onReady(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReady = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Action*& Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::System::Action* const& Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr void Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::__cordl_internal_set___9__1(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::System::Threading::Tasks::Task* Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::_WaitForHold_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"<WaitForHold>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline void Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::_WaitForHold_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>*>(),
                        {"<WaitForHold>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
inline ::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>* Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>*>());
}
// Ctor Parameters []
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
constexpr ::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>::VoiceRequest_4___c__DisplayClass46_0()   {
}
