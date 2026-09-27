#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/IBacktraceHttpClient.hpp"
#include "Backtrace/Unity/Model/zzzz__IBacktraceHttpClient_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::IBacktraceHttpClient.get_IgnoreSslValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::IBacktraceHttpClient::*)()>(&::Backtrace::Unity::Model::IBacktraceHttpClient::get_IgnoreSslValidation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::IBacktraceHttpClient.set_IgnoreSslValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::IBacktraceHttpClient::*)(bool)>(&::Backtrace::Unity::Model::IBacktraceHttpClient::set_IgnoreSslValidation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::IBacktraceHttpClient.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::IBacktraceHttpClient::*)(::StringW, ::Backtrace::Unity::Json::BacktraceJObject*, ::System::Action_3<int64_t,bool,::StringW>*)>(&::Backtrace::Unity::Model::IBacktraceHttpClient::Post)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::IBacktraceHttpClient.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Backtrace::Unity::Model::IBacktraceHttpClient::*)(::StringW, ::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::IBacktraceHttpClient::Post)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::IBacktraceHttpClient.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Backtrace::Unity::Model::IBacktraceHttpClient::*)(::StringW, ::ArrayW<uint8_t>, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::IBacktraceHttpClient::Post)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool Backtrace::Unity::Model::IBacktraceHttpClient::get_IgnoreSslValidation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::IBacktraceHttpClient::set_IgnoreSslValidation(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::IBacktraceHttpClient::Post(::StringW  submissionUrl, ::Backtrace::Unity::Json::BacktraceJObject*  jObject, ::System::Action_3<int64_t,bool,::StringW>*  onComplete)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submissionUrl, jObject, onComplete);
}
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Model::IBacktraceHttpClient::Post(::StringW  submissionUrl, ::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, submissionUrl, json, attachments, attributes);
}
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Model::IBacktraceHttpClient::Post(::StringW  submissionUrl, ::ArrayW<uint8_t>  minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, submissionUrl, minidump, attachments, attributes);
}
