#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefTargetMono.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefTargetMono_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefBasicTargetInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefMonoBehaviour_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefTargetMono.get_GRefTargetInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo (::GorillaTag::GuidedRefs::IGuidedRefTargetMono::*)()>(&::GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GRefTargetInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefTargetMono.set_GRefTargetInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::IGuidedRefTargetMono::*)(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo)>(&::GorillaTag::GuidedRefs::IGuidedRefTargetMono::set_GRefTargetInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefTargetMono.get_GuidedRefTargetObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::GorillaTag::GuidedRefs::IGuidedRefTargetMono::*)()>(&::GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GuidedRefTargetObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GRefTargetInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo>(this, ___internal_method);
}
inline void GorillaTag::GuidedRefs::IGuidedRefTargetMono::set_GRefTargetInfo(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GuidedRefTargetObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr  GorillaTag::GuidedRefs::IGuidedRefTargetMono::operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* GorillaTag::GuidedRefs::IGuidedRefTargetMono::i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr  GorillaTag::GuidedRefs::IGuidedRefTargetMono::operator ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* GorillaTag::GuidedRefs::IGuidedRefTargetMono::i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
