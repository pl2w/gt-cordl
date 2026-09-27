#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GuidUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__GuidUtil_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GuidUtil.Compose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(uint64_t, uint64_t)>(&::Unity::XR::CoreUtils::GuidUtil::Compose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb3f7f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GuidUtil*>(),
                        {"Compose", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Guid Unity::XR::CoreUtils::GuidUtil::Compose(uint64_t  low, uint64_t  high)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GuidUtil*>(),
                        {"Compose", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, low, high);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GuidUtil::GuidUtil()   {
}
