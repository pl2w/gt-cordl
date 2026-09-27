#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@Fusion_NetworkString_1_Fusion__128_.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@Fusion_NetworkString_1_Fusion__128__def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___128_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkString_1<::Fusion::_128> (::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e2f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkString_1<::Fusion::_128>> (::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::ReadRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2f5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)(uint8_t*, int32_t, ::Fusion::NetworkString_1<::Fusion::_128>)>(&::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::Write)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e2f5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_128>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)()>(&::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)(::Fusion::NetworkString_1<::Fusion::_128>)>(&::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::GetElementHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2f5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_128>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>* (*)()>(&::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::setStaticF_Instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*, "Instance", ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(std::forward<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>* Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*, "Instance", ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>();
}
inline ::Fusion::NetworkString_1<::Fusion::_128> Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<::Fusion::_128>>(*this, ___internal_method, data, index);
}
inline ::by_ref<::Fusion::NetworkString_1<::Fusion::_128>> Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkString_1<::Fusion::_128>>>(*this, ___internal_method, data, index);
}
inline void Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkString_1<::Fusion::_128>  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_128>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::GetElementHashCode(::Fusion::NetworkString_1<::Fusion::_128>  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_128>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>* Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>"
constexpr  Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::operator ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>* Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::i___Fusion__IElementReaderWriter_1___Fusion__NetworkString_1___Fusion___128__()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_::ReaderWriter@Fusion_NetworkString_1_Fusion__128_()   {
}
