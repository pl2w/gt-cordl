#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseRecord.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_BacktraceDatabaseRawRecord_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_RecordPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_RecordPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_RecordPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.set_RecordPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_RecordPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_RecordPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_DiagnosticDataPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_DiagnosticDataPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_DiagnosticDataPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.set_DiagnosticDataPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_DiagnosticDataPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_DiagnosticDataPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(int64_t)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_Size", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_Record
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceData* (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Record)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Record", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.set_Record
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(::Backtrace::Unity::Model::BacktraceData*)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_Record)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_Record", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_Attachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Attachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Attachments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.set_Attachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_Attachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_Attachments", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_DiagnosticDataJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_DiagnosticDataJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_DiagnosticDataJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.set_DiagnosticDataJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_DiagnosticDataJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_DiagnosticDataJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_Duplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Duplicated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1c3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Duplicated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.BacktraceDataJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::BacktraceDataJson)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f1c40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"BacktraceDataJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.get_BacktraceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceData* (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_BacktraceData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f1c4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_BacktraceData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::ToJson)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f1c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (*)(::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::Deserialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f1c5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"Deserialize", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f1c684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)(::Backtrace::Unity::Model::BacktraceData*)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f1c750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.Increment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::Increment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1c7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.ReadFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (*)(::System::IO::FileInfo*)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::ReadFromFile)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5f1c7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"ReadFromFile", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::Unlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1c9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::System::Guid const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set_Id(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr bool& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get_Locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr bool const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get_Locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set_Locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Locked = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__RecordPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordPath_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__RecordPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordPath_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set__RecordPath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecordPath_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__DiagnosticDataPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DiagnosticDataPath_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__DiagnosticDataPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DiagnosticDataPath_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set__DiagnosticDataPath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DiagnosticDataPath_k__BackingField = value;
}
constexpr int64_t& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__Size_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr int64_t const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__Size_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Size_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set__Size_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Size_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get_Hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hash;
}
constexpr ::StringW const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get_Hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hash;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set_Hash(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hash = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceData*& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__Record_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Record_k__BackingField;
}
constexpr ::Backtrace::Unity::Model::BacktraceData* const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__Record_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Record_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set__Record_k__BackingField(::Backtrace::Unity::Model::BacktraceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Record_k__BackingField = value;
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__Attachments_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attachments_k__BackingField;
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>* const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__Attachments_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attachments_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set__Attachments_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Attachments_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__DiagnosticDataJson_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DiagnosticDataJson_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__DiagnosticDataJson_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DiagnosticDataJson_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set__DiagnosticDataJson_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DiagnosticDataJson_k__BackingField = value;
}
constexpr int32_t& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_RecordPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_RecordPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_RecordPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_RecordPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_DiagnosticDataPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_DiagnosticDataPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_DiagnosticDataPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_DiagnosticDataPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_Size(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_Size", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::BacktraceData* Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Record()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Record", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceData*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_Record(::Backtrace::Unity::Model::BacktraceData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_Record", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Attachments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Attachments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_Attachments(::System::Collections::Generic::ICollection_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_Attachments", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_DiagnosticDataJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_DiagnosticDataJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::set_DiagnosticDataJson(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"set_DiagnosticDataJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Duplicated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Duplicated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::BacktraceDataJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"BacktraceDataJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceData* Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::get_BacktraceData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"get_BacktraceData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceData*>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::Deserialize(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"Deserialize", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(nullptr, ___internal_method, json);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::_ctor(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord  rawRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawRecord);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::_ctor(::Backtrace::Unity::Model::BacktraceData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::Increment()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::ReadFromFile(::System::IO::FileInfo*  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(),
                        {"ReadFromFile", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(nullptr, ___internal_method, file);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::Unlock()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::New_ctor(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord  rawRecord)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(rawRecord));
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::New_ctor(::Backtrace::Unity::Model::BacktraceData*  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(data));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord::BacktraceDatabaseRecord()   {
}
