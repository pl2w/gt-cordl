#pragma once
// IWYU pragma private; include "GlobalNamespace/SnowballGrabZone.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SnowballGrabZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SnowballGrabZone.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballGrabZone::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::SnowballGrabZone::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e02eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballGrabZone.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballGrabZone::*)()>(&::GlobalNamespace::SnowballGrabZone::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e02eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballGrabZone.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballGrabZone::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::SnowballGrabZone::OnGrab)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e02eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballGrabZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballGrabZone::*)()>(&::GlobalNamespace::SnowballGrabZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e03004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SnowballGrabZone::__cordl_internal_get_materialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr int32_t const& GlobalNamespace::SnowballGrabZone::__cordl_internal_get_materialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr void GlobalNamespace::SnowballGrabZone::__cordl_internal_set_materialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialIndex = value;
}
inline void GlobalNamespace::SnowballGrabZone::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::SnowballGrabZone::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballGrabZone::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::SnowballGrabZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballGrabZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SnowballGrabZone* GlobalNamespace::SnowballGrabZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SnowballGrabZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnowballGrabZone::SnowballGrabZone()   {
}
