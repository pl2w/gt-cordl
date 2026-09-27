#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodManager.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/zzzz__StaticLodManager_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GorillaTag/zzzz__StaticLodGroup_def.hpp"
#include "GorillaTag/zzzz__StaticLodManager_GroupInfo_def.hpp"
#include "GorillaTag/zzzz__StaticLodManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GorillaTag::StaticLodManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodManager::*)()>(&::GorillaTag::StaticLodManager::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d24cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodManager::*)()>(&::GorillaTag::StaticLodManager::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d24d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GorillaTag::StaticLodGroup*)>(&::GorillaTag::StaticLodManager::Register)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5d24608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::StaticLodGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager.OldRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GorillaTag::StaticLodGroup*)>(&::GorillaTag::StaticLodManager::OldRegister)> {
  constexpr static std::size_t size = 0x1090;
  constexpr static std::size_t addrs = 0x5d25364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"OldRegister", {}, {::i2c::type_of<::GorillaTag::StaticLodGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GorillaTag::StaticLodManager::Unregister)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5d243b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"Unregister", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager.TryAddLateInstantiatedMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::GorillaTag::StaticLodManager::TryAddLateInstantiatedMembers)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5d263f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"TryAddLateInstantiatedMembers", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager._TryAddMembersToLodGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, int32_t)>(&::GorillaTag::StaticLodManager::_TryAddMembersToLodGroup)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5d24d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"_TryAddMembersToLodGroup", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::GorillaTag::StaticLodManager::SetEnabled)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d240e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodManager::*)()>(&::GorillaTag::StaticLodManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5d2662c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodManager::*)()>(&::GorillaTag::StaticLodManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d26abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GorillaTag::StaticLodManager::__cordl_internal_get_mainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GorillaTag::StaticLodManager::__cordl_internal_get_mainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr void GorillaTag::StaticLodManager::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCamera = value;
}
constexpr bool& GorillaTag::StaticLodManager::__cordl_internal_get_hasMainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMainCamera;
}
constexpr bool const& GorillaTag::StaticLodManager::__cordl_internal_get_hasMainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasMainCamera;
}
constexpr void GorillaTag::StaticLodManager::__cordl_internal_set_hasMainCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasMainCamera = value;
}
inline void GorillaTag::StaticLodManager::setStaticF_groupMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>*, "groupMonoBehaviours", ::GorillaTag::StaticLodManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>* GorillaTag::StaticLodManager::getStaticF_groupMonoBehaviours()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>*, "groupMonoBehaviours", ::GorillaTag::StaticLodManager*>();
}
inline void GorillaTag::StaticLodManager::setStaticF__groupInstId_to_index(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "_groupInstId_to_index", ::GorillaTag::StaticLodManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GorillaTag::StaticLodManager::getStaticF__groupInstId_to_index()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "_groupInstId_to_index", ::GorillaTag::StaticLodManager*>();
}
inline void GorillaTag::StaticLodManager::setStaticF_groupInfos(::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>*, "groupInfos", ::GorillaTag::StaticLodManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>* GorillaTag::StaticLodManager::getStaticF_groupInfos()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>*, "groupInfos", ::GorillaTag::StaticLodManager*>();
}
inline void GorillaTag::StaticLodManager::setStaticF_freeSlots(::System::Collections::Generic::Stack_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<int32_t>*, "freeSlots", ::GorillaTag::StaticLodManager*>(std::forward<::System::Collections::Generic::Stack_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::Stack_1<int32_t>* GorillaTag::StaticLodManager::getStaticF_freeSlots()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<int32_t>*, "freeSlots", ::GorillaTag::StaticLodManager*>();
}
inline void GorillaTag::StaticLodManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::StaticLodManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTag::StaticLodManager::Register(::GorillaTag::StaticLodGroup*  lodGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::StaticLodGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lodGroup);
}
inline int32_t GorillaTag::StaticLodManager::OldRegister(::GorillaTag::StaticLodGroup*  lodGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"OldRegister", {}, {::i2c::type_of<::GorillaTag::StaticLodGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lodGroup);
}
inline void GorillaTag::StaticLodManager::Unregister(int32_t  lodGroupIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"Unregister", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lodGroupIndex);
}
inline bool GorillaTag::StaticLodManager::TryAddLateInstantiatedMembers(::UnityEngine::GameObject*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"TryAddLateInstantiatedMembers", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, root);
}
inline bool GorillaTag::StaticLodManager::_TryAddMembersToLodGroup(bool  isNew, int32_t  groupIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"_TryAddMembersToLodGroup", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, isNew, groupIndex);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool GorillaTag::StaticLodManager::_TryAddComponentsToGroup(::GorillaTag::StaticLodGroup*  lodGroup, ::by_ref<::GlobalNamespace::StaticLodManager_GroupInfo>  ref_groupInfo, ::by_ref<::ArrayW<T>>  ref_components, ::System::Predicate_1<T>*  includeIf, ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*  getBounds)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                    {"_TryAddComponentsToGroup", {::i2c::class_of<T>()}, {::i2c::type_of<::GorillaTag::StaticLodGroup*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::StaticLodManager_GroupInfo>>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::System::Predicate_1<T>*>(), ::i2c::type_of<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lodGroup, ref_groupInfo, ref_components, includeIf, getBounds);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GorillaTag::StaticLodManager::_EdAddPathsToGroup(::ArrayW<T>  components, ::by_ref<::ArrayW<::StringW>>  ref_edDebugPaths)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                    {"_EdAddPathsToGroup", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, components, ref_edDebugPaths);
}
inline void GorillaTag::StaticLodManager::SetEnabled(int32_t  index, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, enable);
}
inline void GorillaTag::StaticLodManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::StaticLodManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::StaticLodManager* GorillaTag::StaticLodManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::StaticLodManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaTag::StaticLodManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaTag::StaticLodManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::StaticLodManager::StaticLodManager()   {
}
//  Writing Method size for method: ::GorillaTag::StaticLodManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodManager___c::*)()>(&::GorillaTag::StaticLodManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d26cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager___c.__TryAddMembersToLodGroup_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::StaticLodManager___c::*)(::UnityEngine::Collider*)>(&::GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d26ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_0", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager___c.__TryAddMembersToLodGroup_b__13_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GorillaTag::StaticLodManager___c::*)(::UnityEngine::Collider*)>(&::GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d26d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_1", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager___c.__TryAddMembersToLodGroup_b__13_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::StaticLodManager___c::*)(::UnityEngine::Renderer*)>(&::GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d26d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_2", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager___c.__TryAddMembersToLodGroup_b__13_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GorillaTag::StaticLodManager___c::*)(::UnityEngine::Renderer*)>(&::GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d26d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_3", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager___c.__TryAddMembersToLodGroup_b__13_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::StaticLodManager___c::*)(::UnityEngine::UI::Graphic*)>(&::GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d26ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_4", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodManager___c.__TryAddMembersToLodGroup_b__13_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GorillaTag::StaticLodManager___c::*)(::UnityEngine::UI::Graphic*)>(&::GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_5)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d26de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_5", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::StaticLodManager___c::setStaticF___9(::GorillaTag::StaticLodManager___c*  value)  {
::cordl_internals::setStaticField<::GorillaTag::StaticLodManager___c*, "<>9", ::GorillaTag::StaticLodManager___c*>(std::forward<::GorillaTag::StaticLodManager___c*>(value));
}
inline ::GorillaTag::StaticLodManager___c* GorillaTag::StaticLodManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTag::StaticLodManager___c*, "<>9", ::GorillaTag::StaticLodManager___c*>();
}
inline void GorillaTag::StaticLodManager___c::setStaticF___9__13_0(::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__13_0", ::GorillaTag::StaticLodManager___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* GorillaTag::StaticLodManager___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__13_0", ::GorillaTag::StaticLodManager___c*>();
}
inline void GorillaTag::StaticLodManager___c::setStaticF___9__13_1(::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__13_1", ::GorillaTag::StaticLodManager___c*>(std::forward<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>* GorillaTag::StaticLodManager___c::getStaticF___9__13_1()  {
return ::cordl_internals::getStaticField<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__13_1", ::GorillaTag::StaticLodManager___c*>();
}
inline void GorillaTag::StaticLodManager___c::setStaticF___9__13_2(::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*, "<>9__13_2", ::GorillaTag::StaticLodManager___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>* GorillaTag::StaticLodManager___c::getStaticF___9__13_2()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*, "<>9__13_2", ::GorillaTag::StaticLodManager___c*>();
}
inline void GorillaTag::StaticLodManager___c::setStaticF___9__13_3(::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>*, "<>9__13_3", ::GorillaTag::StaticLodManager___c*>(std::forward<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>*>(value));
}
inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>* GorillaTag::StaticLodManager___c::getStaticF___9__13_3()  {
return ::cordl_internals::getStaticField<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>*, "<>9__13_3", ::GorillaTag::StaticLodManager___c*>();
}
inline void GorillaTag::StaticLodManager___c::setStaticF___9__13_4(::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>*, "<>9__13_4", ::GorillaTag::StaticLodManager___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>* GorillaTag::StaticLodManager___c::getStaticF___9__13_4()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>*, "<>9__13_4", ::GorillaTag::StaticLodManager___c*>();
}
inline void GorillaTag::StaticLodManager___c::setStaticF___9__13_5(::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>*  value)  {
::cordl_internals::setStaticField<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>*, "<>9__13_5", ::GorillaTag::StaticLodManager___c*>(std::forward<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>*>(value));
}
inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>* GorillaTag::StaticLodManager___c::getStaticF___9__13_5()  {
return ::cordl_internals::getStaticField<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>*, "<>9__13_5", ::GorillaTag::StaticLodManager___c*>();
}
inline void GorillaTag::StaticLodManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_0(::UnityEngine::Collider*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_0", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, coll);
}
inline ::UnityEngine::Bounds GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_1(::UnityEngine::Collider*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_1", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, coll);
}
inline bool GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_2(::UnityEngine::Renderer*  rend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_2", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rend);
}
inline ::UnityEngine::Bounds GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_3(::UnityEngine::Renderer*  rend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_3", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, rend);
}
inline bool GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_4(::UnityEngine::UI::Graphic*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_4", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _);
}
inline ::UnityEngine::Bounds GorillaTag::StaticLodManager___c::__TryAddMembersToLodGroup_b__13_5(::UnityEngine::UI::Graphic*  gfx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager___c*>(),
                        {"<_TryAddMembersToLodGroup>b__13_5", {}, {::i2c::type_of<::UnityEngine::UI::Graphic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, gfx);
}
inline ::GorillaTag::StaticLodManager___c* GorillaTag::StaticLodManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::StaticLodManager___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::StaticLodManager___c::StaticLodManager___c()   {
}
template<typename T>
inline void GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline ::UnityEngine::Bounds GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>::Invoke(T  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, t);
}
template<typename T>
inline ::System::IAsyncResult* GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>::BeginInvoke(T  t, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, t, callback, object);
}
template<typename T>
inline ::UnityEngine::Bounds GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, result);
}
template<typename T>
inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>* GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>::StaticLodManager__GetBoundsDelegate_1()   {
}
