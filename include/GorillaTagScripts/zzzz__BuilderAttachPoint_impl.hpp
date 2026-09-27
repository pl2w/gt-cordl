#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderAttachPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachPoint_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachPoint.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachPoint::*)()>(&::GorillaTagScripts::BuilderAttachPoint::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b84268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachPoint*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachPoint::*)()>(&::GorillaTagScripts::BuilderAttachPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b842f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderAttachPoint::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderAttachPoint::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void GorillaTagScripts::BuilderAttachPoint::__cordl_internal_set_center(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
inline void GorillaTagScripts::BuilderAttachPoint::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachPoint*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderAttachPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderAttachPoint* GorillaTagScripts::BuilderAttachPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderAttachPoint*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderAttachPoint::BuilderAttachPoint()   {
}
