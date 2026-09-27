#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ExtractProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::*)(::StringW, ::Pathfinding::Ionic::Zip::ZipProgressEventType)>(&::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::*)()>(&::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs.BeforeExtractEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, ::StringW)>(&::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::BeforeExtractEntry)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa68c478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"BeforeExtractEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs.ExtractExisting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, ::StringW)>(&::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::ExtractExisting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa68c51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"ExtractExisting", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs.AfterExtractEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, ::StringW)>(&::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::AfterExtractEntry)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa68c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"AfterExtractEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs.ByteUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int64_t, int64_t)>(&::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::ByteUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa68c664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"ByteUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Pathfinding::Ionic::Zip::ExtractProgressEventArgs::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ExtractProgressEventArgs::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Pathfinding::Ionic::Zip::ExtractProgressEventArgs::__cordl_internal_set__target(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
inline void Pathfinding::Ionic::Zip::ExtractProgressEventArgs::_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveName, flavor);
}
inline void Pathfinding::Ionic::Zip::ExtractProgressEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* Pathfinding::Ionic::Zip::ExtractProgressEventArgs::BeforeExtractEntry(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  extractLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"BeforeExtractEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, extractLocation);
}
inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* Pathfinding::Ionic::Zip::ExtractProgressEventArgs::ExtractExisting(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  extractLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"ExtractExisting", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, extractLocation);
}
inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* Pathfinding::Ionic::Zip::ExtractProgressEventArgs::AfterExtractEntry(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  extractLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"AfterExtractEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, extractLocation);
}
inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* Pathfinding::Ionic::Zip::ExtractProgressEventArgs::ByteUpdate(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesWritten, int64_t  totalBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(),
                        {"ByteUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, bytesWritten, totalBytes);
}
inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* Pathfinding::Ionic::Zip::ExtractProgressEventArgs::New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>(archiveName, flavor));
}
inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* Pathfinding::Ionic::Zip::ExtractProgressEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs::ExtractProgressEventArgs()   {
}
