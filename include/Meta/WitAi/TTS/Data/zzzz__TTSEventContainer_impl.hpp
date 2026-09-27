#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSEventContainer.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__ITTSEvent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEventContainer_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__ITTSEvent_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* (::Meta::WitAi::TTS::Data::TTSEventContainer::*)()>(&::Meta::WitAi::TTS::Data::TTSEventContainer::get_Events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e68e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.add_OnEventJsonAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSEventContainer::*)(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&::Meta::WitAi::TTS::Data::TTSEventContainer::add_OnEventJsonAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e67554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"add_OnEventJsonAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.remove_OnEventJsonAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSEventContainer::*)(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&::Meta::WitAi::TTS::Data::TTSEventContainer::remove_OnEventJsonAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e67f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"remove_OnEventJsonAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.add_OnEventAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSEventContainer::*)(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*)>(&::Meta::WitAi::TTS::Data::TTSEventContainer::add_OnEventAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e68e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"add_OnEventAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.remove_OnEventAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSEventContainer::*)(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*)>(&::Meta::WitAi::TTS::Data::TTSEventContainer::remove_OnEventAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e68ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"remove_OnEventAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.AddEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSEventContainer::*)(::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&::Meta::WitAi::TTS::Data::TTSEventContainer::AddEvents)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9e68f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"AddEvents", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.AddEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Data::TTSEventContainer::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Data::TTSEventContainer::AddEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e69234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"AddEvent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer.DecodeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::ITTSEvent* (::Meta::WitAi::TTS::Data::TTSEventContainer::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Data::TTSEventContainer::DecodeEvent)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x9e692e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"DecodeEvent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSEventContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSEventContainer::*)()>(&::Meta::WitAi::TTS::Data::TTSEventContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e68d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*& Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* const& Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_set__events(::System::Collections::Concurrent::ConcurrentQueue_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*& Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_get_OnEventJsonAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventJsonAdded;
}
constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>* const& Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_get_OnEventJsonAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventJsonAdded;
}
constexpr void Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_set_OnEventJsonAdded(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEventJsonAdded = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*& Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_get_OnEventAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventAdded;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* const& Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_get_OnEventAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEventAdded;
}
constexpr void Meta::WitAi::TTS::Data::TTSEventContainer::__cordl_internal_set_OnEventAdded(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEventAdded = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::TTS::Data::ITTSEvent*>* Meta::WitAi::TTS::Data::TTSEventContainer::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Data::TTSEventContainer::add_OnEventJsonAdded(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"add_OnEventJsonAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Data::TTSEventContainer::remove_OnEventJsonAdded(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"remove_OnEventJsonAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Data::TTSEventContainer::add_OnEventAdded(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"add_OnEventAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Data::TTSEventContainer::remove_OnEventAdded(::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"remove_OnEventAdded", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::ITTSEvent*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::Data::TTSEventContainer::AddEvents(::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"AddEvents", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events);
}
inline bool Meta::WitAi::TTS::Data::TTSEventContainer::AddEvent(::Meta::WitAi::Json::WitResponseNode*  eventNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"AddEvent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventNode);
}
inline ::Meta::WitAi::TTS::Data::ITTSEvent* Meta::WitAi::TTS::Data::TTSEventContainer::DecodeEvent(::Meta::WitAi::Json::WitResponseNode*  eventNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {"DecodeEvent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::ITTSEvent*>(this, ___internal_method, eventNode);
}
template<typename TEvent>
requires(::cordl_internals::type_constraint<TEvent, ::Meta::WitAi::TTS::Data::ITTSEvent*>)
inline void Meta::WitAi::TTS::Data::TTSEventContainer::GetClosestEvents(int32_t  sample, ::by_ref<int32_t>  previousEventIndex, ::by_ref<TEvent>  previousEvent, ::by_ref<TEvent>  nextEvent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                    {"GetClosestEvents", {::i2c::class_of<TEvent>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<TEvent>>(), ::i2c::type_of<::by_ref<TEvent>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEvent>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample, previousEventIndex, previousEvent, nextEvent);
}
inline void Meta::WitAi::TTS::Data::TTSEventContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSEventContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* Meta::WitAi::TTS::Data::TTSEventContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSEventContainer*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer::TTSEventContainer()   {
}
