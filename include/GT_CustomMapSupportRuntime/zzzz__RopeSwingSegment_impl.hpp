#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/RopeSwingSegment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__RopeSwingSegment_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::RopeSwingSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::RopeSwingSegment::*)()>(&::GT_CustomMapSupportRuntime::RopeSwingSegment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb82b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::RopeSwingSegment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GT_CustomMapSupportRuntime::RopeSwingSegment::__cordl_internal_get_ropeSwingParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GT_CustomMapSupportRuntime::RopeSwingSegment::__cordl_internal_get_ropeSwingParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingParent;
}
constexpr void GT_CustomMapSupportRuntime::RopeSwingSegment::__cordl_internal_set_ropeSwingParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeSwingParent = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::RopeSwingSegment::__cordl_internal_get_boneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIndex;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::RopeSwingSegment::__cordl_internal_get_boneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIndex;
}
constexpr void GT_CustomMapSupportRuntime::RopeSwingSegment::__cordl_internal_set_boneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneIndex = value;
}
inline void GT_CustomMapSupportRuntime::RopeSwingSegment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::RopeSwingSegment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::RopeSwingSegment* GT_CustomMapSupportRuntime::RopeSwingSegment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::RopeSwingSegment*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::RopeSwingSegment::RopeSwingSegment()   {
}
