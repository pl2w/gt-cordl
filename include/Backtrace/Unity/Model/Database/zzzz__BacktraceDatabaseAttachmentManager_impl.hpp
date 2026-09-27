#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseAttachmentManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseAttachmentManager_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseSettings_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.get_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::get_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"get_ScreenshotMaxHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.set_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(int32_t)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::set_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"set_ScreenshotMaxHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.get_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::get_ScreenshotQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"get_ScreenshotQuality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.set_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(int32_t)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::set_ScreenshotQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"set_ScreenshotQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f1b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.GetReportAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(::Backtrace::Unity::Model::BacktraceData*)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetReportAttachments)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5f1b80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetReportAttachments", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.AddIfPathIsNotEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(::System::Collections::Generic::List_1<::StringW>*, ::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::AddIfPathIsNotEmpty)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f1bf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"AddIfPathIsNotEmpty", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.GetMinidumpPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(::Backtrace::Unity::Model::BacktraceData*, ::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetMinidumpPath)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f1c05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetMinidumpPath", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.GetScreenshotPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetScreenshotPath)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5f1b9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetScreenshotPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager.GetUnityPlayerLogFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::*)(::Backtrace::Unity::Model::BacktraceData*, ::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetUnityPlayerLogFile)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f1bff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetUnityPlayerLogFile", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__ScreenshotMaxHeight_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenshotMaxHeight_k__BackingField;
}
constexpr int32_t const& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__ScreenshotMaxHeight_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenshotMaxHeight_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_set__ScreenshotMaxHeight_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScreenshotMaxHeight_k__BackingField = value;
}
constexpr int32_t& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__ScreenshotQuality_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenshotQuality_k__BackingField;
}
constexpr int32_t const& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__ScreenshotQuality_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenshotQuality_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_set__ScreenshotQuality_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScreenshotQuality_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* const& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_set__settings(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr float_t& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__lastScreenTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScreenTime;
}
constexpr float_t const& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__lastScreenTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScreenTime;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_set__lastScreenTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastScreenTime = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__lastScreenPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScreenPath;
}
constexpr ::StringW const& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__lastScreenPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScreenPath;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_set__lastScreenPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastScreenPath = value;
}
constexpr ::System::Object*& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr ::System::Object* const& Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
inline int32_t Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::get_ScreenshotMaxHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"get_ScreenshotMaxHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::set_ScreenshotMaxHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"set_ScreenshotMaxHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::get_ScreenshotQuality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"get_ScreenshotQuality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::set_ScreenshotQuality(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"set_ScreenshotQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetReportAttachments(::Backtrace::Unity::Model::BacktraceData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetReportAttachments", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, data);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::AddIfPathIsNotEmpty(::System::Collections::Generic::List_1<::StringW>*  source, ::StringW  attachmentPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"AddIfPathIsNotEmpty", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, attachmentPath);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetMinidumpPath(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::StringW  dataPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetMinidumpPath", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, backtraceData, dataPrefix);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetScreenshotPath(::StringW  dataPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetScreenshotPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, dataPrefix);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::GetUnityPlayerLogFile(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::StringW  dataPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(),
                        {"GetUnityPlayerLogFile", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, backtraceData, dataPrefix);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager* Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::New_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*>(settings));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager::BacktraceDatabaseAttachmentManager()   {
}
