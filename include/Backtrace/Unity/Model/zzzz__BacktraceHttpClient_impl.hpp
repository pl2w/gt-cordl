#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceHttpClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceHttpClient_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceHttpClient_def.hpp"
#include "Backtrace/Unity/Model/zzzz__IBacktraceHttpClient_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.get_IgnoreSslValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceHttpClient::*)()>(&::Backtrace::Unity::Model::BacktraceHttpClient::get_IgnoreSslValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1102c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"get_IgnoreSslValidation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.set_IgnoreSslValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceHttpClient::*)(bool)>(&::Backtrace::Unity::Model::BacktraceHttpClient::set_IgnoreSslValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"set_IgnoreSslValidation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::Backtrace::Unity::Json::BacktraceJObject*, ::System::Action_3<int64_t,bool,::StringW>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f1103c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Json::BacktraceJObject*>(), ::i2c::type_of<::System::Action_3<int64_t,bool,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f074c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::ArrayW<uint8_t>, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f07cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f11434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.CreateJsonFormData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::ArrayW<uint8_t>, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::CreateJsonFormData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5f11284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"CreateJsonFormData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.CreateMinidumpFormData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::ArrayW<uint8_t>, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::CreateMinidumpFormData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f114b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"CreateMinidumpFormData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.AddAttributesToFormData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::AddAttributesToFormData)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5f11618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"AddAttributesToFormData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient.AddAttachmentToFormData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceHttpClient::*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Backtrace::Unity::Model::BacktraceHttpClient::AddAttachmentToFormData)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x5f1199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"AddAttachmentToFormData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceHttpClient::*)()>(&::Backtrace::Unity::Model::BacktraceHttpClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Backtrace::Unity::Model::BacktraceHttpClient::__cordl_internal_get__IgnoreSslValidation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IgnoreSslValidation_k__BackingField;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceHttpClient::__cordl_internal_get__IgnoreSslValidation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IgnoreSslValidation_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceHttpClient::__cordl_internal_set__IgnoreSslValidation_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IgnoreSslValidation_k__BackingField = value;
}
inline bool Backtrace::Unity::Model::BacktraceHttpClient::get_IgnoreSslValidation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"get_IgnoreSslValidation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceHttpClient::set_IgnoreSslValidation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"set_IgnoreSslValidation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::BacktraceHttpClient::Post(::StringW  submissionUrl, ::Backtrace::Unity::Json::BacktraceJObject*  jObject, ::System::Action_3<int64_t,bool,::StringW>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Json::BacktraceJObject*>(), ::i2c::type_of<::System::Action_3<int64_t,bool,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submissionUrl, jObject, onComplete);
}
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Model::BacktraceHttpClient::Post(::StringW  submissionUrl, ::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, submissionUrl, json, attachments, attributes);
}
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Model::BacktraceHttpClient::Post(::StringW  submissionUrl, ::ArrayW<uint8_t>  minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, submissionUrl, minidump, attachments, attributes);
}
inline ::UnityEngine::Networking::UnityWebRequest* Backtrace::Unity::Model::BacktraceHttpClient::Post(::StringW  submissionUrl, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  formData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"Post", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, submissionUrl, formData);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* Backtrace::Unity::Model::BacktraceHttpClient::CreateJsonFormData(::ArrayW<uint8_t>  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"CreateJsonFormData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(this, ___internal_method, json, attachments, attributes);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* Backtrace::Unity::Model::BacktraceHttpClient::CreateMinidumpFormData(::ArrayW<uint8_t>  minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"CreateMinidumpFormData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(this, ___internal_method, minidump, attachments, attributes);
}
inline void Backtrace::Unity::Model::BacktraceHttpClient::AddAttributesToFormData(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  formData, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"AddAttributesToFormData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formData, attributes);
}
inline void Backtrace::Unity::Model::BacktraceHttpClient::AddAttachmentToFormData(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  formData, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {"AddAttachmentToFormData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formData, attachments);
}
inline void Backtrace::Unity::Model::BacktraceHttpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceHttpClient* Backtrace::Unity::Model::BacktraceHttpClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceHttpClient*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::IBacktraceHttpClient"
constexpr  Backtrace::Unity::Model::BacktraceHttpClient::operator ::Backtrace::Unity::Model::IBacktraceHttpClient*() noexcept {
return static_cast<::Backtrace::Unity::Model::IBacktraceHttpClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::IBacktraceHttpClient"
constexpr ::Backtrace::Unity::Model::IBacktraceHttpClient* Backtrace::Unity::Model::BacktraceHttpClient::i___Backtrace__Unity__Model__IBacktraceHttpClient() noexcept {
return static_cast<::Backtrace::Unity::Model::IBacktraceHttpClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceHttpClient::BacktraceHttpClient()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::*)()>(&::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1127c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0._Post_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::*)(::UnityEngine::AsyncOperation*)>(&::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::_Post_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f11eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0*>(),
                        {"<Post>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::System::Action_3<int64_t,bool,::StringW>*& Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action_3<int64_t,bool,::StringW>* const& Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::__cordl_internal_set_onComplete(::System::Action_3<int64_t,bool,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onComplete = value;
}
inline void Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::_Post_b__0(::UnityEngine::AsyncOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0*>(),
                        {"<Post>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline ::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0* Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0::BacktraceHttpClient___c__DisplayClass6_0()   {
}
