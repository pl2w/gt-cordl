#pragma once
// IWYU pragma private; include "GorillaTagScripts/MoleTypes.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__MoleTypes_def.hpp"
#include "GorillaTagScripts/zzzz__Mole_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::MoleTypes.get_IsLeftSideMoleType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::MoleTypes::*)()>(&::GorillaTagScripts::MoleTypes::get_IsLeftSideMoleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"get_IsLeftSideMoleType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MoleTypes.set_IsLeftSideMoleType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MoleTypes::*)(bool)>(&::GorillaTagScripts::MoleTypes::set_IsLeftSideMoleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7c710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"set_IsLeftSideMoleType", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MoleTypes.get_MoleContainerParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::Mole> (::GorillaTagScripts::MoleTypes::*)()>(&::GorillaTagScripts::MoleTypes::get_MoleContainerParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7c718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"get_MoleContainerParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MoleTypes.set_MoleContainerParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MoleTypes::*)(::GorillaTagScripts::Mole*)>(&::GorillaTagScripts::MoleTypes::set_MoleContainerParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7c720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"set_MoleContainerParent", {}, {::i2c::type_of<::GorillaTagScripts::Mole*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MoleTypes.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MoleTypes::*)()>(&::GorillaTagScripts::MoleTypes::Start)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b7c728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MoleTypes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MoleTypes::*)()>(&::GorillaTagScripts::MoleTypes::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b7c7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::MoleTypes::__cordl_internal_get_isHazard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHazard;
}
constexpr bool const& GorillaTagScripts::MoleTypes::__cordl_internal_get_isHazard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHazard;
}
constexpr void GorillaTagScripts::MoleTypes::__cordl_internal_set_isHazard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHazard = value;
}
constexpr int32_t& GorillaTagScripts::MoleTypes::__cordl_internal_get_scorePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scorePoint;
}
constexpr int32_t const& GorillaTagScripts::MoleTypes::__cordl_internal_get_scorePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scorePoint;
}
constexpr void GorillaTagScripts::MoleTypes::__cordl_internal_set_scorePoint(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scorePoint = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::MoleTypes::__cordl_internal_get_MeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::MoleTypes::__cordl_internal_get_MeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshRenderer;
}
constexpr void GorillaTagScripts::MoleTypes::__cordl_internal_set_MeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MeshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::MoleTypes::__cordl_internal_get_monkeMoleDefaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeMoleDefaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::MoleTypes::__cordl_internal_get_monkeMoleDefaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeMoleDefaultMaterial;
}
constexpr void GorillaTagScripts::MoleTypes::__cordl_internal_set_monkeMoleDefaultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeMoleDefaultMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::MoleTypes::__cordl_internal_get_monkeMoleHitMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeMoleHitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::MoleTypes::__cordl_internal_get_monkeMoleHitMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeMoleHitMaterial;
}
constexpr void GorillaTagScripts::MoleTypes::__cordl_internal_set_monkeMoleHitMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeMoleHitMaterial = value;
}
constexpr bool& GorillaTagScripts::MoleTypes::__cordl_internal_get__IsLeftSideMoleType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLeftSideMoleType_k__BackingField;
}
constexpr bool const& GorillaTagScripts::MoleTypes::__cordl_internal_get__IsLeftSideMoleType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLeftSideMoleType_k__BackingField;
}
constexpr void GorillaTagScripts::MoleTypes::__cordl_internal_set__IsLeftSideMoleType_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsLeftSideMoleType_k__BackingField = value;
}
constexpr ::UnityW<::GorillaTagScripts::Mole>& GorillaTagScripts::MoleTypes::__cordl_internal_get__MoleContainerParent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoleContainerParent_k__BackingField;
}
constexpr ::UnityW<::GorillaTagScripts::Mole> const& GorillaTagScripts::MoleTypes::__cordl_internal_get__MoleContainerParent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoleContainerParent_k__BackingField;
}
constexpr void GorillaTagScripts::MoleTypes::__cordl_internal_set__MoleContainerParent_k__BackingField(::UnityW<::GorillaTagScripts::Mole>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MoleContainerParent_k__BackingField = value;
}
inline bool GorillaTagScripts::MoleTypes::get_IsLeftSideMoleType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"get_IsLeftSideMoleType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::MoleTypes::set_IsLeftSideMoleType(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"set_IsLeftSideMoleType", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GorillaTagScripts::Mole> GorillaTagScripts::MoleTypes::get_MoleContainerParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"get_MoleContainerParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::Mole>>(this, ___internal_method);
}
inline void GorillaTagScripts::MoleTypes::set_MoleContainerParent(::GorillaTagScripts::Mole*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"set_MoleContainerParent", {}, {::i2c::type_of<::GorillaTagScripts::Mole*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::MoleTypes::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::MoleTypes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MoleTypes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::MoleTypes* GorillaTagScripts::MoleTypes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::MoleTypes*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::MoleTypes::MoleTypes()   {
}
