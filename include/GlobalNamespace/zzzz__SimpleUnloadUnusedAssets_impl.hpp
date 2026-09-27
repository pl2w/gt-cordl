#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleUnloadUnusedAssets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleUnloadUnusedAssets_def.hpp"
#include "GlobalNamespace/zzzz__SimpleUnloadUnusedAssets_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleUnloadUnusedAssets::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5985398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets.UnloadUnusedAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SimpleUnloadUnusedAssets::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets::UnloadUnusedAssets)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59853b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets*>(),
                        {"UnloadUnusedAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleUnloadUnusedAssets::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x598544c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SimpleUnloadUnusedAssets::__cordl_internal_get_WaitForUnload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaitForUnload;
}
constexpr float_t const& GlobalNamespace::SimpleUnloadUnusedAssets::__cordl_internal_get_WaitForUnload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaitForUnload;
}
constexpr void GlobalNamespace::SimpleUnloadUnusedAssets::__cordl_internal_set_WaitForUnload(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaitForUnload = value;
}
inline void GlobalNamespace::SimpleUnloadUnusedAssets::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SimpleUnloadUnusedAssets::UnloadUnusedAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets*>(),
                        {"UnloadUnusedAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleUnloadUnusedAssets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleUnloadUnusedAssets* GlobalNamespace::SimpleUnloadUnusedAssets::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleUnloadUnusedAssets*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleUnloadUnusedAssets::SimpleUnloadUnusedAssets()   {
}
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::*)(int32_t)>(&::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5985424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598545c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5985460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598559c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59855a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::*)()>(&::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59855dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets>& GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets> const& GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2* GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2()   {
}
