#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckHeadsetCaptureAutoSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(LckHeadsetCaptureAutoSetup)
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderFeature;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureAutoSetup;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup*, "Liv.Lck.Rendering", "LckHeadsetCaptureAutoSetup");
// Dependencies System.Object, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckHeadsetCaptureAutoSetup
class CORDL_TYPE LckHeadsetCaptureAutoSetup : public ::System::Object {
public:
// Declarations
/// @brief Method CreateFeature, addr 0x9d40328, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature> CreateFeature() ;

/// @brief Method EnsureFeaturePresent, addr 0x9d3fee0, size 0x3d4, virtual false, abstract: false, final false
static inline bool EnsureFeaturePresent() ;

/// @brief Method GetRendererDataList, addr 0x9d402b4, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> GetRendererDataList(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*  asset) ;

/// @brief Method HasFeature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>)
static inline bool HasFeature(::UnityEngine::Rendering::Universal::ScriptableRendererData*  rendererData) ;

/// @brief Method InvalidateRendererData, addr 0x9d403c4, size 0x14, virtual false, abstract: false, final false
static inline void InvalidateRendererData(::UnityEngine::Rendering::Universal::ScriptableRendererData*  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHeadsetCaptureAutoSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureAutoSetup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHeadsetCaptureAutoSetup(LckHeadsetCaptureAutoSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureAutoSetup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHeadsetCaptureAutoSetup(LckHeadsetCaptureAutoSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24860};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Rendering::LckHeadsetCaptureAutoSetup) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
