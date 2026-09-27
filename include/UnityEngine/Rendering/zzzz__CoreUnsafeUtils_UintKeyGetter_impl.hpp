#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils_UintKeyGetter.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_UintKeyGetter_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_UintKeyGetter.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::CoreUnsafeUtils_UintKeyGetter::*)(::by_ref<uint32_t>)>(&::GlobalNamespace::CoreUnsafeUtils_UintKeyGetter::Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1234b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_UintKeyGetter>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::CoreUnsafeUtils_UintKeyGetter::Get(::by_ref<uint32_t>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_UintKeyGetter>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>"
constexpr  GlobalNamespace::CoreUnsafeUtils_UintKeyGetter::operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>*()  {
return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>"
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>* GlobalNamespace::CoreUnsafeUtils_UintKeyGetter::i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_uint32_t_uint32_t_()  {
return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<uint32_t,uint32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreUnsafeUtils_UintKeyGetter::CoreUnsafeUtils_UintKeyGetter()   {
}
