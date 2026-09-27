#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerStatisticInt.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_impl.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatisticInt_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_SerializationType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatisticInt::*)(::StringW, int32_t, int32_t, int32_t, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType)>(&::GlobalNamespace::RankedMultiplayerStatisticInt::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x596573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RankedMultiplayerStatistic_SerializationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.op_Implicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::RankedMultiplayerStatisticInt*)>(&::GlobalNamespace::RankedMultiplayerStatisticInt::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x596577c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatisticInt::*)(int32_t)>(&::GlobalNamespace::RankedMultiplayerStatisticInt::Set)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5965820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedMultiplayerStatisticInt::*)()>(&::GlobalNamespace::RankedMultiplayerStatisticInt::Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.TrySetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedMultiplayerStatisticInt::*)(::StringW)>(&::GlobalNamespace::RankedMultiplayerStatisticInt::TrySetValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5965850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.Increment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatisticInt::*)()>(&::GlobalNamespace::RankedMultiplayerStatisticInt::Increment)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59658a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"Increment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.AddTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatisticInt::*)(int32_t)>(&::GlobalNamespace::RankedMultiplayerStatisticInt::AddTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59658d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"AddTo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatisticInt::*)()>(&::GlobalNamespace::RankedMultiplayerStatisticInt::Save)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59658fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatisticInt::*)()>(&::GlobalNamespace::RankedMultiplayerStatisticInt::Load)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5965930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatisticInt.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedMultiplayerStatisticInt::*)()>(&::GlobalNamespace::RankedMultiplayerStatisticInt::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5965978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_get_intValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intValue;
}
constexpr int32_t const& GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_get_intValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intValue;
}
constexpr void GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_set_intValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intValue = value;
}
constexpr int32_t& GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_get_minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr int32_t const& GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_get_minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr void GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_set_minValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minValue = value;
}
constexpr int32_t& GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_get_maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr int32_t const& GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_get_maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr void GlobalNamespace::RankedMultiplayerStatisticInt::__cordl_internal_set_maxValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxValue = value;
}
inline void GlobalNamespace::RankedMultiplayerStatisticInt::_ctor(::StringW  n, int32_t  val, int32_t  min, int32_t  max, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RankedMultiplayerStatistic_SerializationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, val, min, max, s);
}
inline int32_t GlobalNamespace::RankedMultiplayerStatisticInt::op_Implicit_int32_t(::GlobalNamespace::RankedMultiplayerStatisticInt*  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stat);
}
inline void GlobalNamespace::RankedMultiplayerStatisticInt::Set(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline int32_t GlobalNamespace::RankedMultiplayerStatisticInt::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::RankedMultiplayerStatisticInt::TrySetValue(::StringW  valAsString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, valAsString);
}
inline void GlobalNamespace::RankedMultiplayerStatisticInt::Increment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"Increment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerStatisticInt::AddTo(int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(),
                        {"AddTo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
inline void GlobalNamespace::RankedMultiplayerStatisticInt::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerStatisticInt::Load()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RankedMultiplayerStatisticInt::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatisticInt*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedMultiplayerStatisticInt* GlobalNamespace::RankedMultiplayerStatisticInt::New_ctor(::StringW  n, int32_t  val, int32_t  min, int32_t  max, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedMultiplayerStatisticInt*>(n, val, min, max, s));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt::RankedMultiplayerStatisticInt()   {
}
