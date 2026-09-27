#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsWorld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SurfaceNetsWorld)
namespace FastSurfaceNets {
class GenerationParameters;
}
namespace FastSurfaceNets {
class SurfaceNetsChunk;
}
// Forward declare root types
namespace FastSurfaceNets {
class SurfaceNetsWorld;
}
// Write type traits
MARK_REF_T(::FastSurfaceNets::SurfaceNetsWorld*);
DEFINE_IL2CPP_CLASS(::FastSurfaceNets::SurfaceNetsWorld*, "FastSurfaceNets", "SurfaceNetsWorld");
// Dependencies Unity.Mathematics.int3, UnityEngine.MonoBehaviour
namespace FastSurfaceNets {
// Is value type: false
// CS Name: FastSurfaceNets.SurfaceNetsWorld
class CORDL_TYPE SurfaceNetsWorld : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field chunkPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunkPrefab, put=__cordl_internal_set_chunkPrefab)) ::UnityW<::FastSurfaceNets::SurfaceNetsChunk>  chunkPrefab;

/// @brief Field parameters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::FastSurfaceNets::GenerationParameters*  parameters;

/// @brief Field radius, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) ::Unity::Mathematics::int3  radius;

/// @brief Method Awake, addr 0x5daad38, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DestroyChildren, addr 0x5daaf6c, size 0xdc, virtual false, abstract: false, final false
inline void DestroyChildren() ;

/// @brief Method Generate, addr 0x5daad3c, size 0x230, virtual false, abstract: false, final false
inline void Generate() ;

static inline ::FastSurfaceNets::SurfaceNetsWorld* New_ctor() ;

constexpr ::UnityW<::FastSurfaceNets::SurfaceNetsChunk> const& __cordl_internal_get_chunkPrefab() const;

constexpr ::UnityW<::FastSurfaceNets::SurfaceNetsChunk>& __cordl_internal_get_chunkPrefab() ;

constexpr ::FastSurfaceNets::GenerationParameters* const& __cordl_internal_get_parameters() const;

constexpr ::FastSurfaceNets::GenerationParameters*& __cordl_internal_get_parameters() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_radius() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_radius() ;

constexpr void __cordl_internal_set_chunkPrefab(::UnityW<::FastSurfaceNets::SurfaceNetsChunk>  value) ;

constexpr void __cordl_internal_set_parameters(::FastSurfaceNets::GenerationParameters*  value) ;

constexpr void __cordl_internal_set_radius(::Unity::Mathematics::int3  value) ;

/// @brief Method .ctor, addr 0x5dab048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNetsWorld() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNetsWorld", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceNetsWorld(SurfaceNetsWorld && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNetsWorld", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceNetsWorld(SurfaceNetsWorld const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5000};

/// @brief Field chunkPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::FastSurfaceNets::SurfaceNetsChunk>  ___chunkPrefab;

/// @brief Field radius, offset: 0x28, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___radius;

/// @brief Field parameters, offset: 0x38, size: 0x8, def value: None
 ::FastSurfaceNets::GenerationParameters*  ___parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FastSurfaceNets::SurfaceNetsWorld, ___chunkPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsWorld, ___radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsWorld, ___parameters) == 0x38, "Offset mismatch!");

static_assert(sizeof(::FastSurfaceNets::SurfaceNetsWorld) == 0x40, "Size mismatch!");

} // namespace end def FastSurfaceNets
