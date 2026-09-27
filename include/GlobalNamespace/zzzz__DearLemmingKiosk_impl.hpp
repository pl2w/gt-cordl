#pragma once
// IWYU pragma private; include "GlobalNamespace/DearLemmingKiosk.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DearLemmingKiosk_def.hpp"
#include "GlobalNamespace/zzzz__DearLemmingController_def.hpp"
#include "GlobalNamespace/zzzz__SimpleCountdown_def.hpp"
#include "GlobalNamespace/zzzz__TypingTarget_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.get_NextSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::get_NextSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5796c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"get_NextSubmit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.get_CanSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::get_CanSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5796c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"get_CanSubmit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.Fetch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::Fetch)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5796c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Fetch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::Send)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5796cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Send", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.secondsToTimeSpanString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DearLemmingKiosk::*)(float_t)>(&::GlobalNamespace::DearLemmingKiosk::secondsToTimeSpanString)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5796e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"secondsToTimeSpanString", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::OnEnable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x57972ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.Instance_OnCheckComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)(::GlobalNamespace::DearLemmingController_DearLemmingResponse*)>(&::GlobalNamespace::DearLemmingKiosk::Instance_OnCheckComplete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5797428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Instance_OnCheckComplete", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.Instance_OnSubmitComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)(::GlobalNamespace::DearLemmingController_DearLemmingResponse*)>(&::GlobalNamespace::DearLemmingKiosk::Instance_OnSubmitComplete)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x57977a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Instance_OnSubmitComplete", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)(::GlobalNamespace::DearLemmingController_DearLemmingResponse*)>(&::GlobalNamespace::DearLemmingKiosk::SetData)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x57974d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"SetData", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.countDownComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::countDownComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57978d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"countDownComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::OnDisable)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x57979d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::OnDestroy)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5797bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingKiosk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingKiosk::*)()>(&::GlobalNamespace::DearLemmingKiosk::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5797d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TypingTarget>& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_src()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___src;
}
constexpr ::UnityW<::GlobalNamespace::TypingTarget> const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_src() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___src;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_src(::UnityW<::GlobalNamespace::TypingTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___src = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_popUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popUp;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_popUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popUp;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_popUp(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popUp = value;
}
constexpr ::UnityW<::GlobalNamespace::SimpleCountdown>& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_countDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countDown;
}
constexpr ::UnityW<::GlobalNamespace::SimpleCountdown> const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_countDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countDown;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_countDown(::UnityW<::GlobalNamespace::SimpleCountdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countDown = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_ready()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ready;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_ready() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ready;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_ready(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ready = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_Refreshed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Refreshed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_Refreshed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Refreshed;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_Refreshed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Refreshed = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_SubmitSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitSuccess;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_SubmitSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitSuccess;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_SubmitSuccess(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubmitSuccess = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_SubmitFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitFail;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_SubmitFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmitFail;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_SubmitFail(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubmitFail = value;
}
constexpr bool& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_canSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSubmit;
}
constexpr bool const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_canSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSubmit;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_canSubmit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSubmit = value;
}
constexpr int32_t& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_nextSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSubmit;
}
constexpr int32_t const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_nextSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSubmit;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_nextSubmit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSubmit = value;
}
constexpr float_t& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_fetchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTime;
}
constexpr float_t const& GlobalNamespace::DearLemmingKiosk::__cordl_internal_get_fetchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTime;
}
constexpr void GlobalNamespace::DearLemmingKiosk::__cordl_internal_set_fetchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchTime = value;
}
inline int32_t GlobalNamespace::DearLemmingKiosk::get_NextSubmit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"get_NextSubmit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::DearLemmingKiosk::get_CanSubmit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"get_CanSubmit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingKiosk::Fetch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Fetch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingKiosk::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DearLemmingKiosk::secondsToTimeSpanString(float_t  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"secondsToTimeSpanString", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline void GlobalNamespace::DearLemmingKiosk::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingKiosk::Instance_OnCheckComplete(::GlobalNamespace::DearLemmingController_DearLemmingResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Instance_OnCheckComplete", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::DearLemmingKiosk::Instance_OnSubmitComplete(::GlobalNamespace::DearLemmingController_DearLemmingResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"Instance_OnSubmitComplete", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::DearLemmingKiosk::SetData(::GlobalNamespace::DearLemmingController_DearLemmingResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"SetData", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::DearLemmingKiosk::countDownComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"countDownComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingKiosk::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingKiosk::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingKiosk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingKiosk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DearLemmingKiosk* GlobalNamespace::DearLemmingKiosk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DearLemmingKiosk*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DearLemmingKiosk::DearLemmingKiosk()   {
}
