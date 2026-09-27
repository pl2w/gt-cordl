#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ObjectPlacer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__ObjectPlacer_def.hpp"
#include "Pathfinding/Examples/zzzz__ObjectPlacer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ObjectPlacer::*)()>(&::Pathfinding::Examples::ObjectPlacer::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5efae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer.PlaceObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ObjectPlacer::*)()>(&::Pathfinding::Examples::ObjectPlacer::PlaceObject)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5efae9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {"PlaceObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer.RemoveObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::ObjectPlacer::*)()>(&::Pathfinding::Examples::ObjectPlacer::RemoveObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5efb110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {"RemoveObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ObjectPlacer::*)()>(&::Pathfinding::Examples::ObjectPlacer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5efb1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::Examples::ObjectPlacer::__cordl_internal_get_go()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___go;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::Examples::ObjectPlacer::__cordl_internal_get_go() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___go;
}
constexpr void Pathfinding::Examples::ObjectPlacer::__cordl_internal_set_go(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___go = value;
}
constexpr bool& Pathfinding::Examples::ObjectPlacer::__cordl_internal_get_direct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direct;
}
constexpr bool const& Pathfinding::Examples::ObjectPlacer::__cordl_internal_get_direct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direct;
}
constexpr void Pathfinding::Examples::ObjectPlacer::__cordl_internal_set_direct(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direct = value;
}
constexpr bool& Pathfinding::Examples::ObjectPlacer::__cordl_internal_get_issueGUOs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issueGUOs;
}
constexpr bool const& Pathfinding::Examples::ObjectPlacer::__cordl_internal_get_issueGUOs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issueGUOs;
}
constexpr void Pathfinding::Examples::ObjectPlacer::__cordl_internal_set_issueGUOs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___issueGUOs = value;
}
inline void Pathfinding::Examples::ObjectPlacer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::ObjectPlacer::PlaceObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {"PlaceObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::ObjectPlacer::RemoveObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {"RemoveObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ObjectPlacer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::ObjectPlacer* Pathfinding::Examples::ObjectPlacer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ObjectPlacer*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ObjectPlacer::ObjectPlacer()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::*)(int32_t)>(&::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5efb17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::*)()>(&::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5efb1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::*)()>(&::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5efb1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::*)()>(&::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efb4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::*)()>(&::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5efb4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::*)()>(&::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efb4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::Examples::ObjectPlacer>& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::Examples::ObjectPlacer> const& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::ObjectPlacer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Bounds& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get__b_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b_5__2;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_get__b_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____b_5__2;
}
constexpr void Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::__cordl_internal_set__b_5__2(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____b_5__2 = value;
}
inline void Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5* Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5::ObjectPlacer__RemoveObject_d__5()   {
}
