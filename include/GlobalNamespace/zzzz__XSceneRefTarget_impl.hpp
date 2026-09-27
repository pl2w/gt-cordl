#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneRefTarget.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRefTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRefTarget::*)()>(&::GlobalNamespace::XSceneRefTarget::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bb904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRefTarget::*)()>(&::GlobalNamespace::XSceneRefTarget::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56bb9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRefTarget::*)()>(&::GlobalNamespace::XSceneRefTarget::OnValidate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56bbb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRefTarget::*)(bool)>(&::GlobalNamespace::XSceneRefTarget::Register)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56bb90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"Register", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRefTarget::*)()>(&::GlobalNamespace::XSceneRefTarget::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56bbbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget.AssignNewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRefTarget::*)()>(&::GlobalNamespace::XSceneRefTarget::AssignNewID)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56bbc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"AssignNewID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget.CreateNewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::XSceneRefTarget::CreateNewID)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x56bba0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"CreateNewID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRefTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRefTarget::*)()>(&::GlobalNamespace::XSceneRefTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56bbc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::XSceneRefTarget::__cordl_internal_get_UniqueID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueID;
}
constexpr int32_t const& GlobalNamespace::XSceneRefTarget::__cordl_internal_get_UniqueID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueID;
}
constexpr void GlobalNamespace::XSceneRefTarget::__cordl_internal_set_UniqueID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UniqueID = value;
}
constexpr int32_t& GlobalNamespace::XSceneRefTarget::__cordl_internal_get_lastRegisteredID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRegisteredID;
}
constexpr int32_t const& GlobalNamespace::XSceneRefTarget::__cordl_internal_get_lastRegisteredID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRegisteredID;
}
constexpr void GlobalNamespace::XSceneRefTarget::__cordl_internal_set_lastRegisteredID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRegisteredID = value;
}
inline void GlobalNamespace::XSceneRefTarget::setStaticF_epoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "epoch", ::GlobalNamespace::XSceneRefTarget*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime GlobalNamespace::XSceneRefTarget::getStaticF_epoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "epoch", ::GlobalNamespace::XSceneRefTarget*>();
}
inline void GlobalNamespace::XSceneRefTarget::setStaticF_lastAssignedID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastAssignedID", ::GlobalNamespace::XSceneRefTarget*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::XSceneRefTarget::getStaticF_lastAssignedID()  {
return ::cordl_internals::getStaticField<int32_t, "lastAssignedID", ::GlobalNamespace::XSceneRefTarget*>();
}
inline void GlobalNamespace::XSceneRefTarget::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XSceneRefTarget::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XSceneRefTarget::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XSceneRefTarget::Register(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"Register", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void GlobalNamespace::XSceneRefTarget::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XSceneRefTarget::AssignNewID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"AssignNewID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::XSceneRefTarget::CreateNewID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {"CreateNewID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::XSceneRefTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRefTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XSceneRefTarget* GlobalNamespace::XSceneRefTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XSceneRefTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XSceneRefTarget::XSceneRefTarget()   {
}
