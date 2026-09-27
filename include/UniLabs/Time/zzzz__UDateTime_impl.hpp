#pragma once
// IWYU pragma private; include "UniLabs/Time/UDateTime.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UniLabs/Time/zzzz__UDateTime_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UniLabs::Time::UDateTime.get_DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::UniLabs::Time::UDateTime::*)()>(&::UniLabs::Time::UDateTime::get_DateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6da10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"get_DateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.set_DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UDateTime::*)(::System::DateTime)>(&::UniLabs::Time::UDateTime::set_DateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6da18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"set_DateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UDateTime::*)()>(&::UniLabs::Time::UDateTime::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6da20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UDateTime::*)(::System::DateTime)>(&::UniLabs::Time::UDateTime::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6da8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.op_Implicit___System__DateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::UniLabs::Time::UDateTime*)>(&::UniLabs::Time::UDateTime::op_Implicit___System__DateTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6dab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UniLabs::Time::UDateTime*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.op_Implicit___UniLabs__Time__UDateTime_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UniLabs::Time::UDateTime* (*)(::System::DateTime)>(&::UniLabs::Time::UDateTime::op_Implicit___UniLabs__Time__UDateTime_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b6dac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UniLabs::Time::UDateTime::*)(::System::DateTime)>(&::UniLabs::Time::UDateTime::CompareTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b6db28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UniLabs::Time::UDateTime::*)(::UniLabs::Time::UDateTime*)>(&::UniLabs::Time::UDateTime::CompareTo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b6db9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UniLabs::Time::UDateTime*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UniLabs::Time::UDateTime::*)(::UniLabs::Time::UDateTime*)>(&::UniLabs::Time::UDateTime::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b6dc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"Equals", {}, {::i2c::type_of<::UniLabs::Time::UDateTime*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UniLabs::Time::UDateTime::*)(::System::Object*)>(&::UniLabs::Time::UDateTime::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b6dcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                    {::i2c::class_of<::UniLabs::Time::UDateTime*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UniLabs::Time::UDateTime::*)()>(&::UniLabs::Time::UDateTime::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b6ddb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                    {::i2c::class_of<::UniLabs::Time::UDateTime*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UniLabs::Time::UDateTime::*)()>(&::UniLabs::Time::UDateTime::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b6de24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                    {::i2c::class_of<::UniLabs::Time::UDateTime*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UDateTime::*)()>(&::UniLabs::Time::UDateTime::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b6dec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UDateTime::*)()>(&::UniLabs::Time::UDateTime::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b6dfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.OnSerializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UDateTime::*)(::System::Runtime::Serialization::StreamingContext)>(&::UniLabs::Time::UDateTime::OnSerializing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6e06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnSerializing", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::UDateTime.OnDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::UDateTime::*)(::System::Runtime::Serialization::StreamingContext)>(&::UniLabs::Time::UDateTime::OnDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6e070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnDeserialized", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& UniLabs::Time::UDateTime::__cordl_internal_get__DateTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateTime_k__BackingField;
}
constexpr ::System::DateTime const& UniLabs::Time::UDateTime::__cordl_internal_get__DateTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateTime_k__BackingField;
}
constexpr void UniLabs::Time::UDateTime::__cordl_internal_set__DateTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateTime_k__BackingField = value;
}
constexpr ::StringW& UniLabs::Time::UDateTime::__cordl_internal_get__DateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateTime;
}
constexpr ::StringW const& UniLabs::Time::UDateTime::__cordl_internal_get__DateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateTime;
}
constexpr void UniLabs::Time::UDateTime::__cordl_internal_set__DateTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateTime = value;
}
inline ::System::DateTime UniLabs::Time::UDateTime::get_DateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"get_DateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void UniLabs::Time::UDateTime::set_DateTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"set_DateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UniLabs::Time::UDateTime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UDateTime::_ctor(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dateTime);
}
inline ::System::DateTime UniLabs::Time::UDateTime::op_Implicit___System__DateTime(::UniLabs::Time::UDateTime*  udt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UniLabs::Time::UDateTime*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, udt);
}
inline ::UniLabs::Time::UDateTime* UniLabs::Time::UDateTime::op_Implicit___UniLabs__Time__UDateTime_(::System::DateTime  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UniLabs::Time::UDateTime*>(nullptr, ___internal_method, dt);
}
inline int32_t UniLabs::Time::UDateTime::CompareTo(::System::DateTime  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline int32_t UniLabs::Time::UDateTime::CompareTo(::UniLabs::Time::UDateTime*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UniLabs::Time::UDateTime*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline bool UniLabs::Time::UDateTime::Equals(::UniLabs::Time::UDateTime*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"Equals", {}, {::i2c::type_of<::UniLabs::Time::UDateTime*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UniLabs::Time::UDateTime::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::UDateTime*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UniLabs::Time::UDateTime::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::UDateTime*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UniLabs::Time::UDateTime::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::UDateTime*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UniLabs::Time::UDateTime::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UDateTime::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UniLabs::Time::UDateTime::OnSerializing(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnSerializing", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UniLabs::Time::UDateTime::OnDeserialized(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::UDateTime*>(),
                        {"OnDeserialized", {}, {::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
/// @brief [JsonConstructor]
inline ::UniLabs::Time::UDateTime* UniLabs::Time::UDateTime::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UDateTime*>());
}
inline ::UniLabs::Time::UDateTime* UniLabs::Time::UDateTime::New_ctor(::System::DateTime  dateTime)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::UDateTime*>(dateTime));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UniLabs::Time::UDateTime::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UniLabs::Time::UDateTime::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::UniLabs::Time::UDateTime*>"
constexpr  UniLabs::Time::UDateTime::operator ::System::IComparable_1<::UniLabs::Time::UDateTime*>*() noexcept {
return static_cast<::System::IComparable_1<::UniLabs::Time::UDateTime*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UniLabs::Time::UDateTime*>"
constexpr ::System::IComparable_1<::UniLabs::Time::UDateTime*>* UniLabs::Time::UDateTime::i___System__IComparable_1___UniLabs__Time__UDateTime__() noexcept {
return static_cast<::System::IComparable_1<::UniLabs::Time::UDateTime*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::System::DateTime>"
constexpr  UniLabs::Time::UDateTime::operator ::System::IComparable_1<::System::DateTime>*() noexcept {
return static_cast<::System::IComparable_1<::System::DateTime>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::System::DateTime>"
constexpr ::System::IComparable_1<::System::DateTime>* UniLabs::Time::UDateTime::i___System__IComparable_1___System__DateTime_() noexcept {
return static_cast<::System::IComparable_1<::System::DateTime>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UniLabs::Time::UDateTime::UDateTime()   {
}
