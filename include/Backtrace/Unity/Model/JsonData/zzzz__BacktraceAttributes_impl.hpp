#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/BacktraceAttributes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__BacktraceAttributes_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::BacktraceAttributes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::BacktraceAttributes::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::JsonData::BacktraceAttributes::_ctor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5f1a754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::BacktraceAttributes*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::BacktraceAttributes.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::JsonData::BacktraceAttributes::*)()>(&::Backtrace::Unity::Model::JsonData::BacktraceAttributes::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f1a960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::BacktraceAttributes*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Backtrace::Unity::Model::JsonData::BacktraceAttributes::__cordl_internal_get_Attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Model::JsonData::BacktraceAttributes::__cordl_internal_get_Attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr void Backtrace::Unity::Model::JsonData::BacktraceAttributes::__cordl_internal_set_Attributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attributes = value;
}
inline void Backtrace::Unity::Model::JsonData::BacktraceAttributes::_ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::BacktraceAttributes*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report, clientAttributes);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::JsonData::BacktraceAttributes::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::BacktraceAttributes*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::JsonData::BacktraceAttributes* Backtrace::Unity::Model::JsonData::BacktraceAttributes::New_ctor(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clientAttributes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::BacktraceAttributes*>(report, clientAttributes));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::JsonData::BacktraceAttributes::BacktraceAttributes()   {
}
