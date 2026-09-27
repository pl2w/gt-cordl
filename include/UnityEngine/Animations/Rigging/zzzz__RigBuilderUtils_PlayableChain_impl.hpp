#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigBuilderUtils_PlayableChain.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigBuilderUtils_PlayableChain_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigBuilderUtils_PlayableChain.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigBuilderUtils_PlayableChain::*)()>(&::GlobalNamespace::RigBuilderUtils_PlayableChain::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae7a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigBuilderUtils_PlayableChain>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::RigBuilderUtils_PlayableChain::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigBuilderUtils_PlayableChain>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playables", ty: "::ArrayW<::UnityEngine::Playables::Playable>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RigBuilderUtils_PlayableChain::RigBuilderUtils_PlayableChain(::StringW  name, ::ArrayW<::UnityEngine::Playables::Playable>  playables) noexcept  {
this->name = name;
this->playables = playables;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigBuilderUtils_PlayableChain::RigBuilderUtils_PlayableChain()   {
}
