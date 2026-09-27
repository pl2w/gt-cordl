#pragma once
// IWYU pragma private; include "System/Number_NumberBuffer.hpp"
#include "System/zzzz__Number_NumberBufferKind_impl.hpp"
#include "System/zzzz__Span_1_impl.hpp"
#include "System/zzzz__Number_NumberBuffer_def.hpp"
#include "System/zzzz__Number_NumberBufferKind_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Number_NumberBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Number_NumberBuffer::*)(::GlobalNamespace::Number_NumberBufferKind, uint8_t*, int32_t)>(&::GlobalNamespace::Number_NumberBuffer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb9a7734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Number_NumberBufferKind>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_NumberBuffer.CheckConsistency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Number_NumberBuffer::*)()>(&::GlobalNamespace::Number_NumberBuffer::CheckConsistency)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb9a77b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(),
                        {"CheckConsistency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_NumberBuffer.GetDigitsPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::GlobalNamespace::Number_NumberBuffer::*)()>(&::GlobalNamespace::Number_NumberBuffer::GetDigitsPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb9a77b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(),
                        {"GetDigitsPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Number_NumberBuffer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Number_NumberBuffer::*)()>(&::GlobalNamespace::Number_NumberBuffer::ToString)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb9a77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(),
                    {::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Number_NumberBuffer::_ctor(::GlobalNamespace::Number_NumberBufferKind  kind, uint8_t*  digits, int32_t  digitsLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Number_NumberBufferKind>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, kind, digits, digitsLength);
}
inline void GlobalNamespace::Number_NumberBuffer::CheckConsistency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(),
                        {"CheckConsistency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint8_t* GlobalNamespace::Number_NumberBuffer::GetDigitsPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(),
                        {"GetDigitsPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Number_NumberBuffer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Number_NumberBuffer>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HasNonZeroTail", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Kind", ty: "::GlobalNamespace::Number_NumberBufferKind", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Digits", ty: "::System::Span_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Number_NumberBuffer::Number_NumberBuffer(int32_t  DigitsCount, int32_t  Scale, bool  IsNegative, bool  HasNonZeroTail, ::GlobalNamespace::Number_NumberBufferKind  Kind, ::System::Span_1<uint8_t>  Digits) noexcept  {
this->DigitsCount = DigitsCount;
this->Scale = Scale;
this->IsNegative = IsNegative;
this->HasNonZeroTail = HasNonZeroTail;
this->Kind = Kind;
this->Digits = Digits;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Number_NumberBuffer::Number_NumberBuffer()   {
}
