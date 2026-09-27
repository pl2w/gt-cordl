#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneRecordingStateData.hpp"
#include "Liv/Lck/GorillaTag/zzzz__RecordingState_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneRecordingStateData_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneRecordingStateData_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__RecordingState_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData.add_OnDroneRecordingStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::add_OnDroneRecordingStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d19bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"add_OnDroneRecordingStateChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData.remove_OnDroneRecordingStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::remove_OnDroneRecordingStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d1bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"remove_OnDroneRecordingStateChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::GorillaTag::RecordingState (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)()>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)(::Liv::Lck::GorillaTag::RecordingState)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::set_State)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d1cd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"set_State", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::RecordingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData.get_Span
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)()>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::get_Span)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"get_Span", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData.set_Span
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)(::System::TimeSpan)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::set_Span)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d20700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"set_Span", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData.get_FormattedDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)()>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::get_FormattedDuration)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9d1f5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"get_FormattedDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData::*)()>(&::Liv::Lck::GorillaTag::DroneRecordingStateData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d1defc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*& Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_get_OnDroneRecordingStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDroneRecordingStateChanged;
}
constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState* const& Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_get_OnDroneRecordingStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDroneRecordingStateChanged;
}
constexpr void Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_set_OnDroneRecordingStateChanged(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDroneRecordingStateChanged = value;
}
constexpr ::System::TimeSpan& Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_get__span()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____span;
}
constexpr ::System::TimeSpan const& Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_get__span() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____span;
}
constexpr void Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_set__span(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____span = value;
}
constexpr ::Liv::Lck::GorillaTag::RecordingState& Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_get__recordingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingState;
}
constexpr ::Liv::Lck::GorillaTag::RecordingState const& Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_get__recordingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingState;
}
constexpr void Liv::Lck::GorillaTag::DroneRecordingStateData::__cordl_internal_set__recordingState(::Liv::Lck::GorillaTag::RecordingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingState = value;
}
inline void Liv::Lck::GorillaTag::DroneRecordingStateData::add_OnDroneRecordingStateChanged(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"add_OnDroneRecordingStateChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::DroneRecordingStateData::remove_OnDroneRecordingStateChanged(::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"remove_OnDroneRecordingStateChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::GorillaTag::RecordingState Liv::Lck::GorillaTag::DroneRecordingStateData::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::GorillaTag::RecordingState>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneRecordingStateData::set_State(::Liv::Lck::GorillaTag::RecordingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"set_State", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::RecordingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan Liv::Lck::GorillaTag::DroneRecordingStateData::get_Span()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"get_Span", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneRecordingStateData::set_Span(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"set_Span", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Liv::Lck::GorillaTag::DroneRecordingStateData::get_FormattedDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {"get_FormattedDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneRecordingStateData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::DroneRecordingStateData* Liv::Lck::GorillaTag::DroneRecordingStateData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::DroneRecordingStateData*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData::DroneRecordingStateData()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d19b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::*)(::Liv::Lck::GorillaTag::RecordingState)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d20708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::*)(::Liv::Lck::GorillaTag::RecordingState, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d2071c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::*)(::System::IAsyncResult*)>(&::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d207a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::Invoke(::Liv::Lck::GorillaTag::RecordingState  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::IAsyncResult* Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::BeginInvoke(::Liv::Lck::GorillaTag::RecordingState  state, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, state, callback, object);
}
inline void Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState* Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData_OnDroneRecordingState::DroneRecordingStateData_OnDroneRecordingState()   {
}
