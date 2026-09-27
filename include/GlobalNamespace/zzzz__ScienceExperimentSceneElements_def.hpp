#pragma once
// IWYU pragma private; include "GlobalNamespace/ScienceExperimentSceneElements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScienceExperimentSceneElements)
namespace GlobalNamespace {
struct ScienceExperimentSceneElements_DisableByLiquidData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ScienceExperimentSceneElements;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScienceExperimentSceneElements*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentSceneElements*, "", "ScienceExperimentSceneElements");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScienceExperimentSceneElements
class CORDL_TYPE ScienceExperimentSceneElements : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DisableByLiquidData = ::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData;

/// @brief Field disableByLiquidList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableByLiquidList, put=__cordl_internal_set_disableByLiquidList)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*  disableByLiquidList;

/// @brief Field sodaEruptionParticles, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sodaEruptionParticles, put=__cordl_internal_set_sodaEruptionParticles)) ::UnityW<::UnityEngine::ParticleSystem>  sodaEruptionParticles;

/// @brief Field sodaFizzParticles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sodaFizzParticles, put=__cordl_internal_set_sodaFizzParticles)) ::UnityW<::UnityEngine::ParticleSystem>  sodaFizzParticles;

/// @brief Method Awake, addr 0x5983784, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ScienceExperimentSceneElements* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59837e8, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>* const& __cordl_internal_get_disableByLiquidList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*& __cordl_internal_get_disableByLiquidList() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_sodaEruptionParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_sodaEruptionParticles() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_sodaFizzParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_sodaFizzParticles() ;

constexpr void __cordl_internal_set_disableByLiquidList(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*  value) ;

constexpr void __cordl_internal_set_sodaEruptionParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_sodaFizzParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5983844, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentSceneElements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentSceneElements", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScienceExperimentSceneElements(ScienceExperimentSceneElements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentSceneElements", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScienceExperimentSceneElements(ScienceExperimentSceneElements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2535};

/// @brief Field disableByLiquidList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentSceneElements_DisableByLiquidData>*  ___disableByLiquidList;

/// @brief Field sodaFizzParticles, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___sodaFizzParticles;

/// @brief Field sodaEruptionParticles, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___sodaEruptionParticles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentSceneElements, ___disableByLiquidList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentSceneElements, ___sodaFizzParticles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentSceneElements, ___sodaEruptionParticles) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentSceneElements) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
