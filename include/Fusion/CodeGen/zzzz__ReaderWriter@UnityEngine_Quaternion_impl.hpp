#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@UnityEngine_Quaternion.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@UnityEngine_Quaternion_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::Read)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2edcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Quaternion> (::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::*)(uint8_t*, int32_t, ::UnityEngine::Quaternion)>(&::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::Write)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e2edec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::*)()>(&::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::*)(::UnityEngine::Quaternion)>(&::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::GetElementHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e2ee08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>* (*)()>(&::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::setStaticF_Instance(::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*, "Instance", ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(std::forward<::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>* Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*, "Instance", ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>();
}
inline ::UnityEngine::Quaternion Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, data, index);
}
inline ::by_ref<::UnityEngine::Quaternion> Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Quaternion>>(*this, ___internal_method, data, index);
}
inline void Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::Write(uint8_t*  data, int32_t  index, ::UnityEngine::Quaternion  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::GetElementHashCode(::UnityEngine::Quaternion  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>* Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>"
constexpr  Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::operator ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>* Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::i___Fusion__IElementReaderWriter_1___UnityEngine__Quaternion_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion::ReaderWriter@UnityEngine_Quaternion()   {
}
