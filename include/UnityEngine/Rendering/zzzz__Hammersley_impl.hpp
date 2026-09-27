#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Hammersley.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Hammersley_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__Hammersley_Hammersley2dSeq16_def.hpp"
#include "UnityEngine/Rendering/zzzz__Hammersley_Hammersley2dSeq256_def.hpp"
#include "UnityEngine/Rendering/zzzz__Hammersley_Hammersley2dSeq32_def.hpp"
#include "UnityEngine/Rendering/zzzz__Hammersley_Hammersley2dSeq64_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Hammersley.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Hammersley::Initialize)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xb174328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Hammersley*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Hammersley.BindConstants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*)>(&::UnityEngine::Rendering::Hammersley::BindConstants)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb1746e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Hammersley*>(),
                        {"BindConstants", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Hammersley::setStaticF_k_Hammersley2dSeq16(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq16", ::UnityEngine::Rendering::Hammersley*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Hammersley::getStaticF_k_Hammersley2dSeq16()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq16", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::setStaticF_k_Hammersley2dSeq32(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq32", ::UnityEngine::Rendering::Hammersley*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Hammersley::getStaticF_k_Hammersley2dSeq32()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq32", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::setStaticF_k_Hammersley2dSeq64(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq64", ::UnityEngine::Rendering::Hammersley*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Hammersley::getStaticF_k_Hammersley2dSeq64()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq64", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::setStaticF_k_Hammersley2dSeq256(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq256", ::UnityEngine::Rendering::Hammersley*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Hammersley::getStaticF_k_Hammersley2dSeq256()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "k_Hammersley2dSeq256", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::setStaticF_s_hammersley2DSeq16Id(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_hammersley2DSeq16Id", ::UnityEngine::Rendering::Hammersley*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Hammersley::getStaticF_s_hammersley2DSeq16Id()  {
return ::cordl_internals::getStaticField<int32_t, "s_hammersley2DSeq16Id", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::setStaticF_s_hammersley2DSeq32Id(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_hammersley2DSeq32Id", ::UnityEngine::Rendering::Hammersley*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Hammersley::getStaticF_s_hammersley2DSeq32Id()  {
return ::cordl_internals::getStaticField<int32_t, "s_hammersley2DSeq32Id", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::setStaticF_s_hammersley2DSeq64Id(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_hammersley2DSeq64Id", ::UnityEngine::Rendering::Hammersley*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Hammersley::getStaticF_s_hammersley2DSeq64Id()  {
return ::cordl_internals::getStaticField<int32_t, "s_hammersley2DSeq64Id", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::setStaticF_s_hammersley2DSeq256Id(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_hammersley2DSeq256Id", ::UnityEngine::Rendering::Hammersley*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Hammersley::getStaticF_s_hammersley2DSeq256Id()  {
return ::cordl_internals::getStaticField<int32_t, "s_hammersley2DSeq256Id", ::UnityEngine::Rendering::Hammersley*>();
}
inline void UnityEngine::Rendering::Hammersley::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Hammersley*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Hammersley::BindConstants(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Hammersley*>(),
                        {"BindConstants", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Hammersley::Hammersley()   {
}
