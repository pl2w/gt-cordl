#pragma once
// IWYU pragma private; include "Pathfinding/IVersionedMonoBehaviourInternal.hpp"
#include "Pathfinding/zzzz__IVersionedMonoBehaviourInternal_def.hpp"
//  Writing Method size for method: ::Pathfinding::IVersionedMonoBehaviourInternal.UpgradeFromUnityThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::IVersionedMonoBehaviourInternal::*)()>(&::Pathfinding::IVersionedMonoBehaviourInternal::UpgradeFromUnityThread)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::IVersionedMonoBehaviourInternal*>(),
                    {::i2c::class_of<::Pathfinding::IVersionedMonoBehaviourInternal*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::IVersionedMonoBehaviourInternal::UpgradeFromUnityThread()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::IVersionedMonoBehaviourInternal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
