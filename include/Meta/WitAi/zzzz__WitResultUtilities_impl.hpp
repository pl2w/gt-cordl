#pragma once
// IWYU pragma private; include "Meta/WitAi/WitResultUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__WitResultUtilities_def.hpp"
#include "Meta/WitAi/Data/Intents/zzzz__WitIntentData_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseArray_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/zzzz__WitResponseReference_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetStatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetStatusCode)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e7e9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetStatusCode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetError)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e7eaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetError", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetTranscription)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e7eb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.SafeGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::WitResultUtilities::SafeGet)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e7ec74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"SafeGet", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetResponseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetResponseType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e7ed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetResponseType", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetIsTranscriptionFinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetIsTranscriptionFinal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e7ed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetIsTranscriptionFinal", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetHasTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetHasTranscription)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e7ee20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetHasTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseArray* (*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::WitResultUtilities::GetArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e7ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetArray", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetFirstEntityValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW)>(&::Meta::WitAi::WitResultUtilities::GetFirstEntityValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e7ef34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetFirstEntityValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.EntityCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::EntityCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e7effc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"EntityCount", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.AsWitIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Intents::WitIntentData* (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::AsWitIntent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e7f0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"AsWitIntent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetFirstIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetFirstIntent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e7f114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetFirstIntent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetFirstIntentData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Intents::WitIntentData* (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetFirstIntentData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e764d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetFirstIntentData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetIntents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::Data::Intents::WitIntentData*> (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResultUtilities::GetIntents)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e76bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetIntents", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.GetWitResponseReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::WitResponseReference* (*)(::StringW)>(&::Meta::WitAi::WitResultUtilities::GetWitResponseReference)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x9e7f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetWitResponseReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResultUtilities.SplitArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::Meta::WitAi::WitResultUtilities::SplitArrays)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e7f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"SplitArrays", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Meta::WitAi::WitResultUtilities::GetStatusCode(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetStatusCode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, witResponse);
}
inline ::StringW Meta::WitAi::WitResultUtilities::GetError(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetError", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, witResponse);
}
inline ::StringW Meta::WitAi::WitResultUtilities::GetTranscription(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, witResponse);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::WitResultUtilities::SafeGet(::Meta::WitAi::Json::WitResponseNode*  witResponse, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"SafeGet", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, witResponse, key);
}
inline ::StringW Meta::WitAi::WitResultUtilities::GetResponseType(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetResponseType", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, witResponse);
}
inline bool Meta::WitAi::WitResultUtilities::GetIsTranscriptionFinal(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetIsTranscriptionFinal", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, witResponse);
}
inline bool Meta::WitAi::WitResultUtilities::GetHasTranscription(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetHasTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, witResponse);
}
inline ::Meta::WitAi::Json::WitResponseArray* Meta::WitAi::WitResultUtilities::GetArray(::Meta::WitAi::Json::WitResponseNode*  witResponse, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetArray", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseArray*>(nullptr, ___internal_method, witResponse, key);
}
inline ::StringW Meta::WitAi::WitResultUtilities::GetFirstEntityValue(::Meta::WitAi::Json::WitResponseNode*  witResponse, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetFirstEntityValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, witResponse, name);
}
inline int32_t Meta::WitAi::WitResultUtilities::EntityCount(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"EntityCount", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, response);
}
inline ::Meta::WitAi::Data::Intents::WitIntentData* Meta::WitAi::WitResultUtilities::AsWitIntent(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"AsWitIntent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Intents::WitIntentData*>(nullptr, ___internal_method, witResponse);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::WitResultUtilities::GetFirstIntent(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetFirstIntent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, witResponse);
}
inline ::Meta::WitAi::Data::Intents::WitIntentData* Meta::WitAi::WitResultUtilities::GetFirstIntentData(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetFirstIntentData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Intents::WitIntentData*>(nullptr, ___internal_method, witResponse);
}
inline ::ArrayW<::Meta::WitAi::Data::Intents::WitIntentData*> Meta::WitAi::WitResultUtilities::GetIntents(::Meta::WitAi::Json::WitResponseNode*  witResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetIntents", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::Data::Intents::WitIntentData*>>(nullptr, ___internal_method, witResponse);
}
inline ::Meta::WitAi::WitResponseReference* Meta::WitAi::WitResultUtilities::GetWitResponseReference(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"GetWitResponseReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::WitResponseReference*>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> Meta::WitAi::WitResultUtilities::SplitArrays(::StringW  nodeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResultUtilities*>(),
                        {"SplitArrays", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, nodeName);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitResultUtilities::WitResultUtilities()   {
}
