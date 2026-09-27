#pragma once
// IWYU pragma private; include "GlobalNamespace/Monkeye_LazerFX.hpp"
#include "UnityEngine/zzzz__LineRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Monkeye_LazerFX_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Monkeye_LazerFX.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Monkeye_LazerFX::*)()>(&::GlobalNamespace::Monkeye_LazerFX::Awake)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c069a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Monkeye_LazerFX.EnableLazer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Monkeye_LazerFX::*)(::ArrayW<::UnityEngine::Transform*>, ::GlobalNamespace::VRRig*, float_t)>(&::GlobalNamespace::Monkeye_LazerFX::EnableLazer)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c04634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"EnableLazer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Monkeye_LazerFX.EnableLazer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Monkeye_LazerFX::*)(::ArrayW<::UnityEngine::Transform*>, ::UnityEngine::Vector3)>(&::GlobalNamespace::Monkeye_LazerFX::EnableLazer)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c06aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"EnableLazer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Monkeye_LazerFX.DisableLazer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Monkeye_LazerFX::*)()>(&::GlobalNamespace::Monkeye_LazerFX::DisableLazer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c04524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"DisableLazer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Monkeye_LazerFX.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Monkeye_LazerFX::*)()>(&::GlobalNamespace::Monkeye_LazerFX::Update)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c06c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Monkeye_LazerFX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Monkeye_LazerFX::*)()>(&::GlobalNamespace::Monkeye_LazerFX::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c06da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_eyeBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_eyeBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeBones;
}
constexpr void GlobalNamespace::Monkeye_LazerFX::__cordl_internal_set_eyeBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeBones = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_targetRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_targetRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr void GlobalNamespace::Monkeye_LazerFX::__cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRig = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_targetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_targetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr void GlobalNamespace::Monkeye_LazerFX::__cordl_internal_set_targetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPos = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_lines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>> const& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_lines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr void GlobalNamespace::Monkeye_LazerFX::__cordl_internal_set_lines(::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lines = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_targetFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFx;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Monkeye_LazerFX::__cordl_internal_get_targetFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetFx;
}
constexpr void GlobalNamespace::Monkeye_LazerFX::__cordl_internal_set_targetFx(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetFx = value;
}
inline void GlobalNamespace::Monkeye_LazerFX::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Monkeye_LazerFX::EnableLazer(::ArrayW<::UnityEngine::Transform*>  eyes_, ::GlobalNamespace::VRRig*  rig_, float_t  maxDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"EnableLazer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eyes_, rig_, maxDist);
}
inline void GlobalNamespace::Monkeye_LazerFX::EnableLazer(::ArrayW<::UnityEngine::Transform*>  eyes_, ::UnityEngine::Vector3  targetPos_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"EnableLazer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eyes_, targetPos_);
}
inline void GlobalNamespace::Monkeye_LazerFX::DisableLazer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"DisableLazer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Monkeye_LazerFX::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Monkeye_LazerFX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Monkeye_LazerFX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Monkeye_LazerFX* GlobalNamespace::Monkeye_LazerFX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Monkeye_LazerFX*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Monkeye_LazerFX::Monkeye_LazerFX()   {
}
