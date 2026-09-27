#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/LckInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/Lck/Core/FFI/zzzz__LckInfo_def.hpp"
#include "Liv/Lck/Core/zzzz__LckInfo_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckInfo.AllocateFromLckInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::LckInfo (*)(::Liv::Lck::Core::LckInfo)>(&::Liv::Lck::Core::FFI::LckInfo::AllocateFromLckInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9cfe4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckInfo>(),
                        {"AllocateFromLckInfo", {}, {::i2c::type_of<::Liv::Lck::Core::LckInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckInfo.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::FFI::LckInfo::*)()>(&::Liv::Lck::Core::FFI::LckInfo::Free)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d020dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckInfo>(),
                        {"Free", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::FFI::LckInfo::*)(::Liv::Lck::Core::LckInfo)>(&::Liv::Lck::Core::FFI::LckInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d020b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::LckInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::Core::FFI::LckInfo Liv::Lck::Core::FFI::LckInfo::AllocateFromLckInfo(::Liv::Lck::Core::LckInfo  lckInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckInfo>(),
                        {"AllocateFromLckInfo", {}, {::i2c::type_of<::Liv::Lck::Core::LckInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::LckInfo>(nullptr, ___internal_method, lckInfo);
}
inline void Liv::Lck::Core::FFI::LckInfo::Free()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckInfo>(),
                        {"Free", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Liv::Lck::Core::FFI::LckInfo::_ctor(::Liv::Lck::Core::LckInfo  lckInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::LckInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lckInfo);
}
// Ctor Parameters [CppParam { name: "Version", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BuildNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::FFI::LckInfo::LckInfo(::System::IntPtr  Version, int32_t  BuildNumber) noexcept  {
this->Version = Version;
this->BuildNumber = BuildNumber;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::FFI::LckInfo::LckInfo()   {
}
