#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LoggerRegistry.hpp"
#include "Meta/Voice/Logging/zzzz__LogCategory_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__LoggerRegistry_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILoggerRegistry_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLoggerFactory_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__LogCategory_def.hpp"
#include "Meta/Voice/Logging/zzzz__LoggerOptions_def.hpp"
#include "Meta/Voice/Logging/zzzz__LoggerRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.get_LogSink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::ILogSink* (::Meta::Voice::Logging::LoggerRegistry::*)()>(&::Meta::Voice::Logging::LoggerRegistry::get_LogSink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e373a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_LogSink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.set_LogSink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggerRegistry::*)(::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::LoggerRegistry::set_LogSink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e373b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"set_LogSink", {}, {::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.get_VLoggerFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLoggerFactory* (::Meta::Voice::Logging::LoggerRegistry::*)()>(&::Meta::Voice::Logging::LoggerRegistry::get_VLoggerFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e373b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_VLoggerFactory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::LoggerOptions* (::Meta::Voice::Logging::LoggerRegistry::*)()>(&::Meta::Voice::Logging::LoggerRegistry::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e373c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.get_PoolLoggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Logging::LoggerRegistry::*)()>(&::Meta::Voice::Logging::LoggerRegistry::get_PoolLoggers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e373c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_PoolLoggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::ILoggerRegistry* (*)()>(&::Meta::Voice::Logging::LoggerRegistry::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e373d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggerRegistry::*)()>(&::Meta::Voice::Logging::LoggerRegistry::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9e37428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.GetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::LoggerRegistry::*)(::Meta::Voice::Logging::LogCategory, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::LoggerRegistry::GetLogger)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e376e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetLogger", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.GetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::LoggerRegistry::*)(::StringW, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::LoggerRegistry::GetLogger)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e377f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetLogger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.GetCoreLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::LoggerRegistry::*)(::Meta::Voice::Logging::LogCategory, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::LoggerRegistry::GetCoreLogger)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e37910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetCoreLogger", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry.GetCoreLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::LoggerRegistry::*)(::StringW, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::LoggerRegistry::GetCoreLogger)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x9e37994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetCoreLogger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::ILogSink*& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__LogSink_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogSink_k__BackingField;
}
constexpr ::Meta::Voice::Logging::ILogSink* const& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__LogSink_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogSink_k__BackingField;
}
constexpr void Meta::Voice::Logging::LoggerRegistry::__cordl_internal_set__LogSink_k__BackingField(::Meta::Voice::Logging::ILogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogSink_k__BackingField = value;
}
constexpr ::Meta::Voice::Logging::IVLoggerFactory*& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__VLoggerFactory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VLoggerFactory_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLoggerFactory* const& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__VLoggerFactory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VLoggerFactory_k__BackingField;
}
constexpr void Meta::Voice::Logging::LoggerRegistry::__cordl_internal_set__VLoggerFactory_k__BackingField(::Meta::Voice::Logging::IVLoggerFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VLoggerFactory_k__BackingField = value;
}
constexpr ::Meta::Voice::Logging::LoggerOptions*& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__Options_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr ::Meta::Voice::Logging::LoggerOptions* const& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__Options_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr void Meta::Voice::Logging::LoggerRegistry::__cordl_internal_set__Options_k__BackingField(::Meta::Voice::Logging::LoggerOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Options_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>*& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__loggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>* const& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__loggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loggers;
}
constexpr void Meta::Voice::Logging::LoggerRegistry::__cordl_internal_set__loggers(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loggers = value;
}
constexpr bool& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__PoolLoggers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PoolLoggers_k__BackingField;
}
constexpr bool const& Meta::Voice::Logging::LoggerRegistry::__cordl_internal_get__PoolLoggers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PoolLoggers_k__BackingField;
}
constexpr void Meta::Voice::Logging::LoggerRegistry::__cordl_internal_set__PoolLoggers_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PoolLoggers_k__BackingField = value;
}
inline void Meta::Voice::Logging::LoggerRegistry::setStaticF__Instance_k__BackingField(::Meta::Voice::Logging::ILoggerRegistry*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::ILoggerRegistry*, "<Instance>k__BackingField", ::Meta::Voice::Logging::LoggerRegistry*>(std::forward<::Meta::Voice::Logging::ILoggerRegistry*>(value));
}
inline ::Meta::Voice::Logging::ILoggerRegistry* Meta::Voice::Logging::LoggerRegistry::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::ILoggerRegistry*, "<Instance>k__BackingField", ::Meta::Voice::Logging::LoggerRegistry*>();
}
inline ::Meta::Voice::Logging::ILogSink* Meta::Voice::Logging::LoggerRegistry::get_LogSink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_LogSink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::ILogSink*>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LoggerRegistry::set_LogSink(::Meta::Voice::Logging::ILogSink*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"set_LogSink", {}, {::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Logging::IVLoggerFactory* Meta::Voice::Logging::LoggerRegistry::get_VLoggerFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_VLoggerFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLoggerFactory*>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LoggerOptions* Meta::Voice::Logging::LoggerRegistry::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::LoggerOptions*>(this, ___internal_method);
}
inline bool Meta::Voice::Logging::LoggerRegistry::get_PoolLoggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_PoolLoggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::ILoggerRegistry* Meta::Voice::Logging::LoggerRegistry::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::ILoggerRegistry*>(nullptr, ___internal_method);
}
inline void Meta::Voice::Logging::LoggerRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::LoggerRegistry::GetLogger(::Meta::Voice::Logging::LogCategory  logCategory, ::Meta::Voice::Logging::ILogSink*  logSink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetLogger", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, logCategory, logSink);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::LoggerRegistry::GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetLogger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, category, logSink);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::LoggerRegistry::GetCoreLogger(::Meta::Voice::Logging::LogCategory  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetCoreLogger", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, category, logSink);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::LoggerRegistry::GetCoreLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry*>(),
                        {"GetCoreLogger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, category, logSink);
}
inline ::Meta::Voice::Logging::LoggerRegistry* Meta::Voice::Logging::LoggerRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LoggerRegistry*>());
}
/// @brief Convert operator to "::Meta::Voice::Logging::ILoggerRegistry"
constexpr  Meta::Voice::Logging::LoggerRegistry::operator ::Meta::Voice::Logging::ILoggerRegistry*() noexcept {
return static_cast<::Meta::Voice::Logging::ILoggerRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::ILoggerRegistry"
constexpr ::Meta::Voice::Logging::ILoggerRegistry* Meta::Voice::Logging::LoggerRegistry::i___Meta__Voice__Logging__ILoggerRegistry() noexcept {
return static_cast<::Meta::Voice::Logging::ILoggerRegistry*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LoggerRegistry::LoggerRegistry()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::*)()>(&::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e37908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0._GetLogger_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::*)()>(&::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::_GetLogger_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e37c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0*>(),
                        {"<GetLogger>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LoggerRegistry*& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Logging::LoggerRegistry* const& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_set___4__this(::Meta::Voice::Logging::LoggerRegistry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_get_category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr ::StringW const& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_get_category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_set_category(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___category = value;
}
constexpr ::Meta::Voice::Logging::ILogSink*& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_get_logSink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSink;
}
constexpr ::Meta::Voice::Logging::ILogSink* const& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_get_logSink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSink;
}
constexpr void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::__cordl_internal_set_logSink(::Meta::Voice::Logging::ILogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logSink = value;
}
inline void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::_GetLogger_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0*>(),
                        {"<GetLogger>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0* Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0::LoggerRegistry___c__DisplayClass35_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::*)()>(&::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e377ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0._GetLogger_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::*)()>(&::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::_GetLogger_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e37c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0*>(),
                        {"<GetLogger>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LoggerRegistry*& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Logging::LoggerRegistry* const& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_set___4__this(::Meta::Voice::Logging::LoggerRegistry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::Voice::Logging::LogCategory& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_get_logCategory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logCategory;
}
constexpr ::Meta::Voice::Logging::LogCategory const& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_get_logCategory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logCategory;
}
constexpr void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_set_logCategory(::Meta::Voice::Logging::LogCategory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logCategory = value;
}
constexpr ::Meta::Voice::Logging::ILogSink*& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_get_logSink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSink;
}
constexpr ::Meta::Voice::Logging::ILogSink* const& Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_get_logSink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSink;
}
constexpr void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::__cordl_internal_set_logSink(::Meta::Voice::Logging::ILogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logSink = value;
}
inline void Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::_GetLogger_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0*>(),
                        {"<GetLogger>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0* Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0::LoggerRegistry___c__DisplayClass34_0()   {
}
