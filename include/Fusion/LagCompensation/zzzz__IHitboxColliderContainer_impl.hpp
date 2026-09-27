#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/IHitboxColliderContainer.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::IHitboxColliderContainer.GetNextCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::HitboxCollider> (::Fusion::LagCompensation::IHitboxColliderContainer::*)(::by_ref<int32_t>)>(&::Fusion::LagCompensation::IHitboxColliderContainer::GetNextCollider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::IHitboxColliderContainer.GetNextTempCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::HitboxCollider> (::Fusion::LagCompensation::IHitboxColliderContainer::*)(::by_ref<int32_t>)>(&::Fusion::LagCompensation::IHitboxColliderContainer::GetNextTempCollider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::IHitboxColliderContainer.GetCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::HitboxCollider> (::Fusion::LagCompensation::IHitboxColliderContainer::*)(int32_t)>(&::Fusion::LagCompensation::IHitboxColliderContainer::GetCollider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::IHitboxColliderContainer.ReleaseCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::IHitboxColliderContainer::*)(int32_t)>(&::Fusion::LagCompensation::IHitboxColliderContainer::ReleaseCollider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::IHitboxColliderContainer.ReleaseTempColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::IHitboxColliderContainer::*)()>(&::Fusion::LagCompensation::IHitboxColliderContainer::ReleaseTempColliders)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> Fusion::LagCompensation::IHitboxColliderContainer::GetNextCollider(::by_ref<int32_t>  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(this, ___internal_method, index);
}
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> Fusion::LagCompensation::IHitboxColliderContainer::GetNextTempCollider(::by_ref<int32_t>  tmpIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(this, ___internal_method, tmpIndex);
}
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> Fusion::LagCompensation::IHitboxColliderContainer::GetCollider(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(this, ___internal_method, index);
}
inline void Fusion::LagCompensation::IHitboxColliderContainer::ReleaseCollider(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Fusion::LagCompensation::IHitboxColliderContainer::ReleaseTempColliders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
