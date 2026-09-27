#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DelayedActionManager.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DelayedActionManager_DelegateInfo_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DelayedActionManager_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DelayedActionManager_DelegateInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>* (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(::by_ref<::GlobalNamespace::DelayedActionManager_DelegateInfo>)>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb2f9634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"GetNode", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DelayedActionManager_DelegateInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb2f9728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.DestroyWhenComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb2f979c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"DestroyWhenComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.AddAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Delegate*, float_t, ::ArrayW<::System::Object*>)>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb2f97a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"AddAction", {}, {::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.AddActionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(::System::Delegate*, float_t, ::ArrayW<::System::Object*>)>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xb2f981c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"AddActionInternal", {}, {::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb2f9af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.Wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb2f9c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"Wait", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb2fa07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.InternalLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(float_t)>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xb2f9d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"InternalLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb2fa1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::DelayedActionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&::UnityEngine::ResourceManagement::Util::DelayedActionManager::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb2fa2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_Actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actions;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*> const& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_Actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actions;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_Actions(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Actions = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DelayedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DelayedActions;
}
constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>* const& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DelayedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DelayedActions;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_DelayedActions(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DelayedActions = value;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>*& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_NodeCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NodeCache;
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>* const& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_NodeCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NodeCache;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_NodeCache(::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NodeCache = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_CollectionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectionIndex;
}
constexpr int32_t const& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_CollectionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectionIndex;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_CollectionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CollectionIndex = value;
}
constexpr bool& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DestroyOnCompletion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DestroyOnCompletion;
}
constexpr bool const& UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_get_m_DestroyOnCompletion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DestroyOnCompletion;
}
constexpr void UnityEngine::ResourceManagement::Util::DelayedActionManager::__cordl_internal_set_m_DestroyOnCompletion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DestroyOnCompletion = value;
}
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>* UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode(::by_ref<::GlobalNamespace::DelayedActionManager_DelegateInfo>  del)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"GetNode", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DelayedActionManager_DelegateInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>(this, ___internal_method, del);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"DestroyWhenComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction(::System::Delegate*  action, float_t  delay, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"AddAction", {}, {::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, delay, parameters);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal(::System::Delegate*  action, float_t  delay, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"AddActionInternal", {}, {::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, delay, parameters);
}
inline bool UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait(float_t  timeout, float_t  timeAdvanceAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"Wait", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeout, timeAdvanceAmount);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"InternalLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Util::DelayedActionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::DelayedActionManager* UnityEngine::ResourceManagement::Util::DelayedActionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::DelayedActionManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::DelayedActionManager::DelayedActionManager()   {
}
