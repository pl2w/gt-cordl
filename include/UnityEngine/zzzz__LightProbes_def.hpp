#pragma once
// IWYU pragma private; include "UnityEngine/LightProbes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightProbes)
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine {
class LightProbes;
}
// Write type traits
MARK_REF_T(::UnityEngine::LightProbes*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbes*, "UnityEngine", "LightProbes");
// [NativeHeader("Runtime/Export/Graphics/Graphics.bindings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightProbes
class CORDL_TYPE LightProbes : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field lightProbesUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lightProbesUpdated, put=setStaticF_lightProbesUpdated)) ::System::Action*  lightProbesUpdated;

/// @brief Field needsRetetrahedralization, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_needsRetetrahedralization, put=setStaticF_needsRetetrahedralization)) ::System::Action*  needsRetetrahedralization;

/// @brief Field tetrahedralizationCompleted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tetrahedralizationCompleted, put=setStaticF_tetrahedralizationCompleted)) ::System::Action*  tetrahedralizationCompleted;

/// [RequiredByNativeCode]
/// @brief Method Internal_CallLightProbesUpdatedFunction, addr 0xb580af4, size 0x64, virtual false, abstract: false, final false
static inline void Internal_CallLightProbesUpdatedFunction() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_CallNeedsRetetrahedralizationFunction, addr 0xb580bbc, size 0x64, virtual false, abstract: false, final false
static inline void Internal_CallNeedsRetetrahedralizationFunction() ;

/// [RequiredByNativeCode]
/// @brief Method Internal_CallTetrahedralizationCompletedFunction, addr 0xb580b58, size 0x64, virtual false, abstract: false, final false
static inline void Internal_CallTetrahedralizationCompletedFunction() ;

static inline ::System::Action* getStaticF_lightProbesUpdated() ;

static inline ::System::Action* getStaticF_needsRetetrahedralization() ;

static inline ::System::Action* getStaticF_tetrahedralizationCompleted() ;

static inline void setStaticF_lightProbesUpdated(::System::Action*  value) ;

static inline void setStaticF_needsRetetrahedralization(::System::Action*  value) ;

static inline void setStaticF_tetrahedralizationCompleted(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightProbes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightProbes(LightProbes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightProbes(LightProbes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14868};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LightProbes) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
