#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_BoxNarrowData.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomEdgesBox_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomPlanesBox_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_BoxNarrowData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LagCompensationUtils_BoxNarrowData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LagCompensationUtils_BoxNarrowData::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::LagCompensationUtils_BoxNarrowData::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x60171f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LagCompensationUtils_BoxNarrowData.LocalToWorldPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LagCompensationUtils_BoxNarrowData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::LagCompensationUtils_BoxNarrowData::LocalToWorldPoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60175b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"LocalToWorldPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LagCompensationUtils_BoxNarrowData.WorldToLocalPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LagCompensationUtils_BoxNarrowData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::LagCompensationUtils_BoxNarrowData::WorldToLocalPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6017628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"WorldToLocalPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LagCompensationUtils_BoxNarrowData.LocalToWorldVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LagCompensationUtils_BoxNarrowData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::LagCompensationUtils_BoxNarrowData::LocalToWorldVector)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60175e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"LocalToWorldVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LagCompensationUtils_BoxNarrowData.WorldToLocalVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LagCompensationUtils_BoxNarrowData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::LagCompensationUtils_BoxNarrowData::WorldToLocalVector)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6017640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"WorldToLocalVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LagCompensationUtils_BoxNarrowData::_ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Vector3  extents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, rot, extents);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LagCompensationUtils_BoxNarrowData::LocalToWorldPoint(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"LocalToWorldPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LagCompensationUtils_BoxNarrowData::WorldToLocalPoint(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"WorldToLocalPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LagCompensationUtils_BoxNarrowData::LocalToWorldVector(::UnityEngine::Vector3  vec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"LocalToWorldVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, vec);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LagCompensationUtils_BoxNarrowData::WorldToLocalVector(::UnityEngine::Vector3  vec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(),
                        {"WorldToLocalVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, vec);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotatedRight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotatedUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotatedForward", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoxPlanesRotated", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlanesBox", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoxEdgesRotated", ty: "::GlobalNamespace::LagCompensationUtils_CustomEdgesBox", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LagCompensationUtils_BoxNarrowData::LagCompensationUtils_BoxNarrowData(::UnityEngine::Vector3  Position, ::UnityEngine::Vector3  Extents, ::UnityEngine::Vector3  RotatedRight, ::UnityEngine::Vector3  RotatedUp, ::UnityEngine::Vector3  RotatedForward, ::GlobalNamespace::LagCompensationUtils_CustomPlanesBox  BoxPlanesRotated, ::GlobalNamespace::LagCompensationUtils_CustomEdgesBox  BoxEdgesRotated) noexcept  {
this->Position = Position;
this->Extents = Extents;
this->RotatedRight = RotatedRight;
this->RotatedUp = RotatedUp;
this->RotatedForward = RotatedForward;
this->BoxPlanesRotated = BoxPlanesRotated;
this->BoxEdgesRotated = BoxEdgesRotated;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LagCompensationUtils_BoxNarrowData::LagCompensationUtils_BoxNarrowData()   {
}
