#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckHeadsetCaptureRenderFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(LckHeadsetCaptureRenderFeature)
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderFeature;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*, "Liv.Lck.Rendering", "LckHeadsetCaptureRenderFeature");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckHeadsetCaptureRenderFeature
class CORDL_TYPE LckHeadsetCaptureRenderFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
/// @brief Field <IsConfigured>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsConfigured_k__BackingField, put=setStaticF__IsConfigured_k__BackingField)) bool  _IsConfigured_k__BackingField;

/// @brief Field _pass, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pass, put=__cordl_internal_set__pass)) ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*  _pass;

/// @brief Method AddRenderPasses, addr 0x9d405c4, size 0x238, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x9d40470, size 0xa4, virtual true, abstract: false, final false
inline void Create() ;

/// @brief Method Dispose, addr 0x9d4056c, size 0x10, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature* New_ctor() ;

constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass* const& __cordl_internal_get__pass() const;

constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*& __cordl_internal_get__pass() ;

constexpr void __cordl_internal_set__pass(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*  value) ;

/// @brief Method .ctor, addr 0x9d4082c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__IsConfigured_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_IsConfigured, addr 0x9d403d8, size 0x48, virtual false, abstract: false, final false
static inline bool get_IsConfigured() ;

static inline void setStaticF__IsConfigured_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsConfigured, addr 0x9d40420, size 0x50, virtual false, abstract: false, final false
static inline void set_IsConfigured(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHeadsetCaptureRenderFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHeadsetCaptureRenderFeature(LckHeadsetCaptureRenderFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHeadsetCaptureRenderFeature(LckHeadsetCaptureRenderFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24861};

/// @brief Field _pass, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*  ____pass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature, ____pass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
