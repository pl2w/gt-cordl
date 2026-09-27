#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEventBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "UnityEngine/Events/zzzz__InvokableCallList_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentCallGroup_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentCall_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentListenerMode_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb5fab4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5fabf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5fac24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.FindMethod_Impl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::UnityEngine::Events::UnityEventBase::*)(::StringW, ::System::Type*)>(&::UnityEngine::Events::UnityEventBase::FindMethod_Impl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                    {::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::BaseInvokableCall* (::UnityEngine::Events::UnityEventBase::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::UnityEventBase::GetDelegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                    {::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.FindMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::UnityEngine::Events::UnityEventBase::*)(::UnityEngine::Events::PersistentCall*)>(&::UnityEngine::Events::UnityEventBase::FindMethod)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb5f9ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"FindMethod", {}, {::i2c::type_of<::UnityEngine::Events::PersistentCall*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.FindMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::UnityEngine::Events::UnityEventBase::*)(::StringW, ::System::Type*, ::UnityEngine::Events::PersistentListenerMode, ::System::Type*)>(&::UnityEngine::Events::UnityEventBase::FindMethod)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb5fac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"FindMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Events::PersistentListenerMode>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetPersistentEventCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::GetPersistentEventCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb5fb08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetPersistentEventCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetPersistentTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Events::UnityEventBase::*)(int32_t)>(&::UnityEngine::Events::UnityEventBase::GetPersistentTarget)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb5fb0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetPersistentTarget", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetPersistentMethodName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Events::UnityEventBase::*)(int32_t)>(&::UnityEngine::Events::UnityEventBase::GetPersistentMethodName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5fb0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetPersistentMethodName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.DirtyPersistentCalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::DirtyPersistentCalls)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5fabfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"DirtyPersistentCalls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.RebuildPersistentCallsIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb5fb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"RebuildPersistentCallsIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.AddCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)(::UnityEngine::Events::BaseInvokableCall*)>(&::UnityEngine::Events::UnityEventBase::AddCall)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb5fb134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"AddCall", {}, {::i2c::type_of<::UnityEngine::Events::BaseInvokableCall*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.RemoveListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::UnityEventBase::RemoveListener)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb5fb148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"RemoveListener", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.RemoveAllListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::RemoveAllListeners)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb5fb15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"RemoveAllListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.PrepareInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::PrepareInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb5fb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"PrepareInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb5fb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                    {::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetValidMethodInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>)>(&::UnityEngine::Events::UnityEventBase::GetValidMethodInfo)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb5faedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetValidMethodInfo", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::InvokableCallList*& UnityEngine::Events::UnityEventBase::__cordl_internal_get_m_Calls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Calls;
}
constexpr ::UnityEngine::Events::InvokableCallList* const& UnityEngine::Events::UnityEventBase::__cordl_internal_get_m_Calls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Calls;
}
constexpr void UnityEngine::Events::UnityEventBase::__cordl_internal_set_m_Calls(::UnityEngine::Events::InvokableCallList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Calls = value;
}
constexpr ::UnityEngine::Events::PersistentCallGroup*& UnityEngine::Events::UnityEventBase::__cordl_internal_get_m_PersistentCalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PersistentCalls;
}
constexpr ::UnityEngine::Events::PersistentCallGroup* const& UnityEngine::Events::UnityEventBase::__cordl_internal_get_m_PersistentCalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PersistentCalls;
}
constexpr void UnityEngine::Events::UnityEventBase::__cordl_internal_set_m_PersistentCalls(::UnityEngine::Events::PersistentCallGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PersistentCalls = value;
}
constexpr bool& UnityEngine::Events::UnityEventBase::__cordl_internal_get_m_CallsDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CallsDirty;
}
constexpr bool const& UnityEngine::Events::UnityEventBase::__cordl_internal_get_m_CallsDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CallsDirty;
}
constexpr void UnityEngine::Events::UnityEventBase::__cordl_internal_set_m_CallsDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CallsDirty = value;
}
inline void UnityEngine::Events::UnityEventBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, targetObjType);
}
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEventBase::GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*>(this, ___internal_method, target, theFunction);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod(::UnityEngine::Events::PersistentCall*  call)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"FindMethod", {}, {::i2c::type_of<::UnityEngine::Events::PersistentCall*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, call);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod(::StringW  name, ::System::Type*  listenerType, ::UnityEngine::Events::PersistentListenerMode  mode, ::System::Type*  argumentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"FindMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Events::PersistentListenerMode>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, listenerType, mode, argumentType);
}
inline int32_t UnityEngine::Events::UnityEventBase::GetPersistentEventCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetPersistentEventCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Events::UnityEventBase::GetPersistentTarget(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetPersistentTarget", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, index);
}
inline ::StringW UnityEngine::Events::UnityEventBase::GetPersistentMethodName(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetPersistentMethodName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void UnityEngine::Events::UnityEventBase::DirtyPersistentCalls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"DirtyPersistentCalls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"RebuildPersistentCallsIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::AddCall(::UnityEngine::Events::BaseInvokableCall*  call)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"AddCall", {}, {::i2c::type_of<::UnityEngine::Events::BaseInvokableCall*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, call);
}
inline void UnityEngine::Events::UnityEventBase::RemoveListener(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"RemoveListener", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetObj, method);
}
inline void UnityEngine::Events::UnityEventBase::RemoveAllListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"RemoveAllListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* UnityEngine::Events::UnityEventBase::PrepareInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"PrepareInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*>(this, ___internal_method);
}
inline ::StringW UnityEngine::Events::UnityEventBase::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::GetValidMethodInfo(::System::Type*  objectType, ::StringW  functionName, ::ArrayW<::System::Type*>  argumentTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Events::UnityEventBase*>(),
                        {"GetValidMethodInfo", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, objectType, functionName, argumentTypes);
}
inline ::UnityEngine::Events::UnityEventBase* UnityEngine::Events::UnityEventBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Events::UnityEventBase*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Events::UnityEventBase::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Events::UnityEventBase::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::UnityEventBase::UnityEventBase()   {
}
