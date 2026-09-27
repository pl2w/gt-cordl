#pragma once
// IWYU pragma private; include "Fusion/RenderTimeline.hpp"
#include "Fusion/zzzz__RenderTimeline_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
//  Writing Method size for method: ::Fusion::RenderTimeline.GetRenderBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::by_ref<::Fusion::NetworkBehaviourBuffer>, ::by_ref<::Fusion::NetworkBehaviourBuffer>, ::by_ref<float_t>)>(&::Fusion::RenderTimeline::GetRenderBuffers)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5fe11c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderTimeline>(),
                        {"GetRenderBuffers", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::RenderTimeline::GetRenderBuffers(::Fusion::NetworkBehaviour*  behaviour, ::by_ref<::Fusion::NetworkBehaviourBuffer>  from, ::by_ref<::Fusion::NetworkBehaviourBuffer>  to, ::by_ref<float_t>  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderTimeline>(),
                        {"GetRenderBuffers", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, from, to, alpha);
}
// Ctor Parameters []
constexpr ::Fusion::RenderTimeline::RenderTimeline()   {
}
