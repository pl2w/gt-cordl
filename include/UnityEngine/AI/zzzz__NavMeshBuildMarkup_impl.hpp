#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildMarkup.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildMarkup_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildMarkup.set_overrideArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildMarkup::*)(bool)>(&::UnityEngine::AI::NavMeshBuildMarkup::set_overrideArea)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb521fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_overrideArea", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildMarkup.set_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildMarkup::*)(int32_t)>(&::UnityEngine::AI::NavMeshBuildMarkup::set_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb521fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildMarkup.set_ignoreFromBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildMarkup::*)(bool)>(&::UnityEngine::AI::NavMeshBuildMarkup::set_ignoreFromBuild)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb521fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_ignoreFromBuild", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildMarkup.set_overrideGenerateLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildMarkup::*)(bool)>(&::UnityEngine::AI::NavMeshBuildMarkup::set_overrideGenerateLinks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb521fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_overrideGenerateLinks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildMarkup.set_generateLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildMarkup::*)(bool)>(&::UnityEngine::AI::NavMeshBuildMarkup::set_generateLinks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb521ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_generateLinks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildMarkup.set_applyToChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildMarkup::*)(bool)>(&::UnityEngine::AI::NavMeshBuildMarkup::set_applyToChildren)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb522000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_applyToChildren", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuildMarkup.set_root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshBuildMarkup::*)(::UnityEngine::Transform*)>(&::UnityEngine::AI::NavMeshBuildMarkup::set_root)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb522010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_root", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMeshBuildMarkup::set_overrideArea(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_overrideArea", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildMarkup::set_area(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildMarkup::set_ignoreFromBuild(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_ignoreFromBuild", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildMarkup::set_overrideGenerateLinks(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_overrideGenerateLinks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildMarkup::set_generateLinks(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_generateLinks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildMarkup::set_applyToChildren(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_applyToChildren", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshBuildMarkup::set_root(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuildMarkup>(),
                        {"set_root", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_OverrideArea", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Area", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InheritIgnoreFromBuild", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IgnoreFromBuild", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OverrideGenerateLinks", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GenerateLinks", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IgnoreChildren", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshBuildMarkup::NavMeshBuildMarkup(int32_t  m_OverrideArea, int32_t  m_Area, int32_t  m_InheritIgnoreFromBuild, int32_t  m_IgnoreFromBuild, int32_t  m_OverrideGenerateLinks, int32_t  m_GenerateLinks, int32_t  m_InstanceID, int32_t  m_IgnoreChildren) noexcept  {
this->m_OverrideArea = m_OverrideArea;
this->m_Area = m_Area;
this->m_InheritIgnoreFromBuild = m_InheritIgnoreFromBuild;
this->m_IgnoreFromBuild = m_IgnoreFromBuild;
this->m_OverrideGenerateLinks = m_OverrideGenerateLinks;
this->m_GenerateLinks = m_GenerateLinks;
this->m_InstanceID = m_InstanceID;
this->m_IgnoreChildren = m_IgnoreChildren;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshBuildMarkup::NavMeshBuildMarkup()   {
}
