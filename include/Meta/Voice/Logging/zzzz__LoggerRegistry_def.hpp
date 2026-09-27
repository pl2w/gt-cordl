#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LoggerRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Logging/zzzz__LogCategory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoggerRegistry)
namespace Meta::Voice::Logging {
class ILogSink;
}
namespace Meta::Voice::Logging {
class ILoggerRegistry;
}
namespace Meta::Voice::Logging {
class IVLoggerFactory;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Logging {
struct LogCategory;
}
namespace Meta::Voice::Logging {
class LoggerOptions;
}
namespace Meta::Voice::Logging {
class LoggerRegistry___c__DisplayClass34_0;
}
namespace Meta::Voice::Logging {
class LoggerRegistry___c__DisplayClass35_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class LoggerRegistry;
}
namespace Meta::Voice::Logging {
class LoggerRegistry___c__DisplayClass34_0;
}
namespace Meta::Voice::Logging {
class LoggerRegistry___c__DisplayClass35_0;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::LoggerRegistry*);
MARK_REF_T(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0*);
MARK_REF_T(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LoggerRegistry*, "Meta.Voice.Logging", "LoggerRegistry");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0*, "Meta.Voice.Logging", "LoggerRegistry/<>c__DisplayClass34_0");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0*, "Meta.Voice.Logging", "LoggerRegistry/<>c__DisplayClass35_0");
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LoggerRegistry
class CORDL_TYPE LoggerRegistry : public ::System::Object {
public:
// Declarations
using __c__DisplayClass34_0 = ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0;

using __c__DisplayClass35_0 = ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0;

 __declspec(property(get=get_LogSink, put=set_LogSink)) ::Meta::Voice::Logging::ILogSink*  LogSink;

 __declspec(property(get=get_Options)) ::Meta::Voice::Logging::LoggerOptions*  Options;

 __declspec(property(get=get_PoolLoggers)) bool  PoolLoggers;

