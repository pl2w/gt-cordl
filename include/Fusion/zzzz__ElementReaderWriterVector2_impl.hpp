#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterVector2.hpp"
#include "Fusion/zzzz__ElementReaderWriterVector2_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector2.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Fusion::ElementReaderWriterVector2::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterVector2::Read)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9b17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector2.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector2> (::Fusion::ElementReaderWriterVector2::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterVector2::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector2.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterVector2::*)(uint8_t*, int32_t, ::UnityEngine::Vector2)>(&::Fusion::ElementReaderWriterVector2::Write)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9b198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector2.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterVector2::*)()>(&::Fusion::ElementReaderWriterVector2::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector2.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterVector2::*)(::UnityEngine::Vector2)>(&::Fusion::ElementReaderWriterVector2::GetElementHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f9b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector2.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>* (*)()>(&::Fusion::ElementReaderWriterVector2::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9b1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterVector2::setStaticF__instance(::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*, "_instance", ::Fusion::ElementReaderWriterVector2>(std::forward<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>* Fusion::ElementReaderWriterVector2::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*, "_instance", ::Fusion::ElementReaderWriterVector2>();
}
inline ::UnityEngine::Vector2 Fusion::ElementReaderWriterVector2::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, data, index);
}
inline ::by_ref<::UnityEngine::Vector2> Fusion::ElementReaderWriterVector2::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector2>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterVector2::Write(uint8_t*  data, int32_t  index, ::UnityEngine::Vector2  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterVector2::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterVector2::GetElementHashCode(::UnityEngine::Vector2  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>* Fusion::ElementReaderWriterVector2::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector2>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>"
constexpr  Fusion::ElementReaderWriterVector2::operator ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>* Fusion::ElementReaderWriterVector2::i___Fusion__IElementReaderWriter_1___UnityEngine__Vector2_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterVector2::ElementReaderWriterVector2()   {
}
