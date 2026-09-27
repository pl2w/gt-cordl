#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractor_CachedInteractable.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_impl.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_CachedInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractable_def.hpp"
// Ctor Parameters [CppParam { name: "interactable", ty: "::UnityW<::Oculus::Interaction::PokeInteractable>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backingHit", ty: "::Oculus::Interaction::Surfaces::SurfaceHit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "patchHit", ty: "::Oculus::Interaction::Surfaces::SurfaceHit", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PokeInteractor_CachedInteractable::PokeInteractor_CachedInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  interactable, ::Oculus::Interaction::Surfaces::SurfaceHit  backingHit, ::Oculus::Interaction::Surfaces::SurfaceHit  patchHit) noexcept  {
this->interactable = interactable;
this->backingHit = backingHit;
this->patchHit = patchHit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PokeInteractor_CachedInteractable::PokeInteractor_CachedInteractable()   {
}
