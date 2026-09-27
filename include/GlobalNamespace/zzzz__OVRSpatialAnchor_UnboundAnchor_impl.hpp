#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_UnboundAnchor.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Uuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa64748c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Uuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Localized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa647498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Localized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Localizing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localizing)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa647534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Localizing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.TryGetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::by_ref<::UnityEngine::Pose>)>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::TryGetPose)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa6475d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"TryGetPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.LocalizeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(double_t)>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::LocalizeAsync)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa6478cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"LocalizeAsync", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.BindTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::BindTo)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa647ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"BindTo", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa645508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.Localize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,bool>*, double_t)>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::Localize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa647de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"Localize", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,bool>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Pose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa647ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Guid GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Uuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Uuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Localized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localizing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Localizing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::TryGetPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"TryGetPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pose);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::LocalizeAsync(double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"LocalizeAsync", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, timeout);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::BindTo(::GlobalNamespace::OVRSpatialAnchor*  spatialAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"BindTo", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spatialAnchor);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::_ctor(::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::Localize(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,bool>*  onComplete, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"Localize", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor,bool>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onComplete, timeout);
}
inline ::UnityEngine::Pose GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::OVRSpatialAnchor_UnboundAnchor(::GlobalNamespace::OVRSpace  _space, ::System::Guid  _Uuid_k__BackingField) noexcept  {
this->_space = _space;
this->_Uuid_k__BackingField = _Uuid_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::OVRSpatialAnchor_UnboundAnchor()   {
}
