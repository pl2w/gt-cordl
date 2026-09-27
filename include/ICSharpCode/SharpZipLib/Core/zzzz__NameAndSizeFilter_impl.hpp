#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/NameAndSizeFilter.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__PathFilter_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__NameAndSizeFilter_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::*)(::StringW, int64_t, int64_t)>(&::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9ffc244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter.IsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::IsMatch)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ffc34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter.get_MinSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::*)()>(&::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::get_MinSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffc3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"get_MinSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter.set_MinSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::set_MinSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9ffc284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"set_MinSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter.get_MaxSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::*)()>(&::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::get_MaxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffc3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"get_MaxSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter.set_MaxSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::set_MaxSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9ffc2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"set_MaxSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::__cordl_internal_get_minSize_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSize_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::__cordl_internal_get_minSize_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSize_;
}
constexpr void ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::__cordl_internal_set_minSize_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSize_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::__cordl_internal_get_maxSize_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSize_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::__cordl_internal_get_maxSize_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSize_;
}
constexpr void ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::__cordl_internal_set_maxSize_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSize_ = value;
}
inline void ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::_ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter, minSize, maxSize);
}
inline bool ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::IsMatch(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline int64_t ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::get_MinSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"get_MinSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::set_MinSize(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"set_MinSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"get_MaxSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::set_MaxSize(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(),
                        {"set_MaxSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter* ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::New_ctor(::StringW  filter, int64_t  minSize, int64_t  maxSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter*>(filter, minSize, maxSize));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::NameAndSizeFilter::NameAndSizeFilter()   {
}
