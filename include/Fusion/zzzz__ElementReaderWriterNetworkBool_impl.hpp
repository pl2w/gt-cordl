#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterNetworkBool.hpp"
#include "Fusion/zzzz__ElementReaderWriterNetworkBool_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBool.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::Fusion::ElementReaderWriterNetworkBool::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterNetworkBool::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBool.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkBool> (::Fusion::ElementReaderWriterNetworkBool::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterNetworkBool::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBool.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterNetworkBool::*)(uint8_t*, int32_t, ::Fusion::NetworkBool)>(&::Fusion::ElementReaderWriterNetworkBool::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBool.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterNetworkBool::*)()>(&::Fusion::ElementReaderWriterNetworkBool::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBool.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterNetworkBool::*)(::Fusion::NetworkBool)>(&::Fusion::ElementReaderWriterNetworkBool::GetElementHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f9b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterNetworkBool.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>* (*)()>(&::Fusion::ElementReaderWriterNetworkBool::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9b5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterNetworkBool::setStaticF__instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*, "_instance", ::Fusion::ElementReaderWriterNetworkBool>(std::forward<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>* Fusion::ElementReaderWriterNetworkBool::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*, "_instance", ::Fusion::ElementReaderWriterNetworkBool>();
}
inline ::Fusion::NetworkBool Fusion::ElementReaderWriterNetworkBool::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(*this, ___internal_method, data, index);
}
inline ::by_ref<::Fusion::NetworkBool> Fusion::ElementReaderWriterNetworkBool::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkBool>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterNetworkBool::Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkBool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterNetworkBool::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterNetworkBool::GetElementHashCode(::Fusion::NetworkBool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>* Fusion::ElementReaderWriterNetworkBool::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterNetworkBool>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>"
constexpr  Fusion::ElementReaderWriterNetworkBool::operator ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>* Fusion::ElementReaderWriterNetworkBool::i___Fusion__IElementReaderWriter_1___Fusion__NetworkBool_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Fusion::NetworkBool>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterNetworkBool::ElementReaderWriterNetworkBool()   {
}
