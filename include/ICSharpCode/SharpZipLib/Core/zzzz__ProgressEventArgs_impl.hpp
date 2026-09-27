#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ProgressEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ProgressEventArgs_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::*)(::StringW, int64_t, int64_t)>(&::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ff9b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs.get_ContinueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_ContinueRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_ContinueRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs.set_ContinueRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::*)(bool)>(&::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::set_ContinueRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"set_ContinueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs.get_PercentComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_PercentComplete)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ff9c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_PercentComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs.get_Processed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_Processed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_Processed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs.get_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::*)()>(&::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_Target", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_name_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_name_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_set_name_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_processed_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processed_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_processed_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processed_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_set_processed_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processed_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_target_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_target_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_set_target_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_continueRunning_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_get_continueRunning_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueRunning_;
}
constexpr void ICSharpCode::SharpZipLib::Core::ProgressEventArgs::__cordl_internal_set_continueRunning_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueRunning_ = value;
}
inline void ICSharpCode::SharpZipLib::Core::ProgressEventArgs::_ctor(::StringW  name, int64_t  processed, int64_t  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, processed, target);
}
inline ::StringW ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_ContinueRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_ContinueRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Core::ProgressEventArgs::set_ContinueRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"set_ContinueRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_PercentComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_Processed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_Processed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Core::ProgressEventArgs::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs* ICSharpCode::SharpZipLib::Core::ProgressEventArgs::New_ctor(::StringW  name, int64_t  processed, int64_t  target)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*>(name, processed, target));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs::ProgressEventArgs()   {
}
