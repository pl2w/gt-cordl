#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/ILagCompensationBroadphase.hpp"
#include "Fusion/LagCompensation/zzzz__ILagCompensationBroadphase_def.hpp"
#include "Fusion/LagCompensation/zzzz__IBoundsTraversalTest_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::ILagCompensationBroadphase.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::ILagCompensationBroadphase::*)(::Fusion::LagCompensation::ILagCompensationBroadphase*)>(&::Fusion::LagCompensation::ILagCompensationBroadphase::CopyFrom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ILagCompensationBroadphase.Traverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::ILagCompensationBroadphase::*)(::Fusion::LagCompensation::IBoundsTraversalTest*, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*, int32_t)>(&::Fusion::LagCompensation::ILagCompensationBroadphase::Traverse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ILagCompensationBroadphase.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::ILagCompensationBroadphase::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::ILagCompensationBroadphase::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ILagCompensationBroadphase.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::ILagCompensationBroadphase::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::ILagCompensationBroadphase::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ILagCompensationBroadphase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::ILagCompensationBroadphase::*)(::Fusion::HitboxRoot*, int32_t)>(&::Fusion::LagCompensation::ILagCompensationBroadphase::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::ILagCompensationBroadphase::CopyFrom(::Fusion::LagCompensation::ILagCompensationBroadphase*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Fusion::LagCompensation::ILagCompensationBroadphase::Traverse(::Fusion::LagCompensation::IBoundsTraversalTest*  hitTest, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  candidateRoots, int32_t  layerMask)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitTest, candidateRoots, layerMask);
}
inline void Fusion::LagCompensation::ILagCompensationBroadphase::Add(::Fusion::HitboxRoot*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline bool Fusion::LagCompensation::ILagCompensationBroadphase::Remove(::Fusion::HitboxRoot*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root);
}
inline void Fusion::LagCompensation::ILagCompensationBroadphase::Update(::Fusion::HitboxRoot*  changed, int32_t  tick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::ILagCompensationBroadphase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changed, tick);
}
