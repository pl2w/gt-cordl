#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterNetworkBehaviourId.hpp"
#include "Fusion/zzzz__ElementReaderWriterNetworkBehaviourId_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBehaviourId.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (::Fusion::ElementReaderWriterNetworkBehaviourId::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterNetworkBehaviourId::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBehaviourId.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkBehaviourId> (::Fusion::ElementReaderWriterNetworkBehaviourId::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterNetworkBehaviourId::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBehaviourId.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterNetworkBehaviourId::*)(uint8_t*, int32_t, ::Fusion::NetworkBehaviourId)>(&::Fusion::ElementReaderWriterNetworkBehaviourId::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBehaviourId.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterNetworkBehaviourId::*)()>(&::Fusion::ElementReaderWriterNetworkBehaviourId::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBehaviourId.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterNetworkBehaviourId::*)(::Fusion::NetworkBehaviourId)>(&::Fusion::ElementReaderWriterNetworkBehaviourId::GetElementHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f9b8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBehaviourId.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>* (*)()>(&::Fusion::ElementReaderWriterNetworkBehaviourId::GetInstance)> {
  constexpr static std::size_t size = 0xb94;
  constexpr static std::size_t addrs = 0x5f9b8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterNetworkBehaviourId::setStaticF__instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*, "_instance", ::Fusion::ElementReaderWriterNetworkBehaviourId>(std::forward<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>* Fusion::ElementReaderWriterNetworkBehaviourId::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*, "_instance", ::Fusion::ElementReaderWriterNetworkBehaviourId>();
}
inline ::Fusion::NetworkBehaviourId Fusion::ElementReaderWriterNetworkBehaviourId::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(*this, ___internal_method, data, index);
}
inline ::by_ref<::Fusion::NetworkBehaviourId> Fusion::ElementReaderWriterNetworkBehaviourId::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkBehaviourId>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterNetworkBehaviourId::Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkBehaviourId  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterNetworkBehaviourId::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterNetworkBehaviourId::GetElementHashCode(::Fusion::NetworkBehaviourId  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>* Fusion::ElementReaderWriterNetworkBehaviourId::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBehaviourId>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>"
constexpr  Fusion::ElementReaderWriterNetworkBehaviourId::operator ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>* Fusion::ElementReaderWriterNetworkBehaviourId::i___Fusion__IElementReaderWriter_1___Fusion__NetworkBehaviourId_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBehaviourId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterNetworkBehaviourId::ElementReaderWriterNetworkBehaviourId()   {
}
