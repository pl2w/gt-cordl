#pragma once
// IWYU pragma private; include "UniLabs/Time/UTimeSpanRange.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UniLabs/Time/zzzz__UTimeSpanRange_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UniLabs/Time/zzzz__UTimeSpan_def.hpp"
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.get_Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::UniLabs::Time::UTimeSpanRange::*)()>(&::UniLabs::Time::UTimeSpanRange::get_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"get_Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.set_Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpanRange::*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpanRange::set_Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b6e710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"set_Start", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.get_End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::UniLabs::Time::UTimeSpanRange::*)()>(&::UniLabs::Time::UTimeSpanRange::get_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"get_End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.set_End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpanRange::*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpanRange::set_End)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b6e73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"set_End", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.get_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::UniLabs::Time::UTimeSpanRange::*)()>(&::UniLabs::Time::UTimeSpanRange::get_Duration)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b6e760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"get_Duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.IsInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UniLabs::Time::UTimeSpanRange::*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpanRange::IsInRange)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b6e7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"IsInRange", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpanRange::*)()>(&::UniLabs::Time::UTimeSpanRange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpanRange::*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpanRange::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b6e8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpanRange::*)(::System::TimeSpan, ::System::TimeSpan)>(&::UniLabs::Time::UTimeSpanRange::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b6e8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.OnStartChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpanRange::*)()>(&::UniLabs::Time::UTimeSpanRange::OnStartChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b6e948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"OnStartChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpanRange.OnEndChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpanRange::*)()>(&::UniLabs::Time::UTimeSpanRange::OnEndChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b6e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"OnEndChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UniLabs::Time::UTimeSpan*& UniLabs::Time::UTimeSpanRange::__cordl_internal_get__Start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Start;
}
constexpr ::UniLabs::Time::UTimeSpan* const& UniLabs::Time::UTimeSpanRange::__cordl_internal_get__Start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Start;
}
constexpr void UniLabs::Time::UTimeSpanRange::__cordl_internal_set__Start(::UniLabs::Time::UTimeSpan*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Start = value;
}
constexpr ::UniLabs::Time::UTimeSpan*& UniLabs::Time::UTimeSpanRange::__cordl_internal_get__End()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____End;
}
constexpr ::UniLabs::Time::UTimeSpan* const& UniLabs::Time::UTimeSpanRange::__cordl_internal_get__End() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____End;
}
constexpr void UniLabs::Time::UTimeSpanRange::__cordl_internal_set__End(::UniLabs::Time::UTimeSpan*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____End = value;
}
inline ::System::TimeSpan UniLabs::Time::UTimeSpanRange::get_Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"get_Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpanRange::set_Start(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"set_Start", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan UniLabs::Time::UTimeSpanRange::get_End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"get_End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpanRange::set_End(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"set_End", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan UniLabs::Time::UTimeSpanRange::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline bool UniLabs::Time::UTimeSpanRange::IsInRange(::System::TimeSpan  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"IsInRange", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time);
}
inline void UniLabs::Time::UTimeSpanRange::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpanRange::_ctor(::System::TimeSpan  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start);
}
inline void UniLabs::Time::UTimeSpanRange::_ctor(::System::TimeSpan  start, ::System::TimeSpan  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline void UniLabs::Time::UTimeSpanRange::OnStartChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"OnStartChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpanRange::OnEndChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpanRange*>(),
                        {"OnEndChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::UniLabs::Time::UTimeSpanRange* UniLabs::Time::UTimeSpanRange::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpanRange*>());
}
inline ::UniLabs::Time::UTimeSpanRange* UniLabs::Time::UTimeSpanRange::New_ctor(::System::TimeSpan  start)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpanRange*>(start));
}
inline ::UniLabs::Time::UTimeSpanRange* UniLabs::Time::UTimeSpanRange::New_ctor(::System::TimeSpan  start, ::System::TimeSpan  end)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpanRange*>(start, end));
}
// Ctor Parameters []
constexpr ::UniLabs::Time::UTimeSpanRange::UTimeSpanRange()   {
}
