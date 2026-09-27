#pragma once
// IWYU pragma private; include "Utilities/GTProfiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Utilities/zzzz__GTProfiler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Utilities::GTProfiler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Utilities::GTProfiler::*)()>(&::Utilities::GTProfiler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b710c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::GTProfiler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::GTProfiler.BeginSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Utilities::GTProfiler* (*)(::StringW)>(&::Utilities::GTProfiler::BeginSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b710c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::GTProfiler*>(),
                        {"BeginSample", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::GTProfiler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Utilities::GTProfiler::*)()>(&::Utilities::GTProfiler::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b710d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::GTProfiler*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Utilities::GTProfiler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::GTProfiler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Utilities::GTProfiler* Utilities::GTProfiler::BeginSample(::StringW  sampleName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::GTProfiler*>(),
                        {"BeginSample", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Utilities::GTProfiler*>(nullptr, ___internal_method, sampleName);
}
inline void Utilities::GTProfiler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::GTProfiler*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Utilities::GTProfiler* Utilities::GTProfiler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Utilities::GTProfiler*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Utilities::GTProfiler::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Utilities::GTProfiler::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Utilities::GTProfiler::GTProfiler()   {
}
