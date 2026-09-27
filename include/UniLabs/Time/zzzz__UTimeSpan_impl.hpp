#pragma once
// IWYU pragma private; include "UniLabs/Time/UTimeSpan.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UniLabs/Time/zzzz__UTimeSpan_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.get_TimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::UniLabs::Time::UTimeSpan::*)()>(&::UniLabs::Time::UTimeSpan::get_TimeSpan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"get_TimeSpan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.set_TimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpan::set_TimeSpan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"set_TimeSpan", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)()>(&::UniLabs::Time::UTimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6e084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(int64_t)>(&::UniLabs::Time::UTimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(int32_t, int32_t, int32_t)>(&::UniLabs::Time::UTimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b6e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(int32_t, int32_t, int32_t, int32_t)>(&::UniLabs::Time::UTimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b6e17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UniLabs::Time::UTimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b6e1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.op_Implicit___System__TimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::UniLabs::Time::UTimeSpan*)>(&::UniLabs::Time::UTimeSpan::op_Implicit___System__TimeSpan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b6e1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UniLabs::Time::UTimeSpan*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.op_Implicit___UniLabs__Time__UTimeSpan_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UniLabs::Time::UTimeSpan* (*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpan::op_Implicit___UniLabs__Time__UTimeSpan_)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b6e25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UniLabs::Time::UTimeSpan::*)(::System::TimeSpan)>(&::UniLabs::Time::UTimeSpan::CompareTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b6e2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UniLabs::Time::UTimeSpan::*)(::UniLabs::Time::UTimeSpan*)>(&::UniLabs::Time::UTimeSpan::CompareTo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b6e32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UniLabs::Time::UTimeSpan*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UniLabs::Time::UTimeSpan::*)(::UniLabs::Time::UTimeSpan*)>(&::UniLabs::Time::UTimeSpan::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b6e3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"Equals", {}, {::i2c::type_of<::UniLabs::Time::UTimeSpan*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UniLabs::Time::UTimeSpan::*)(::System::Object*)>(&::UniLabs::Time::UTimeSpan::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b6e448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                    {::i2c::class_of<::UniLabs::Time::UTimeSpan*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UniLabs::Time::UTimeSpan::*)()>(&::UniLabs::Time::UTimeSpan::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6e548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                    {::i2c::class_of<::UniLabs::Time::UTimeSpan*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)()>(&::UniLabs::Time::UTimeSpan::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b6e5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)()>(&::UniLabs::Time::UTimeSpan::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b6e684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.OnSerializingMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(::System::Runtime::Serialization::StreamingContext)>(&::UniLabs::Time::UTimeSpan::OnSerializingMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6e700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnSerializingMethod", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UTimeSpan.OnDeserializedMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UTimeSpan::*)(::System::Runtime::Serialization::StreamingContext)>(&::UniLabs::Time::UTimeSpan::OnDeserializedMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnDeserializedMethod", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::TimeSpan& UniLabs::Time::UTimeSpan::__cordl_internal_get__TimeSpan_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSpan_k__BackingField;
}
constexpr ::System::TimeSpan const& UniLabs::Time::UTimeSpan::__cordl_internal_get__TimeSpan_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSpan_k__BackingField;
}
constexpr void UniLabs::Time::UTimeSpan::__cordl_internal_set__TimeSpan_k__BackingField(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeSpan_k__BackingField = value;
}
constexpr ::StringW& UniLabs::Time::UTimeSpan::__cordl_internal_get__TimeSpan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSpan;
}
constexpr ::StringW const& UniLabs::Time::UTimeSpan::__cordl_internal_get__TimeSpan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeSpan;
}
constexpr void UniLabs::Time::UTimeSpan::__cordl_internal_set__TimeSpan(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeSpan = value;
}
inline ::System::TimeSpan UniLabs::Time::UTimeSpan::get_TimeSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"get_TimeSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpan::set_TimeSpan(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"set_TimeSpan", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UniLabs::Time::UTimeSpan::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpan::_ctor(::System::TimeSpan  timeSpan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSpan);
}
inline void UniLabs::Time::UTimeSpan::_ctor(int64_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ticks);
}
inline void UniLabs::Time::UTimeSpan::_ctor(int32_t  hours, int32_t  minutes, int32_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hours, minutes, seconds);
}
inline void UniLabs::Time::UTimeSpan::_ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, days, hours, minutes, seconds);
}
inline void UniLabs::Time::UTimeSpan::_ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds, int32_t  milliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, days, hours, minutes, seconds, milliseconds);
}
inline ::System::TimeSpan UniLabs::Time::UTimeSpan::op_Implicit___System__TimeSpan(::UniLabs::Time::UTimeSpan*  uTimeSpan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UniLabs::Time::UTimeSpan*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, uTimeSpan);
}
inline ::UniLabs::Time::UTimeSpan* UniLabs::Time::UTimeSpan::op_Implicit___UniLabs__Time__UTimeSpan_(::System::TimeSpan  timeSpan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UniLabs::Time::UTimeSpan*>(nullptr, ___internal_method, timeSpan);
}
inline int32_t UniLabs::Time::UTimeSpan::CompareTo(::System::TimeSpan  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline int32_t UniLabs::Time::UTimeSpan::CompareTo(::UniLabs::Time::UTimeSpan*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UniLabs::Time::UTimeSpan*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline bool UniLabs::Time::UTimeSpan::Equals(::UniLabs::Time::UTimeSpan*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"Equals", {}, {::i2c::type_of<::UniLabs::Time::UTimeSpan*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UniLabs::Time::UTimeSpan::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::UTimeSpan*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UniLabs::Time::UTimeSpan::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::UTimeSpan*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpan::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpan::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UTimeSpan::OnSerializingMethod(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnSerializingMethod", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UniLabs::Time::UTimeSpan::OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UTimeSpan*>(),
                        {"OnDeserializedMethod", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
/// @brief [JsonConstructor]
inline ::UniLabs::Time::UTimeSpan* UniLabs::Time::UTimeSpan::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpan*>());
}
inline ::UniLabs::Time::UTimeSpan* UniLabs::Time::UTimeSpan::New_ctor(::System::TimeSpan  timeSpan)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpan*>(timeSpan));
}
inline ::UniLabs::Time::UTimeSpan* UniLabs::Time::UTimeSpan::New_ctor(int64_t  ticks)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpan*>(ticks));
}
inline ::UniLabs::Time::UTimeSpan* UniLabs::Time::UTimeSpan::New_ctor(int32_t  hours, int32_t  minutes, int32_t  seconds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpan*>(hours, minutes, seconds));
}
inline ::UniLabs::Time::UTimeSpan* UniLabs::Time::UTimeSpan::New_ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpan*>(days, hours, minutes, seconds));
}
inline ::UniLabs::Time::UTimeSpan* UniLabs::Time::UTimeSpan::New_ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds, int32_t  milliseconds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UTimeSpan*>(days, hours, minutes, seconds, milliseconds));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UniLabs::Time::UTimeSpan::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UniLabs::Time::UTimeSpan::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::UniLabs::Time::UTimeSpan*>"
constexpr  UniLabs::Time::UTimeSpan::operator ::System::IComparable_1<::UniLabs::Time::UTimeSpan*>*() noexcept {
return static_cast<::System::IComparable_1<::UniLabs::Time::UTimeSpan*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UniLabs::Time::UTimeSpan*>"
constexpr ::System::IComparable_1<::UniLabs::Time::UTimeSpan*>* UniLabs::Time::UTimeSpan::i___System__IComparable_1___UniLabs__Time__UTimeSpan__() noexcept {
return static_cast<::System::IComparable_1<::UniLabs::Time::UTimeSpan*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::System::TimeSpan>"
constexpr  UniLabs::Time::UTimeSpan::operator ::System::IComparable_1<::System::TimeSpan>*() noexcept {
return static_cast<::System::IComparable_1<::System::TimeSpan>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::System::TimeSpan>"
constexpr ::System::IComparable_1<::System::TimeSpan>* UniLabs::Time::UTimeSpan::i___System__IComparable_1___System__TimeSpan_() noexcept {
return static_cast<::System::IComparable_1<::System::TimeSpan>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UniLabs::Time::UTimeSpan::UTimeSpan()   {
}
