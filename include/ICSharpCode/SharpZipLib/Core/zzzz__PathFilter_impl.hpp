#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/PathFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__PathFilter_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__IScanFilter_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__NameFilter_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::PathFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::PathFilter::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::PathFilter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ffa44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathFilter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::PathFilter.IsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::PathFilter::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::PathFilter::IsMatch)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ffbb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathFilter*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathFilter*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter*& ICSharpCode::SharpZipLib::Core::PathFilter::__cordl_internal_get_nameFilter_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameFilter_;
}
constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter* const& ICSharpCode::SharpZipLib::Core::PathFilter::__cordl_internal_get_nameFilter_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameFilter_;
}
constexpr void ICSharpCode::SharpZipLib::Core::PathFilter::__cordl_internal_set_nameFilter_(::ICSharpCode::SharpZipLib::Core::NameFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameFilter_ = value;
}
inline void ICSharpCode::SharpZipLib::Core::PathFilter::_ctor(::StringW  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathFilter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline bool ICSharpCode::SharpZipLib::Core::PathFilter::IsMatch(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::PathFilter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::ICSharpCode::SharpZipLib::Core::PathFilter* ICSharpCode::SharpZipLib::Core::PathFilter::New_ctor(::StringW  filter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::PathFilter*>(filter));
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Core::IScanFilter"
constexpr  ICSharpCode::SharpZipLib::Core::PathFilter::operator ::ICSharpCode::SharpZipLib::Core::IScanFilter*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Core::IScanFilter"
constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter* ICSharpCode::SharpZipLib::Core::PathFilter::i___ICSharpCode__SharpZipLib__Core__IScanFilter() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::PathFilter::PathFilter()   {
}
