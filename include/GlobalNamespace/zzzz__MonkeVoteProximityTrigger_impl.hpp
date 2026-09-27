#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteProximityTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteProximityTrigger_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteProximityTrigger.add_OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteProximityTrigger::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteProximityTrigger::add_OnEnter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5623808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"add_OnEnter", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteProximityTrigger.remove_OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteProximityTrigger::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteProximityTrigger::remove_OnEnter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56238a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"remove_OnEnter", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteProximityTrigger.get_isPlayerNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeVoteProximityTrigger::*)()>(&::GlobalNamespace::MonkeVoteProximityTrigger::get_isPlayerNearby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5623940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"get_isPlayerNearby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteProximityTrigger.set_isPlayerNearby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteProximityTrigger::*)(bool)>(&::GlobalNamespace::MonkeVoteProximityTrigger::set_isPlayerNearby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5623948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"set_isPlayerNearby", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteProximityTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteProximityTrigger::*)()>(&::GlobalNamespace::MonkeVoteProximityTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5623950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteProximityTrigger.OnBoxExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteProximityTrigger::*)()>(&::GlobalNamespace::MonkeVoteProximityTrigger::OnBoxExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56239b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteProximityTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteProximityTrigger::*)()>(&::GlobalNamespace::MonkeVoteProximityTrigger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56239bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get_OnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr ::System::Action* const& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get_OnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr void GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_set_OnEnter(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnter = value;
}
constexpr bool& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get__isPlayerNearby_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPlayerNearby_k__BackingField;
}
constexpr bool const& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get__isPlayerNearby_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPlayerNearby_k__BackingField;
}
constexpr void GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_set__isPlayerNearby_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPlayerNearby_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get_triggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTime;
}
constexpr float_t const& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get_triggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTime;
}
constexpr void GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_set_triggerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerTime = value;
}
constexpr float_t& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get_retriggerDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerDelay;
}
constexpr float_t const& GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_get_retriggerDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerDelay;
}
constexpr void GlobalNamespace::MonkeVoteProximityTrigger::__cordl_internal_set_retriggerDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retriggerDelay = value;
}
inline void GlobalNamespace::MonkeVoteProximityTrigger::add_OnEnter(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"add_OnEnter", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteProximityTrigger::remove_OnEnter(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"remove_OnEnter", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MonkeVoteProximityTrigger::get_isPlayerNearby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"get_isPlayerNearby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteProximityTrigger::set_isPlayerNearby(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {"set_isPlayerNearby", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteProximityTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteProximityTrigger::OnBoxExited()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteProximityTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteProximityTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteProximityTrigger* GlobalNamespace::MonkeVoteProximityTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteProximityTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteProximityTrigger::MonkeVoteProximityTrigger()   {
}
