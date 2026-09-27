#pragma once
// IWYU pragma private; include "GorillaTag/GTLogErrorLimiter.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__GTLogErrorLimiter_def.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.get_baseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::GTLogErrorLimiter::*)()>(&::GorillaTag::GTLogErrorLimiter::get_baseMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d23040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"get_baseMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.set_baseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::StringW)>(&::GorillaTag::GTLogErrorLimiter::set_baseMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d23048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"set_baseMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::StringW, int32_t, ::StringW)>(&::GorillaTag::GTLogErrorLimiter::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5d230a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::StringW, ::UnityEngine::Object*, ::StringW, ::StringW, int32_t)>(&::GorillaTag::GTLogErrorLimiter::Log)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x5d23208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::StringW, ::StringW, int32_t)>(&::GorillaTag::GTLogErrorLimiter::Log)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d2377c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.AddOccurrence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::StringW)>(&::GorillaTag::GTLogErrorLimiter::AddOccurrence)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5d23890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"AddOccurrence", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.AddOccurrence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::System::Text::StringBuilder*)>(&::GorillaTag::GTLogErrorLimiter::AddOccurrence)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d23a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"AddOccurrence", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.AddOccurence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::UnityEngine::GameObject*)>(&::GorillaTag::GTLogErrorLimiter::AddOccurence)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5d23b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"AddOccurence", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.LogOccurrences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::UnityEngine::Component*, ::UnityEngine::Object*, ::StringW, ::StringW, int32_t)>(&::GorillaTag::GTLogErrorLimiter::LogOccurrences)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5d23d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"LogOccurrences", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTLogErrorLimiter.LogOccurrences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTLogErrorLimiter::*)(::Cysharp::Text::Utf16ValueStringBuilder, ::UnityEngine::Object*, ::StringW, ::StringW, int32_t)>(&::GorillaTag::GTLogErrorLimiter::LogOccurrences)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d23e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"LogOccurrences", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_countdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdown;
}
constexpr int32_t const& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_countdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdown;
}
constexpr void GorillaTag::GTLogErrorLimiter::__cordl_internal_set_countdown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdown = value;
}
constexpr int32_t& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_occurrenceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occurrenceCount;
}
constexpr int32_t const& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_occurrenceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occurrenceCount;
}
constexpr void GorillaTag::GTLogErrorLimiter::__cordl_internal_set_occurrenceCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occurrenceCount = value;
}
constexpr ::StringW& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_occurrencesJoinString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occurrencesJoinString;
}
constexpr ::StringW const& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_occurrencesJoinString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occurrencesJoinString;
}
constexpr void GorillaTag::GTLogErrorLimiter::__cordl_internal_set_occurrencesJoinString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occurrencesJoinString = value;
}
constexpr ::StringW& GorillaTag::GTLogErrorLimiter::__cordl_internal_get__baseMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMessage;
}
constexpr ::StringW const& GorillaTag::GTLogErrorLimiter::__cordl_internal_get__baseMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMessage;
}
constexpr void GorillaTag::GTLogErrorLimiter::__cordl_internal_set__baseMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseMessage = value;
}
constexpr ::Cysharp::Text::Utf16ValueStringBuilder& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr ::Cysharp::Text::Utf16ValueStringBuilder const& GorillaTag::GTLogErrorLimiter::__cordl_internal_get_sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr void GorillaTag::GTLogErrorLimiter::__cordl_internal_set_sb(::Cysharp::Text::Utf16ValueStringBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sb = value;
}
inline ::StringW GorillaTag::GTLogErrorLimiter::get_baseMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"get_baseMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTag::GTLogErrorLimiter::set_baseMessage(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"set_baseMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::GTLogErrorLimiter::_ctor(::StringW  baseMessage, int32_t  countdown, ::StringW  occurrencesJoinString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseMessage, countdown, occurrencesJoinString);
}
inline void GorillaTag::GTLogErrorLimiter::Log(::StringW  subMessage, ::UnityEngine::Object*  context, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subMessage, context, caller, sourceFilePath, line);
}
inline void GorillaTag::GTLogErrorLimiter::Log(::UnityEngine::Object*  obj, ::UnityEngine::Object*  context, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"Log", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, context, caller, sourceFilePath, line);
}
inline void GorillaTag::GTLogErrorLimiter::AddOccurrence(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"AddOccurrence", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GorillaTag::GTLogErrorLimiter::AddOccurrence(::System::Text::StringBuilder*  stringBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"AddOccurrence", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stringBuilder);
}
inline void GorillaTag::GTLogErrorLimiter::AddOccurence(::UnityEngine::GameObject*  gObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"AddOccurence", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gObj);
}
inline void GorillaTag::GTLogErrorLimiter::LogOccurrences(::UnityEngine::Component*  component, ::UnityEngine::Object*  obj, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"LogOccurrences", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, obj, caller, sourceFilePath, line);
}
inline void GorillaTag::GTLogErrorLimiter::LogOccurrences(::Cysharp::Text::Utf16ValueStringBuilder  subMessage, ::UnityEngine::Object*  obj, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTLogErrorLimiter*>(),
                        {"LogOccurrences", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subMessage, obj, caller, sourceFilePath, line);
}
inline ::GorillaTag::GTLogErrorLimiter* GorillaTag::GTLogErrorLimiter::New_ctor(::StringW  baseMessage, int32_t  countdown, ::StringW  occurrencesJoinString)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GTLogErrorLimiter*>(baseMessage, countdown, occurrencesJoinString));
}
// Ctor Parameters []
constexpr ::GorillaTag::GTLogErrorLimiter::GTLogErrorLimiter()   {
}
