#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/Storage/BacktraceStorageLogManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/Storage/zzzz__BacktraceStorageLogManager_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/Storage/zzzz__IBreadcrumbFile_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BreadcrumbLevel_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IArchiveableBreadcrumbManager_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceLogManager_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.get_BreadcrumbsFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::get_BreadcrumbsFilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"get_BreadcrumbsFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.set_BreadcrumbsFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::set_BreadcrumbsFilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1e2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"set_BreadcrumbsFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.get_BreadcrumbsSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::get_BreadcrumbsSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1e2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"get_BreadcrumbsSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.set_BreadcrumbsSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)(int64_t)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::set_BreadcrumbsSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f1e2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"set_BreadcrumbsSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.get_BreadcrumbFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile* (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::get_BreadcrumbFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1e314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"get_BreadcrumbFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.set_BreadcrumbFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::set_BreadcrumbFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1e31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"set_BreadcrumbFile", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5f1e324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Enable)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5f1e5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)(::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Add)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5f1e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.CreateBreadcrumbJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)(double_t, ::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::CreateBreadcrumbJson)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5f1ec9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"CreateBreadcrumbJson", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.AppendBreadcrumb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)(::ArrayW<uint8_t>)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::AppendBreadcrumb)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5f1f48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"AppendBreadcrumb", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.ClearOldLogs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::ClearOldLogs)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5f1f02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"ClearOldLogs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.GetNextStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::GetNextStartPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f1f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"GetNextStartPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Clear)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f1f9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Length)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f1fb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.BreadcrumbId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::BreadcrumbId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"BreadcrumbId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager.Archive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Archive)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f1fb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Archive", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__BreadcrumbsFilePath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BreadcrumbsFilePath_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__BreadcrumbsFilePath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BreadcrumbsFilePath_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__BreadcrumbsFilePath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BreadcrumbsFilePath_k__BackingField = value;
}
constexpr int64_t& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__breadcrumbsSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbsSize;
}
constexpr int64_t const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__breadcrumbsSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbsSize;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__breadcrumbsSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breadcrumbsSize = value;
}
constexpr bool& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__emptyFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyFile;
}
constexpr bool const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__emptyFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyFile;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__emptyFile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emptyFile = value;
}
constexpr double_t& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__breadcrumbId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbId;
}
constexpr double_t const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__breadcrumbId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbId;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__breadcrumbId(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breadcrumbId = value;
}
constexpr ::System::Object*& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__lockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
constexpr ::System::Object* const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__lockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__lockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockObject = value;
}
constexpr int64_t& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr int64_t const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set_currentSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
constexpr ::System::Collections::Generic::Queue_1<int64_t>*& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__logSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logSize;
}
constexpr ::System::Collections::Generic::Queue_1<int64_t>* const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__logSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logSize;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__logSize(::System::Collections::Generic::Queue_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logSize = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__storagePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storagePath;
}
constexpr ::StringW const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__storagePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storagePath;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__storagePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storagePath = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__BreadcrumbFile_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BreadcrumbFile_k__BackingField;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile* const& Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_get__BreadcrumbFile_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BreadcrumbFile_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::__cordl_internal_set__BreadcrumbFile_k__BackingField(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BreadcrumbFile_k__BackingField = value;
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::setStaticF_NewRow(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "NewRow", ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::getStaticF_NewRow()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "NewRow", ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>();
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::setStaticF_EndOfDocument(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EndOfDocument", ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::getStaticF_EndOfDocument()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EndOfDocument", ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>();
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::setStaticF_StartOfDocument(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "StartOfDocument", ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::getStaticF_StartOfDocument()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "StartOfDocument", ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>();
}
inline ::StringW Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::get_BreadcrumbsFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"get_BreadcrumbsFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::set_BreadcrumbsFilePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"set_BreadcrumbsFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::get_BreadcrumbsSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"get_BreadcrumbsSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::set_BreadcrumbsSize(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"set_BreadcrumbsSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile* Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::get_BreadcrumbFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"get_BreadcrumbFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::set_BreadcrumbFile(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"set_BreadcrumbFile", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::_ctor(::StringW  storagePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storagePath);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Add(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, level, type, attributes);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::CreateBreadcrumbJson(double_t  id, ::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"CreateBreadcrumbJson", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method, id, message, level, type, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::AppendBreadcrumb(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"AppendBreadcrumb", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytes);
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::ClearOldLogs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"ClearOldLogs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::GetNextStartPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"GetNextStartPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::BreadcrumbId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"BreadcrumbId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::Archive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(),
                        {"Archive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager* Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::New_ctor(::StringW  storagePath)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*>(storagePath));
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr  Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::operator ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager* Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::i___Backtrace__Unity__Model__Breadcrumbs__IBacktraceLogManager() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager"
constexpr  Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::operator ::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager* Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::i___Backtrace__Unity__Model__Breadcrumbs__IArchiveableBreadcrumbManager() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager::BacktraceStorageLogManager()   {
}
