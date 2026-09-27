#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/PathUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__PathUtils_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__PathUtils_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::PathUtils.DropPathRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::PathUtils::DropPathRoot)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9ffc3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils*>(),
                        {"DropPathRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::PathUtils.GetTempFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::PathUtils::GetTempFileName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9ffc650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils*>(),
                        {"GetTempFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW ICSharpCode::SharpZipLib::Core::PathUtils::DropPathRoot(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils*>(),
                        {"DropPathRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW ICSharpCode::SharpZipLib::Core::PathUtils::GetTempFileName(::StringW  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils*>(),
                        {"GetTempFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, original);
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::PathUtils::PathUtils()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::*)()>(&::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffc648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0._DropPathRoot_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::*)(char16_t, int32_t)>(&::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::_DropPathRoot_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9ffc730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0*>(),
                        {"<DropPathRoot>b__0", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t>& ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::__cordl_internal_get_invalidChars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidChars;
}
constexpr ::ArrayW<char16_t> const& ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::__cordl_internal_get_invalidChars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidChars;
}
constexpr void ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::__cordl_internal_set_invalidChars(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invalidChars = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::__cordl_internal_get_cleanRootSep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cleanRootSep;
}
constexpr bool const& ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::__cordl_internal_get_cleanRootSep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cleanRootSep;
}
constexpr void ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::__cordl_internal_set_cleanRootSep(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cleanRootSep = value;
}
inline void ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::_DropPathRoot_b__0(char16_t  c, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0*>(),
                        {"<DropPathRoot>b__0", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, c, i);
}
inline ::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0* ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::PathUtils___c__DisplayClass0_0::PathUtils___c__DisplayClass0_0()   {
}
