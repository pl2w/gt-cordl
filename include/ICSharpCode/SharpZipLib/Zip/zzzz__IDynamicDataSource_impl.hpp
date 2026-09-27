#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/IDynamicDataSource.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IDynamicDataSource_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource::GetSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::IDynamicDataSource::GetSource(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, entry, name);
}
