#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ITaggedDataFactory.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedDataFactory_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedData_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ITaggedData* (::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory::*)(int16_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::ICSharpCode::SharpZipLib::Zip::ITaggedData* ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory::Create(int16_t  tag, ::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(this, ___internal_method, tag, data, offset, count);
}
