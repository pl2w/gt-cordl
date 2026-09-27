#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LoggingContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__LoggingContext_def.hpp"
#include "Meta/Voice/Logging/zzzz__LoggingContext_def.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggingContext::*)(::System::Diagnostics::StackTrace*)>(&::Meta::Voice::Logging::LoggingContext::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e37c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Diagnostics::StackTrace*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggingContext::*)(::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::LoggingContext::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e37ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::LoggingContext::*)()>(&::Meta::Voice::Logging::LoggingContext::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e37d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext.AppendSingleFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggingContext::*)(::System::Text::StringBuilder*, bool)>(&::Meta::Voice::Logging::LoggingContext::AppendSingleFrame)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9e37d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"AppendSingleFrame", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext.AppendFullStack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggingContext::*)(::System::Text::StringBuilder*, bool, ::ArrayW<::System::Diagnostics::StackFrame*>)>(&::Meta::Voice::Logging::LoggingContext::AppendFullStack)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x9e37ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"AppendFullStack", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Diagnostics::StackFrame*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext.AppendRelevantContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggingContext::*)(::System::Text::StringBuilder*, bool)>(&::Meta::Voice::Logging::LoggingContext::AppendRelevantContext)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e3852c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"AppendRelevantContext", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext.GetCallSite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::StringW,int32_t> (::Meta::Voice::Logging::LoggingContext::*)()>(&::Meta::Voice::Logging::LoggingContext::GetCallSite)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9e3858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"GetCallSite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext.IsLoggingClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Meta::Voice::Logging::LoggingContext::IsLoggingClass)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e38338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"IsLoggingClass", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext.IsSystemClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Meta::Voice::Logging::LoggingContext::IsSystemClass)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e38460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"IsSystemClass", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::StackTrace*& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__stackTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stackTrace;
}
constexpr ::System::Diagnostics::StackTrace* const& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__stackTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stackTrace;
}
constexpr void Meta::Voice::Logging::LoggingContext::__cordl_internal_set__stackTrace(::System::Diagnostics::StackTrace*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stackTrace = value;
}
constexpr ::StringW& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__callSiteMemberName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callSiteMemberName;
}
constexpr ::StringW const& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__callSiteMemberName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callSiteMemberName;
}
constexpr void Meta::Voice::Logging::LoggingContext::__cordl_internal_set__callSiteMemberName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callSiteMemberName = value;
}
constexpr ::StringW& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__callSiteSourceFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callSiteSourceFilePath;
}
constexpr ::StringW const& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__callSiteSourceFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callSiteSourceFilePath;
}
constexpr void Meta::Voice::Logging::LoggingContext::__cordl_internal_set__callSiteSourceFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callSiteSourceFilePath = value;
}
constexpr int32_t& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__callSiteSourceLineNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callSiteSourceLineNumber;
}
constexpr int32_t const& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__callSiteSourceLineNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callSiteSourceLineNumber;
}
constexpr void Meta::Voice::Logging::LoggingContext::__cordl_internal_set__callSiteSourceLineNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callSiteSourceLineNumber = value;
}
constexpr ::StringW& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__workingDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingDirectory;
}
constexpr ::StringW const& Meta::Voice::Logging::LoggingContext::__cordl_internal_get__workingDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingDirectory;
}
constexpr void Meta::Voice::Logging::LoggingContext::__cordl_internal_set__workingDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____workingDirectory = value;
}
inline void Meta::Voice::Logging::LoggingContext::_ctor(::System::Diagnostics::StackTrace*  stackTrace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Diagnostics::StackTrace*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stackTrace);
}
inline void Meta::Voice::Logging::LoggingContext::_ctor(/* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberName, sourceFilePath, sourceLineNumber);
}
inline ::StringW Meta::Voice::Logging::LoggingContext::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LoggingContext::AppendSingleFrame(::System::Text::StringBuilder*  sb, bool  colorLogs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"AppendSingleFrame", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, colorLogs);
}
inline void Meta::Voice::Logging::LoggingContext::AppendFullStack(::System::Text::StringBuilder*  sb, bool  colorLogs, ::ArrayW<::System::Diagnostics::StackFrame*>  frames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"AppendFullStack", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Diagnostics::StackFrame*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, colorLogs, frames);
}
inline void Meta::Voice::Logging::LoggingContext::AppendRelevantContext(::System::Text::StringBuilder*  sb, bool  colorLogs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"AppendRelevantContext", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, colorLogs);
}
inline ::System::ValueTuple_2<::StringW,int32_t> Meta::Voice::Logging::LoggingContext::GetCallSite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"GetCallSite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::StringW,int32_t>>(this, ___internal_method);
}
inline bool Meta::Voice::Logging::LoggingContext::IsLoggingClass(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"IsLoggingClass", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Meta::Voice::Logging::LoggingContext::IsSystemClass(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext*>(),
                        {"IsSystemClass", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::Meta::Voice::Logging::LoggingContext* Meta::Voice::Logging::LoggingContext::New_ctor(::System::Diagnostics::StackTrace*  stackTrace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LoggingContext*>(stackTrace));
}
inline ::Meta::Voice::Logging::LoggingContext* Meta::Voice::Logging::LoggingContext::New_ctor(/* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LoggingContext*>(memberName, sourceFilePath, sourceLineNumber));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LoggingContext::LoggingContext()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggingContext___c::*)()>(&::Meta::Voice::Logging::LoggingContext___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e387c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggingContext___c._AppendFullStack_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::LoggingContext___c::*)(::System::Reflection::ParameterInfo*)>(&::Meta::Voice::Logging::LoggingContext___c::_AppendFullStack_b__9_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e387d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext___c*>(),
                        {"<AppendFullStack>b__9_0", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::Logging::LoggingContext___c::setStaticF___9(::Meta::Voice::Logging::LoggingContext___c*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::LoggingContext___c*, "<>9", ::Meta::Voice::Logging::LoggingContext___c*>(std::forward<::Meta::Voice::Logging::LoggingContext___c*>(value));
}
inline ::Meta::Voice::Logging::LoggingContext___c* Meta::Voice::Logging::LoggingContext___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::LoggingContext___c*, "<>9", ::Meta::Voice::Logging::LoggingContext___c*>();
}
inline void Meta::Voice::Logging::LoggingContext___c::setStaticF___9__9_0(::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*, "<>9__9_0", ::Meta::Voice::Logging::LoggingContext___c*>(std::forward<::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>* Meta::Voice::Logging::LoggingContext___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ParameterInfo*,::StringW>*, "<>9__9_0", ::Meta::Voice::Logging::LoggingContext___c*>();
}
inline void Meta::Voice::Logging::LoggingContext___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Logging::LoggingContext___c::_AppendFullStack_b__9_0(::System::Reflection::ParameterInfo*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggingContext___c*>(),
                        {"<AppendFullStack>b__9_0", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::Meta::Voice::Logging::LoggingContext___c* Meta::Voice::Logging::LoggingContext___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LoggingContext___c*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LoggingContext___c::LoggingContext___c()   {
}
