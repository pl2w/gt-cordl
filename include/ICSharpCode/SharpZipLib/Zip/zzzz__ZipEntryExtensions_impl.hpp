#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntryExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntryExtensions_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__GeneralBitFlags_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions.HasFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions::HasFlag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f7f9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions*>(),
                        {"HasFlag", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions.SetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions::SetFlag)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f7fa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions*>(),
                        {"SetFlag", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions::HasFlag(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions*>(),
                        {"HasFlag", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, entry, flag);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions::SetFlag(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  flag, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions*>(),
                        {"SetFlag", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry, flag, enabled);
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntryExtensions::ZipEntryExtensions()   {
}
