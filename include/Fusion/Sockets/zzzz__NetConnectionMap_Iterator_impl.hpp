#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionMap_Iterator.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_Iterator_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetConnectionMap_Iterator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (::GlobalNamespace::NetConnectionMap_Iterator::*)()>(&::GlobalNamespace::NetConnectionMap_Iterator::get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x602b67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetConnectionMap_Iterator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetConnectionMap_Iterator::*)(::Fusion::Sockets::NetConnectionMap*)>(&::GlobalNamespace::NetConnectionMap_Iterator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x602b6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetConnectionMap_Iterator.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetConnectionMap_Iterator::*)()>(&::GlobalNamespace::NetConnectionMap_Iterator::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x602b6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetConnectionMap_Iterator.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetConnectionMap_Iterator::*)()>(&::GlobalNamespace::NetConnectionMap_Iterator::Next)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x602b700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {"Next", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::Sockets::NetConnection* GlobalNamespace::NetConnectionMap_Iterator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(*this, ___internal_method);
}
inline void GlobalNamespace::NetConnectionMap_Iterator::_ctor(::Fusion::Sockets::NetConnectionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, map);
}
inline bool GlobalNamespace::NetConnectionMap_Iterator::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::NetConnectionMap_Iterator::Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetConnectionMap_Iterator>(),
                        {"Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_map", ty: "::Fusion::Sockets::NetConnectionMap*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetConnectionMap_Iterator::NetConnectionMap_Iterator(::Fusion::Sockets::NetConnectionMap*  _map, int32_t  _index, int32_t  _count) noexcept  {
this->_map = _map;
this->_index = _index;
this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetConnectionMap_Iterator::NetConnectionMap_Iterator()   {
}
