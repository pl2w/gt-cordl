#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceCredentials.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceCredentials_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials.get_BacktraceHostUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Backtrace::Unity::Model::BacktraceCredentials::*)()>(&::Backtrace::Unity::Model::BacktraceCredentials::get_BacktraceHostUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f10524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"get_BacktraceHostUri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials.set_BacktraceHostUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceCredentials::*)(::System::Uri*)>(&::Backtrace::Unity::Model::BacktraceCredentials::set_BacktraceHostUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"set_BacktraceHostUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials.GetSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Backtrace::Unity::Model::BacktraceCredentials::*)()>(&::Backtrace::Unity::Model::BacktraceCredentials::GetSubmissionUrl)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f06684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetSubmissionUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials.GetPlCrashReporterSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Backtrace::Unity::Model::BacktraceCredentials::*)()>(&::Backtrace::Unity::Model::BacktraceCredentials::GetPlCrashReporterSubmissionUrl)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f10534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetPlCrashReporterSubmissionUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials.GetMinidumpSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Backtrace::Unity::Model::BacktraceCredentials::*)()>(&::Backtrace::Unity::Model::BacktraceCredentials::GetMinidumpSubmissionUrl)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f06750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetMinidumpSubmissionUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials.GetSymbolsSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Backtrace::Unity::Model::BacktraceCredentials::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceCredentials::GetSymbolsSubmissionUrl)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f10664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetSymbolsSubmissionUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceCredentials::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceCredentials::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5efe40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceCredentials::*)(::System::Uri*)>(&::Backtrace::Unity::Model::BacktraceCredentials::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f108a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceCredentials.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceCredentials::*)(::System::Uri*, ::ArrayW<uint8_t>)>(&::Backtrace::Unity::Model::BacktraceCredentials::IsValid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f108d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& Backtrace::Unity::Model::BacktraceCredentials::__cordl_internal_get__BacktraceHostUri_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceHostUri_k__BackingField;
}
constexpr ::System::Uri* const& Backtrace::Unity::Model::BacktraceCredentials::__cordl_internal_get__BacktraceHostUri_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceHostUri_k__BackingField;
}
constexpr void Backtrace::Unity::Model::BacktraceCredentials::__cordl_internal_set__BacktraceHostUri_k__BackingField(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BacktraceHostUri_k__BackingField = value;
}
inline ::System::Uri* Backtrace::Unity::Model::BacktraceCredentials::get_BacktraceHostUri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"get_BacktraceHostUri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceCredentials::set_BacktraceHostUri(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"set_BacktraceHostUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* Backtrace::Unity::Model::BacktraceCredentials::GetSubmissionUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetSubmissionUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Uri* Backtrace::Unity::Model::BacktraceCredentials::GetPlCrashReporterSubmissionUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetPlCrashReporterSubmissionUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Uri* Backtrace::Unity::Model::BacktraceCredentials::GetMinidumpSubmissionUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetMinidumpSubmissionUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Uri* Backtrace::Unity::Model::BacktraceCredentials::GetSymbolsSubmissionUrl(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"GetSymbolsSubmissionUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, token);
}
inline void Backtrace::Unity::Model::BacktraceCredentials::_ctor(::StringW  backtraceSubmitUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backtraceSubmitUrl);
}
inline void Backtrace::Unity::Model::BacktraceCredentials::_ctor(::System::Uri*  backtraceSubmitUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backtraceSubmitUrl);
}
inline bool Backtrace::Unity::Model::BacktraceCredentials::IsValid(::System::Uri*  uri, ::ArrayW<uint8_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceCredentials*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uri, token);
}
inline ::Backtrace::Unity::Model::BacktraceCredentials* Backtrace::Unity::Model::BacktraceCredentials::New_ctor(::StringW  backtraceSubmitUrl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceCredentials*>(backtraceSubmitUrl));
}
inline ::Backtrace::Unity::Model::BacktraceCredentials* Backtrace::Unity::Model::BacktraceCredentials::New_ctor(::System::Uri*  backtraceSubmitUrl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceCredentials*>(backtraceSubmitUrl));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceCredentials::BacktraceCredentials()   {
}
