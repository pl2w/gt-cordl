#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ScanFailureEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ScanFailureEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::*)(::StringW, ::System::Exception*)>(&::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ff9c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs.get_Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"get_Exception", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs.get_ContinueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::get_ContinueRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"get_ContinueRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs.set_ContinueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::*)(bool)>(&::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::set_ContinueRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"set_ContinueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_get_name_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_get_name_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_set_name_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name_ = value;
}
constexpr ::System::Exception*& ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_get_exception_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception_;
}
constexpr ::System::Exception* const& ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_get_exception_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_set_exception_(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exception_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_get_continueRunning_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_get_continueRunning_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::__cordl_internal_set_continueRunning_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueRunning_ = value;
}
inline void ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::_ctor(::StringW  name, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, e);
}
inline ::StringW ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Exception* ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"get_Exception", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::get_ContinueRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"get_ContinueRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::set_ContinueRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(),
                        {"set_ContinueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs* ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::New_ctor(::StringW  name, ::System::Exception*  e)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*>(name, e));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs::ScanFailureEventArgs()   {
}
