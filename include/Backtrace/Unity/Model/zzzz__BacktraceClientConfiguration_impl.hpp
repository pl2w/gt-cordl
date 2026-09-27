#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceClientConfiguration.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceClientConfiguration_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceClientConfiguration.UpdateServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceClientConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceClientConfiguration::UpdateServerUrl)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5f0fddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceClientConfiguration*>(),
                        {"UpdateServerUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceClientConfiguration.ValidateServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceClientConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceClientConfiguration::ValidateServerUrl)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5f0ffdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceClientConfiguration*>(),
                        {"ValidateServerUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceClientConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceClientConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceClientConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f10200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceClientConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_ServerUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerUrl;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_ServerUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerUrl;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_ServerUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerUrl = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_ReportPerMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportPerMin;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_ReportPerMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportPerMin;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_ReportPerMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReportPerMin = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_HandleUnhandledExceptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleUnhandledExceptions;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_HandleUnhandledExceptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleUnhandledExceptions;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_HandleUnhandledExceptions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleUnhandledExceptions = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_IgnoreSslValidation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreSslValidation;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_IgnoreSslValidation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreSslValidation;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_IgnoreSslValidation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreSslValidation = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_DestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroyOnLoad;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_DestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroyOnLoad;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_DestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestroyOnLoad = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_HandleANR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleANR;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_HandleANR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleANR;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_HandleANR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleANR = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_OomReports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OomReports;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_OomReports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OomReports;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_OomReports(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OomReports = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_GameObjectDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameObjectDepth;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_GameObjectDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameObjectDepth;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_GameObjectDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameObjectDepth = value;
}
constexpr ::Backtrace::Unity::Types::MiniDumpType& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_MinidumpType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinidumpType;
}
constexpr ::Backtrace::Unity::Types::MiniDumpType const& Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_get_MinidumpType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinidumpType;
}
constexpr void Backtrace::Unity::Model::BacktraceClientConfiguration::__cordl_internal_set_MinidumpType(::Backtrace::Unity::Types::MiniDumpType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinidumpType = value;
}
inline void Backtrace::Unity::Model::BacktraceClientConfiguration::UpdateServerUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceClientConfiguration*>(),
                        {"UpdateServerUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::BacktraceClientConfiguration::ValidateServerUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceClientConfiguration*>(),
                        {"ValidateServerUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceClientConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceClientConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceClientConfiguration* Backtrace::Unity::Model::BacktraceClientConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceClientConfiguration*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceClientConfiguration::BacktraceClientConfiguration()   {
}
