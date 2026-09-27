#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils_UlongKeyGetter.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_UlongKeyGetter_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter::*)(::by_ref<uint64_t>)>(&::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter::Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1234b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter::Get(::by_ref<uint64_t>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
constexpr  GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter::operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>*()  {
return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>"
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>* GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter::i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_uint64_t_uint64_t_()  {
return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint64_t,uint64_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter::CoreUnsafeUtils_UlongKeyGetter()   {
}
