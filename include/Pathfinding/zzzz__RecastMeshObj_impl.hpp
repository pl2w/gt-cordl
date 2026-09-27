#pragma once
// IWYU pragma private; include "Pathfinding/RecastMeshObj.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "Pathfinding/zzzz__RecastMeshObj_def.hpp"
#include "Pathfinding/zzzz__RecastBBTree_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.GetAllInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*, ::UnityEngine::Bounds)>(&::Pathfinding::RecastMeshObj::GetAllInBounds)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x5e9c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetAllInBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e9cc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::Register)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5e9c94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.RecalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::RecalculateBounds)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5e9c738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::GetBounds)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e9bc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.GetMeshFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshFilter> (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::GetMeshFilter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e9ccc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetMeshFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.GetCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::GetCollider)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e9cc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::OnDisable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e9cd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastMeshObj._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastMeshObj::*)()>(&::Pathfinding::RecastMeshObj::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e9ce14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Bounds& Pathfinding::RecastMeshObj::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::RecastMeshObj::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::RecastMeshObj::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr bool& Pathfinding::RecastMeshObj::__cordl_internal_get_dynamic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamic;
}
constexpr bool const& Pathfinding::RecastMeshObj::__cordl_internal_get_dynamic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamic;
}
constexpr void Pathfinding::RecastMeshObj::__cordl_internal_set_dynamic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamic = value;
}
constexpr int32_t& Pathfinding::RecastMeshObj::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr int32_t const& Pathfinding::RecastMeshObj::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void Pathfinding::RecastMeshObj::__cordl_internal_set_area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
constexpr bool& Pathfinding::RecastMeshObj::__cordl_internal_get__dynamic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamic;
}
constexpr bool const& Pathfinding::RecastMeshObj::__cordl_internal_get__dynamic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamic;
}
constexpr void Pathfinding::RecastMeshObj::__cordl_internal_set__dynamic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamic = value;
}
constexpr bool& Pathfinding::RecastMeshObj::__cordl_internal_get_registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr bool const& Pathfinding::RecastMeshObj::__cordl_internal_get_registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr void Pathfinding::RecastMeshObj::__cordl_internal_set_registered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registered = value;
}
inline void Pathfinding::RecastMeshObj::setStaticF_tree(::Pathfinding::RecastBBTree*  value)  {
::cordl_internals::setStaticField<::Pathfinding::RecastBBTree*, "tree", ::Pathfinding::RecastMeshObj*>(std::forward<::Pathfinding::RecastBBTree*>(value));
}
inline ::Pathfinding::RecastBBTree* Pathfinding::RecastMeshObj::getStaticF_tree()  {
return ::cordl_internals::getStaticField<::Pathfinding::RecastBBTree*, "tree", ::Pathfinding::RecastMeshObj*>();
}
inline void Pathfinding::RecastMeshObj::setStaticF_dynamicMeshObjs(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*, "dynamicMeshObjs", ::Pathfinding::RecastMeshObj*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>* Pathfinding::RecastMeshObj::getStaticF_dynamicMeshObjs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*, "dynamicMeshObjs", ::Pathfinding::RecastMeshObj*>();
}
inline void Pathfinding::RecastMeshObj::GetAllInBounds(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  buffer, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetAllInBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, bounds);
}
inline void Pathfinding::RecastMeshObj::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastMeshObj::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastMeshObj::RecalculateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Pathfinding::RecastMeshObj::GetBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MeshFilter> Pathfinding::RecastMeshObj::GetMeshFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetMeshFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshFilter>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> Pathfinding::RecastMeshObj::GetCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"GetCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline void Pathfinding::RecastMeshObj::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastMeshObj::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastMeshObj*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RecastMeshObj* Pathfinding::RecastMeshObj::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastMeshObj*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastMeshObj::RecastMeshObj()   {
}