 __declspec(property(get=get_VLoggerFactory)) ::Meta::Voice::Logging::IVLoggerFactory*  VLoggerFactory;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::Meta::Voice::Logging::ILoggerRegistry*  _Instance_k__BackingField;

/// @brief Field <LogSink>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__LogSink_k__BackingField, put=__cordl_internal_set__LogSink_k__BackingField)) ::Meta::Voice::Logging::ILogSink*  _LogSink_k__BackingField;

/// @brief Field <Options>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) ::Meta::Voice::Logging::LoggerOptions*  _Options_k__BackingField;

/// @brief Field <PoolLoggers>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__PoolLoggers_k__BackingField, put=__cordl_internal_set__PoolLoggers_k__BackingField)) bool  _PoolLoggers_k__BackingField;

/// @brief Field <VLoggerFactory>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__VLoggerFactory_k__BackingField, put=__cordl_internal_set__VLoggerFactory_k__BackingField)) ::Meta::Voice::Logging::IVLoggerFactory*  _VLoggerFactory_k__BackingField;

/// @brief Field _loggers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loggers, put=__cordl_internal_set__loggers)) ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>*  _loggers;

/// @brief Convert operator to "::Meta::Voice::Logging::ILoggerRegistry"
constexpr operator  ::Meta::Voice::Logging::ILoggerRegistry*() noexcept;

/// @brief Method GetCoreLogger, addr 0x9e37910, size 0x84, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* GetCoreLogger(::Meta::Voice::Logging::LogCategory  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

/// @brief Method GetCoreLogger, addr 0x9e37994, size 0x240, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* GetCoreLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

/// @brief Method GetLogger, addr 0x9e377f4, size 0x114, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

/// @brief Method GetLogger, addr 0x9e376e4, size 0x108, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* GetLogger(::Meta::Voice::Logging::LogCategory  logCategory, ::Meta::Voice::Logging::ILogSink*  logSink) ;

static inline ::Meta::Voice::Logging::LoggerRegistry* New_ctor() ;

constexpr ::Meta::Voice::Logging::ILogSink* const& __cordl_internal_get__LogSink_k__BackingField() const;

constexpr ::Meta::Voice::Logging::ILogSink*& __cordl_internal_get__LogSink_k__BackingField() ;

constexpr ::Meta::Voice::Logging::LoggerOptions* const& __cordl_internal_get__Options_k__BackingField() const;

constexpr ::Meta::Voice::Logging::LoggerOptions*& __cordl_internal_get__Options_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PoolLoggers_k__BackingField() const;

constexpr bool& __cordl_internal_get__PoolLoggers_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLoggerFactory* const& __cordl_internal_get__VLoggerFactory_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLoggerFactory*& __cordl_internal_get__VLoggerFactory_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>* const& __cordl_internal_get__loggers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>*& __cordl_internal_get__loggers() ;

constexpr void __cordl_internal_set__LogSink_k__BackingField(::Meta::Voice::Logging::ILogSink*  value) ;

constexpr void __cordl_internal_set__Options_k__BackingField(::Meta::Voice::Logging::LoggerOptions*  value) ;

constexpr void __cordl_internal_set__PoolLoggers_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__VLoggerFactory_k__BackingField(::Meta::Voice::Logging::IVLoggerFactory*  value) ;

constexpr void __cordl_internal_set__loggers(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>*  value) ;

/// @brief Method .ctor, addr 0x9e37428, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::Voice::Logging::ILoggerRegistry* getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x9e373d0, size 0x58, virtual false, abstract: false, final false
static inline ::Meta::Voice::Logging::ILoggerRegistry* get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_LogSink, addr 0x9e373a8, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::ILogSink* get_LogSink() ;

/// [CompilerGenerated]
/// @brief Method get_Options, addr 0x9e373c0, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::LoggerOptions* get_Options() ;

/// [CompilerGenerated]
/// @brief Method get_PoolLoggers, addr 0x9e373c8, size 0x8, virtual true, abstract: false, final true
inline bool get_PoolLoggers() ;

/// [CompilerGenerated]
/// @brief Method get_VLoggerFactory, addr 0x9e373b8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLoggerFactory* get_VLoggerFactory() ;

/// @brief Convert to "::Meta::Voice::Logging::ILoggerRegistry"
constexpr ::Meta::Voice::Logging::ILoggerRegistry* i___Meta__Voice__Logging__ILoggerRegistry() noexcept;

static inline void setStaticF__Instance_k__BackingField(::Meta::Voice::Logging::ILoggerRegistry*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LogSink, addr 0x9e373b0, size 0x8, virtual true, abstract: false, final true
inline void set_LogSink(::Meta::Voice::Logging::ILogSink*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggerRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggerRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggerRegistry(LoggerRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggerRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggerRegistry(LoggerRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30960};

/// [CompilerGenerated]
/// @brief Field <LogSink>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::ILogSink*  ____LogSink_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VLoggerFactory>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLoggerFactory*  ____VLoggerFactory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Options>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::LoggerOptions*  ____Options_k__BackingField;

/// @brief Field _loggers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Logging::IVLogger*>*  ____loggers;

/// [CompilerGenerated]
/// @brief Field <PoolLoggers>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____PoolLoggers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry, ____LogSink_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry, ____VLoggerFactory_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry, ____Options_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry, ____loggers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry, ____PoolLoggers_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LoggerRegistry) == 0x38, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LoggerRegistry/<>c__DisplayClass35_0
class CORDL_TYPE LoggerRegistry___c__DisplayClass35_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Logging::LoggerRegistry*  __4__this;

/// @brief Field category, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_category, put=__cordl_internal_set_category)) ::StringW  category;

/// @brief Field logSink, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_logSink, put=__cordl_internal_set_logSink)) ::Meta::Voice::Logging::ILogSink*  logSink;

static inline ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0* New_ctor() ;

/// @brief Method <GetLogger>b__0, addr 0x9e37c58, size 0x1c, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* _GetLogger_b__0() ;

constexpr ::Meta::Voice::Logging::LoggerRegistry* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Logging::LoggerRegistry*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_category() const;

constexpr ::StringW& __cordl_internal_get_category() ;

constexpr ::Meta::Voice::Logging::ILogSink* const& __cordl_internal_get_logSink() const;

constexpr ::Meta::Voice::Logging::ILogSink*& __cordl_internal_get_logSink() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Logging::LoggerRegistry*  value) ;

constexpr void __cordl_internal_set_category(::StringW  value) ;

constexpr void __cordl_internal_set_logSink(::Meta::Voice::Logging::ILogSink*  value) ;

/// @brief Method .ctor, addr 0x9e37908, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggerRegistry___c__DisplayClass35_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggerRegistry___c__DisplayClass35_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggerRegistry___c__DisplayClass35_0(LoggerRegistry___c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggerRegistry___c__DisplayClass35_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggerRegistry___c__DisplayClass35_0(LoggerRegistry___c__DisplayClass35_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30959};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LoggerRegistry*  _____4__this;

/// @brief Field category, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___category;

/// @brief Field logSink, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::ILogSink*  ___logSink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0, ___category) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0, ___logSink) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass35_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies Meta.Voice.Logging.LogCategory, System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LoggerRegistry/<>c__DisplayClass34_0
class CORDL_TYPE LoggerRegistry___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Logging::LoggerRegistry*  __4__this;

/// @brief Field logCategory, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_logCategory, put=__cordl_internal_set_logCategory)) ::Meta::Voice::Logging::LogCategory  logCategory;

/// @brief Field logSink, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_logSink, put=__cordl_internal_set_logSink)) ::Meta::Voice::Logging::ILogSink*  logSink;

static inline ::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0* New_ctor() ;

/// @brief Method <GetLogger>b__0, addr 0x9e37c38, size 0x20, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* _GetLogger_b__0() ;

constexpr ::Meta::Voice::Logging::LoggerRegistry* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Logging::LoggerRegistry*& __cordl_internal_get___4__this() ;

constexpr ::Meta::Voice::Logging::LogCategory const& __cordl_internal_get_logCategory() const;

constexpr ::Meta::Voice::Logging::LogCategory& __cordl_internal_get_logCategory() ;

constexpr ::Meta::Voice::Logging::ILogSink* const& __cordl_internal_get_logSink() const;

constexpr ::Meta::Voice::Logging::ILogSink*& __cordl_internal_get_logSink() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Logging::LoggerRegistry*  value) ;

constexpr void __cordl_internal_set_logCategory(::Meta::Voice::Logging::LogCategory  value) ;

constexpr void __cordl_internal_set_logSink(::Meta::Voice::Logging::ILogSink*  value) ;

/// @brief Method .ctor, addr 0x9e377ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggerRegistry___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggerRegistry___c__DisplayClass34_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggerRegistry___c__DisplayClass34_0(LoggerRegistry___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggerRegistry___c__DisplayClass34_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggerRegistry___c__DisplayClass34_0(LoggerRegistry___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30958};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LoggerRegistry*  _____4__this;

/// @brief Field logCategory, offset: 0x18, size: 0x4, def value: None
 ::Meta::Voice::Logging::LogCategory  ___logCategory;

/// @brief Field logSink, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::ILogSink*  ___logSink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0, ___logCategory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0, ___logSink) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LoggerRegistry___c__DisplayClass34_0) == 0x28, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
