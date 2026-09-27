#pragma once
// IWYU pragma private; include "VYaml/Internal/StreamHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__StreamHelper_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "VYaml/Internal/zzzz__ReusableByteSequenceBuilder_def.hpp"
#include "VYaml/Internal/zzzz__StreamHelper__ReadAsSequenceAsync_d__0_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::StreamHelper.ReadAsSequenceAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<::VYaml::Internal::ReusableByteSequenceBuilder*> (*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::VYaml::Internal::StreamHelper::ReadAsSequenceAsync)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb96a9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::StreamHelper*>(),
                        {"ReadAsSequenceAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::StreamHelper.NewArrayCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::VYaml::Internal::StreamHelper::NewArrayCapacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb96ab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::StreamHelper*>(),
                        {"NewArrayCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::ValueTask_1<::VYaml::Internal::ReusableByteSequenceBuilder*> VYaml::Internal::StreamHelper::ReadAsSequenceAsync(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::StreamHelper*>(),
                        {"ReadAsSequenceAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<::VYaml::Internal::ReusableByteSequenceBuilder*>>(nullptr, ___internal_method, stream, cancellation);
}
inline int32_t VYaml::Internal::StreamHelper::NewArrayCapacity(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::StreamHelper*>(),
                        {"NewArrayCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
// Ctor Parameters []
constexpr ::VYaml::Internal::StreamHelper::StreamHelper()   {
}
