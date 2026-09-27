#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceApi.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceApi_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.get_ServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceApi::get_ServerUrl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(::Backtrace::Unity::Model::BacktraceData*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, int32_t, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.get_OnServerError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::System::Exception*>* (::Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.set_OnServerError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(::System::Action_1<::System::Exception*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.get_OnServerResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* (::Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.set_OnServerResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.get_RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* (::Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceApi::get_RequestHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.set_RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::set_RequestHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.SendMinidump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::SendMinidump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.get_EnablePerformanceStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceApi::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceApi::get_EnablePerformanceStatistics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceApi.set_EnablePerformanceStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceApi::*)(bool)>(&::Backtrace::Unity::Interfaces::IBacktraceApi::set_EnablePerformanceStatistics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 12}
                ));
    return ___internal_method;
  }
};
inline ::StringW Backtrace::Unity::Interfaces::IBacktraceApi::get_ServerUrl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Interfaces::IBacktraceApi::Send(::Backtrace::Unity::Model::BacktraceData*  data, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Interfaces::IBacktraceApi::Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, int32_t  deduplication, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, json, attachments, deduplication, callback);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Interfaces::IBacktraceApi::Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  queryAttributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, json, attachments, queryAttributes, callback);
}
inline ::System::Action_1<::System::Exception*>* Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::System::Exception*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerError(::System::Action_1<::System::Exception*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* Backtrace::Unity::Interfaces::IBacktraceApi::get_OnServerResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceApi::set_OnServerResponse(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* Backtrace::Unity::Interfaces::IBacktraceApi::get_RequestHandler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceApi::set_RequestHandler(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Interfaces::IBacktraceApi::SendMinidump(::StringW  minidumpPath, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  queryAttributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, minidumpPath, attachments, queryAttributes, callback);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceApi::get_EnablePerformanceStatistics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceApi::set_EnablePerformanceStatistics(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
