#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Net/Utilities/SystemTime.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Net/Utilities/zzzz__SystemTime_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Net/Utilities/zzzz__SystemTime_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime.SetDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime)>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::SetDateTime)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb02f7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(),
                        {"SetDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime.SetDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTimeOffset)>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::SetDateTimeOffset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb02f8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(),
                        {"SetDateTimeOffset", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime.ResetDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::ResetDateTime)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb02f998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(),
                        {"ResetDateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::setStaticF_Now(::System::Func_1<::System::DateTime>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::DateTime>*, "Now", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(std::forward<::System::Func_1<::System::DateTime>*>(value));
}
inline ::System::Func_1<::System::DateTime>* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::getStaticF_Now()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTime>*, "Now", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>();
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::setStaticF_OffsetNow(::System::Func_1<::System::DateTimeOffset>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::DateTimeOffset>*, "OffsetNow", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(std::forward<::System::Func_1<::System::DateTimeOffset>*>(value));
}
inline ::System::Func_1<::System::DateTimeOffset>* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::getStaticF_OffsetNow()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTimeOffset>*, "OffsetNow", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>();
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::SetDateTime(::System::DateTime  dateTimeNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(),
                        {"SetDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dateTimeNow);
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::SetDateTimeOffset(::System::DateTimeOffset  dateTimeOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(),
                        {"SetDateTimeOffset", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dateTimeOffset);
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::ResetDateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime*>(),
                        {"ResetDateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime::SystemTime()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0._SetDateTimeOffset_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::_SetDateTimeOffset_b__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb02fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0*>(),
                        {"<SetDateTimeOffset>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTimeOffset& UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::__cordl_internal_get_dateTimeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTimeOffset;
}
constexpr ::System::DateTimeOffset const& UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::__cordl_internal_get_dateTimeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTimeOffset;
}
constexpr void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::__cordl_internal_set_dateTimeOffset(::System::DateTimeOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateTimeOffset = value;
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTimeOffset UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::_SetDateTimeOffset_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0*>(),
                        {"<SetDateTimeOffset>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass3_0::SystemTime___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02f8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0._SetDateTime_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::_SetDateTime_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02fe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0*>(),
                        {"<SetDateTime>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::__cordl_internal_get_dateTimeNow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTimeNow;
}
constexpr ::System::DateTime const& UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::__cordl_internal_get_dateTimeNow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTimeNow;
}
constexpr void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::__cordl_internal_set_dateTimeNow(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateTimeNow = value;
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::_SetDateTime_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0*>(),
                        {"<SetDateTime>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c__DisplayClass1_0::SystemTime___c__DisplayClass1_0()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb02fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c._ResetDateTime_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::_ResetDateTime_b__4_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb02fd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<ResetDateTime>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c._ResetDateTime_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::_ResetDateTime_b__4_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb02fd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<ResetDateTime>b__4_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c.__cctor_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::__cctor_b__5_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb02fda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c.__cctor_b__5_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::*)()>(&::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::__cctor_b__5_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb02fdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<.cctor>b__5_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(std::forward<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::setStaticF___9__4_0(::System::Func_1<::System::DateTime>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::DateTime>*, "<>9__4_0", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(std::forward<::System::Func_1<::System::DateTime>*>(value));
}
inline ::System::Func_1<::System::DateTime>* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTime>*, "<>9__4_0", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::setStaticF___9__4_1(::System::Func_1<::System::DateTimeOffset>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::DateTimeOffset>*, "<>9__4_1", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(std::forward<::System::Func_1<::System::DateTimeOffset>*>(value));
}
inline ::System::Func_1<::System::DateTimeOffset>* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::getStaticF___9__4_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTimeOffset>*, "<>9__4_1", ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::_ResetDateTime_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<ResetDateTime>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTimeOffset UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::_ResetDateTime_b__4_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<ResetDateTime>b__4_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method);
}
inline ::System::DateTime UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTimeOffset UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::__cctor_b__5_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>(),
                        {"<.cctor>b__5_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c* UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Net::Utilities::SystemTime___c::SystemTime___c()   {
}
