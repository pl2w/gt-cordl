#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequestOptions.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__INLPRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__ITranscriptionRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestOptions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.get_RequestId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::get_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_RequestId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.set_RequestId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::set_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_RequestId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.get_ClientUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::get_ClientUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_ClientUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.set_ClientUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::set_ClientUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_ClientUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.get_OperationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::get_OperationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_OperationId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.set_OperationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::set_OperationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_OperationId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.get_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::get_TimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.set_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(int32_t)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::set_TimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_TimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.get_QueryParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::get_QueryParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_QueryParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.set_QueryParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::set_QueryParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_QueryParams", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.get_InputType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLPRequestInputType (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::get_InputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_InputType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.set_InputType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::Meta::Voice::NLPRequestInputType)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::set_InputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_InputType", {}, {::i2c::type_of<::Meta::Voice::NLPRequestInputType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::StringW)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::set_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9e91e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e920e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestOptions::*)(::StringW, ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e920fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestOptions.ConvertQueryParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (*)(::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>)>(&::Meta::WitAi::Requests::VoiceServiceRequestOptions::ConvertQueryParams)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e91fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"ConvertQueryParams", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__RequestId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestId_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__RequestId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestId_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__RequestId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequestId_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__ClientUserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientUserId_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__ClientUserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientUserId_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__ClientUserId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClientUserId_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__OperationId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OperationId_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__OperationId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OperationId_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__OperationId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OperationId_k__BackingField = value;
}
constexpr int32_t& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__TimeoutMs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeoutMs_k__BackingField;
}
constexpr int32_t const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__TimeoutMs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeoutMs_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__TimeoutMs_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeoutMs_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__QueryParams_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryParams_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__QueryParams_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryParams_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__QueryParams_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryParams_k__BackingField = value;
}
constexpr ::Meta::Voice::NLPRequestInputType& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__InputType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputType_k__BackingField;
}
constexpr ::Meta::Voice::NLPRequestInputType const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__InputType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputType_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__InputType_k__BackingField(::Meta::Voice::NLPRequestInputType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputType_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__Text_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__Text_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__Text_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Text_k__BackingField = value;
}
constexpr float_t& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__AudioThreshold_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioThreshold_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_get__AudioThreshold_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioThreshold_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions::__cordl_internal_set__AudioThreshold_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioThreshold_k__BackingField = value;
}
inline ::StringW Meta::WitAi::Requests::VoiceServiceRequestOptions::get_RequestId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_RequestId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::set_RequestId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_RequestId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::VoiceServiceRequestOptions::get_ClientUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_ClientUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::set_ClientUserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_ClientUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::VoiceServiceRequestOptions::get_OperationId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_OperationId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::set_OperationId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_OperationId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::WitAi::Requests::VoiceServiceRequestOptions::get_TimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::set_TimeoutMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_TimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Requests::VoiceServiceRequestOptions::get_QueryParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_QueryParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::set_QueryParams(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_QueryParams", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::NLPRequestInputType Meta::WitAi::Requests::VoiceServiceRequestOptions::get_InputType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_InputType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLPRequestInputType>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::set_InputType(::Meta::Voice::NLPRequestInputType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_InputType", {}, {::i2c::type_of<::Meta::Voice::NLPRequestInputType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::VoiceServiceRequestOptions::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::_ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRequestId, newClientUserId, newOperationId, newParams);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newParams);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestOptions::_ctor(::StringW  newRequestId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRequestId, newParams);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Requests::VoiceServiceRequestOptions::ConvertQueryParams(::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(),
                        {"ConvertQueryParams", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(nullptr, ___internal_method, newParams);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequestOptions* Meta::WitAi::Requests::VoiceServiceRequestOptions::New_ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(newRequestId, newClientUserId, newOperationId, newParams));
}
inline ::Meta::WitAi::Requests::VoiceServiceRequestOptions* Meta::WitAi::Requests::VoiceServiceRequestOptions::New_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(newParams));
}
inline ::Meta::WitAi::Requests::VoiceServiceRequestOptions* Meta::WitAi::Requests::VoiceServiceRequestOptions::New_ctor(::StringW  newRequestId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequestOptions*>(newRequestId, newParams));
}
/// @brief Convert operator to "::Meta::Voice::INLPRequestOptions"
constexpr  Meta::WitAi::Requests::VoiceServiceRequestOptions::operator ::Meta::Voice::INLPRequestOptions*() noexcept {
return static_cast<::Meta::Voice::INLPRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::INLPRequestOptions"
constexpr ::Meta::Voice::INLPRequestOptions* Meta::WitAi::Requests::VoiceServiceRequestOptions::i___Meta__Voice__INLPRequestOptions() noexcept {
return static_cast<::Meta::Voice::INLPRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr  Meta::WitAi::Requests::VoiceServiceRequestOptions::operator ::Meta::Voice::ITranscriptionRequestOptions*() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr ::Meta::Voice::ITranscriptionRequestOptions* Meta::WitAi::Requests::VoiceServiceRequestOptions::i___Meta__Voice__ITranscriptionRequestOptions() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::IVoiceRequestOptions"
constexpr  Meta::WitAi::Requests::VoiceServiceRequestOptions::operator ::Meta::Voice::IVoiceRequestOptions*() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::IVoiceRequestOptions"
constexpr ::Meta::Voice::IVoiceRequestOptions* Meta::WitAi::Requests::VoiceServiceRequestOptions::i___Meta__Voice__IVoiceRequestOptions() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestOptions*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestOptions::VoiceServiceRequestOptions()   {
}
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam::__cordl_internal_set_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::StringW const& Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam::__cordl_internal_set_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam::VoiceServiceRequestOptions_QueryParam()   {
}
