#pragma once
// IWYU pragma private; include "Pathfinding/RecastBBTreeBox.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Pathfinding/zzzz__RecastBBTreeBox_def.hpp"
#include "Pathfinding/zzzz__RecastMeshObj_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RecastBBTreeBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastBBTreeBox::*)(::Pathfinding::RecastMeshObj*)>(&::Pathfinding::RecastBBTreeBox::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e9c0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTreeBox*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::RecastMeshObj*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTreeBox.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RecastBBTreeBox::*)(::UnityEngine::Vector3)>(&::Pathfinding::RecastBBTreeBox::Contains)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e9c16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTreeBox*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rect& Pathfinding::RecastBBTreeBox::__cordl_internal_get_rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rect;
}
constexpr ::UnityEngine::Rect const& Pathfinding::RecastBBTreeBox::__cordl_internal_get_rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rect;
}
constexpr void Pathfinding::RecastBBTreeBox::__cordl_internal_set_rect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rect = value;
}
constexpr ::UnityW<::Pathfinding::RecastMeshObj>& Pathfinding::RecastBBTreeBox::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::Pathfinding::RecastMeshObj> const& Pathfinding::RecastBBTreeBox::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void Pathfinding::RecastBBTreeBox::__cordl_internal_set_mesh(::UnityW<::Pathfinding::RecastMeshObj>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::Pathfinding::RecastBBTreeBox*& Pathfinding::RecastBBTreeBox::__cordl_internal_get_c1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c1;
}
constexpr ::Pathfinding::RecastBBTreeBox* const& Pathfinding::RecastBBTreeBox::__cordl_internal_get_c1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c1;
}
constexpr void Pathfinding::RecastBBTreeBox::__cordl_internal_set_c1(::Pathfinding::RecastBBTreeBox*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___c1 = value;
}
constexpr ::Pathfinding::RecastBBTreeBox*& Pathfinding::RecastBBTreeBox::__cordl_internal_get_c2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c2;
}
constexpr ::Pathfinding::RecastBBTreeBox* const& Pathfinding::RecastBBTreeBox::__cordl_internal_get_c2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c2;
}
constexpr void Pathfinding::RecastBBTreeBox::__cordl_internal_set_c2(::Pathfinding::RecastBBTreeBox*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___c2 = value;
}
inline void Pathfinding::RecastBBTreeBox::_ctor(::Pathfinding::RecastMeshObj*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTreeBox*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::RecastMeshObj*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline bool Pathfinding::RecastBBTreeBox::Contains(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTreeBox*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::Pathfinding::RecastBBTreeBox* Pathfinding::RecastBBTreeBox::New_ctor(::Pathfinding::RecastMeshObj*  mesh)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastBBTreeBox*>(mesh));
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastBBTreeBox::RecastBBTreeBox()   {
}
