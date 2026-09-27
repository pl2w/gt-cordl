#pragma once
// IWYU pragma private; include "VYaml/Internal/ReusableByteSequenceBuilderPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__ReusableByteSequenceBuilderPool_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "VYaml/Internal/zzzz__ReusableByteSequenceBuilder_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceBuilderPool.Rent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Internal::ReusableByteSequenceBuilder* (*)()>(&::VYaml::Internal::ReusableByteSequenceBuilderPool::Rent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb9679d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilderPool*>(),
                        {"Rent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceBuilderPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::VYaml::Internal::ReusableByteSequenceBuilder*)>(&::VYaml::Internal::ReusableByteSequenceBuilderPool::Return)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb967a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilderPool*>(),
                        {"Return", {}, {::i2c::type_of<::VYaml::Internal::ReusableByteSequenceBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Internal::ReusableByteSequenceBuilderPool::setStaticF_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>*, "queue", ::VYaml::Internal::ReusableByteSequenceBuilderPool*>(std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>* VYaml::Internal::ReusableByteSequenceBuilderPool::getStaticF_queue()  {
return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>*, "queue", ::VYaml::Internal::ReusableByteSequenceBuilderPool*>();
}
inline ::VYaml::Internal::ReusableByteSequenceBuilder* VYaml::Internal::ReusableByteSequenceBuilderPool::Rent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilderPool*>(),
                        {"Rent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Internal::ReusableByteSequenceBuilder*>(nullptr, ___internal_method);
}
inline void VYaml::Internal::ReusableByteSequenceBuilderPool::Return(::VYaml::Internal::ReusableByteSequenceBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilderPool*>(),
                        {"Return", {}, {::i2c::type_of<::VYaml::Internal::ReusableByteSequenceBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
// Ctor Parameters []
constexpr ::VYaml::Internal::ReusableByteSequenceBuilderPool::ReusableByteSequenceBuilderPool()   {
}
