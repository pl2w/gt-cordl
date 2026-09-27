#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldTargetItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__WorldTargetItem_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WorldTargetItem.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldTargetItem::*)()>(&::GlobalNamespace::WorldTargetItem::IsValid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x573e4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldTargetItem.GenerateTargetFromPlayerAndID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WorldTargetItem* (*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::WorldTargetItem::GenerateTargetFromPlayerAndID)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x573e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {"GenerateTargetFromPlayerAndID", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldTargetItem.GenerateTargetFromWorldSharableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WorldTargetItem* (*)(::GlobalNamespace::NetPlayer*, int32_t, ::UnityEngine::Transform*)>(&::GlobalNamespace::WorldTargetItem::GenerateTargetFromWorldSharableItem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x573e6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {"GenerateTargetFromWorldSharableItem", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldTargetItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldTargetItem::*)(::GlobalNamespace::NetPlayer*, int32_t, ::UnityEngine::Transform*)>(&::GlobalNamespace::WorldTargetItem::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x573e634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldTargetItem.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::WorldTargetItem::*)()>(&::GlobalNamespace::WorldTargetItem::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x573e748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                    {::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::WorldTargetItem::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::WorldTargetItem::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void GlobalNamespace::WorldTargetItem::__cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr int32_t& GlobalNamespace::WorldTargetItem::__cordl_internal_get_itemIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIdx;
}
constexpr int32_t const& GlobalNamespace::WorldTargetItem::__cordl_internal_get_itemIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIdx;
}
constexpr void GlobalNamespace::WorldTargetItem::__cordl_internal_set_itemIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemIdx = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldTargetItem::__cordl_internal_get_targetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldTargetItem::__cordl_internal_get_targetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObject;
}
constexpr void GlobalNamespace::WorldTargetItem::__cordl_internal_set_targetObject(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetObject = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::WorldTargetItem::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::WorldTargetItem::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GlobalNamespace::WorldTargetItem::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
inline bool GlobalNamespace::WorldTargetItem::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldTargetItem* GlobalNamespace::WorldTargetItem::GenerateTargetFromPlayerAndID(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {"GenerateTargetFromPlayerAndID", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WorldTargetItem*>(nullptr, ___internal_method, owner, itemIdx);
}
inline ::GlobalNamespace::WorldTargetItem* GlobalNamespace::WorldTargetItem::GenerateTargetFromWorldSharableItem(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {"GenerateTargetFromWorldSharableItem", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WorldTargetItem*>(nullptr, ___internal_method, owner, itemIdx, transform);
}
inline void GlobalNamespace::WorldTargetItem::_ctor(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, itemIdx, transform);
}
inline ::StringW GlobalNamespace::WorldTargetItem::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WorldTargetItem*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldTargetItem* GlobalNamespace::WorldTargetItem::New_ctor(::GlobalNamespace::NetPlayer*  owner, int32_t  itemIdx, ::UnityEngine::Transform*  transform)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldTargetItem*>(owner, itemIdx, transform));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldTargetItem::WorldTargetItem()   {
}
