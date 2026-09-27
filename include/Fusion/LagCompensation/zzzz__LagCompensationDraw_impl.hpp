#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationDraw.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationDraw_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVHDraw_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxBuffer_def.hpp"
#include "Fusion/LagCompensation/zzzz__SnapshotHistoryDraw_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationDraw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::LagCompensationDraw::*)(::Fusion::LagCompensation::HitboxBuffer*)>(&::Fusion::LagCompensation::LagCompensationDraw::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6018094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationDraw*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::LagCompensationDraw.GizmosDrawWireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Fusion::LagCompensation::LagCompensationDraw::GizmosDrawWireCapsule)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x60182bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationDraw*>(),
                        {"GizmosDrawWireCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw*& Fusion::LagCompensation::LagCompensationDraw::__cordl_internal_get_SnapshotHistoryDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SnapshotHistoryDraw;
}
constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw* const& Fusion::LagCompensation::LagCompensationDraw::__cordl_internal_get_SnapshotHistoryDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SnapshotHistoryDraw;
}
constexpr void Fusion::LagCompensation::LagCompensationDraw::__cordl_internal_set_SnapshotHistoryDraw(::Fusion::LagCompensation::SnapshotHistoryDraw*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SnapshotHistoryDraw = value;
}
constexpr ::Fusion::LagCompensation::BVHDraw*& Fusion::LagCompensation::LagCompensationDraw::__cordl_internal_get_BVHDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BVHDraw;
}
constexpr ::Fusion::LagCompensation::BVHDraw* const& Fusion::LagCompensation::LagCompensationDraw::__cordl_internal_get_BVHDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BVHDraw;
}
constexpr void Fusion::LagCompensation::LagCompensationDraw::__cordl_internal_set_BVHDraw(::Fusion::LagCompensation::BVHDraw*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BVHDraw = value;
}
inline void Fusion::LagCompensation::LagCompensationDraw::_ctor(::Fusion::LagCompensation::HitboxBuffer*  _buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationDraw*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _buffer);
}
inline void Fusion::LagCompensation::LagCompensationDraw::GizmosDrawWireCapsule(::UnityEngine::Vector3  topCenter, ::UnityEngine::Vector3  bottomCenter, float_t  capsuleRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::LagCompensationDraw*>(),
                        {"GizmosDrawWireCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topCenter, bottomCenter, capsuleRadius);
}
inline ::Fusion::LagCompensation::LagCompensationDraw* Fusion::LagCompensation::LagCompensationDraw::New_ctor(::Fusion::LagCompensation::HitboxBuffer*  _buffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::LagCompensationDraw*>(_buffer));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::LagCompensationDraw::LagCompensationDraw()   {
}
