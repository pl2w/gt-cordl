#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)()>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa68bed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)(::StringW, ::Pathfinding::Ionic::Zip::ZipProgressEventType)>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa68bf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs.set_EntriesTotal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)(int32_t)>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_EntriesTotal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68bfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_EntriesTotal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs.set_CurrentEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_CurrentEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68bfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_CurrentEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs.get_Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)()>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::get_Cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68bfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"get_Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs.set_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)(::Pathfinding::Ionic::Zip::ZipProgressEventType)>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_EventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68bfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_EventType", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs.set_ArchiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_ArchiveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68bfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_ArchiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs.set_BytesTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_BytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68bfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_BytesTransferred", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipProgressEventArgs.set_TotalBytesToTransfer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipProgressEventArgs::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_TotalBytesToTransfer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68bfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_TotalBytesToTransfer", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__entriesTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesTotal;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__entriesTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesTotal;
}
constexpr void Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_set__entriesTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entriesTotal = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__cancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancel;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__cancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancel;
}
constexpr void Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_set__cancel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancel = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__latestEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestEntry;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__latestEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestEntry;
}
constexpr void Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_set__latestEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestEntry = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__flavor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flavor;
}
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType const& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__flavor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flavor;
}
constexpr void Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_set__flavor(::Pathfinding::Ionic::Zip::ZipProgressEventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flavor = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__archiveName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__archiveName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveName;
}
constexpr void Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_set__archiveName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____archiveName = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__bytesTransferred()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesTransferred;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__bytesTransferred() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesTransferred;
}
constexpr void Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_set__bytesTransferred(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesTransferred = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__totalBytesToTransfer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalBytesToTransfer;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_get__totalBytesToTransfer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalBytesToTransfer;
}
constexpr void Pathfinding::Ionic::Zip::ZipProgressEventArgs::__cordl_internal_set__totalBytesToTransfer(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalBytesToTransfer = value;
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveName, flavor);
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_EntriesTotal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_EntriesTotal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_CurrentEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_CurrentEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Ionic::Zip::ZipProgressEventArgs::get_Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"get_Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_EventType(::Pathfinding::Ionic::Zip::ZipProgressEventType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_EventType", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_ArchiveName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_ArchiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_BytesTransferred(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_BytesTransferred", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipProgressEventArgs::set_TotalBytesToTransfer(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(),
                        {"set_TotalBytesToTransfer", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::ZipProgressEventArgs* Pathfinding::Ionic::Zip::ZipProgressEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>());
}
inline ::Pathfinding::Ionic::Zip::ZipProgressEventArgs* Pathfinding::Ionic::Zip::ZipProgressEventArgs::New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipProgressEventArgs*>(archiveName, flavor));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventArgs::ZipProgressEventArgs()   {
}
