#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/DynamicDiskDataSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__DynamicDiskDataSource_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IDynamicDataSource_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::GetSource)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f8ea3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource*>(),
                        {"GetSource", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::*)()>(&::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f87e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::GetSource(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource*>(),
                        {"GetSource", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, entry, name);
}
inline void ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource* ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource*>());
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource"
constexpr  ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::operator ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource"
constexpr ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource* ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::i___ICSharpCode__SharpZipLib__Zip__IDynamicDataSource() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::DynamicDiskDataSource::DynamicDiskDataSource()   {
}
