#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PointedAtGameObjectInfo.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PointedAtGameObjectInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::*)()>(&::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa732880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo.SetFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::SetFocus)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xa732998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"SetFocus", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo.RemoveFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::RemoveFocus)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa732c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"RemoveFocus", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::*)()>(&::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::LateUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa732d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::*)()>(&::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa732e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::__cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::__cordl_internal_get_focus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focus;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::__cordl_internal_get_focus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focus;
}
constexpr void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::__cordl_internal_set_focus(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focus = value;
}
inline void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::setStaticF_Instance(::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo>  value)  {
::cordl_internals::setStaticField<::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo>, "Instance", ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(std::forward<::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo>>(value));
}
inline ::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo> Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo>, "Instance", ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>();
}
inline void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::SetFocus(::Photon::Pun::PhotonView*  pv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"SetFocus", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pv);
}
inline void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::RemoveFocus(::Photon::Pun::PhotonView*  pv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"RemoveFocus", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pv);
}
inline void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo* Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo::PointedAtGameObjectInfo()   {
}
