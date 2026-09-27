#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/INameTransform.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__INameTransform_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::INameTransform.TransformFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Core::INameTransform::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::INameTransform::TransformFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::INameTransform.TransformDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Core::INameTransform::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::INameTransform::TransformDirectory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW ICSharpCode::SharpZipLib::Core::INameTransform::TransformFile(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW ICSharpCode::SharpZipLib::Core::INameTransform::TransformDirectory(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
