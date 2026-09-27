#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_DynamicAddDeleteExample.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_DynamicAddDeleteExample_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MultiMeshBaker_def.hpp"
#include "GlobalNamespace/zzzz__MB_DynamicAddDeleteExample_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample.GaussianValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MB_DynamicAddDeleteExample::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample::GaussianValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9dfcd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"GaussianValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_DynamicAddDeleteExample::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample::Start)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x9dfcddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample.largeNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MB_DynamicAddDeleteExample::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample::largeNumber)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9dfd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"largeNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_DynamicAddDeleteExample::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample::OnGUI)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9dfd2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_DynamicAddDeleteExample::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9dfd364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_objsInCombined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsInCombined;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_objsInCombined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsInCombined;
}
constexpr void GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_set_objsInCombined(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objsInCombined = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MultiMeshBaker>& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_mbd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mbd;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MultiMeshBaker> const& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_mbd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mbd;
}
constexpr void GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_set_mbd(::UnityW<::GlobalNamespace::MB3_MultiMeshBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mbd = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_objs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objs;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_get_objs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objs;
}
constexpr void GlobalNamespace::MB_DynamicAddDeleteExample::__cordl_internal_set_objs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objs = value;
}
inline float_t GlobalNamespace::MB_DynamicAddDeleteExample::GaussianValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"GaussianValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MB_DynamicAddDeleteExample::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MB_DynamicAddDeleteExample::largeNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"largeNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MB_DynamicAddDeleteExample::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_DynamicAddDeleteExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_DynamicAddDeleteExample* GlobalNamespace::MB_DynamicAddDeleteExample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_DynamicAddDeleteExample*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_DynamicAddDeleteExample::MB_DynamicAddDeleteExample()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::*)(int32_t)>(&::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dfd28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dfd3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9dfd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dfd578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::*)()>(&::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfd5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample>& GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample> const& GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6* GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6::MB_DynamicAddDeleteExample__largeNumber_d__6()   {
}
