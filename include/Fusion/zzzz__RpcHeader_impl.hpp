#pragma once
// IWYU pragma private; include "Fusion/RpcHeader.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__RpcHeader_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
//  Writing Method size for method: ::Fusion::RpcHeader.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::RpcHeader, uint8_t*)>(&::Fusion::RpcHeader::Write)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fd0968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::RpcHeader>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcHeader.ReadSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*)>(&::Fusion::RpcHeader::ReadSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd0978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"ReadSize", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcHeader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcHeader (*)(uint8_t*, ::by_ref<int32_t>)>(&::Fusion::RpcHeader::Read)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fd0980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcHeader.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcHeader (*)(::Fusion::NetworkId, int32_t, int32_t)>(&::Fusion::RpcHeader::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fd0990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcHeader.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcHeader (*)(int32_t)>(&::Fusion::RpcHeader::Create)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd09cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcHeader.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::RpcHeader::*)()>(&::Fusion::RpcHeader::ToString)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5fd09ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcHeader>(),
                    {::i2c::class_of<::Fusion::RpcHeader>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkId& Fusion::RpcHeader::__cordl_internal_get_Object()  {
return this->___Object;
}
constexpr ::Fusion::NetworkId const& Fusion::RpcHeader::__cordl_internal_get_Object() const {
return this->___Object;
}
constexpr void Fusion::RpcHeader::__cordl_internal_set_Object(::Fusion::NetworkId  value)  {
this->___Object = value;
}
constexpr uint16_t& Fusion::RpcHeader::__cordl_internal_get_Behaviour()  {
return this->___Behaviour;
}
constexpr uint16_t const& Fusion::RpcHeader::__cordl_internal_get_Behaviour() const {
return this->___Behaviour;
}
constexpr void Fusion::RpcHeader::__cordl_internal_set_Behaviour(uint16_t  value)  {
this->___Behaviour = value;
}
constexpr uint16_t& Fusion::RpcHeader::__cordl_internal_get_Method()  {
return this->___Method;
}
constexpr uint16_t const& Fusion::RpcHeader::__cordl_internal_get_Method() const {
return this->___Method;
}
constexpr void Fusion::RpcHeader::__cordl_internal_set_Method(uint16_t  value)  {
this->___Method = value;
}
inline int32_t Fusion::RpcHeader::Write(::Fusion::RpcHeader  header, uint8_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::RpcHeader>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, header, data);
}
inline int32_t Fusion::RpcHeader::ReadSize(uint8_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"ReadSize", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data);
}
inline ::Fusion::RpcHeader Fusion::RpcHeader::Read(uint8_t*  data, ::by_ref<int32_t>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcHeader>(nullptr, ___internal_method, data, size);
}
inline ::Fusion::RpcHeader Fusion::RpcHeader::Create(::Fusion::NetworkId  id, int32_t  behaviour, int32_t  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcHeader>(nullptr, ___internal_method, id, behaviour, method);
}
inline ::Fusion::RpcHeader Fusion::RpcHeader::Create(int32_t  staticRpcKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcHeader>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcHeader>(nullptr, ___internal_method, staticRpcKey);
}
inline ::StringW Fusion::RpcHeader::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcHeader>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Behaviour", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Method", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcHeader::RpcHeader(::Fusion::NetworkId  Object, uint16_t  Behaviour, uint16_t  Method) noexcept  {
this->Object = Object;
this->Behaviour = Behaviour;
this->Method = Method;
}
// Ctor Parameters []
constexpr ::Fusion::RpcHeader::RpcHeader()   {
}
