#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterVector4.hpp"
#include "Fusion/zzzz__ElementReaderWriterVector4_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector4.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::Fusion::ElementReaderWriterVector4::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterVector4::Read)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f9b398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector4.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector4> (::Fusion::ElementReaderWriterVector4::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterVector4::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector4.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterVector4::*)(uint8_t*, int32_t, ::UnityEngine::Vector4)>(&::Fusion::ElementReaderWriterVector4::Write)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f9b3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector4.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterVector4::*)()>(&::Fusion::ElementReaderWriterVector4::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector4.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterVector4::*)(::UnityEngine::Vector4)>(&::Fusion::ElementReaderWriterVector4::GetElementHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f9b3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector4.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>* (*)()>(&::Fusion::ElementReaderWriterVector4::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9b44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterVector4::setStaticF__instance(::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*, "_instance", ::Fusion::ElementReaderWriterVector4>(std::forward<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>* Fusion::ElementReaderWriterVector4::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*, "_instance", ::Fusion::ElementReaderWriterVector4>();
}
inline ::UnityEngine::Vector4 Fusion::ElementReaderWriterVector4::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, data, index);
}
inline ::by_ref<::UnityEngine::Vector4> Fusion::ElementReaderWriterVector4::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector4>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterVector4::Write(uint8_t*  data, int32_t  index, ::UnityEngine::Vector4  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterVector4::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterVector4::GetElementHashCode(::UnityEngine::Vector4  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>* Fusion::ElementReaderWriterVector4::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector4>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>"
constexpr  Fusion::ElementReaderWriterVector4::operator ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>* Fusion::ElementReaderWriterVector4::i___Fusion__IElementReaderWriter_1___UnityEngine__Vector4_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterVector4::ElementReaderWriterVector4()   {
}
