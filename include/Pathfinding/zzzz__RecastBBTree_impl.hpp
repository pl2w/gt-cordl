#pragma once
// IWYU pragma private; include "Pathfinding/RecastBBTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__RecastBBTree_def.hpp"
#include "Pathfinding/zzzz__RecastBBTreeBox_def.hpp"
#include "Pathfinding/zzzz__RecastMeshObj_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::Pathfinding::RecastBBTree.QueryInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastBBTree::*)(::UnityEngine::Rect, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*)>(&::Pathfinding::RecastBBTree::QueryInBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e9b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"QueryInBounds", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.QueryBoxInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastBBTree::*)(::Pathfinding::RecastBBTreeBox*, ::UnityEngine::Rect, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*)>(&::Pathfinding::RecastBBTree::QueryBoxInBounds)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5e9b8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"QueryBoxInBounds", {}, {::i2c::type_of<::Pathfinding::RecastBBTreeBox*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RecastBBTree::*)(::Pathfinding::RecastMeshObj*)>(&::Pathfinding::RecastBBTree::Remove)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e9bb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"Remove", {}, {::i2c::type_of<::Pathfinding::RecastMeshObj*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.RemoveBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RecastBBTreeBox* (::Pathfinding::RecastBBTree::*)(::Pathfinding::RecastBBTreeBox*, ::Pathfinding::RecastMeshObj*, ::UnityEngine::Rect, ::by_ref<bool>)>(&::Pathfinding::RecastBBTree::RemoveBox)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5e9bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"RemoveBox", {}, {::i2c::type_of<::Pathfinding::RecastBBTreeBox*>(), ::i2c::type_of<::Pathfinding::RecastMeshObj*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastBBTree::*)(::Pathfinding::RecastMeshObj*)>(&::Pathfinding::RecastBBTree::Insert)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5e9bee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"Insert", {}, {::i2c::type_of<::Pathfinding::RecastMeshObj*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.RectIntersectsRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::Pathfinding::RecastBBTree::RectIntersectsRect)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e9bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"RectIntersectsRect", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.ExpansionRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::Pathfinding::RecastBBTree::ExpansionRequired)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e9c114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"ExpansionRequired", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.ExpandToContain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::Pathfinding::RecastBBTree::ExpandToContain)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e9bea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"ExpandToContain", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree.RectArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Rect)>(&::Pathfinding::RecastBBTree::RectArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9c15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"RectArea", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastBBTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastBBTree::*)()>(&::Pathfinding::RecastBBTree::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9c164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::RecastBBTreeBox*& Pathfinding::RecastBBTree::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::Pathfinding::RecastBBTreeBox* const& Pathfinding::RecastBBTree::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void Pathfinding::RecastBBTree::__cordl_internal_set_root(::Pathfinding::RecastBBTreeBox*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
inline void Pathfinding::RecastBBTree::QueryInBounds(::UnityEngine::Rect  bounds, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"QueryInBounds", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, buffer);
}
inline void Pathfinding::RecastBBTree::QueryBoxInBounds(::Pathfinding::RecastBBTreeBox*  box, ::UnityEngine::Rect  bounds, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  boxes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"QueryBoxInBounds", {}, {::i2c::type_of<::Pathfinding::RecastBBTreeBox*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, box, bounds, boxes);
}
inline bool Pathfinding::RecastBBTree::Remove(::Pathfinding::RecastMeshObj*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"Remove", {}, {::i2c::type_of<::Pathfinding::RecastMeshObj*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mesh);
}
inline ::Pathfinding::RecastBBTreeBox* Pathfinding::RecastBBTree::RemoveBox(::Pathfinding::RecastBBTreeBox*  c, ::Pathfinding::RecastMeshObj*  mesh, ::UnityEngine::Rect  bounds, ::by_ref<bool>  found)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"RemoveBox", {}, {::i2c::type_of<::Pathfinding::RecastBBTreeBox*>(), ::i2c::type_of<::Pathfinding::RecastMeshObj*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RecastBBTreeBox*>(this, ___internal_method, c, mesh, bounds, found);
}
inline void Pathfinding::RecastBBTree::Insert(::Pathfinding::RecastMeshObj*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"Insert", {}, {::i2c::type_of<::Pathfinding::RecastMeshObj*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline bool Pathfinding::RecastBBTree::RectIntersectsRect(::UnityEngine::Rect  r, ::UnityEngine::Rect  r2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"RectIntersectsRect", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, r, r2);
}
inline float_t Pathfinding::RecastBBTree::ExpansionRequired(::UnityEngine::Rect  r, ::UnityEngine::Rect  r2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"ExpansionRequired", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, r, r2);
}
inline ::UnityEngine::Rect Pathfinding::RecastBBTree::ExpandToContain(::UnityEngine::Rect  r, ::UnityEngine::Rect  r2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"ExpandToContain", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, r, r2);
}
inline float_t Pathfinding::RecastBBTree::RectArea(::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {"RectArea", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, r);
}
inline void Pathfinding::RecastBBTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastBBTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RecastBBTree* Pathfinding::RecastBBTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastBBTree*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastBBTree::RecastBBTree()   {
}
