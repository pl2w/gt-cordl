#pragma once
// IWYU pragma private; include "Modio/API/Interfaces/IModioAPIInterface.hpp"
#include "Modio/API/Interfaces/zzzz__IModioAPIInterface_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.SetBasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW)>(&::Modio::API::Interfaces::IModioAPIInterface::SetBasePath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.SetDefaultHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW, ::StringW)>(&::Modio::API::Interfaces::IModioAPIInterface::SetDefaultHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.AddDefaultPathParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW, ::StringW)>(&::Modio::API::Interfaces::IModioAPIInterface::AddDefaultPathParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.RemoveDefaultPathParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW)>(&::Modio::API::Interfaces::IModioAPIInterface::RemoveDefaultPathParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.RemoveDefaultHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW)>(&::Modio::API::Interfaces::IModioAPIInterface::RemoveDefaultHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.AddDefaultParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW)>(&::Modio::API::Interfaces::IModioAPIInterface::AddDefaultParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.RemoveDefaultParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW)>(&::Modio::API::Interfaces::IModioAPIInterface::RemoveDefaultParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.ResetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::Interfaces::IModioAPIInterface::*)()>(&::Modio::API::Interfaces::IModioAPIInterface::ResetConfiguration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.DownloadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* (::Modio::API::Interfaces::IModioAPIInterface::*)(::StringW, ::System::Threading::CancellationToken)>(&::Modio::API::Interfaces::IModioAPIInterface::DownloadFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::Interfaces::IModioAPIInterface.GetJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* (::Modio::API::Interfaces::IModioAPIInterface::*)(::Modio::API::ModioAPIRequest*)>(&::Modio::API::Interfaces::IModioAPIInterface::GetJson)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(),
                    {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void Modio::API::Interfaces::IModioAPIInterface::SetBasePath(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::API::Interfaces::IModioAPIInterface::SetDefaultHeader(::StringW  name, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void Modio::API::Interfaces::IModioAPIInterface::AddDefaultPathParameter(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void Modio::API::Interfaces::IModioAPIInterface::RemoveDefaultPathParameter(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Modio::API::Interfaces::IModioAPIInterface::RemoveDefaultHeader(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Modio::API::Interfaces::IModioAPIInterface::AddDefaultParameter(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::API::Interfaces::IModioAPIInterface::RemoveDefaultParameter(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::API::Interfaces::IModioAPIInterface::ResetConfiguration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* Modio::API::Interfaces::IModioAPIInterface::DownloadFile(::StringW  url, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>*>(this, ___internal_method, url, token);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>* Modio::API::Interfaces::IModioAPIInterface::GetJson(::Modio::API::ModioAPIRequest*  request)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 9}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* Modio::API::Interfaces::IModioAPIInterface::GetJson(::Modio::API::ModioAPIRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::API::Interfaces::IModioAPIInterface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>*>(this, ___internal_method, request);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::API::Interfaces::IModioAPIInterface::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::API::Interfaces::IModioAPIInterface::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
