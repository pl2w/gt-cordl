#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRGroupMember.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRGroupMember_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember.get_containingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::get_containingGroup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember.OnRegisteringAsGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::OnRegisteringAsGroupMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember.OnRegisteringAsNonGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::OnRegisteringAsNonGroupMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::get_containingGroup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember::OnRegisteringAsNonGroupMember()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
