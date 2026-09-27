#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceSourceCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceSourceCode_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceSourceCode.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceSourceCode::*)()>(&::Backtrace::Unity::Model::BacktraceSourceCode::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f126d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceSourceCode.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceSourceCode::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceSourceCode::set_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f126e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceSourceCode.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::BacktraceSourceCode::*)()>(&::Backtrace::Unity::Model::BacktraceSourceCode::ToJson)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5f10d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceSourceCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceSourceCode::*)()>(&::Backtrace::Unity::Model::BacktraceSourceCode::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f12430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_set_Type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_get_Title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_get_Title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr void Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_set_Title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Title = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_get__Text_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_get__Text_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Text_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceSourceCode::__cordl_internal_set__Text_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Text_k__BackingField = value;
}
inline void Backtrace::Unity::Model::BacktraceSourceCode::setStaticF_SOURCE_CODE_PROPERTY(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SOURCE_CODE_PROPERTY", ::Backtrace::Unity::Model::BacktraceSourceCode*>(std::forward<::StringW>(value));
}
inline ::StringW Backtrace::Unity::Model::BacktraceSourceCode::getStaticF_SOURCE_CODE_PROPERTY()  {
return ::cordl_internals::getStaticField<::StringW, "SOURCE_CODE_PROPERTY", ::Backtrace::Unity::Model::BacktraceSourceCode*>();
}
inline ::StringW Backtrace::Unity::Model::BacktraceSourceCode::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceSourceCode::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::BacktraceSourceCode::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceSourceCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSourceCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceSourceCode* Backtrace::Unity::Model::BacktraceSourceCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceSourceCode*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceSourceCode::BacktraceSourceCode()   {
}
