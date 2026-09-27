#pragma once
// IWYU pragma private; include "GlobalNamespace/BitPackDebug.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BitPackDebug_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitPackDebug._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitPackDebug::*)()>(&::GlobalNamespace::BitPackDebug::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ae1f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackDebug*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BitPackDebug::__cordl_internal_get_debugPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPos;
}
constexpr bool const& GlobalNamespace::BitPackDebug::__cordl_internal_get_debugPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPos;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_debugPos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BitPackDebug::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BitPackDebug::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_pos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BitPackDebug::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BitPackDebug::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_min(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BitPackDebug::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BitPackDebug::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_max(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr float_t& GlobalNamespace::BitPackDebug::__cordl_internal_get_rad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rad;
}
constexpr float_t const& GlobalNamespace::BitPackDebug::__cordl_internal_get_rad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rad;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_rad(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rad = value;
}
constexpr bool& GlobalNamespace::BitPackDebug::__cordl_internal_get_debug32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug32;
}
constexpr bool const& GlobalNamespace::BitPackDebug::__cordl_internal_get_debug32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug32;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_debug32(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debug32 = value;
}
constexpr uint32_t& GlobalNamespace::BitPackDebug::__cordl_internal_get_packed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packed;
}
constexpr uint32_t const& GlobalNamespace::BitPackDebug::__cordl_internal_get_packed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packed;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_packed(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BitPackDebug::__cordl_internal_get_unpacked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpacked;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BitPackDebug::__cordl_internal_get_unpacked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpacked;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_unpacked(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unpacked = value;
}
constexpr bool& GlobalNamespace::BitPackDebug::__cordl_internal_get_debug16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug16;
}
constexpr bool const& GlobalNamespace::BitPackDebug::__cordl_internal_get_debug16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug16;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_debug16(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debug16 = value;
}
constexpr uint16_t& GlobalNamespace::BitPackDebug::__cordl_internal_get_packed16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packed16;
}
constexpr uint16_t const& GlobalNamespace::BitPackDebug::__cordl_internal_get_packed16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packed16;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_packed16(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packed16 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BitPackDebug::__cordl_internal_get_unpacked16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpacked16;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BitPackDebug::__cordl_internal_get_unpacked16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpacked16;
}
constexpr void GlobalNamespace::BitPackDebug::__cordl_internal_set_unpacked16(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unpacked16 = value;
}
inline void GlobalNamespace::BitPackDebug::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackDebug*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BitPackDebug* GlobalNamespace::BitPackDebug::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitPackDebug*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitPackDebug::BitPackDebug()   {
}
