#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/ThreadData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__ThreadData_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__ThreadInformation_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackFrame_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::ThreadData::*)(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*, bool)>(&::Backtrace::Unity::Model::JsonData::ThreadData::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f1ae8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadData.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::JsonData::ThreadData::*)()>(&::Backtrace::Unity::Model::JsonData::ThreadData::ToJson)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5f1b0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadData*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*& Backtrace::Unity::Model::JsonData::ThreadData::__cordl_internal_get_ThreadInformations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadInformations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>* const& Backtrace::Unity::Model::JsonData::ThreadData::__cordl_internal_get_ThreadInformations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ThreadInformations;
}
constexpr void Backtrace::Unity::Model::JsonData::ThreadData::__cordl_internal_set_ThreadInformations(::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ThreadInformations = value;
}
constexpr ::StringW& Backtrace::Unity::Model::JsonData::ThreadData::__cordl_internal_get_MainThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainThread;
}
constexpr ::StringW const& Backtrace::Unity::Model::JsonData::ThreadData::__cordl_internal_get_MainThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainThread;
}
constexpr void Backtrace::Unity::Model::JsonData::ThreadData::__cordl_internal_set_MainThread(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MainThread = value;
}
inline void Backtrace::Unity::Model::JsonData::ThreadData::_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack, bool  faultingThread)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionStack, faultingThread);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::JsonData::ThreadData::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadData*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::JsonData::ThreadData* Backtrace::Unity::Model::JsonData::ThreadData::New_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack, bool  faultingThread)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::ThreadData*>(exceptionStack, faultingThread));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::JsonData::ThreadData::ThreadData()   {
}
