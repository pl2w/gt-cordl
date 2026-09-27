#pragma once
// IWYU pragma private; include "Pathfinding/Examples/TurnBasedDoor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedDoor_def.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedDoor_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__SingleNodeBlocker_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor::*)()>(&::Pathfinding::Examples::TurnBasedDoor::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ef501c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor::*)()>(&::Pathfinding::Examples::TurnBasedDoor::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef50ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor::*)()>(&::Pathfinding::Examples::TurnBasedDoor::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ef5118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor.WaitAndClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::TurnBasedDoor::*)()>(&::Pathfinding::Examples::TurnBasedDoor::WaitAndClose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef5138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"WaitAndClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor::*)()>(&::Pathfinding::Examples::TurnBasedDoor::Open)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ef51cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Open", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor::*)()>(&::Pathfinding::Examples::TurnBasedDoor::Toggle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef524c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Toggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor::*)()>(&::Pathfinding::Examples::TurnBasedDoor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef5284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Pathfinding::Examples::TurnBasedDoor::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Pathfinding::Examples::TurnBasedDoor::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void Pathfinding::Examples::TurnBasedDoor::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& Pathfinding::Examples::TurnBasedDoor::__cordl_internal_get_blocker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& Pathfinding::Examples::TurnBasedDoor::__cordl_internal_get_blocker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr void Pathfinding::Examples::TurnBasedDoor::__cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocker = value;
}
constexpr bool& Pathfinding::Examples::TurnBasedDoor::__cordl_internal_get_open()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___open;
}
constexpr bool const& Pathfinding::Examples::TurnBasedDoor::__cordl_internal_get_open() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___open;
}
constexpr void Pathfinding::Examples::TurnBasedDoor::__cordl_internal_set_open(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___open = value;
}
inline void Pathfinding::Examples::TurnBasedDoor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedDoor::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedDoor::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::TurnBasedDoor::WaitAndClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"WaitAndClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedDoor::Open()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Open", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedDoor::Toggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {"Toggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedDoor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::TurnBasedDoor* Pathfinding::Examples::TurnBasedDoor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::TurnBasedDoor*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::TurnBasedDoor::TurnBasedDoor()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::*)(int32_t)>(&::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef51a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::*)()>(&::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::*)()>(&::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5ef5290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::*)()>(&::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef5508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::*)()>(&::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef5510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::*)()>(&::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef5548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedDoor>& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedDoor> const& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::TurnBasedDoor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get__selector_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector_5__2;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>* const& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get__selector_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector_5__2;
}
constexpr void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_set__selector_5__2(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector_5__2 = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get__node_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node_5__3;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_get__node_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node_5__3;
}
constexpr void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::__cordl_internal_set__node_5__3(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____node_5__3 = value;
}
inline void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6* Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6::TurnBasedDoor__WaitAndClose_d__6()   {
}
