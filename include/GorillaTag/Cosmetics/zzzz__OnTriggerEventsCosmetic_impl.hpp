#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnTriggerEventsCosmetic.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_EventType_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_HandSource_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IHeldItem_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_EventType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_HandSource_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)()>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::IsMyItem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d9ba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"IsMyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)()>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::Awake)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x5d9baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d9c2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::OnTriggerStay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d9c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::OnTriggerExit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d9c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.IsOtherUsable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::IsOtherUsable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d9c2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"IsOtherUsable", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>, ::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::Dispatch)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5d9c3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"Dispatch", {}, {::i2c::type_of<::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.CompareTagAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::StringW>*)>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::CompareTagAny)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5d9c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"CompareTagAny", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic.IsTagValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)(::UnityEngine::GameObject*, ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*)>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::IsTagValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d9c9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"IsTagValid", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::*)()>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5d9ca4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_eventListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_eventListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventListeners;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_eventListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventListeners = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_enterListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_enterListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterListeners;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_enterListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterListeners = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_stayListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stayListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_stayListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stayListeners;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_stayListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stayListeners = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_exitListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*> const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_exitListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitListeners;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_exitListeners(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitListeners = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_myCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_myCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_parentTransferable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_parentTransferable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTransferable = value;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem*& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_myHeldItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem* const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_get_myHeldItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::__cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myHeldItem = value;
}
inline bool GorillaTag::Cosmetics::OnTriggerEventsCosmetic::IsMyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"IsMyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool GorillaTag::Cosmetics::OnTriggerEventsCosmetic::IsOtherUsable(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"IsOtherUsable", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::Dispatch(::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>  listeners, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"Dispatch", {}, {::i2c::type_of<::ArrayW<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listeners, other);
}
inline bool GorillaTag::Cosmetics::OnTriggerEventsCosmetic::CompareTagAny(::UnityEngine::GameObject*  go, ::System::Collections::Generic::HashSet_1<::StringW>*  tagSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"CompareTagAny", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go, tagSet);
}
inline bool GorillaTag::Cosmetics::OnTriggerEventsCosmetic::IsTagValid(::UnityEngine::GameObject*  obj, ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {"IsTagValid", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, listener);
}
inline void GorillaTag::Cosmetics::OnTriggerEventsCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic* GorillaTag::Cosmetics::OnTriggerEventsCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic::OnTriggerEventsCosmetic()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::*)()>(&::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d9cbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_triggerLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_triggerLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLayerMask;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_triggerLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerLayerMask = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_triggerTagsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTagsList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_triggerTagsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTagsList;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_triggerTagsList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerTagsList = value;
}
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_eventType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_eventType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_eventType(::GlobalNamespace::OnTriggerEventsCosmetic_EventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventType = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>*& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_listenerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponent;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>* const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_listenerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponent;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_listenerComponent(::UnityEngine::Events::UnityEvent_2<bool,::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerComponent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_listenerComponentContactPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponentContactPoint;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_listenerComponentContactPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponentContactPoint;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_listenerComponentContactPoint(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerComponentContactPoint = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_onTriggeredVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTriggeredVRRig;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_onTriggeredVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTriggeredVRRig;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_onTriggeredVRRig(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTriggeredVRRig = value;
}
constexpr bool& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_syncForEveryoneInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncForEveryoneInRoom;
}
constexpr bool const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_syncForEveryoneInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncForEveryoneInRoom;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_syncForEveryoneInRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncForEveryoneInRoom = value;
}
constexpr bool& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_fireOnlyWhileHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireOnlyWhileHeld;
}
constexpr bool const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_fireOnlyWhileHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireOnlyWhileHeld;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_fireOnlyWhileHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireOnlyWhileHeld = value;
}
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_HandSource& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_handSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSource;
}
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_HandSource const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_handSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSource;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_handSource(::GlobalNamespace::OnTriggerEventsCosmetic_HandSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSource = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_tagSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_get_tagSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagSet;
}
constexpr void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::__cordl_internal_set_tagSet(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagSet = value;
}
inline void GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener* GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::OnTriggerEventsCosmetic_Listener::OnTriggerEventsCosmetic_Listener()   {
}
