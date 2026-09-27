#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnCollisionEventsCosmetic.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_EventType_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_HandSource_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IHeldItem_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_EventType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_HandSource_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)()>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::IsMyItem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d9a848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"IsMyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)()>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::Awake)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x5d9a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d9af1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::OnCollisionStay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d9b570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::OnCollisionExit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d9b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.IsCollisionUsable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::IsCollisionUsable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d9af5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"IsCollisionUsable", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>, ::UnityEngine::Collision*)>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::Dispatch)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x5d9b034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"Dispatch", {}, {::i2c::type_of<::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.CompareTagAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::StringW>*)>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::CompareTagAny)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5d9b5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"CompareTagAny", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic.IsTagValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)(::UnityEngine::GameObject*, ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*)>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::IsTagValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d9b778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"IsTagValid", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::*)()>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5d9b7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_eventListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_eventListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventListeners;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_eventListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventListeners = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_enterListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_enterListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterListeners;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_enterListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterListeners = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_stayListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stayListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_stayListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stayListeners;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_stayListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stayListeners = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_exitListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_exitListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitListeners;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_exitListeners(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitListeners = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_myCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_myCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_parentTransferable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_parentTransferable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTransferable = value;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem*& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_myHeldItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem* const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_get_myHeldItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::__cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myHeldItem = value;
}
inline bool GorillaTag::Cosmetics::OnCollisionEventsCosmetic::IsMyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"IsMyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::OnCollisionExit(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline bool GorillaTag::Cosmetics::OnCollisionEventsCosmetic::IsCollisionUsable(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"IsCollisionUsable", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collision);
}
inline void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::Dispatch(::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>  listeners, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"Dispatch", {}, {::i2c::type_of<::ArrayW<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listeners, collision);
}
inline bool GorillaTag::Cosmetics::OnCollisionEventsCosmetic::CompareTagAny(::UnityEngine::GameObject*  go, ::System::Collections::Generic::HashSet_1<::StringW>*  tagSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"CompareTagAny", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go, tagSet);
}
inline bool GorillaTag::Cosmetics::OnCollisionEventsCosmetic::IsTagValid(::UnityEngine::GameObject*  obj, ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {"IsTagValid", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, listener);
}
inline void GorillaTag::Cosmetics::OnCollisionEventsCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic* GorillaTag::Cosmetics::OnCollisionEventsCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic::OnCollisionEventsCosmetic()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::*)()>(&::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d9b988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_collisionLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_collisionLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayerMask;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_collisionLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionLayerMask = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_collisionTagsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTagsList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_collisionTagsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTagsList;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_collisionTagsList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionTagsList = value;
}
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_eventType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_eventType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_eventType(::GlobalNamespace::OnCollisionEventsCosmetic_EventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventType = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>*& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_listenerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponent;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>* const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_listenerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponent;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_listenerComponent(::UnityEngine::Events::UnityEvent_2<bool,::UnityEngine::Collision*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerComponent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_listenerComponentContactPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponentContactPoint;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_listenerComponentContactPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponentContactPoint;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_listenerComponentContactPoint(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerComponentContactPoint = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_onCollidedVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCollidedVRRig;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_onCollidedVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCollidedVRRig;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_onCollidedVRRig(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCollidedVRRig = value;
}
constexpr bool& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_syncForEveryoneInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncForEveryoneInRoom;
}
constexpr bool const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_syncForEveryoneInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncForEveryoneInRoom;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_syncForEveryoneInRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncForEveryoneInRoom = value;
}
constexpr bool& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_fireOnlyWhileHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireOnlyWhileHeld;
}
constexpr bool const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_fireOnlyWhileHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireOnlyWhileHeld;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_fireOnlyWhileHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireOnlyWhileHeld = value;
}
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_handSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSource;
}
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_handSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSource;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_handSource(::GlobalNamespace::OnCollisionEventsCosmetic_HandSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSource = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_tagSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_get_tagSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagSet;
}
constexpr void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::__cordl_internal_set_tagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagSet = value;
}
inline void GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener* GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::OnCollisionEventsCosmetic_Listener::OnCollisionEventsCosmetic_Listener()   {
}
