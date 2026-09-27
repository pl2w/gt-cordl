#pragma once
// IWYU pragma private; include "System/ComponentModel/RunWorkerCompletedEventArgs.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__RunWorkerCompletedEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RunWorkerCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::RunWorkerCompletedEventArgs::*)(::System::Object*, ::System::Exception*, bool)>(&::System::ComponentModel::RunWorkerCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xad8411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunWorkerCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RunWorkerCompletedEventArgs.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::RunWorkerCompletedEventArgs::*)()>(&::System::ComponentModel::RunWorkerCompletedEventArgs::get_Result)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad84158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunWorkerCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::RunWorkerCompletedEventArgs.get_UserState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::RunWorkerCompletedEventArgs::*)()>(&::System::ComponentModel::RunWorkerCompletedEventArgs::get_UserState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad84174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunWorkerCompletedEventArgs*>(),
                        {"get_UserState", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::ComponentModel::RunWorkerCompletedEventArgs::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Object* const& System::ComponentModel::RunWorkerCompletedEventArgs::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void System::ComponentModel::RunWorkerCompletedEventArgs::__cordl_internal_set_result(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void System::ComponentModel::RunWorkerCompletedEventArgs::_ctor(::System::Object*  result, ::System::Exception*  error, bool  cancelled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunWorkerCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, error, cancelled);
}
inline ::System::Object* System::ComponentModel::RunWorkerCompletedEventArgs::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunWorkerCompletedEventArgs*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::RunWorkerCompletedEventArgs::get_UserState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::RunWorkerCompletedEventArgs*>(),
                        {"get_UserState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::RunWorkerCompletedEventArgs* System::ComponentModel::RunWorkerCompletedEventArgs::New_ctor(::System::Object*  result, ::System::Exception*  error, bool  cancelled)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::RunWorkerCompletedEventArgs*>(result, error, cancelled));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RunWorkerCompletedEventArgs::RunWorkerCompletedEventArgs()   {
}
