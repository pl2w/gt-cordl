#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceDatabaseFileContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceDatabaseFileContext_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabaseFileContext_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseAttachmentManager_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseSettings_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceDatabaseFileContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.get_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::get_ScreenshotQuality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f09ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"get_ScreenshotQuality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.set_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(int32_t)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::set_ScreenshotQuality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f0a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"set_ScreenshotQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.get_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::get_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0a0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"get_ScreenshotMaxHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.set_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(int32_t)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::set_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f0a0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"set_ScreenshotMaxHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5f03608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.GetAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::GetAll)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0a128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"GetAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.GetRecords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::GetRecords)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f0a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"GetRecords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.RemoveOrphaned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::RemoveOrphaned)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x5f0a274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"RemoveOrphaned", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.ValidFileConsistency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::ValidFileConsistency)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f0a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"ValidFileConsistency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f0a890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::Delete)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5f0a904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Delete", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.IsDatabaseDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::IsDatabaseDependency)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f0ad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"IsDatabaseDependency", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::Delete)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f0ac3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.GenerateRecordAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::BacktraceData*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::GenerateRecordAttachments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0ae2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"GenerateRecordAttachments", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::Save)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x5f0ae44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Save", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::StringW, ::StringW)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::Save)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5f0b500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Save", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext.IsValidRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext::IsValidRecord)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0b6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"IsValidRecord", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__possibleDatabaseExtension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____possibleDatabaseExtension;
}
constexpr ::ArrayW<::StringW> const& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__possibleDatabaseExtension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____possibleDatabaseExtension;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_set__possibleDatabaseExtension(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____possibleDatabaseExtension = value;
}
constexpr int64_t& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__maxDatabaseSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDatabaseSize;
}
constexpr int64_t const& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__maxDatabaseSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDatabaseSize;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_set__maxDatabaseSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDatabaseSize = value;
}
constexpr uint32_t& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__maxRecordNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRecordNumber;
}
constexpr uint32_t const& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__maxRecordNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRecordNumber;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_set__maxRecordNumber(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxRecordNumber = value;
}
constexpr ::System::IO::DirectoryInfo*& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__databaseDirectoryInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____databaseDirectoryInfo;
}
constexpr ::System::IO::DirectoryInfo* const& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__databaseDirectoryInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____databaseDirectoryInfo;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_set__databaseDirectoryInfo(::System::IO::DirectoryInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____databaseDirectoryInfo = value;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__attachmentManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachmentManager;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager* const& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__attachmentManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachmentManager;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_set__attachmentManager(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachmentManager = value;
}
constexpr ::StringW& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_get__path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseFileContext::__cordl_internal_set__path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____path = value;
}
inline int32_t Backtrace::Unity::Services::BacktraceDatabaseFileContext::get_ScreenshotQuality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"get_ScreenshotQuality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext::set_ScreenshotQuality(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"set_ScreenshotQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Backtrace::Unity::Services::BacktraceDatabaseFileContext::get_ScreenshotMaxHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"get_ScreenshotMaxHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext::set_ScreenshotMaxHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"set_ScreenshotMaxHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext::_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Backtrace::Unity::Services::BacktraceDatabaseFileContext::GetAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"GetAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Backtrace::Unity::Services::BacktraceDatabaseFileContext::GetRecords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"GetRecords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext::RemoveOrphaned(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*  existingRecords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"RemoveOrphaned", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingRecords);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseFileContext::ValidFileConsistency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"ValidFileConsistency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext::Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Delete", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseFileContext::IsDatabaseDependency(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"IsDatabaseDependency", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext::Delete(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Backtrace::Unity::Services::BacktraceDatabaseFileContext::GenerateRecordAttachments(::Backtrace::Unity::Model::BacktraceData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"GenerateRecordAttachments", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, data);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseFileContext::Save(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Save", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline int32_t Backtrace::Unity::Services::BacktraceDatabaseFileContext::Save(::StringW  json, ::StringW  destPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"Save", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, json, destPath);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseFileContext::IsValidRecord(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(),
                        {"IsValidRecord", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext* Backtrace::Unity::Services::BacktraceDatabaseFileContext::New_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceDatabaseFileContext*>(settings));
}
/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext"
constexpr  Backtrace::Unity::Services::BacktraceDatabaseFileContext::operator ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext* Backtrace::Unity::Services::BacktraceDatabaseFileContext::i___Backtrace__Unity__Interfaces__IBacktraceDatabaseFileContext() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceDatabaseFileContext::BacktraceDatabaseFileContext()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0a738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0._RemoveOrphaned_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::_RemoveOrphaned_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f0b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0*>(),
                        {"<RemoveOrphaned>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::FileInfo*& Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::__cordl_internal_get_file()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr ::System::IO::FileInfo* const& Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::__cordl_internal_get_file() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::__cordl_internal_set_file(::System::IO::FileInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___file = value;
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::_RemoveOrphaned_b__1(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0*>(),
                        {"<RemoveOrphaned>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0* Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0::BacktraceDatabaseFileContext___c__DisplayClass16_0()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0b758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c._GetRecords_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::*)(::System::IO::FileInfo*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::_GetRecords_b__15_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(),
                        {"<GetRecords>b__15_0", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c._RemoveOrphaned_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::_RemoveOrphaned_b__16_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0b778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(),
                        {"<RemoveOrphaned>b__16_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::setStaticF___9(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*, "<>9", ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(std::forward<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(value));
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c* Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*, "<>9", ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::setStaticF___9__15_0(::System::Func_2<::System::IO::FileInfo*,::System::DateTime>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::IO::FileInfo*,::System::DateTime>*, "<>9__15_0", ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(std::forward<::System::Func_2<::System::IO::FileInfo*,::System::DateTime>*>(value));
}
inline ::System::Func_2<::System::IO::FileInfo*,::System::DateTime>* Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::IO::FileInfo*,::System::DateTime>*, "<>9__15_0", ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::setStaticF___9__16_0(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>*, "<>9__16_0", ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(std::forward<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>*>(value));
}
inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>* Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>*, "<>9__16_0", ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::_GetRecords_b__15_0(::System::IO::FileInfo*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(),
                        {"<GetRecords>b__15_0", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, n);
}
inline ::StringW Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::_RemoveOrphaned_b__16_0(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>(),
                        {"<RemoveOrphaned>b__16_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c* Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c::BacktraceDatabaseFileContext___c()   {
}
