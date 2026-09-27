#pragma once
// IWYU pragma private; include "System/ComponentModel/DoWorkEventArgs.hpp"
#include "System/ComponentModel/zzzz__CancelEventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__DoWorkEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DoWorkEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DoWorkEventArgs::*)(::System::Object*)>(&::System::ComponentModel::DoWorkEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad71560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoWorkEventArgs.get_Argument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DoWorkEventArgs::*)()>(&::System::ComponentModel::DoWorkEventArgs::get_Argument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad71590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {"get_Argument", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoWorkEventArgs.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DoWorkEventArgs::*)()>(&::System::ComponentModel::DoWorkEventArgs::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad71598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoWorkEventArgs.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DoWorkEventArgs::*)(::System::Object*)>(&::System::ComponentModel::DoWorkEventArgs::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad715a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {"set_Result", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::ComponentModel::DoWorkEventArgs::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Object* const& System::ComponentModel::DoWorkEventArgs::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void System::ComponentModel::DoWorkEventArgs::__cordl_internal_set_result(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::System::Object*& System::ComponentModel::DoWorkEventArgs::__cordl_internal_get_argument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___argument;
}
constexpr ::System::Object* const& System::ComponentModel::DoWorkEventArgs::__cordl_internal_get_argument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___argument;
}
constexpr void System::ComponentModel::DoWorkEventArgs::__cordl_internal_set_argument(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___argument = value;
}
inline void System::ComponentModel::DoWorkEventArgs::_ctor(::System::Object*  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argument);
}
inline ::System::Object* System::ComponentModel::DoWorkEventArgs::get_Argument()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {"get_Argument", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::DoWorkEventArgs::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::ComponentModel::DoWorkEventArgs::set_Result(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DoWorkEventArgs*>(),
                        {"set_Result", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::DoWorkEventArgs* System::ComponentModel::DoWorkEventArgs::New_ctor(::System::Object*  argument)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DoWorkEventArgs*>(argument));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DoWorkEventArgs::DoWorkEventArgs()   {
}
