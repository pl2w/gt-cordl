#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceData.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__Annotations_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__BacktraceAttributes_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__ThreadData_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__ThreadInformation_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceSourceCode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.get_Uuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Backtrace::Unity::Model::BacktraceData::*)()>(&::Backtrace::Unity::Model::BacktraceData::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f108fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_Uuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.set_Uuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceData::*)(::System::Guid)>(&::Backtrace::Unity::Model::BacktraceData::set_Uuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f10908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"set_Uuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.get_UuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceData::*)()>(&::Backtrace::Unity::Model::BacktraceData::get_UuidString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f0b4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_UuidString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.get_Timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Model::BacktraceData::*)()>(&::Backtrace::Unity::Model::BacktraceData::get_Timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f10910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_Timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.set_Timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceData::*)(int64_t)>(&::Backtrace::Unity::Model::BacktraceData::set_Timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f10918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"set_Timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.get_Report
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceReport* (::Backtrace::Unity::Model::BacktraceData::*)()>(&::Backtrace::Unity::Model::BacktraceData::get_Report)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f10920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_Report", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.set_Report
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceData::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&::Backtrace::Unity::Model::BacktraceData::set_Report)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f10928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"set_Report", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceData::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, int32_t)>(&::Backtrace::Unity::Model::BacktraceData::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5f10930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceData::*)()>(&::Backtrace::Unity::Model::BacktraceData::ToJson)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5f02788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.SetThreadInformations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceData::*)()>(&::Backtrace::Unity::Model::BacktraceData::SetThreadInformations)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f10bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"SetThreadInformations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceData.SetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceData::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, int32_t)>(&::Backtrace::Unity::Model::BacktraceData::SetAttributes)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f10ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__Uuid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uuid_k__BackingField;
}
constexpr ::System::Guid const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__Uuid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uuid_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set__Uuid_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Uuid_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__uuidString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uuidString;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__uuidString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uuidString;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set__uuidString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uuidString = value;
}
constexpr int64_t& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__Timestamp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timestamp_k__BackingField;
}
constexpr int64_t const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__Timestamp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timestamp_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set__Timestamp_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Timestamp_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_LangVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LangVersion;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_LangVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LangVersion;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_LangVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LangVersion = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_ThreadInformations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadInformations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>* const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_ThreadInformations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadInformations;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_ThreadInformations(::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadInformations = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_MainThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainThread;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_MainThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainThread;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_MainThread(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MainThread = value;
}
constexpr ::ArrayW<::StringW>& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Classifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Classifier;
}
constexpr ::ArrayW<::StringW> const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Classifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Classifier;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_Classifier(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Classifier = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Symbolication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Symbolication;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Symbolication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Symbolication;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_Symbolication(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Symbolication = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceSourceCode*& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_SourceCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceCode;
}
constexpr ::Backtrace::Unity::Model::BacktraceSourceCode* const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_SourceCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceCode;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_SourceCode(::Backtrace::Unity::Model::BacktraceSourceCode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SourceCode = value;
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Attachments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attachments;
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>* const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Attachments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attachments;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_Attachments(::System::Collections::Generic::ICollection_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attachments = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceReport*& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__Report_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Report_k__BackingField;
}
constexpr ::Backtrace::Unity::Model::BacktraceReport* const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get__Report_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Report_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set__Report_k__BackingField(::Backtrace::Unity::Model::BacktraceReport*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Report_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::JsonData::BacktraceAttributes*& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr ::Backtrace::Unity::Model::JsonData::BacktraceAttributes* const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_Attributes(::Backtrace::Unity::Model::JsonData::BacktraceAttributes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attributes = value;
}
constexpr ::Backtrace::Unity::Model::JsonData::Annotations*& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Annotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Annotation;
}
constexpr ::Backtrace::Unity::Model::JsonData::Annotations* const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Annotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Annotation;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_Annotation(::Backtrace::Unity::Model::JsonData::Annotations*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Annotation = value;
}
constexpr ::Backtrace::Unity::Model::JsonData::ThreadData*& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_ThreadData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadData;
}
constexpr ::Backtrace::Unity::Model::JsonData::ThreadData* const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_ThreadData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadData;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_ThreadData(::Backtrace::Unity::Model::JsonData::ThreadData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadData = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Deduplication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deduplication;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceData::__cordl_internal_get_Deduplication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Deduplication;
}
constexpr void Backtrace::Unity::Model::BacktraceData::__cordl_internal_set_Deduplication(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Deduplication = value;
}
inline ::System::Guid Backtrace::Unity::Model::BacktraceData::get_Uuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_Uuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceData::set_Uuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"set_Uuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::BacktraceData::get_UuidString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_UuidString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t Backtrace::Unity::Model::BacktraceData::get_Timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_Timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceData::set_Timestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"set_Timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::BacktraceReport* Backtrace::Unity::Model::BacktraceData::get_Report()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"get_Report", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceReport*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceData::set_Report(::Backtrace::Unity::Model::BacktraceReport*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"set_Report", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::BacktraceData::_ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes, int32_t  gameObjectDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report, clientAttributes, gameObjectDepth);
}
inline ::StringW Backtrace::Unity::Model::BacktraceData::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceData::SetThreadInformations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"SetThreadInformations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceData::SetAttributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes, int32_t  gameObjectDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceData*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientAttributes, gameObjectDepth);
}
inline ::Backtrace::Unity::Model::BacktraceData* Backtrace::Unity::Model::BacktraceData::New_ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes, int32_t  gameObjectDepth)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceData*>(report, clientAttributes, gameObjectDepth));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceData::BacktraceData()   {
}
