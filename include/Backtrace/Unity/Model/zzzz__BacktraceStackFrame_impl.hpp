#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceStackFrame.hpp"
#include "Backtrace/Unity/Types/zzzz__BacktraceStackFrameType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackFrame_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&::Backtrace::Unity::Model::BacktraceStackFrame::get_FileName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f12750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.get_InvalidFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&::Backtrace::Unity::Model::BacktraceStackFrame::get_InvalidFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"get_InvalidFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.set_InvalidFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceStackFrame::*)(bool)>(&::Backtrace::Unity::Model::BacktraceStackFrame::set_InvalidFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"set_InvalidFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&::Backtrace::Unity::Model::BacktraceStackFrame::ToJson)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5f12c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&::Backtrace::Unity::Model::BacktraceStackFrame::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceStackFrame::*)(::System::Diagnostics::StackFrame*, bool)>(&::Backtrace::Unity::Model::BacktraceStackFrame::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5f12ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Diagnostics::StackFrame*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.GetMethodName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceStackFrame::*)(::System::Reflection::MethodBase*)>(&::Backtrace::Unity::Model::BacktraceStackFrame::GetMethodName)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f13224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"GetMethodName", {}, {::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.GetFileNameFromLibraryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&::Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromLibraryName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f12af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"GetFileNameFromLibraryName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.GetFileNameFromFunctionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&::Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromFunctionName)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5f1281c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"GetFileNameFromFunctionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackFrame.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&::Backtrace::Unity::Model::BacktraceStackFrame::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f13374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_StackFrameType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackFrameType;
}
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_StackFrameType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackFrameType;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_StackFrameType(::Backtrace::Unity::Types::BacktraceStackFrameType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StackFrameType = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Line()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Line;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Line() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Line;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_Line(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Line = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_MemberInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberInfo;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_MemberInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberInfo;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_MemberInfo(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MemberInfo = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_SourceCodeFullPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceCodeFullPath;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_SourceCodeFullPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceCodeFullPath;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_SourceCodeFullPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SourceCodeFullPath = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Column()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Column;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Column() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Column;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_Column(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Column = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_ILOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ILOffset;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_ILOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ILOffset;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_ILOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ILOffset = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_SourceCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceCode;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_SourceCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SourceCode;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_SourceCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SourceCode = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Address;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Address;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Address = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Assembly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Assembly;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Assembly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Assembly;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_Assembly(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Assembly = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get__InvalidFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InvalidFrame_k__BackingField;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get__InvalidFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InvalidFrame_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set__InvalidFrame_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InvalidFrame_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Library()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Library;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_get_Library() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Library;
}
constexpr void Backtrace::Unity::Model::BacktraceStackFrame::__cordl_internal_set_Library(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Library = value;
}
inline void Backtrace::Unity::Model::BacktraceStackFrame::setStaticF__frameSeparators(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_frameSeparators", ::Backtrace::Unity::Model::BacktraceStackFrame*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Backtrace::Unity::Model::BacktraceStackFrame::getStaticF__frameSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_frameSeparators", ::Backtrace::Unity::Model::BacktraceStackFrame*>();
}
inline ::StringW Backtrace::Unity::Model::BacktraceStackFrame::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::BacktraceStackFrame::get_InvalidFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"get_InvalidFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceStackFrame::set_InvalidFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"set_InvalidFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::BacktraceStackFrame::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceStackFrame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceStackFrame::_ctor(::System::Diagnostics::StackFrame*  frame, bool  generatedByException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Diagnostics::StackFrame*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, generatedByException);
}
inline ::StringW Backtrace::Unity::Model::BacktraceStackFrame::GetMethodName(::System::Reflection::MethodBase*  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"GetMethodName", {}, {::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromLibraryName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"GetFileNameFromLibraryName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromFunctionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(),
                        {"GetFileNameFromFunctionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceStackFrame::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackFrame*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceStackFrame* Backtrace::Unity::Model::BacktraceStackFrame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceStackFrame*>());
}
inline ::Backtrace::Unity::Model::BacktraceStackFrame* Backtrace::Unity::Model::BacktraceStackFrame::New_ctor(::System::Diagnostics::StackFrame*  frame, bool  generatedByException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceStackFrame*>(frame, generatedByException));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceStackFrame::BacktraceStackFrame()   {
}
