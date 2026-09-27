#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceDatabaseFileContext.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabaseFileContext_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.get_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::get_ScreenshotQuality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.set_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)(int32_t)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::set_ScreenshotQuality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.get_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::get_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.set_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)(int32_t)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::set_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.GetRecords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::GetRecords)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.GetAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::GetAll)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.ValidFileConsistency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::ValidFileConsistency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.RemoveOrphaned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::RemoveOrphaned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::Delete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.GenerateRecordAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::BacktraceData*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::GenerateRecordAttachments)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::Save)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext.IsValidRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::IsValidRecord)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 12}
                ));
    return ___internal_method;
  }
};
inline int32_t Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::get_ScreenshotQuality()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::set_ScreenshotQuality(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::get_ScreenshotMaxHeight()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::set_ScreenshotMaxHeight(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::GetRecords()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::GetAll()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*>(this, ___internal_method);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::ValidFileConsistency()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::RemoveOrphaned(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*  existingRecords)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingRecords);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::GenerateRecordAttachments(::Backtrace::Unity::Model::BacktraceData*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method, data);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::Save(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext::IsValidRecord(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
