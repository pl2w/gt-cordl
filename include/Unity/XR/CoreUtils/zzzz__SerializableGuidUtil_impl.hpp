#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/SerializableGuidUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__SerializableGuidUtil_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__SerializableGuid_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuidUtil.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::SerializableGuid (*)(::System::Guid)>(&::Unity::XR::CoreUtils::SerializableGuidUtil::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb3faa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuidUtil*>(),
                        {"Create", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::SerializableGuid Unity::XR::CoreUtils::SerializableGuidUtil::Create(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::SerializableGuidUtil*>(),
                        {"Create", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::SerializableGuid>(nullptr, ___internal_method, guid);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::SerializableGuidUtil::SerializableGuidUtil()   {
}
