#pragma once
// IWYU pragma private; include "Fusion/NetworkTransform.hpp"
#include "Fusion/zzzz__NetworkTRSP_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__NetworkTransform_def.hpp"
#include "Fusion/zzzz__IAfterAllTicks_def.hpp"
#include "Fusion/zzzz__IBeforeAllTicks_def.hpp"
#include "Fusion/zzzz__IBeforeCopyPreviousState_def.hpp"
#include "Fusion/zzzz__INetworkTRSPTeleport_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkTransform.get_AutoUpdateAreaOfInterestOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::get_AutoUpdateAreaOfInterestOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8b044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"get_AutoUpdateAreaOfInterestOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.set_AutoUpdateAreaOfInterestOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)(bool)>(&::Fusion::NetworkTransform::set_AutoUpdateAreaOfInterestOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f8b04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"set_AutoUpdateAreaOfInterestOverride", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::Awake)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f8b058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.CopyToEngine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::CopyToEngine)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f8b0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"CopyToEngine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.CopyToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::CopyToBuffer)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5f8b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"CopyToBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.CanInterpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::CanInterpolate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f8b65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"CanInterpolate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.Fusion_IBeforeAllTicks_BeforeAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)(bool, int32_t)>(&::Fusion::NetworkTransform::Fusion_IBeforeAllTicks_BeforeAllTicks)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5f8b6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Fusion.IBeforeAllTicks.BeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.Fusion_IAfterAllTicks_AfterAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)(bool, int32_t)>(&::Fusion::NetworkTransform::Fusion_IAfterAllTicks_AfterAllTicks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f8b90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Fusion.IAfterAllTicks.AfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f8b928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>)>(&::Fusion::NetworkTransform::Teleport)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f8b92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Teleport", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.SetAreaOfInterestOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkTransform::SetAreaOfInterestOverride)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f8baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkTransform*>(),
                    {::i2c::class_of<::Fusion::NetworkTransform*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::Spawned)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f8bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkTransform*>(),
                    {::i2c::class_of<::Fusion::NetworkTransform*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::Render)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f8bcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkTransform*>(),
                    {::i2c::class_of<::Fusion::NetworkTransform*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransform::*)()>(&::Fusion::NetworkTransform::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f8c8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get_SyncScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncScale;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get_SyncScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncScale;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set_SyncScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncScale = value;
}
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get_SyncParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncParent;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get_SyncParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncParent;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set_SyncParent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncParent = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkTransform::__cordl_internal_get__initial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initial;
}
constexpr ::Fusion::Tick const& Fusion::NetworkTransform::__cordl_internal_get__initial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initial;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__initial(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initial = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::NetworkTransform::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::NetworkTransform::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform = value;
}
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get__simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get__simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__simulation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulation = value;
}
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get__aoiEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiEnabled;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get__aoiEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiEnabled;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__aoiEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoiEnabled = value;
}
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get__aoiAutoUpdateOriginal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiAutoUpdateOriginal;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get__aoiAutoUpdateOriginal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoiAutoUpdateOriginal;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__aoiAutoUpdateOriginal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoiAutoUpdateOriginal = value;
}
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get__autoAOIOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoAOIOverride;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get__autoAOIOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoAOIOverride;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__autoAOIOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoAOIOverride = value;
}
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get_DisableSharedModeInterpolation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableSharedModeInterpolation;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get_DisableSharedModeInterpolation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableSharedModeInterpolation;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set_DisableSharedModeInterpolation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableSharedModeInterpolation = value;
}
constexpr bool& Fusion::NetworkTransform::__cordl_internal_get__render()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____render;
}
constexpr bool const& Fusion::NetworkTransform::__cordl_internal_get__render() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____render;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__render(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____render = value;
}
constexpr ::UnityEngine::Vector3& Fusion::NetworkTransform::__cordl_internal_get__renderPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderPosition;
}
constexpr ::UnityEngine::Vector3 const& Fusion::NetworkTransform::__cordl_internal_get__renderPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderPosition;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__renderPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderPosition = value;
}
constexpr ::UnityEngine::Quaternion& Fusion::NetworkTransform::__cordl_internal_get__renderRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderRotation;
}
constexpr ::UnityEngine::Quaternion const& Fusion::NetworkTransform::__cordl_internal_get__renderRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderRotation;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__renderRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderRotation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::NetworkTransform::__cordl_internal_get__renderParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::NetworkTransform::__cordl_internal_get__renderParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderParent;
}
constexpr void Fusion::NetworkTransform::__cordl_internal_set__renderParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderParent = value;
}
inline bool Fusion::NetworkTransform::get_AutoUpdateAreaOfInterestOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"get_AutoUpdateAreaOfInterestOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkTransform::set_AutoUpdateAreaOfInterestOverride(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"set_AutoUpdateAreaOfInterestOverride", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkTransform::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkTransform::CopyToEngine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"CopyToEngine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkTransform::CopyToBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"CopyToBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkTransform::CanInterpolate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"CanInterpolate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkTransform::Fusion_IBeforeAllTicks_BeforeAllTicks(bool  resimulation, int32_t  tickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Fusion.IBeforeAllTicks.BeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::NetworkTransform::Fusion_IAfterAllTicks_AfterAllTicks(bool  resimulation, int32_t  tickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Fusion.IAfterAllTicks.AfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::NetworkTransform::Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkTransform::Teleport(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {"Teleport", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void Fusion::NetworkTransform::SetAreaOfInterestOverride(::Fusion::NetworkObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkTransform*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Fusion::NetworkTransform::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkTransform*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkTransform::Render()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkTransform*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkTransform* Fusion::NetworkTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkTransform*>());
}
/// @brief Convert operator to "::Fusion::INetworkTRSPTeleport"
constexpr  Fusion::NetworkTransform::operator ::Fusion::INetworkTRSPTeleport*() noexcept {
return static_cast<::Fusion::INetworkTRSPTeleport*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkTRSPTeleport"
constexpr ::Fusion::INetworkTRSPTeleport* Fusion::NetworkTransform::i___Fusion__INetworkTRSPTeleport() noexcept {
return static_cast<::Fusion::INetworkTRSPTeleport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IBeforeAllTicks"
constexpr  Fusion::NetworkTransform::operator ::Fusion::IBeforeAllTicks*() noexcept {
return static_cast<::Fusion::IBeforeAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IBeforeAllTicks"
constexpr ::Fusion::IBeforeAllTicks* Fusion::NetworkTransform::i___Fusion__IBeforeAllTicks() noexcept {
return static_cast<::Fusion::IBeforeAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::NetworkTransform::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::NetworkTransform::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IAfterAllTicks"
constexpr  Fusion::NetworkTransform::operator ::Fusion::IAfterAllTicks*() noexcept {
return static_cast<::Fusion::IAfterAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IAfterAllTicks"
constexpr ::Fusion::IAfterAllTicks* Fusion::NetworkTransform::i___Fusion__IAfterAllTicks() noexcept {
return static_cast<::Fusion::IAfterAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IBeforeCopyPreviousState"
constexpr  Fusion::NetworkTransform::operator ::Fusion::IBeforeCopyPreviousState*() noexcept {
return static_cast<::Fusion::IBeforeCopyPreviousState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IBeforeCopyPreviousState"
constexpr ::Fusion::IBeforeCopyPreviousState* Fusion::NetworkTransform::i___Fusion__IBeforeCopyPreviousState() noexcept {
return static_cast<::Fusion::IBeforeCopyPreviousState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkTransform::NetworkTransform()   {
}
