#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/MonoBehaviourEmpty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__MonoBehaviourEmpty_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__MonoBehaviourEmpty_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty.BuildInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty> (*)(::StringW)>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty::BuildInstance)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f61080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"BuildInstance", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty.SelfDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::MonoBehaviourEmpty::*)()>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty::SelfDestroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f61014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"SelfDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::MonoBehaviourEmpty::*)()>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty::Update)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f63798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty.CompleteOnMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::MonoBehaviourEmpty::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty::CompleteOnMainThread)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6380c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"CompleteOnMainThread", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty.StartCoroutineAndDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::MonoBehaviourEmpty::*)(::System::Collections::IEnumerator*)>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty::StartCoroutineAndDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f62140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"StartCoroutineAndDestroy", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::MonoBehaviourEmpty::*)()>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& Fusion::Photon::Realtime::MonoBehaviourEmpty::__cordl_internal_get_onCompleteCall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleteCall;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& Fusion::Photon::Realtime::MonoBehaviourEmpty::__cordl_internal_get_onCompleteCall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleteCall;
}
constexpr void Fusion::Photon::Realtime::MonoBehaviourEmpty::__cordl_internal_set_onCompleteCall(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCompleteCall = value;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler*& Fusion::Photon::Realtime::MonoBehaviourEmpty::__cordl_internal_get_obj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
constexpr ::Fusion::Photon::Realtime::RegionHandler* const& Fusion::Photon::Realtime::MonoBehaviourEmpty::__cordl_internal_get_obj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj;
}
constexpr void Fusion::Photon::Realtime::MonoBehaviourEmpty::__cordl_internal_set_obj(::Fusion::Photon::Realtime::RegionHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obj = value;
}
inline ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty> Fusion::Photon::Realtime::MonoBehaviourEmpty::BuildInstance(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"BuildInstance", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>>(nullptr, ___internal_method, id);
}
inline void Fusion::Photon::Realtime::MonoBehaviourEmpty::SelfDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"SelfDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::MonoBehaviourEmpty::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::MonoBehaviourEmpty::CompleteOnMainThread(::Fusion::Photon::Realtime::RegionHandler*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"CompleteOnMainThread", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Fusion::Photon::Realtime::MonoBehaviourEmpty::StartCoroutineAndDestroy(::System::Collections::IEnumerator*  coroutine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {"StartCoroutineAndDestroy", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coroutine);
}
inline void Fusion::Photon::Realtime::MonoBehaviourEmpty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::MonoBehaviourEmpty* Fusion::Photon::Realtime::MonoBehaviourEmpty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::MonoBehaviourEmpty*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::MonoBehaviourEmpty::MonoBehaviourEmpty()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::*)()>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0._StartCoroutineAndDestroy_g__Routine_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::*)()>(&::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::_StartCoroutineAndDestroy_g__Routine_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f6381c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*>(),
                        {"<StartCoroutineAndDestroy>g__Routine|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::__cordl_internal_get_coroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutine;
}
constexpr ::System::Collections::IEnumerator* const& Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::__cordl_internal_get_coroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutine;
}
constexpr void Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::__cordl_internal_set_coroutine(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutine = value;
}
constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>& Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty> const& Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::__cordl_internal_set___4__this(::UnityW<::Fusion::Photon::Realtime::MonoBehaviourEmpty>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::_StartCoroutineAndDestroy_g__Routine_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*>(),
                        {"<StartCoroutineAndDestroy>g__Routine|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0* Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0::MonoBehaviourEmpty___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::*)(int32_t)>(&::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f63890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::*)()>(&::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f638b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::*)()>(&::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f638c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::*)()>(&::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::*)()>(&::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f63948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::*)()>(&::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*& Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0* const& Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__cordl_internal_set___4__this(::Fusion::Photon::Realtime::MonoBehaviourEmpty___c__DisplayClass6_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d* Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d::__c__DisplayClass6_0_MonoBehaviourEmpty___StartCoroutineAndDestroy_g__Routine_0_d()   {
}
