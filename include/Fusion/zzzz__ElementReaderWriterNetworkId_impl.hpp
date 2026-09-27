#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterNetworkId.hpp"
#include "Fusion/zzzz__ElementReaderWriterNetworkId_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkId.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::ElementReaderWriterNetworkId::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterNetworkId::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkId.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkId> (::Fusion::ElementReaderWriterNetworkId::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterNetworkId::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkId.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterNetworkId::*)(uint8_t*, int32_t, ::Fusion::NetworkId)>(&::Fusion::ElementReaderWriterNetworkId::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkId.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterNetworkId::*)()>(&::Fusion::ElementReaderWriterNetworkId::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkId.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterNetworkId::*)(::Fusion::NetworkId)>(&::Fusion::ElementReaderWriterNetworkId::GetElementHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkId.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>* (*)()>(&::Fusion::ElementReaderWriterNetworkId::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9b80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterNetworkId::setStaticF__instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*, "_instance", ::Fusion::ElementReaderWriterNetworkId>(std::forward<::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>* Fusion::ElementReaderWriterNetworkId::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*, "_instance", ::Fusion::ElementReaderWriterNetworkId>();
}
inline ::Fusion::NetworkId Fusion::ElementReaderWriterNetworkId::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(*this, ___internal_method, data, index);
}
inline ::by_ref<::Fusion::NetworkId> Fusion::ElementReaderWriterNetworkId::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkId>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterNetworkId::Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkId  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterNetworkId::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterNetworkId::GetElementHashCode(::Fusion::NetworkId  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>* Fusion::ElementReaderWriterNetworkId::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkId>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>"
constexpr  Fusion::ElementReaderWriterNetworkId::operator ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>* Fusion::ElementReaderWriterNetworkId::i___Fusion__IElementReaderWriter_1___Fusion__NetworkId_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterNetworkId::ElementReaderWriterNetworkId()   {
}
