#pragma once
// IWYU pragma private; include "Pathfinding/Connection.hpp"
#include "Pathfinding/zzzz__Connection_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Connection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Connection::*)(::Pathfinding::GraphNode*, uint32_t, uint8_t)>(&::Pathfinding::Connection::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e67710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Connection>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Connection.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Connection::*)()>(&::Pathfinding::Connection::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e67740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Connection>(),
                    {::i2c::class_of<::Pathfinding::Connection>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Connection.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Connection::*)(::System::Object*)>(&::Pathfinding::Connection::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e67770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Connection>(),
                    {::i2c::class_of<::Pathfinding::Connection>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::Connection::_ctor(::Pathfinding::GraphNode*  node, uint32_t  cost, uint8_t  shapeEdge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Connection>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, cost, shapeEdge);
}
inline int32_t Pathfinding::Connection::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Connection>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Pathfinding::Connection::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Connection>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cost", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shapeEdge", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Connection::Connection(::Pathfinding::GraphNode*  node, uint32_t  cost, uint8_t  shapeEdge) noexcept  {
this->node = node;
this->cost = cost;
this->shapeEdge = shapeEdge;
}
// Ctor Parameters []
constexpr ::Pathfinding::Connection::Connection()   {
}
