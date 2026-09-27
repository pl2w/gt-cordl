#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefMonoBehaviour.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefMonoBehaviour_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour::*)()>(&::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour::get_transform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Transform> GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour::get_transform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr  GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour::operator ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour::i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
