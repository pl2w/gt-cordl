#pragma once
// IWYU pragma private; include "VYaml/Internal/ReusableByteSequenceSegment.hpp"
#include "System/Buffers/zzzz__ReadOnlySequenceSegment_1_impl.hpp"
#include "VYaml/Internal/zzzz__ReusableByteSequenceSegment_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::ReusableByteSequenceSegment::*)()>(&::VYaml::Internal::ReusableByteSequenceSegment::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb967bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceSegment.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::ReusableByteSequenceSegment::*)(::System::ReadOnlyMemory_1<uint8_t>, bool)>(&::VYaml::Internal::ReusableByteSequenceSegment::SetBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb967c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceSegment.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::ReusableByteSequenceSegment::*)()>(&::VYaml::Internal::ReusableByteSequenceSegment::Reset)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb967c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceSegment.SetRunningIndexAndNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::ReusableByteSequenceSegment::*)(int64_t, ::VYaml::Internal::ReusableByteSequenceSegment*)>(&::VYaml::Internal::ReusableByteSequenceSegment::SetRunningIndexAndNext)> {
  constexpr static std::size_t size = 0x24d0;
  constexpr static std::size_t addrs = 0xb967e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {"SetRunningIndexAndNext", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::VYaml::Internal::ReusableByteSequenceSegment*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& VYaml::Internal::ReusableByteSequenceSegment::__cordl_internal_get_returnToPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToPool;
}
constexpr bool const& VYaml::Internal::ReusableByteSequenceSegment::__cordl_internal_get_returnToPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToPool;
}
constexpr void VYaml::Internal::ReusableByteSequenceSegment::__cordl_internal_set_returnToPool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnToPool = value;
}
inline void VYaml::Internal::ReusableByteSequenceSegment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VYaml::Internal::ReusableByteSequenceSegment::SetBuffer(::System::ReadOnlyMemory_1<uint8_t>  buffer, bool  returnToPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, returnToPool);
}
inline void VYaml::Internal::ReusableByteSequenceSegment::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VYaml::Internal::ReusableByteSequenceSegment::SetRunningIndexAndNext(int64_t  runningIndex, ::VYaml::Internal::ReusableByteSequenceSegment*  nextSegment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceSegment*>(),
                        {"SetRunningIndexAndNext", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::VYaml::Internal::ReusableByteSequenceSegment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runningIndex, nextSegment);
}
inline ::VYaml::Internal::ReusableByteSequenceSegment* VYaml::Internal::ReusableByteSequenceSegment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Internal::ReusableByteSequenceSegment*>());
}
// Ctor Parameters []
constexpr ::VYaml::Internal::ReusableByteSequenceSegment::ReusableByteSequenceSegment()   {
}
