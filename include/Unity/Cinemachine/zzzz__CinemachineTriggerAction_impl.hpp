#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTriggerAction.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision2D_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineTriggerAction::Filter)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaee08a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"Filter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.InternalDoTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineTriggerAction::InternalDoTriggerEnter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaee0948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"InternalDoTriggerEnter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.InternalDoTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineTriggerAction::InternalDoTriggerExit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaee0e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"InternalDoTriggerExit", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collider*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee0eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collider*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnTriggerExit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee0f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collision*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee0f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collision*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnCollisionExit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee0f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnTriggerEnter2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collider2D*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnTriggerEnter2D)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee0f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerEnter2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnTriggerExit2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collider2D*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnTriggerExit2D)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee0fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerExit2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnCollisionEnter2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collision2D*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnCollisionEnter2D)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee0ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionEnter2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnCollisionExit2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)(::UnityEngine::Collision2D*)>(&::Unity::Cinemachine::CinemachineTriggerAction::OnCollisionExit2D)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaee1020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionExit2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)()>(&::Unity::Cinemachine::CinemachineTriggerAction::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaee104c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTriggerAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTriggerAction::*)()>(&::Unity::Cinemachine::CinemachineTriggerAction::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaee1050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_LayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_LayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayerMask = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_WithTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WithTag;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_WithTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WithTag;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_WithTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WithTag = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_WithoutTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WithoutTag;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_WithoutTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WithoutTag;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_WithoutTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WithoutTag = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_SkipFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipFirst;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_SkipFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipFirst;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_SkipFirst(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipFirst = value;
}
constexpr bool& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_Repeating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Repeating;
}
constexpr bool const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_Repeating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Repeating;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_Repeating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Repeating = value;
}
constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_OnObjectEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectEnter;
}
constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_OnObjectEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectEnter;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_OnObjectEnter(::GlobalNamespace::CinemachineTriggerAction_ActionSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnObjectEnter = value;
}
constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_OnObjectExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectExit;
}
constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_OnObjectExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnObjectExit;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_OnObjectExit(::GlobalNamespace::CinemachineTriggerAction_ActionSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnObjectExit = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_m_ActiveTriggerObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveTriggerObjects;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_get_m_ActiveTriggerObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveTriggerObjects;
}
constexpr void Unity::Cinemachine::CinemachineTriggerAction::__cordl_internal_set_m_ActiveTriggerObjects(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveTriggerObjects = value;
}
inline bool Unity::Cinemachine::CinemachineTriggerAction::Filter(::UnityEngine::GameObject*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"Filter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::InternalDoTriggerEnter(::UnityEngine::GameObject*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"InternalDoTriggerEnter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::InternalDoTriggerExit(::UnityEngine::GameObject*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"InternalDoTriggerExit", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnCollisionExit(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnTriggerEnter2D(::UnityEngine::Collider2D*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerEnter2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnTriggerExit2D(::UnityEngine::Collider2D*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnTriggerExit2D", {}, {::i2c::type_of<::UnityEngine::Collider2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnCollisionEnter2D(::UnityEngine::Collision2D*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionEnter2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnCollisionExit2D(::UnityEngine::Collision2D*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnCollisionExit2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTriggerAction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTriggerAction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineTriggerAction* Unity::Cinemachine::CinemachineTriggerAction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineTriggerAction*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineTriggerAction::CinemachineTriggerAction()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent::*)()>(&::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee1228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent* Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent::ActionSettings_CinemachineTriggerAction_TriggerEvent()   {
}
