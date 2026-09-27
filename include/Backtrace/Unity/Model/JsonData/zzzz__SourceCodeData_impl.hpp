#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/SourceCodeData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__SourceCodeData_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__SourceCodeData_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackFrame_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::SourceCodeData::*)(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*)>(&::Backtrace::Unity::Model::JsonData::SourceCodeData::_ctor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5f1a9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>*& Backtrace::Unity::Model::JsonData::SourceCodeData::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>* const& Backtrace::Unity::Model::JsonData::SourceCodeData::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Backtrace::Unity::Model::JsonData::SourceCodeData::__cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Backtrace::Unity::Model::JsonData::SourceCodeData::_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionStack);
}
inline ::Backtrace::Unity::Model::JsonData::SourceCodeData* Backtrace::Unity::Model::JsonData::SourceCodeData::New_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::SourceCodeData*>(exceptionStack));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCodeData()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.get_StartLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)()>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get_StartLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1adc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get_StartLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.set_StartLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)(int32_t)>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set_StartLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1adc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set_StartLine", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.get_StartColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)()>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get_StartColumn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1add0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get_StartColumn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.set_StartColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)(int32_t)>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set_StartColumn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1add8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set_StartColumn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.get__sourceCodeFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)()>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get__sourceCodeFullPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1ade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get__sourceCodeFullPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.set__sourceCodeFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)(::StringW)>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set__sourceCodeFullPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1ade8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set__sourceCodeFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.get_SourceCodeFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)()>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get_SourceCodeFullPath)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f1adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get_SourceCodeFullPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.set_SourceCodeFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)(::StringW)>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set_SourceCodeFullPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1ae7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set_SourceCodeFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode.FromExceptionStack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode* (*)(::Backtrace::Unity::Model::BacktraceStackFrame*)>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::FromExceptionStack)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f1ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"FromExceptionStack", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceStackFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::*)()>(&::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1ae84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_get__StartLine_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartLine_k__BackingField;
}
constexpr int32_t const& Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_get__StartLine_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartLine_k__BackingField;
}
constexpr void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_set__StartLine_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartLine_k__BackingField = value;
}
constexpr int32_t& Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_get__StartColumn_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartColumn_k__BackingField;
}
constexpr int32_t const& Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_get__StartColumn_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartColumn_k__BackingField;
}
constexpr void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_set__StartColumn_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartColumn_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_get___sourceCodeFullPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____sourceCodeFullPath_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_get___sourceCodeFullPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____sourceCodeFullPath_k__BackingField;
}
constexpr void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::__cordl_internal_set___sourceCodeFullPath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____sourceCodeFullPath_k__BackingField = value;
}
inline int32_t Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get_StartLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get_StartLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set_StartLine(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set_StartLine", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get_StartColumn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get_StartColumn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set_StartColumn(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set_StartColumn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get__sourceCodeFullPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get__sourceCodeFullPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set__sourceCodeFullPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set__sourceCodeFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::get_SourceCodeFullPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"get_SourceCodeFullPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::set_SourceCodeFullPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"set_SourceCodeFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode* Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::FromExceptionStack(::Backtrace::Unity::Model::BacktraceStackFrame*  stackFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {"FromExceptionStack", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceStackFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(nullptr, ___internal_method, stackFrame);
}
inline void Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode* Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode::SourceCodeData_SourceCode()   {
}
