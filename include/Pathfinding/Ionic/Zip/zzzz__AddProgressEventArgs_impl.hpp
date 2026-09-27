#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/AddProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__AddProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::AddProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::AddProgressEventArgs::*)(::StringW, ::Pathfinding::Ionic::Zip::ZipProgressEventType)>(&::Pathfinding::Ionic::Zip::AddProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::AddProgressEventArgs.AfterEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::AddProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int32_t)>(&::Pathfinding::Ionic::Zip::AddProgressEventArgs::AfterEntry)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa68c234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>(),
                        {"AfterEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::AddProgressEventArgs::_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveName, flavor);
}
inline ::Pathfinding::Ionic::Zip::AddProgressEventArgs* Pathfinding::Ionic::Zip::AddProgressEventArgs::AfterEntry(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int32_t  entriesTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>(),
                        {"AfterEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>(nullptr, ___internal_method, archiveName, entry, entriesTotal);
}
inline ::Pathfinding::Ionic::Zip::AddProgressEventArgs* Pathfinding::Ionic::Zip::AddProgressEventArgs::New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>(archiveName, flavor));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::AddProgressEventArgs::AddProgressEventArgs()   {
}
