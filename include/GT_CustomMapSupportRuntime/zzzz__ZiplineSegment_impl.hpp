#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ZiplineSegment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ZiplineSegment_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::ZiplineSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::ZiplineSegment::*)()>(&::GT_CustomMapSupportRuntime::ZiplineSegment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ZiplineSegment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GT_CustomMapSupportRuntime::ZiplineSegment::__cordl_internal_get_ziplineParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GT_CustomMapSupportRuntime::ZiplineSegment::__cordl_internal_get_ziplineParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineParent;
}
constexpr void GT_CustomMapSupportRuntime::ZiplineSegment::__cordl_internal_set_ziplineParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplineParent = value;
}
inline void GT_CustomMapSupportRuntime::ZiplineSegment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::ZiplineSegment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::ZiplineSegment* GT_CustomMapSupportRuntime::ZiplineSegment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::ZiplineSegment*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::ZiplineSegment::ZiplineSegment()   {
}
