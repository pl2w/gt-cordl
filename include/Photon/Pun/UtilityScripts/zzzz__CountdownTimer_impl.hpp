#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CountdownTimer.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CountdownTimer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CountdownTimer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.add_OnCountdownTimerHasExpired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*)>(&::Photon::Pun::UtilityScripts::CountdownTimer::add_OnCountdownTimerHasExpired)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa73b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"add_OnCountdownTimerHasExpired", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.remove_OnCountdownTimerHasExpired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*)>(&::Photon::Pun::UtilityScripts::CountdownTimer::remove_OnCountdownTimerHasExpired)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa73b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"remove_OnCountdownTimerHasExpired", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa73b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa73b998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa73bc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa73bcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.OnTimerRuns
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::OnTimerRuns)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa73bf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"OnTimerRuns", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.OnTimerEnds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::OnTimerEnds)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa73be34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"OnTimerEnds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::UtilityScripts::CountdownTimer::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa73bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::Initialize)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa73ba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.TimeRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::TimeRemaining)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa73bdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"TimeRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.TryGetStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>)>(&::Photon::Pun::UtilityScripts::CountdownTimer::TryGetStartTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa73c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"TryGetStartTime", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer.SetStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::SetStartTime)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa73c108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"SetStartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa73c304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_Countdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Countdown;
}
constexpr float_t const& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_Countdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Countdown;
}
constexpr void Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_set_Countdown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Countdown = value;
}
constexpr bool& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_isTimerRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTimerRunning;
}
constexpr bool const& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_isTimerRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTimerRunning;
}
constexpr void Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_set_isTimerRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTimerRunning = value;
}
constexpr int32_t& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_set_startTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_Text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_get_Text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Text;
}
constexpr void Photon::Pun::UtilityScripts::CountdownTimer::__cordl_internal_set_Text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Text = value;
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::setStaticF_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*  value)  {
::cordl_internals::setStaticField<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*, "OnCountdownTimerHasExpired", ::Photon::Pun::UtilityScripts::CountdownTimer*>(std::forward<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(value));
}
inline ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired* Photon::Pun::UtilityScripts::CountdownTimer::getStaticF_OnCountdownTimerHasExpired()  {
return ::cordl_internals::getStaticField<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*, "OnCountdownTimerHasExpired", ::Photon::Pun::UtilityScripts::CountdownTimer*>();
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::add_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"add_OnCountdownTimerHasExpired", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::remove_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"remove_OnCountdownTimerHasExpired", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::OnTimerRuns()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"OnTimerRuns", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::OnTimerEnds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"OnTimerEnds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Photon::Pun::UtilityScripts::CountdownTimer::TimeRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"TimeRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::CountdownTimer::TryGetStartTime(::by_ref<int32_t>  startTimestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"TryGetStartTime", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, startTimestamp);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::SetStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {"SetStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::CountdownTimer* Photon::Pun::UtilityScripts::CountdownTimer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::CountdownTimer*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::CountdownTimer::CountdownTimer()   {
}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::*)(::System::Object*, ::System::IntPtr)>(&::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa73c314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::*)()>(&::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa73c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::*)(::System::AsyncCallback*, ::System::Object*)>(&::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa73c3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::*)(::System::IAsyncResult*)>(&::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa73c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired* Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*>(object, method));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired::CountdownTimer_CountdownTimerHasExpired()   {
}
