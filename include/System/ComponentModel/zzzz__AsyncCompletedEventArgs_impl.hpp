#pragma once
// IWYU pragma private; include "System/ComponentModel/AsyncCompletedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(&::System::ComponentModel::AsyncCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad6c4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncCompletedEventArgs::*)(::System::Exception*, bool, ::System::Object*)>(&::System::ComponentModel::AsyncCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad6c4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.get_Cancelled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(&::System::ComponentModel::AsyncCompletedEventArgs::get_Cancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6c598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"get_Cancelled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(&::System::ComponentModel::AsyncCompletedEventArgs::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6c5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.get_UserState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(&::System::ComponentModel::AsyncCompletedEventArgs::get_UserState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6c5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"get_UserState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.RaiseExceptionIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(&::System::ComponentModel::AsyncCompletedEventArgs::RaiseExceptionIfNecessary)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xad6c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"RaiseExceptionIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::System::Exception* const& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_set_error(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
constexpr bool& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_cancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelled;
}
constexpr bool const& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_cancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelled;
}
constexpr void System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_set_cancelled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelled = value;
}
constexpr ::System::Object*& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_userState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userState;
}
constexpr ::System::Object* const& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_userState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userState;
}
constexpr void System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_set_userState(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userState = value;
}
inline void System::ComponentModel::AsyncCompletedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::AsyncCompletedEventArgs::_ctor(::System::Exception*  error, bool  cancelled, ::System::Object*  userState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, cancelled, userState);
}
inline bool System::ComponentModel::AsyncCompletedEventArgs::get_Cancelled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"get_Cancelled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Exception* System::ComponentModel::AsyncCompletedEventArgs::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AsyncCompletedEventArgs::get_UserState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"get_UserState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::ComponentModel::AsyncCompletedEventArgs::RaiseExceptionIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncCompletedEventArgs*>(),
                        {"RaiseExceptionIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
inline ::System::ComponentModel::AsyncCompletedEventArgs* System::ComponentModel::AsyncCompletedEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AsyncCompletedEventArgs*>());
}
inline ::System::ComponentModel::AsyncCompletedEventArgs* System::ComponentModel::AsyncCompletedEventArgs::New_ctor(::System::Exception*  error, bool  cancelled, ::System::Object*  userState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AsyncCompletedEventArgs*>(error, cancelled, userState));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AsyncCompletedEventArgs::AsyncCompletedEventArgs()   {
}
