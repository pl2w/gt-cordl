#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequestResults.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestResults_def.hpp"
#include "Meta/Voice/zzzz__INLPRequestResults_1_def.hpp"
#include "Meta/Voice/zzzz__ITranscriptionRequestResults_def.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestResults_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_StatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.set_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(int32_t)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9211c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.get_Transcription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::get_Transcription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9212c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_Transcription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.set_Transcription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::set_Transcription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_Transcription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.get_FinalTranscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::get_FinalTranscriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9213c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_FinalTranscriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.set_FinalTranscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(::ArrayW<::StringW>)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::set_FinalTranscriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_FinalTranscriptions", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.get_ResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::get_ResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9214c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_ResponseData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.set_ResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::set_ResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_ResponseData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e9215c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.SetCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::SetCancel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e9216c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetCancel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.SetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(int32_t, ::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::SetError)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e9217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.SetTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(::StringW, bool)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::SetTranscription)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9e92190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetTranscription", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestResults.SetResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestResults::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::VoiceServiceRequestResults::SetResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e92300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetResponseData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__StatusCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr int32_t const& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__StatusCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_set__StatusCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StatusCode_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__Message_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__Message_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_set__Message_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Message_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__Transcription_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transcription_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__Transcription_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transcription_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_set__Transcription_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Transcription_k__BackingField = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__FinalTranscriptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FinalTranscriptions_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__FinalTranscriptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FinalTranscriptions_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_set__FinalTranscriptions_k__BackingField(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FinalTranscriptions_k__BackingField = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__ResponseData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseData_k__BackingField;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_get__ResponseData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseData_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestResults::__cordl_internal_set__ResponseData_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResponseData_k__BackingField = value;
}
inline int32_t Meta::WitAi::Requests::VoiceServiceRequestResults::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_StatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::set_StatusCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::VoiceServiceRequestResults::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::VoiceServiceRequestResults::get_Transcription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_Transcription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::set_Transcription(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_Transcription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Meta::WitAi::Requests::VoiceServiceRequestResults::get_FinalTranscriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_FinalTranscriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::set_FinalTranscriptions(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_FinalTranscriptions", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Requests::VoiceServiceRequestResults::get_ResponseData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"get_ResponseData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::set_ResponseData(::Meta::WitAi::Json::WitResponseNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"set_ResponseData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::SetCancel(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetCancel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::SetError(int32_t  errorStatusCode, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorStatusCode, error);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::SetTranscription(::StringW  transcription, bool  full)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetTranscription", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription, full);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestResults::SetResponseData(::Meta::WitAi::Json::WitResponseNode*  responseData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestResults*>(),
                        {"SetResponseData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseData);
}
/// @brief [Preserve]
inline ::Meta::WitAi::Requests::VoiceServiceRequestResults* Meta::WitAi::Requests::VoiceServiceRequestResults::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequestResults*>());
}
/// @brief Convert operator to "::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr  Meta::WitAi::Requests::VoiceServiceRequestResults::operator ::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept {
return static_cast<::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::Requests::VoiceServiceRequestResults::i___Meta__Voice__INLPRequestResults_1___Meta__WitAi__Json__WitResponseNode__() noexcept {
return static_cast<::Meta::Voice::INLPRequestResults_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestResults"
constexpr  Meta::WitAi::Requests::VoiceServiceRequestResults::operator ::Meta::Voice::ITranscriptionRequestResults*() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestResults*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::ITranscriptionRequestResults"
constexpr ::Meta::Voice::ITranscriptionRequestResults* Meta::WitAi::Requests::VoiceServiceRequestResults::i___Meta__Voice__ITranscriptionRequestResults() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestResults*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::IVoiceRequestResults"
constexpr  Meta::WitAi::Requests::VoiceServiceRequestResults::operator ::Meta::Voice::IVoiceRequestResults*() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestResults*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::IVoiceRequestResults"
constexpr ::Meta::Voice::IVoiceRequestResults* Meta::WitAi::Requests::VoiceServiceRequestResults::i___Meta__Voice__IVoiceRequestResults() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestResults*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestResults::VoiceServiceRequestResults()   {
}
