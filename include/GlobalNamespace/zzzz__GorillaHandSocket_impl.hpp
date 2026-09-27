#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandSocket.hpp"
#include "GlobalNamespace/zzzz__HandSocketConstraint_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHandSocket_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHandNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.get_attachedHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaHandNode> (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::get_attachedHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"get_attachedHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.get_inUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::get_inUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"get_inUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.FetchSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::by_ref<::GlobalNamespace::GorillaHandSocket*>)>(&::GlobalNamespace::GorillaHandSocket::FetchSocket)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x590d94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"FetchSocket", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaHandSocket*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.CanAttach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::CanAttach)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x590d9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"CanAttach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)(::GlobalNamespace::GorillaHandNode*)>(&::GlobalNamespace::GorillaHandSocket::Attach)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x590da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Attach", {}, {::i2c::type_of<::GlobalNamespace::GorillaHandNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.Detach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::Detach)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x590dad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Detach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.Detach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)(::by_ref<::GlobalNamespace::GorillaHandNode*>)>(&::GlobalNamespace::GorillaHandSocket::Detach)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x590dae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Detach", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::GorillaHandNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.OnHandAttach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::OnHandAttach)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590dbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.OnHandDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::OnHandDetach)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590dbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.OnUpdateAttached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::OnUpdateAttached)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x590dbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x590dc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x590dd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590ddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::FixedUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x590df0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::Setup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x590ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandSocket::*)()>(&::GlobalNamespace::GorillaHandSocket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x590df90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaHandSocket::__cordl_internal_get_collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaHandSocket::__cordl_internal_get_collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr void GlobalNamespace::GorillaHandSocket::__cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collider = value;
}
constexpr float_t& GlobalNamespace::GorillaHandSocket::__cordl_internal_get_attachCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaHandSocket::__cordl_internal_get_attachCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachCooldown;
}
constexpr void GlobalNamespace::GorillaHandSocket::__cordl_internal_set_attachCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachCooldown = value;
}
constexpr ::GlobalNamespace::HandSocketConstraint& GlobalNamespace::GorillaHandSocket::__cordl_internal_get_constraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraint;
}
constexpr ::GlobalNamespace::HandSocketConstraint const& GlobalNamespace::GorillaHandSocket::__cordl_internal_get_constraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraint;
}
constexpr void GlobalNamespace::GorillaHandSocket::__cordl_internal_set_constraint(::GlobalNamespace::HandSocketConstraint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constraint = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHandNode>& GlobalNamespace::GorillaHandSocket::__cordl_internal_get__attachedHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedHand;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHandNode> const& GlobalNamespace::GorillaHandSocket::__cordl_internal_get__attachedHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedHand;
}
constexpr void GlobalNamespace::GorillaHandSocket::__cordl_internal_set__attachedHand(::UnityW<::GlobalNamespace::GorillaHandNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedHand = value;
}
constexpr bool& GlobalNamespace::GorillaHandSocket::__cordl_internal_get__inUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUse;
}
constexpr bool const& GlobalNamespace::GorillaHandSocket::__cordl_internal_get__inUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inUse;
}
constexpr void GlobalNamespace::GorillaHandSocket::__cordl_internal_set__inUse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inUse = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::GorillaHandSocket::__cordl_internal_get__sinceSocketStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceSocketStateChange;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::GorillaHandSocket::__cordl_internal_get__sinceSocketStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceSocketStateChange;
}
constexpr void GlobalNamespace::GorillaHandSocket::__cordl_internal_set__sinceSocketStateChange(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sinceSocketStateChange = value;
}
inline void GlobalNamespace::GorillaHandSocket::setStaticF_gColliderToSocket(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>*, "gColliderToSocket", ::GlobalNamespace::GorillaHandSocket*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>* GlobalNamespace::GorillaHandSocket::getStaticF_gColliderToSocket()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>*, "gColliderToSocket", ::GlobalNamespace::GorillaHandSocket*>();
}
inline ::UnityW<::GlobalNamespace::GorillaHandNode> GlobalNamespace::GorillaHandSocket::get_attachedHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"get_attachedHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaHandNode>>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHandSocket::get_inUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"get_inUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHandSocket::FetchSocket(::UnityEngine::Collider*  collider, ::by_ref<::GlobalNamespace::GorillaHandSocket*>  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"FetchSocket", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaHandSocket*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collider, socket);
}
inline bool GlobalNamespace::GorillaHandSocket::CanAttach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"CanAttach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::Attach(::GlobalNamespace::GorillaHandNode*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Attach", {}, {::i2c::type_of<::GlobalNamespace::GorillaHandNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::GorillaHandSocket::Detach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Detach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::Detach(::by_ref<::GlobalNamespace::GorillaHandNode*>  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Detach", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::GorillaHandNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::GorillaHandSocket::OnHandAttach()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::OnHandDetach()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::OnUpdateAttached()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandSocket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandSocket*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHandSocket* GlobalNamespace::GorillaHandSocket::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHandSocket*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHandSocket::GorillaHandSocket()   {
}
