#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/DirectoryEventArgs.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ScanEventArgs_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__DirectoryEventArgs_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9ff9c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs.get_HasMatchingFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::get_HasMatchingFiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>(),
                        {"get_HasMatchingFiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::__cordl_internal_get_hasMatchingFiles_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMatchingFiles_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::__cordl_internal_get_hasMatchingFiles_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMatchingFiles_;
}
constexpr void ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::__cordl_internal_set_hasMatchingFiles_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasMatchingFiles_ = value;
}
inline void ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::_ctor(::StringW  name, bool  hasMatchingFiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, hasMatchingFiles);
}
inline bool ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::get_HasMatchingFiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>(),
                        {"get_HasMatchingFiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs* ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::New_ctor(::StringW  name, bool  hasMatchingFiles)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>(name, hasMatchingFiles));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs::DirectoryEventArgs()   {
}
