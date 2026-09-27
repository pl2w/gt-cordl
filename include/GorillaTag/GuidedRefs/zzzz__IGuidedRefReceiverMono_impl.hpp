#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/IGuidedRefReceiverMono.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefReceiverMono_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTryResolveInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefMonoBehaviour_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono.GuidedRefTryResolveReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo)>(&::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::GuidedRefTryResolveReference)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)()>(&::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::get_GuidedRefsWaitingToResolveCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)(int32_t)>(&::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::set_GuidedRefsWaitingToResolveCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono.OnAllGuidedRefsResolved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)()>(&::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnAllGuidedRefsResolved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)(int32_t)>(&::GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnGuidedRefTargetDestroyed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(),
                    {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool GorillaTag::GuidedRefs::IGuidedRefReceiverMono::GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline int32_t GorillaTag::GuidedRefs::IGuidedRefReceiverMono::get_GuidedRefsWaitingToResolveCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::GuidedRefs::IGuidedRefReceiverMono::set_GuidedRefsWaitingToResolveCount(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnAllGuidedRefsResolved()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnGuidedRefTargetDestroyed(int32_t  fieldId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldId);
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr  GorillaTag::GuidedRefs::IGuidedRefReceiverMono::operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* GorillaTag::GuidedRefs::IGuidedRefReceiverMono::i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr  GorillaTag::GuidedRefs::IGuidedRefReceiverMono::operator ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* GorillaTag::GuidedRefs::IGuidedRefReceiverMono::i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
