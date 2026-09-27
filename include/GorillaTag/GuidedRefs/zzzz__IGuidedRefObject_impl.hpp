#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefObject.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefObject.GetInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::GuidedRefs::IGuidedRefObject::*)()>(&::GorillaTag::GuidedRefs::IGuidedRefObject::GetInstanceID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefObject*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefObject*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefObject.GuidedRefInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::IGuidedRefObject::*)()>(&::GorillaTag::GuidedRefs::IGuidedRefObject::GuidedRefInitialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefObject*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefObject*>(), 1}
                ));
    return ___internal_method;
  }
};
inline int32_t GorillaTag::GuidedRefs::IGuidedRefObject::GetInstanceID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefObject*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::GuidedRefs::IGuidedRefObject::GuidedRefInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefObject*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
