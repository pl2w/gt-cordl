#pragma once
// IWYU pragma private; include "Meta/WitAi/CoroutineUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/zzzz__CoroutineUtility_def.hpp"
#include "Meta/WitAi/zzzz__CoroutineUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
// Ctor Parameters []
constexpr ::Meta::WitAi::CoroutineUtility::CoroutineUtility()   {
}
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::get_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.set_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)(bool)>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::set_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3c078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"set_IsRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e3c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.CoroutineBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)(::System::Collections::IEnumerator*, bool)>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineBegin)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e3c0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineBegin", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.CoroutineIterateEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineIterateEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e3c25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineIterateEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e3c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.CoroutineIterateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineIterateUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e3c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineIterateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)(::System::Collections::IEnumerator*)>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::MoveNext)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9e3c304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"MoveNext", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e3c598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.CoroutineCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineCancel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e3c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineCancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.CoroutineComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineComplete)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e3c4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer.CoroutineUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineUnload)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e3c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineUnload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutineUtility_CoroutinePerformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutineUtility_CoroutinePerformer::*)()>(&::Meta::WitAi::CoroutineUtility_CoroutinePerformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__IsRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRunning_k__BackingField;
}
constexpr bool const& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__IsRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRunning_k__BackingField;
}
constexpr void Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_set__IsRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRunning_k__BackingField = value;
}
constexpr bool& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__useUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useUpdate;
}
constexpr bool const& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__useUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useUpdate;
}
constexpr void Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_set__useUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useUpdate = value;
}
constexpr ::System::Collections::IEnumerator*& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr ::System::Collections::IEnumerator* const& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr void Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_set__method(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____method = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__coroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine;
}
constexpr ::UnityEngine::Coroutine* const& Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_get__coroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine;
}
constexpr void Meta::WitAi::CoroutineUtility_CoroutinePerformer::__cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutine = value;
}
inline bool Meta::WitAi::CoroutineUtility_CoroutinePerformer::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::set_IsRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"set_IsRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineBegin(::System::Collections::IEnumerator*  asyncMethod, bool  useUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineBegin", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncMethod, useUpdate);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineIterateEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineIterateEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineIterateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineIterateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::CoroutineUtility_CoroutinePerformer::MoveNext(::System::Collections::IEnumerator*  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"MoveNext", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineCancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineCancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineUnload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {"CoroutineUnload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutineUtility_CoroutinePerformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CoroutineUtility_CoroutinePerformer* Meta::WitAi::CoroutineUtility_CoroutinePerformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CoroutineUtility_CoroutinePerformer*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CoroutineUtility_CoroutinePerformer::CoroutineUtility_CoroutinePerformer()   {
}
//  Writing Method size for method: ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::*)(int32_t)>(&::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e3c2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::*)()>(&::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e3c688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::*)()>(&::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3c68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::*)()>(&::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3c6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::*)()>(&::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e3c704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::*)()>(&::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3c73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer>& Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer> const& Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9* Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9()   {
}
