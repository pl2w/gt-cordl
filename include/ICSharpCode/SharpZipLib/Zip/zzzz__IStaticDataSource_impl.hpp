#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/IStaticDataSource.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IStaticDataSource_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::IStaticDataSource::*)()>(&::ICSharpCode::SharpZipLib::Zip::IStaticDataSource::GetSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::IStaticDataSource::GetSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
