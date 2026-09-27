#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Parser_TimeSpanSplitter.hpp"
#include "System/Buffers/Text/zzzz__Utf8Parser_TimeSpanSplitter_def.hpp"
#include "System/Buffers/Text/zzzz__Utf8Parser_ComponentParseResult_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Utf8Parser_TimeSpanSplitter.TrySplitTimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Utf8Parser_TimeSpanSplitter::*)(::System::ReadOnlySpan_1<uint8_t>, bool, ::by_ref<int32_t>)>(&::GlobalNamespace::Utf8Parser_TimeSpanSplitter::TrySplitTimeSpan)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa27e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utf8Parser_TimeSpanSplitter>(),
                        {"TrySplitTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Utf8Parser_TimeSpanSplitter.ParseComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Utf8Parser_ComponentParseResult (*)(::System::ReadOnlySpan_1<uint8_t>, bool, ::by_ref<int32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::Utf8Parser_TimeSpanSplitter::ParseComponent)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa27e7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utf8Parser_TimeSpanSplitter>(),
                        {"ParseComponent", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Utf8Parser_TimeSpanSplitter::TrySplitTimeSpan(::System::ReadOnlySpan_1<uint8_t>  source, bool  periodUsedToSeparateDay, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utf8Parser_TimeSpanSplitter>(),
                        {"TrySplitTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, source, periodUsedToSeparateDay, bytesConsumed);
}
inline ::GlobalNamespace::Utf8Parser_ComponentParseResult GlobalNamespace::Utf8Parser_TimeSpanSplitter::ParseComponent(::System::ReadOnlySpan_1<uint8_t>  source, bool  neverParseAsFraction, ::by_ref<int32_t>  srcIndex, ::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Utf8Parser_TimeSpanSplitter>(),
                        {"ParseComponent", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Utf8Parser_ComponentParseResult>(nullptr, ___internal_method, source, neverParseAsFraction, srcIndex, value);
}
// Ctor Parameters [CppParam { name: "V1", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "V2", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "V3", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "V4", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "V5", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Separators", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Utf8Parser_TimeSpanSplitter::Utf8Parser_TimeSpanSplitter(uint32_t  V1, uint32_t  V2, uint32_t  V3, uint32_t  V4, uint32_t  V5, bool  IsNegative, uint32_t  Separators) noexcept  {
this->V1 = V1;
this->V2 = V2;
this->V3 = V3;
this->V4 = V4;
this->V5 = V5;
this->IsNegative = IsNegative;
this->Separators = Separators;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Utf8Parser_TimeSpanSplitter::Utf8Parser_TimeSpanSplitter()   {
}
