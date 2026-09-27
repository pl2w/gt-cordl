#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/TestScheduledEventStateCycleButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__TestScheduledEventStateCycleButton_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ca2a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                    {::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ca2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton.ReadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::ReadState)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ca2b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"ReadState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton.NextState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::NextState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ca2c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"NextState", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton.RenderState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::*)(::StringW)>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::RenderState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ca2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"RenderState", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::__cordl_internal_get_lastRenderedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRenderedState;
}
constexpr ::StringW const& GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::__cordl_internal_get_lastRenderedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRenderedState;
}
constexpr void GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::__cordl_internal_set_lastRenderedState(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRenderedState = value;
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::ReadState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"ReadState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::NextState(::StringW  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"NextState", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, current);
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::RenderState(::StringW  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {"RenderState", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton* GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::TestScheduledEventStateCycleButton::TestScheduledEventStateCycleButton()   {
}
