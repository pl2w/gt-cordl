#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ITaggedData.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedData_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ITaggedData.get_TagID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ICSharpCode::SharpZipLib::Zip::ITaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ITaggedData::get_TagID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ITaggedData.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ITaggedData::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ITaggedData::SetData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ITaggedData.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::ITaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ITaggedData::GetData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int16_t ICSharpCode::SharpZipLib::Zip::ITaggedData::get_TagID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ITaggedData::SetData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, count);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ITaggedData::GetData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
