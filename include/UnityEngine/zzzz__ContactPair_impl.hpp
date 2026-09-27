#pragma once
// IWYU pragma private; include "UnityEngine/ContactPair.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__CollisionPairEventFlags_impl.hpp"
#include "UnityEngine/zzzz__CollisionPairFlags_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ContactPairPoint_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactPair.get_colliderInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_colliderInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb68d17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_colliderInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_otherColliderInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_otherColliderInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb68d184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_otherColliderInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_collider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_collider)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_collider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_otherCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_otherCollider)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb67ea44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_otherCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_impulseSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_impulseSum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68d18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_impulseSum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_isCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_isCollisionEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68aa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_isCollisionEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_isCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_isCollisionExit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68ab74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_isCollisionExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_isCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_isCollisionStay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68ab68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_isCollisionStay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.get_hasRemovedCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ContactPair::*)()>(&::UnityEngine::ContactPair::get_hasRemovedCollider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb68aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_hasRemovedCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.ExtractContactsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ContactPair::*)(::ArrayW<::UnityEngine::ContactPoint>, bool)>(&::UnityEngine::ContactPair::ExtractContactsArray)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb67ecf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"ExtractContactsArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.GetContactPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::ContactPairPoint> (::UnityEngine::ContactPair::*)(int32_t)>(&::UnityEngine::ContactPair::GetContactPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb68d198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"GetContactPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactPair.GetContactPoint_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ContactPairPoint* (::UnityEngine::ContactPair::*)(int32_t)>(&::UnityEngine::ContactPair::GetContactPoint_Internal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb67f148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"GetContactPoint_Internal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ContactPair::get_colliderInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_colliderInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::get_otherColliderInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_otherColliderInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_collider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_collider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::ContactPair::get_otherCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_otherCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ContactPair::get_impulseSum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_impulseSum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_isCollisionEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_isCollisionEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_isCollisionExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_isCollisionExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_isCollisionStay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_isCollisionStay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::ContactPair::get_hasRemovedCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"get_hasRemovedCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::ContactPair::ExtractContactsArray(::ArrayW<::UnityEngine::ContactPoint>  managedContainer, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"ExtractContactsArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, managedContainer, flipped);
}
inline ::by_ref<::UnityEngine::ContactPairPoint> UnityEngine::ContactPair::GetContactPoint(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"GetContactPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::ContactPairPoint>>(*this, ___internal_method, index);
}
inline ::UnityEngine::ContactPairPoint* UnityEngine::ContactPair::GetContactPoint_Internal(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ContactPair>(),
                        {"GetContactPoint_Internal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactPairPoint*>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "m_ColliderID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OtherColliderID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NbPoints", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::CollisionPairFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Events", ty: "::UnityEngine::CollisionPairEventFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ImpulseSum", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ContactPair::ContactPair(int32_t  m_ColliderID, int32_t  m_OtherColliderID, ::System::IntPtr  m_StartPtr, uint32_t  m_NbPoints, ::UnityEngine::CollisionPairFlags  m_Flags, ::UnityEngine::CollisionPairEventFlags  m_Events, ::UnityEngine::Vector3  m_ImpulseSum) noexcept  {
this->m_ColliderID = m_ColliderID;
this->m_OtherColliderID = m_OtherColliderID;
this->m_StartPtr = m_StartPtr;
this->m_NbPoints = m_NbPoints;
this->m_Flags = m_Flags;
this->m_Events = m_Events;
this->m_ImpulseSum = m_ImpulseSum;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactPair::ContactPair()   {
}
