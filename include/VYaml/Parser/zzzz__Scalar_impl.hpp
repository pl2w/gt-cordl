#pragma once
// IWYU pragma private; include "VYaml/Parser/Scalar.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Parser/zzzz__Scalar_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "VYaml/Internal/zzzz__LineBreakState_def.hpp"
#include "VYaml/Parser/zzzz__ITokenContent_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::Scalar.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::Scalar::*)()>(&::VYaml::Parser::Scalar::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.set_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(int32_t)>(&::VYaml::Parser::Scalar::set_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb958d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(int32_t)>(&::VYaml::Parser::Scalar::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb958b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::VYaml::Parser::Scalar::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb958d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.AsSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<uint8_t> (::VYaml::Parser::Scalar::*)()>(&::VYaml::Parser::Scalar::AsSpan)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb958dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"AsSpan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.AsSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<uint8_t> (::VYaml::Parser::Scalar::*)(int32_t, int32_t)>(&::VYaml::Parser::Scalar::AsSpan)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb958e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"AsSpan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.AsUtf8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::VYaml::Parser::Scalar::*)()>(&::VYaml::Parser::Scalar::AsUtf8)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb958f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"AsUtf8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(uint8_t)>(&::VYaml::Parser::Scalar::Write)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb958fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(::VYaml::Internal::LineBreakState)>(&::VYaml::Parser::Scalar::Write)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb95905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Write", {}, {::i2c::type_of<::VYaml::Internal::LineBreakState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::VYaml::Parser::Scalar::Write)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb9592a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Write", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.WriteUnicodeCodepoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(int32_t)>(&::VYaml::Parser::Scalar::WriteUnicodeCodepoint)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb9593ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"WriteUnicodeCodepoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)()>(&::VYaml::Parser::Scalar::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9595f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Scalar::*)()>(&::VYaml::Parser::Scalar::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb9595fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                    {::i2c::class_of<::VYaml::Parser::Scalar*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)()>(&::VYaml::Parser::Scalar::IsNull)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb959714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryGetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::by_ref<bool>)>(&::VYaml::Parser::Scalar::TryGetBool)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb9598e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetBool", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryGetInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::by_ref<int32_t>)>(&::VYaml::Parser::Scalar::TryGetInt32)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb959ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetInt32", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryGetInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::by_ref<int64_t>)>(&::VYaml::Parser::Scalar::TryGetInt64)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0xb95a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetInt64", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryGetUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::by_ref<uint32_t>)>(&::VYaml::Parser::Scalar::TryGetUInt32)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xb95a514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetUInt32", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryGetUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::by_ref<uint64_t>)>(&::VYaml::Parser::Scalar::TryGetUInt64)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb95a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetUInt64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryGetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::by_ref<float_t>)>(&::VYaml::Parser::Scalar::TryGetFloat)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0xb95a9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetFloat", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryGetDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::by_ref<double_t>)>(&::VYaml::Parser::Scalar::TryGetDouble)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0xb95ae84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetDouble", {}, {::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.SequenceEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::VYaml::Parser::Scalar*)>(&::VYaml::Parser::Scalar::SequenceEqual)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb95b350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"SequenceEqual", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.SequenceEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Scalar::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::VYaml::Parser::Scalar::SequenceEqual)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb95b4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"SequenceEqual", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(int32_t)>(&::VYaml::Parser::Scalar::Grow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb95b594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryDetectHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::ReadOnlySpan_1<uint8_t>>)>(&::VYaml::Parser::Scalar::TryDetectHex)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb95b5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryDetectHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryDetectHexNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::ReadOnlySpan_1<uint8_t>>)>(&::VYaml::Parser::Scalar::TryDetectHexNegative)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb95b75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryDetectHexNegative", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.TryParseOctal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint64_t>)>(&::VYaml::Parser::Scalar::TryParseOctal)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xb959e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryParseOctal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)()>(&::VYaml::Parser::Scalar::Grow)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb95b8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Grow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Scalar.SetCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Scalar::*)(int32_t)>(&::VYaml::Parser::Scalar::SetCapacity)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb95b918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"SetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VYaml::Parser::Scalar::__cordl_internal_get__Length_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length_k__BackingField;
}
constexpr int32_t const& VYaml::Parser::Scalar::__cordl_internal_get__Length_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length_k__BackingField;
}
constexpr void VYaml::Parser::Scalar::__cordl_internal_set__Length_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Length_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& VYaml::Parser::Scalar::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& VYaml::Parser::Scalar::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void VYaml::Parser::Scalar::__cordl_internal_set_buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
inline void VYaml::Parser::Scalar::setStaticF_Null(::VYaml::Parser::Scalar*  value)  {
::cordl_internals::setStaticField<::VYaml::Parser::Scalar*, "Null", ::VYaml::Parser::Scalar*>(std::forward<::VYaml::Parser::Scalar*>(value));
}
inline ::VYaml::Parser::Scalar* VYaml::Parser::Scalar::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::VYaml::Parser::Scalar*, "Null", ::VYaml::Parser::Scalar*>();
}
inline int32_t VYaml::Parser::Scalar::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void VYaml::Parser::Scalar::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VYaml::Parser::Scalar::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void VYaml::Parser::Scalar::_ctor(::System::ReadOnlySpan_1<uint8_t>  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline ::System::Span_1<uint8_t> VYaml::Parser::Scalar::AsSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"AsSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(this, ___internal_method);
}
inline ::System::Span_1<uint8_t> VYaml::Parser::Scalar::AsSpan(int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"AsSpan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(this, ___internal_method, start, length);
}
inline ::System::ReadOnlySpan_1<uint8_t> VYaml::Parser::Scalar::AsUtf8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"AsUtf8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(this, ___internal_method);
}
inline void VYaml::Parser::Scalar::Write(uint8_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void VYaml::Parser::Scalar::Write(::VYaml::Internal::LineBreakState  lineBreak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Write", {}, {::i2c::type_of<::VYaml::Internal::LineBreakState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineBreak);
}
inline void VYaml::Parser::Scalar::Write(::System::ReadOnlySpan_1<uint8_t>  codes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Write", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codes);
}
inline void VYaml::Parser::Scalar::WriteUnicodeCodepoint(int32_t  codepoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"WriteUnicodeCodepoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codepoint);
}
inline void VYaml::Parser::Scalar::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW VYaml::Parser::Scalar::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Parser::Scalar*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool VYaml::Parser::Scalar::IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool VYaml::Parser::Scalar::TryGetBool(::by_ref<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetBool", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool VYaml::Parser::Scalar::TryGetInt32(::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetInt32", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool VYaml::Parser::Scalar::TryGetInt64(::by_ref<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetInt64", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool VYaml::Parser::Scalar::TryGetUInt32(::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetUInt32", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool VYaml::Parser::Scalar::TryGetUInt64(::by_ref<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetUInt64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool VYaml::Parser::Scalar::TryGetFloat(::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetFloat", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool VYaml::Parser::Scalar::TryGetDouble(::by_ref<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryGetDouble", {}, {::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool VYaml::Parser::Scalar::SequenceEqual(::VYaml::Parser::Scalar*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"SequenceEqual", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool VYaml::Parser::Scalar::SequenceEqual(::System::ReadOnlySpan_1<uint8_t>  span)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"SequenceEqual", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, span);
}
inline void VYaml::Parser::Scalar::Grow(int32_t  sizeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeHint);
}
inline bool VYaml::Parser::Scalar::TryDetectHex(::System::ReadOnlySpan_1<uint8_t>  span, ::by_ref<::System::ReadOnlySpan_1<uint8_t>>  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryDetectHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, slice);
}
inline bool VYaml::Parser::Scalar::TryDetectHexNegative(::System::ReadOnlySpan_1<uint8_t>  span, ::by_ref<::System::ReadOnlySpan_1<uint8_t>>  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryDetectHexNegative", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, slice);
}
inline bool VYaml::Parser::Scalar::TryParseOctal(::System::ReadOnlySpan_1<uint8_t>  span, ::by_ref<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"TryParseOctal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
inline void VYaml::Parser::Scalar::Grow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"Grow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VYaml::Parser::Scalar::SetCapacity(int32_t  newCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Scalar*>(),
                        {"SetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCapacity);
}
inline ::VYaml::Parser::Scalar* VYaml::Parser::Scalar::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Parser::Scalar*>(capacity));
}
inline ::VYaml::Parser::Scalar* VYaml::Parser::Scalar::New_ctor(::System::ReadOnlySpan_1<uint8_t>  content)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Parser::Scalar*>(content));
}
/// @brief Convert operator to "::VYaml::Parser::ITokenContent"
constexpr  VYaml::Parser::Scalar::operator ::VYaml::Parser::ITokenContent*() noexcept {
return static_cast<::VYaml::Parser::ITokenContent*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Parser::ITokenContent"
constexpr ::VYaml::Parser::ITokenContent* VYaml::Parser::Scalar::i___VYaml__Parser__ITokenContent() noexcept {
return static_cast<::VYaml::Parser::ITokenContent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Parser::Scalar::Scalar()   {
}
