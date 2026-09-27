#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntTaggableProp.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntTaggableProp_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntTaggableProp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntTaggableProp::*)()>(&::GlobalNamespace::PropHuntTaggableProp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563faec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntTaggableProp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::PropHuntTaggableProp::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::PropHuntTaggableProp::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GlobalNamespace::PropHuntTaggableProp::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PropHuntTaggableProp::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PropHuntTaggableProp::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::PropHuntTaggableProp::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
inline void GlobalNamespace::PropHuntTaggableProp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntTaggableProp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHuntTaggableProp* GlobalNamespace::PropHuntTaggableProp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntTaggableProp*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntTaggableProp::PropHuntTaggableProp()   {
}
