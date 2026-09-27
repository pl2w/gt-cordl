#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceUnhandledException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceUnhandledException_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackFrame_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.get_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&::Backtrace::Unity::Model::BacktraceUnhandledException::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f13778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_Header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&::Backtrace::Unity::Model::BacktraceUnhandledException::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f13780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.get_Classifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&::Backtrace::Unity::Model::BacktraceUnhandledException::get_Classifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f13788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_Classifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.set_Classifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::set_Classifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f13790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"set_Classifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.get_StackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&::Backtrace::Unity::Model::BacktraceUnhandledException::get_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f13798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LogType (::Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&::Backtrace::Unity::Model::BacktraceUnhandledException::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f137a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::UnityEngine::LogType)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f137a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"set_Type", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.get_NativeStackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&::Backtrace::Unity::Model::BacktraceUnhandledException::get_NativeStackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f137b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_NativeStackTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.set_NativeStackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(bool)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::set_NativeStackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f137b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"set_NativeStackTrace", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW, ::StringW)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5f00b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.GetStackTraceErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::GetStackTraceErrorMessage)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f137c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"GetStackTraceErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.ConvertStackFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::ConvertStackFrames)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5f1387c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"ConvertStackFrames", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.ConvertFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW, int32_t)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::ConvertFrame)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5f13d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"ConvertFrame", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.SetJITStackTraceInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::SetJITStackTraceInformation)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5f14310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetJITStackTraceInformation", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.SetNativeStackTraceInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::SetNativeStackTraceInformation)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5f13fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetNativeStackTraceInformation", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.SetAndroidStackTraceInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW, int32_t, int32_t)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::SetAndroidStackTraceInformation)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f14984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetAndroidStackTraceInformation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.SetDefaultStackTraceInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceStackFrame* (::Backtrace::Unity::Model::BacktraceUnhandledException::*)(::StringW, int32_t)>(&::Backtrace::Unity::Model::BacktraceUnhandledException::SetDefaultStackTraceInformation)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5f145e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetDefaultStackTraceInformation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnhandledException.TrySetClassifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceUnhandledException::*)()>(&::Backtrace::Unity::Model::BacktraceUnhandledException::TrySetClassifier)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5f13ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"TrySetClassifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr void Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_set__header(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____header = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr void Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_set__message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__Classifier_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Classifier_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__Classifier_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Classifier_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_set__Classifier_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Classifier_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__stacktrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stacktrace;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__stacktrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stacktrace;
}
constexpr void Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_set__stacktrace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stacktrace = value;
}
constexpr ::UnityEngine::LogType& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::UnityEngine::LogType const& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_set__Type_k__BackingField(::UnityEngine::LogType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get_StackFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackFrames;
}
constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* const& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get_StackFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackFrames;
}
constexpr void Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_set_StackFrames(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StackFrames = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__NativeStackTrace_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NativeStackTrace_k__BackingField;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_get__NativeStackTrace_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NativeStackTrace_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceUnhandledException::__cordl_internal_set__NativeStackTrace_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NativeStackTrace_k__BackingField = value;
}
inline void Backtrace::Unity::Model::BacktraceUnhandledException::setStaticF__javaExtensions(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_javaExtensions", ::Backtrace::Unity::Model::BacktraceUnhandledException*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Backtrace::Unity::Model::BacktraceUnhandledException::getStaticF__javaExtensions()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_javaExtensions", ::Backtrace::Unity::Model::BacktraceUnhandledException*>();
}
inline bool Backtrace::Unity::Model::BacktraceUnhandledException::get_Header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_Header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceUnhandledException::get_Message()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceUnhandledException::get_Classifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_Classifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceUnhandledException::set_Classifier(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"set_Classifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::BacktraceUnhandledException::get_StackTrace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::LogType Backtrace::Unity::Model::BacktraceUnhandledException::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LogType>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceUnhandledException::set_Type(::UnityEngine::LogType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"set_Type", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Backtrace::Unity::Model::BacktraceUnhandledException::get_NativeStackTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"get_NativeStackTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceUnhandledException::set_NativeStackTrace(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"set_NativeStackTrace", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::BacktraceUnhandledException::_ctor(::StringW  message, ::StringW  stacktrace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, stacktrace);
}
inline ::StringW Backtrace::Unity::Model::BacktraceUnhandledException::GetStackTraceErrorMessage(::StringW  beginningOfTheFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"GetStackTraceErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beginningOfTheFrame);
}
inline ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* Backtrace::Unity::Model::BacktraceUnhandledException::ConvertStackFrames(::System::Collections::Generic::IEnumerable_1<::StringW>*  frames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"ConvertStackFrames", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>(this, ___internal_method, frames);
}
inline ::Backtrace::Unity::Model::BacktraceStackFrame* Backtrace::Unity::Model::BacktraceUnhandledException::ConvertFrame(::StringW  frameString, int32_t  methodNameEndIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"ConvertFrame", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceStackFrame*>(this, ___internal_method, frameString, methodNameEndIndex);
}
inline ::Backtrace::Unity::Model::BacktraceStackFrame* Backtrace::Unity::Model::BacktraceUnhandledException::SetJITStackTraceInformation(::StringW  frameString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetJITStackTraceInformation", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceStackFrame*>(this, ___internal_method, frameString);
}
inline ::Backtrace::Unity::Model::BacktraceStackFrame* Backtrace::Unity::Model::BacktraceUnhandledException::SetNativeStackTraceInformation(::StringW  frameString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetNativeStackTraceInformation", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceStackFrame*>(this, ___internal_method, frameString);
}
inline ::Backtrace::Unity::Model::BacktraceStackFrame* Backtrace::Unity::Model::BacktraceUnhandledException::SetAndroidStackTraceInformation(::StringW  frameString, int32_t  parameterStart, int32_t  parameterEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetAndroidStackTraceInformation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceStackFrame*>(this, ___internal_method, frameString, parameterStart, parameterEnd);
}
inline ::Backtrace::Unity::Model::BacktraceStackFrame* Backtrace::Unity::Model::BacktraceUnhandledException::SetDefaultStackTraceInformation(::StringW  frameString, int32_t  methodNameEndIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"SetDefaultStackTraceInformation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceStackFrame*>(this, ___internal_method, frameString, methodNameEndIndex);
}
inline void Backtrace::Unity::Model::BacktraceUnhandledException::TrySetClassifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnhandledException*>(),
                        {"TrySetClassifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceUnhandledException* Backtrace::Unity::Model::BacktraceUnhandledException::New_ctor(::StringW  message, ::StringW  stacktrace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceUnhandledException*>(message, stacktrace));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceUnhandledException::BacktraceUnhandledException()   {
}
