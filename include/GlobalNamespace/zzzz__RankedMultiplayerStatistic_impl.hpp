#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerStatistic.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_SerializationType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_SerializationType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedMultiplayerStatistic::*)()>(&::GlobalNamespace::RankedMultiplayerStatistic::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x596553c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)()>(&::GlobalNamespace::RankedMultiplayerStatistic::Load)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)()>(&::GlobalNamespace::RankedMultiplayerStatistic::Save)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.TrySetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedMultiplayerStatistic::*)(::StringW)>(&::GlobalNamespace::RankedMultiplayerStatistic::TrySetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.WriteToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedMultiplayerStatistic::*)()>(&::GlobalNamespace::RankedMultiplayerStatistic::WriteToJson)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5965554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedMultiplayerStatistic::*)()>(&::GlobalNamespace::RankedMultiplayerStatistic::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59655bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.set_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)(bool)>(&::GlobalNamespace::RankedMultiplayerStatistic::set_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59655c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"set_IsValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)(::StringW, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType)>(&::GlobalNamespace::RankedMultiplayerStatistic::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59655cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RankedMultiplayerStatistic_SerializationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.HandleUserDataSetSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)(::StringW)>(&::GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataSetSuccess)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5965624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.HandleUserDataGetSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)(::StringW, ::StringW)>(&::GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataGetSuccess)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5965654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.HandleUserDataGetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)(::StringW)>(&::GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataGetFailure)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59656c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"HandleUserDataGetFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerStatistic.HandleUserDataSetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerStatistic::*)(::StringW)>(&::GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataSetFailure)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5965700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"HandleUserDataSetFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType& GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_get_serializationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializationType;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType const& GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_get_serializationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializationType;
}
constexpr void GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_set_serializationType(::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializationType = value;
}
constexpr ::StringW& GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_get__IsValid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_get__IsValid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsValid_k__BackingField;
}
constexpr void GlobalNamespace::RankedMultiplayerStatistic::__cordl_internal_set__IsValid_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsValid_k__BackingField = value;
}
inline ::StringW GlobalNamespace::RankedMultiplayerStatistic::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::Load()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RankedMultiplayerStatistic::TrySetValue(::StringW  valAsString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, valAsString);
}
inline ::StringW GlobalNamespace::RankedMultiplayerStatistic::WriteToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::RankedMultiplayerStatistic::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::set_IsValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"set_IsValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::_ctor(::StringW  n, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  sType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::RankedMultiplayerStatistic_SerializationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, sType);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataSetSuccess(::StringW  keyName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataGetSuccess(::StringW  keyName, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName, value);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataGetFailure(::StringW  keyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"HandleUserDataGetFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName);
}
inline void GlobalNamespace::RankedMultiplayerStatistic::HandleUserDataSetFailure(::StringW  keyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerStatistic*>(),
                        {"HandleUserDataSetFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName);
}
inline ::GlobalNamespace::RankedMultiplayerStatistic* GlobalNamespace::RankedMultiplayerStatistic::New_ctor(::StringW  n, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  sType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedMultiplayerStatistic*>(n, sType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedMultiplayerStatistic::RankedMultiplayerStatistic()   {
}
