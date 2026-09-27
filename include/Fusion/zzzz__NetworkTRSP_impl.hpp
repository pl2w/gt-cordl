#pragma once
// IWYU pragma private; include "Fusion/NetworkTRSP.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__NetworkTRSP_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkTRSPData_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkTRSP.get_IsMainTRSP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkTRSP::*)()>(&::Fusion::NetworkTRSP::get_IsMainTRSP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"get_IsMainTRSP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.set_IsMainTRSP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTRSP::*)(bool)>(&::Fusion::NetworkTRSP::set_IsMainTRSP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"set_IsMainTRSP", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkTRSPData (::Fusion::NetworkTRSP::*)()>(&::Fusion::NetworkTRSP::get_Data)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f8c938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkTRSPData> (::Fusion::NetworkTRSP::*)()>(&::Fusion::NetworkTRSP::get_State)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f8b17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.SetAreaOfInterestOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTRSP::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkTRSP::SetAreaOfInterestOverride)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f8bb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                    {::i2c::class_of<::Fusion::NetworkTRSP*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkTRSP*, ::UnityEngine::Transform*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>)>(&::Fusion::NetworkTRSP::Teleport)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f8b968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"Teleport", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.SetParentTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkTRSP*, ::UnityEngine::Transform*, ::Fusion::NetworkBehaviourId)>(&::Fusion::NetworkTRSP::SetParentTransform)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f8b1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"SetParentTransform", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.ResolveAOIOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkTRSP*, ::UnityEngine::Transform*)>(&::Fusion::NetworkTRSP::ResolveAOIOverride)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f8b51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"ResolveAOIOverride", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTRSP::*)()>(&::Fusion::NetworkTRSP::OnEnable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5f8c9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkTRSP*, ::UnityEngine::Transform*, bool, bool, bool, ::by_ref<::Fusion::Tick>)>(&::Fusion::NetworkTRSP::Render)> {
  constexpr static std::size_t size = 0xb18;
  constexpr static std::size_t addrs = 0x5f8bdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"Render", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Fusion::Tick>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTRSP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTRSP::*)()>(&::Fusion::NetworkTRSP::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f8c90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::NetworkTRSP::__cordl_internal_get__IsMainTRSP_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMainTRSP_k__BackingField;
}
constexpr bool const& Fusion::NetworkTRSP::__cordl_internal_get__IsMainTRSP_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMainTRSP_k__BackingField;
}
constexpr void Fusion::NetworkTRSP::__cordl_internal_set__IsMainTRSP_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMainTRSP_k__BackingField = value;
}
constexpr ::Fusion::PlayerRef& Fusion::NetworkTRSP::__cordl_internal_get__previousRenderStateAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousRenderStateAuth;
}
constexpr ::Fusion::PlayerRef const& Fusion::NetworkTRSP::__cordl_internal_get__previousRenderStateAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousRenderStateAuth;
}
constexpr void Fusion::NetworkTRSP::__cordl_internal_set__previousRenderStateAuth(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousRenderStateAuth = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& Fusion::NetworkTRSP::__cordl_internal_get__stateAuthorityChangePositionError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateAuthorityChangePositionError;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& Fusion::NetworkTRSP::__cordl_internal_get__stateAuthorityChangePositionError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateAuthorityChangePositionError;
}
constexpr void Fusion::NetworkTRSP::__cordl_internal_set__stateAuthorityChangePositionError(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateAuthorityChangePositionError = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& Fusion::NetworkTRSP::__cordl_internal_get__stateAuthorityChangeRotationError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateAuthorityChangeRotationError;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& Fusion::NetworkTRSP::__cordl_internal_get__stateAuthorityChangeRotationError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateAuthorityChangeRotationError;
}
constexpr void Fusion::NetworkTRSP::__cordl_internal_set__stateAuthorityChangeRotationError(::System::Nullable_1<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateAuthorityChangeRotationError = value;
}
constexpr float_t& Fusion::NetworkTRSP::__cordl_internal_get__stateAuthorityChangeErrorCorrectionDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateAuthorityChangeErrorCorrectionDelta;
}
constexpr float_t const& Fusion::NetworkTRSP::__cordl_internal_get__stateAuthorityChangeErrorCorrectionDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateAuthorityChangeErrorCorrectionDelta;
}
constexpr void Fusion::NetworkTRSP::__cordl_internal_set__stateAuthorityChangeErrorCorrectionDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateAuthorityChangeErrorCorrectionDelta = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkTRSP::__cordl_internal_get_reenabledTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenabledTick;
}
constexpr ::Fusion::Tick const& Fusion::NetworkTRSP::__cordl_internal_get_reenabledTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenabledTick;
}
constexpr void Fusion::NetworkTRSP::__cordl_internal_set_reenabledTick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reenabledTick = value;
}
inline bool Fusion::NetworkTRSP::get_IsMainTRSP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"get_IsMainTRSP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkTRSP::set_IsMainTRSP(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"set_IsMainTRSP", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::NetworkTRSPData Fusion::NetworkTRSP::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkTRSPData>(this, ___internal_method);
}
inline ::by_ref<::Fusion::NetworkTRSPData> Fusion::NetworkTRSP::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkTRSPData>>(this, ___internal_method);
}
inline void Fusion::NetworkTRSP::SetAreaOfInterestOverride(::Fusion::NetworkObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkTRSP*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Fusion::NetworkTRSP::Teleport(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  transform, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"Teleport", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, transform, position, rotation);
}
inline void Fusion::NetworkTRSP::SetParentTransform(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  transform, ::Fusion::NetworkBehaviourId  parentId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"SetParentTransform", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, transform, parentId);
}
inline void Fusion::NetworkTRSP::ResolveAOIOverride(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"ResolveAOIOverride", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, parent);
}
inline void Fusion::NetworkTRSP::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkTRSP::Render(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  transform, bool  syncScale, bool  syncParent, bool  local, ::by_ref<::Fusion::Tick>  initial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {"Render", {}, {::i2c::type_of<::Fusion::NetworkTRSP*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Fusion::Tick>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, transform, syncScale, syncParent, local, initial);
}
inline void Fusion::NetworkTRSP::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSP*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkTRSP* Fusion::NetworkTRSP::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkTRSP*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkTRSP::NetworkTRSP()   {
}
