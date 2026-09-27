#pragma once
// IWYU pragma private; include "VYaml/Internal/ReusableByteSequenceBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__ReusableByteSequenceBuilder_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "VYaml/Internal/zzzz__ReusableByteSequenceSegment_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceBuilder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::ReusableByteSequenceBuilder::*)(::System::ReadOnlyMemory_1<uint8_t>, bool)>(&::VYaml::Internal::ReusableByteSequenceBuilder::Add)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb96a308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"Add", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceBuilder.TryGetSingleMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Internal::ReusableByteSequenceBuilder::*)(::by_ref<::System::ReadOnlyMemory_1<uint8_t>>)>(&::VYaml::Internal::ReusableByteSequenceBuilder::TryGetSingleMemory)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb96a448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"TryGetSingleMemory", {}, {::i2c::type_of<::by_ref<::System::ReadOnlyMemory_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceBuilder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Buffers::ReadOnlySequence_1<uint8_t> (::VYaml::Internal::ReusableByteSequenceBuilder::*)()>(&::VYaml::Internal::ReusableByteSequenceBuilder::Build)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb96a4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceBuilder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::ReusableByteSequenceBuilder::*)()>(&::VYaml::Internal::ReusableByteSequenceBuilder::Reset)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb96a75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Internal::ReusableByteSequenceBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Internal::ReusableByteSequenceBuilder::*)()>(&::VYaml::Internal::ReusableByteSequenceBuilder::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb96a8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>*& VYaml::Internal::ReusableByteSequenceBuilder::__cordl_internal_get_segmentPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentPool;
}
constexpr ::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>* const& VYaml::Internal::ReusableByteSequenceBuilder::__cordl_internal_get_segmentPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentPool;
}
constexpr void VYaml::Internal::ReusableByteSequenceBuilder::__cordl_internal_set_segmentPool(::System::Collections::Generic::Stack_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentPool = value;
}
constexpr ::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>*& VYaml::Internal::ReusableByteSequenceBuilder::__cordl_internal_get_segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segments;
}
constexpr ::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>* const& VYaml::Internal::ReusableByteSequenceBuilder::__cordl_internal_get_segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segments;
}
constexpr void VYaml::Internal::ReusableByteSequenceBuilder::__cordl_internal_set_segments(::System::Collections::Generic::List_1<::VYaml::Internal::ReusableByteSequenceSegment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segments = value;
}
inline void VYaml::Internal::ReusableByteSequenceBuilder::Add(::System::ReadOnlyMemory_1<uint8_t>  buffer, bool  returnToPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"Add", {}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, returnToPool);
}
inline bool VYaml::Internal::ReusableByteSequenceBuilder::TryGetSingleMemory(::by_ref<::System::ReadOnlyMemory_1<uint8_t>>  memory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"TryGetSingleMemory", {}, {::i2c::type_of<::by_ref<::System::ReadOnlyMemory_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memory);
}
inline ::System::Buffers::ReadOnlySequence_1<uint8_t> VYaml::Internal::ReusableByteSequenceBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::ReadOnlySequence_1<uint8_t>>(this, ___internal_method);
}
inline void VYaml::Internal::ReusableByteSequenceBuilder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VYaml::Internal::ReusableByteSequenceBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::ReusableByteSequenceBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Internal::ReusableByteSequenceBuilder* VYaml::Internal::ReusableByteSequenceBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Internal::ReusableByteSequenceBuilder*>());
}
// Ctor Parameters []
constexpr ::VYaml::Internal::ReusableByteSequenceBuilder::ReusableByteSequenceBuilder()   {
}
