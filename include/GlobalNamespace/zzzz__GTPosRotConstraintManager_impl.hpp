#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPosRotConstraintManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTPosRotConstraintManager_def.hpp"
#include "GlobalNamespace/zzzz__GTPosRotConstraintManager_Range_def.hpp"
#include "GlobalNamespace/zzzz__GTPosRotConstraints_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPosRotConstraint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraintManager::*)()>(&::GlobalNamespace::GTPosRotConstraintManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56786f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraintManager::*)()>(&::GlobalNamespace::GTPosRotConstraintManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5678aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.InvokeConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraintManager::*)(::GlobalNamespace::GorillaPosRotConstraint, int32_t)>(&::GlobalNamespace::GTPosRotConstraintManager::InvokeConstraint)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5678b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"InvokeConstraint", {}, {::i2c::type_of<::GlobalNamespace::GorillaPosRotConstraint>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraintManager::*)()>(&::GlobalNamespace::GTPosRotConstraintManager::LateUpdate)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5678c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTPosRotConstraintManager::CreateManager)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5678f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTPosRotConstraintManager*)>(&::GlobalNamespace::GTPosRotConstraintManager::SetInstance)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x56787e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::GTPosRotConstraintManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTPosRotConstraints*)>(&::GlobalNamespace::GTPosRotConstraintManager::Register)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x5679094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::GTPosRotConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTPosRotConstraints*)>(&::GlobalNamespace::GTPosRotConstraintManager::Unregister)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5679850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::GTPosRotConstraints*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraintManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraintManager::*)()>(&::GlobalNamespace::GTPosRotConstraintManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5679bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalParent;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalParent;
}
constexpr void GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_set_originalParent(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalParent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalOffset;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>* const& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalOffset;
}
constexpr void GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_set_originalOffset(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalOffset = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScale;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>* const& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScale;
}
constexpr void GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_set_originalScale(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalScale = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>*& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalRot;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>* const& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_originalRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalRot;
}
constexpr void GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_set_originalRot(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalRot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>*& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_constraintsToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraintsToDisable;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>* const& GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_get_constraintsToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraintsToDisable;
}
constexpr void GlobalNamespace::GTPosRotConstraintManager::__cordl_internal_set_constraintsToDisable(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTPosRotConstraints>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constraintsToDisable = value;
}
inline void GlobalNamespace::GTPosRotConstraintManager::setStaticF_instance(::UnityW<::GlobalNamespace::GTPosRotConstraintManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GTPosRotConstraintManager>, "instance", ::GlobalNamespace::GTPosRotConstraintManager*>(std::forward<::UnityW<::GlobalNamespace::GTPosRotConstraintManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GTPosRotConstraintManager> GlobalNamespace::GTPosRotConstraintManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GTPosRotConstraintManager>, "instance", ::GlobalNamespace::GTPosRotConstraintManager*>();
}
inline void GlobalNamespace::GTPosRotConstraintManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::GTPosRotConstraintManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GTPosRotConstraintManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::GTPosRotConstraintManager*>();
}
inline void GlobalNamespace::GTPosRotConstraintManager::setStaticF_constraints(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>*, "constraints", ::GlobalNamespace::GTPosRotConstraintManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>* GlobalNamespace::GTPosRotConstraintManager::getStaticF_constraints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>*, "constraints", ::GlobalNamespace::GTPosRotConstraintManager*>();
}
inline void GlobalNamespace::GTPosRotConstraintManager::setStaticF_componentRanges(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>*, "componentRanges", ::GlobalNamespace::GTPosRotConstraintManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>* GlobalNamespace::GTPosRotConstraintManager::getStaticF_componentRanges()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GTPosRotConstraintManager_Range>*, "componentRanges", ::GlobalNamespace::GTPosRotConstraintManager*>();
}
inline void GlobalNamespace::GTPosRotConstraintManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraintManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraintManager::InvokeConstraint(::GlobalNamespace::GorillaPosRotConstraint  constraint, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"InvokeConstraint", {}, {::i2c::type_of<::GlobalNamespace::GorillaPosRotConstraint>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint, index);
}
inline void GlobalNamespace::GTPosRotConstraintManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraintManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraintManager::SetInstance(::GlobalNamespace::GTPosRotConstraintManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::GTPosRotConstraintManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::GTPosRotConstraintManager::Register(::GlobalNamespace::GTPosRotConstraints*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::GTPosRotConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component);
}
inline void GlobalNamespace::GTPosRotConstraintManager::Unregister(::GlobalNamespace::GTPosRotConstraints*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::GTPosRotConstraints*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component);
}
inline void GlobalNamespace::GTPosRotConstraintManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraintManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTPosRotConstraintManager* GlobalNamespace::GTPosRotConstraintManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTPosRotConstraintManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPosRotConstraintManager::GTPosRotConstraintManager()   {
}
