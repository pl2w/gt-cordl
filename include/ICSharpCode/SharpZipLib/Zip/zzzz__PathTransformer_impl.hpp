#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/PathTransformer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__PathTransformer_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__INameTransform_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::PathTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::PathTransformer::*)()>(&::ICSharpCode::SharpZipLib::Zip::PathTransformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fce198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::PathTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::PathTransformer.TransformDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::PathTransformer::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::PathTransformer::TransformDirectory)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9fce1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::PathTransformer*>(),
                        {"TransformDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::PathTransformer.TransformFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::PathTransformer::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::PathTransformer::TransformFile)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fce27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::PathTransformer*>(),
                        {"TransformFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Zip::PathTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::PathTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::PathTransformer::TransformDirectory(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::PathTransformer*>(),
                        {"TransformDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::PathTransformer::TransformFile(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::PathTransformer*>(),
                        {"TransformFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::ICSharpCode::SharpZipLib::Zip::PathTransformer* ICSharpCode::SharpZipLib::Zip::PathTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::PathTransformer*>());
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr  ICSharpCode::SharpZipLib::Zip::PathTransformer::operator ::ICSharpCode::SharpZipLib::Core::INameTransform*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Core::INameTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* ICSharpCode::SharpZipLib::Zip::PathTransformer::i___ICSharpCode__SharpZipLib__Core__INameTransform() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Core::INameTransform*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::PathTransformer::PathTransformer()   {
}
