#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/StaticDiskDataSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__StaticDiskDataSource_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IStaticDataSource_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f8e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::*)()>(&::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::GetSource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f8ea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource*>(),
                        {"GetSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::__cordl_internal_get_fileName_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::__cordl_internal_get_fileName_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::__cordl_internal_set_fileName_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::_ctor(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::GetSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource*>(),
                        {"GetSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource* ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::New_ctor(::StringW  fileName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource*>(fileName));
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::IStaticDataSource"
constexpr  ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::operator ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::IStaticDataSource"
constexpr ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::i___ICSharpCode__SharpZipLib__Zip__IStaticDataSource() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource::StaticDiskDataSource()   {
}
