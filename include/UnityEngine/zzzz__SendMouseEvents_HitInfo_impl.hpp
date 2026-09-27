#pragma once
// IWYU pragma private; include "UnityEngine/SendMouseEvents_HitInfo.hpp"
#include "UnityEngine/zzzz__SendMouseEvents_HitInfo_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SendMouseEvents_HitInfo.SendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SendMouseEvents_HitInfo::*)(::StringW)>(&::GlobalNamespace::SendMouseEvents_HitInfo::SendMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb668090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendMouseEvents_HitInfo>(),
                        {"SendMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendMouseEvents_HitInfo.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SendMouseEvents_HitInfo)>(&::GlobalNamespace::SendMouseEvents_HitInfo::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb667ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendMouseEvents_HitInfo>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::SendMouseEvents_HitInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendMouseEvents_HitInfo.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SendMouseEvents_HitInfo, ::GlobalNamespace::SendMouseEvents_HitInfo)>(&::GlobalNamespace::SendMouseEvents_HitInfo::Compare)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb6680b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendMouseEvents_HitInfo>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::SendMouseEvents_HitInfo>(), ::i2c::type_of<::GlobalNamespace::SendMouseEvents_HitInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SendMouseEvents_HitInfo::SendMessage(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendMouseEvents_HitInfo>(),
                        {"SendMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline bool GlobalNamespace::SendMouseEvents_HitInfo::op_Implicit_bool(::GlobalNamespace::SendMouseEvents_HitInfo  exists)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendMouseEvents_HitInfo>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::SendMouseEvents_HitInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exists);
}
inline bool GlobalNamespace::SendMouseEvents_HitInfo::Compare(::GlobalNamespace::SendMouseEvents_HitInfo  lhs, ::GlobalNamespace::SendMouseEvents_HitInfo  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendMouseEvents_HitInfo>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::SendMouseEvents_HitInfo>(), ::i2c::type_of<::GlobalNamespace::SendMouseEvents_HitInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
// Ctor Parameters [CppParam { name: "target", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SendMouseEvents_HitInfo::SendMouseEvents_HitInfo(::UnityW<::UnityEngine::GameObject>  target, ::UnityW<::UnityEngine::Camera>  camera) noexcept  {
this->target = target;
this->camera = camera;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SendMouseEvents_HitInfo::SendMouseEvents_HitInfo()   {
}
