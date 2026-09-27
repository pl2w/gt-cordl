#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterVector3.hpp"
#include "Fusion/zzzz__ElementReaderWriterVector3_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector3.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::ElementReaderWriterVector3::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterVector3::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f9b270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector3.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector3> (::Fusion::ElementReaderWriterVector3::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterVector3::ReadRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9b288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector3.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterVector3::*)(uint8_t*, int32_t, ::UnityEngine::Vector3)>(&::Fusion::ElementReaderWriterVector3::Write)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f9b298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector3.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterVector3::*)()>(&::Fusion::ElementReaderWriterVector3::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector3.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterVector3::*)(::UnityEngine::Vector3)>(&::Fusion::ElementReaderWriterVector3::GetElementHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9b2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterVector3.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>* (*)()>(&::Fusion::ElementReaderWriterVector3::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9b314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterVector3::setStaticF__instance(::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*, "_instance", ::Fusion::ElementReaderWriterVector3>(std::forward<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>* Fusion::ElementReaderWriterVector3::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*, "_instance", ::Fusion::ElementReaderWriterVector3>();
}
inline ::UnityEngine::Vector3 Fusion::ElementReaderWriterVector3::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, data, index);
}
inline ::by_ref<::UnityEngine::Vector3> Fusion::ElementReaderWriterVector3::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector3>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterVector3::Write(uint8_t*  data, int32_t  index, ::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterVector3::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterVector3::GetElementHashCode(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>* Fusion::ElementReaderWriterVector3::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterVector3>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>"
constexpr  Fusion::ElementReaderWriterVector3::operator ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>* Fusion::ElementReaderWriterVector3::i___Fusion__IElementReaderWriter_1___UnityEngine__Vector3_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityEngine::Vector3>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterVector3::ElementReaderWriterVector3()   {
}
