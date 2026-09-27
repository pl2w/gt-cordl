#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ScanEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ScanEventArgs_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ScanEventArgs::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::ScanEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9ff9acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanEventArgs.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Core::ScanEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ScanEventArgs::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanEventArgs.get_ContinueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::ScanEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ScanEventArgs::get_ContinueRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {"get_ContinueRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanEventArgs.set_ContinueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ScanEventArgs::*)(bool)>(&::ICSharpCode::SharpZipLib::Core::ScanEventArgs::set_ContinueRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {"set_ContinueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& ICSharpCode::SharpZipLib::Core::ScanEventArgs::__cordl_internal_get_name_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Core::ScanEventArgs::__cordl_internal_get_name_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ScanEventArgs::__cordl_internal_set_name_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Core::ScanEventArgs::__cordl_internal_get_continueRunning_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Core::ScanEventArgs::__cordl_internal_get_continueRunning_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ScanEventArgs::__cordl_internal_set_continueRunning_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueRunning_ = value;
}
inline void ICSharpCode::SharpZipLib::Core::ScanEventArgs::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW ICSharpCode::SharpZipLib::Core::ScanEventArgs::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Core::ScanEventArgs::get_ContinueRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {"get_ContinueRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Core::ScanEventArgs::set_ContinueRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(),
                        {"set_ContinueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Core::ScanEventArgs* ICSharpCode::SharpZipLib::Core::ScanEventArgs::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::ScanEventArgs*>(name));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::ScanEventArgs::ScanEventArgs()   {
}
