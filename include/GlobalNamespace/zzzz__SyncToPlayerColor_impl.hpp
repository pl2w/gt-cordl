#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncToPlayerColor.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SyncToPlayerColor_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncToPlayerColor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncToPlayerColor::*)()>(&::GlobalNamespace::SyncToPlayerColor::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5795078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(),
                    {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncToPlayerColor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncToPlayerColor::*)()>(&::GlobalNamespace::SyncToPlayerColor::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x579511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(),
                    {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncToPlayerColor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncToPlayerColor::*)()>(&::GlobalNamespace::SyncToPlayerColor::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5795164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(),
                    {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncToPlayerColor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncToPlayerColor::*)()>(&::GlobalNamespace::SyncToPlayerColor::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5795184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(),
                    {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncToPlayerColor.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncToPlayerColor::*)(::UnityEngine::Color)>(&::GlobalNamespace::SyncToPlayerColor::UpdateColor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x57951a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(),
                    {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncToPlayerColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncToPlayerColor::*)()>(&::GlobalNamespace::SyncToPlayerColor::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x579528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::SyncToPlayerColor::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::SyncToPlayerColor::__cordl_internal_set_target(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::ArrayW<::GlobalNamespace::ShaderHashId>& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get_colorPropertiesToSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPropertiesToSync;
}
constexpr ::ArrayW<::GlobalNamespace::ShaderHashId> const& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get_colorPropertiesToSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPropertiesToSync;
}
constexpr void GlobalNamespace::SyncToPlayerColor::__cordl_internal_set_colorPropertiesToSync(::ArrayW<::GlobalNamespace::ShaderHashId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorPropertiesToSync = value;
}
constexpr ::System::Action_1<::UnityEngine::Color>*& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get__colorFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorFunc;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& GlobalNamespace::SyncToPlayerColor::__cordl_internal_get__colorFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorFunc;
}
constexpr void GlobalNamespace::SyncToPlayerColor::__cordl_internal_set__colorFunc(::System::Action_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorFunc = value;
}
inline void GlobalNamespace::SyncToPlayerColor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncToPlayerColor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncToPlayerColor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncToPlayerColor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncToPlayerColor::UpdateColor(::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::SyncToPlayerColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SyncToPlayerColor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SyncToPlayerColor* GlobalNamespace::SyncToPlayerColor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SyncToPlayerColor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncToPlayerColor::SyncToPlayerColor()   {
}
