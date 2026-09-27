#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/SequenceMarshal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__SequenceMarshal_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::SequenceMarshal.TryGetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Buffers::ReadOnlySequence_1<char16_t>, ::by_ref<::StringW>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Runtime::InteropServices::SequenceMarshal::TryGetString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa1e017c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::SequenceMarshal*>(),
                        {"TryGetString", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequence_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Runtime::InteropServices::SequenceMarshal::TryGetString(::System::Buffers::ReadOnlySequence_1<char16_t>  sequence, ::by_ref<::StringW>  text, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::SequenceMarshal*>(),
                        {"TryGetString", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequence_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sequence, text, start, length);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::SequenceMarshal::SequenceMarshal()   {
}
