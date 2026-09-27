#pragma once
// IWYU pragma private; include "Pathfinding/Examples/AnimationLinkTraverser.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Examples/zzzz__AnimationLinkTraverser_def.hpp"
#include "Pathfinding/Examples/zzzz__AnimationLinkTraverser_def.hpp"
#include "Pathfinding/zzzz__AnimationLink_def.hpp"
#include "Pathfinding/zzzz__RichAI_def.hpp"
#include "Pathfinding/zzzz__RichSpecial_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AnimationLinkTraverser::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser::OnEnable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5efb68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AnimationLinkTraverser::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5efb7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser.TraverseOffMeshLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::AnimationLinkTraverser::*)(::Pathfinding::RichSpecial*)>(&::Pathfinding::Examples::AnimationLinkTraverser::TraverseOffMeshLink)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5efb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(),
                    {::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AnimationLinkTraverser::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& Pathfinding::Examples::AnimationLinkTraverser::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& Pathfinding::Examples::AnimationLinkTraverser::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void Pathfinding::Examples::AnimationLinkTraverser::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::UnityW<::Pathfinding::RichAI>& Pathfinding::Examples::AnimationLinkTraverser::__cordl_internal_get_ai()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr ::UnityW<::Pathfinding::RichAI> const& Pathfinding::Examples::AnimationLinkTraverser::__cordl_internal_get_ai() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr void Pathfinding::Examples::AnimationLinkTraverser::__cordl_internal_set_ai(::UnityW<::Pathfinding::RichAI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ai = value;
}
inline void Pathfinding::Examples::AnimationLinkTraverser::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::AnimationLinkTraverser::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::AnimationLinkTraverser::TraverseOffMeshLink(::Pathfinding::RichSpecial*  rs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, rs);
}
inline void Pathfinding::Examples::AnimationLinkTraverser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::AnimationLinkTraverser* Pathfinding::Examples::AnimationLinkTraverser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::AnimationLinkTraverser*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::AnimationLinkTraverser::AnimationLinkTraverser()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::*)(int32_t)>(&::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5efb988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5efb9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x5efb9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efc008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5efc010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::*)()>(&::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efc048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Pathfinding::RichSpecial*& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get_rs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rs;
}
constexpr ::Pathfinding::RichSpecial* const& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get_rs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rs;
}
constexpr void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_set_rs(::Pathfinding::RichSpecial*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rs = value;
}
constexpr ::UnityW<::Pathfinding::Examples::AnimationLinkTraverser>& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::Examples::AnimationLinkTraverser> const& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::AnimationLinkTraverser>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::Pathfinding::AnimationLink>& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get__link_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____link_5__2;
}
constexpr ::UnityW<::Pathfinding::AnimationLink> const& Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_get__link_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____link_5__2;
}
constexpr void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::__cordl_internal_set__link_5__2(::UnityW<::Pathfinding::AnimationLink>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____link_5__2 = value;
}
inline void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4* Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4::AnimationLinkTraverser__TraverseOffMeshLink_d__4()   {
}
