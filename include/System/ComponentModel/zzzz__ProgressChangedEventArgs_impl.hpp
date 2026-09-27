#pragma once
// IWYU pragma private; include "System/ComponentModel/ProgressChangedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ProgressChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ProgressChangedEventArgs::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::ProgressChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xad75ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProgressChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProgressChangedEventArgs.get_ProgressPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ProgressChangedEventArgs::*)()>(&::System::ComponentModel::ProgressChangedEventArgs::get_ProgressPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad75c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProgressChangedEventArgs*>(),
                        {"get_ProgressPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProgressChangedEventArgs.get_UserState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ProgressChangedEventArgs::*)()>(&::System::ComponentModel::ProgressChangedEventArgs::get_UserState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad75c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProgressChangedEventArgs*>(),
                        {"get_UserState", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_progressPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressPercentage;
}
constexpr int32_t const& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_progressPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressPercentage;
}
constexpr void System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_set_progressPercentage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressPercentage = value;
}
constexpr ::System::Object*& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_userState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userState;
}
constexpr ::System::Object* const& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_userState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userState;
}
constexpr void System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_set_userState(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userState = value;
}
inline void System::ComponentModel::ProgressChangedEventArgs::_ctor(int32_t  progressPercentage, ::System::Object*  userState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProgressChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progressPercentage, userState);
}
inline int32_t System::ComponentModel::ProgressChangedEventArgs::get_ProgressPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProgressChangedEventArgs*>(),
                        {"get_ProgressPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ProgressChangedEventArgs::get_UserState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ProgressChangedEventArgs*>(),
                        {"get_UserState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::ProgressChangedEventArgs* System::ComponentModel::ProgressChangedEventArgs::New_ctor(int32_t  progressPercentage, ::System::Object*  userState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ProgressChangedEventArgs*>(progressPercentage, userState));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ProgressChangedEventArgs::ProgressChangedEventArgs()   {
}
