#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/PaintingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Technie/PhysicsCreator/zzzz__AutoHullPreset_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PaintingData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace Technie::PhysicsCreator {
class Hash160;
}
namespace Technie::PhysicsCreator {
class HullData;
}
namespace Technie::PhysicsCreator {
struct HullType;
}
namespace Technie::PhysicsCreator {
class IEditorData;
}
namespace Technie::PhysicsCreator {
class IHull;
}
namespace Technie::PhysicsCreator {
class VhacdParameters;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class PaintingData;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::PaintingData*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::PaintingData*, "Technie.PhysicsCreator", "PaintingData");
// Dependencies Technie.PhysicsCreator.AutoHullPreset, UnityEngine.ScriptableObject
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.PaintingData
class CORDL_TYPE PaintingData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_CachedHash, put=set_CachedHash)) ::Technie::PhysicsCreator::Hash160*  CachedHash;

 __declspec(property(get=get_HasCachedData)) bool  HasCachedData;

 __declspec(property(get=get_HasSuppressMeshModificationWarning)) bool  HasSuppressMeshModificationWarning;

 __declspec(property(get=get_Hulls)) ::ArrayW<::Technie::PhysicsCreator::IHull*>  Hulls;

 __declspec(property(get=get_SourceMesh)) ::UnityW<::UnityEngine::Mesh>  SourceMesh;

 __declspec(property(get=get_TotalOutputColliders)) int32_t  TotalOutputColliders;

/// @brief Field activeHull, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeHull, put=__cordl_internal_set_activeHull)) int32_t  activeHull;

/// @brief Field autoHullPreset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoHullPreset, put=__cordl_internal_set_autoHullPreset)) ::Technie::PhysicsCreator::AutoHullPreset  autoHullPreset;

/// @brief Field faceThickness, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_faceThickness, put=__cordl_internal_set_faceThickness)) float_t  faceThickness;

/// @brief Field hasLastVhacdTimings, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLastVhacdTimings, put=__cordl_internal_set_hasLastVhacdTimings)) bool  hasLastVhacdTimings;

/// @brief Field hullData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_hullData, put=__cordl_internal_set_hullData)) ::UnityW<::Technie::PhysicsCreator::HullData>  hullData;

/// @brief Field hulls, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hulls, put=__cordl_internal_set_hulls)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*  hulls;

/// @brief Field lastVhacdDurationSecs, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastVhacdDurationSecs, put=__cordl_internal_set_lastVhacdDurationSecs)) float_t  lastVhacdDurationSecs;

/// @brief Field lastVhacdPreset, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastVhacdPreset, put=__cordl_internal_set_lastVhacdPreset)) ::Technie::PhysicsCreator::AutoHullPreset  lastVhacdPreset;

/// @brief Field sourceMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMesh, put=__cordl_internal_set_sourceMesh)) ::UnityW<::UnityEngine::Mesh>  sourceMesh;

/// @brief Field sourceMeshHash, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMeshHash, put=__cordl_internal_set_sourceMeshHash)) ::Technie::PhysicsCreator::Hash160*  sourceMeshHash;

/// @brief Field suppressMeshModificationWarning, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_suppressMeshModificationWarning, put=__cordl_internal_set_suppressMeshModificationWarning)) bool  suppressMeshModificationWarning;

/// @brief Field vhacdParams, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_vhacdParams, put=__cordl_internal_set_vhacdParams)) ::Technie::PhysicsCreator::VhacdParameters*  vhacdParams;

/// @brief Convert operator to "::Technie::PhysicsCreator::IEditorData"
constexpr operator  ::Technie::PhysicsCreator::IEditorData*() noexcept;

/// @brief Method AddHull, addr 0xadcd640, size 0x284, virtual false, abstract: false, final false
inline void AddHull(::Technie::PhysicsCreator::HullType  type, ::UnityEngine::PhysicsMaterial*  material, bool  isChild, bool  isTrigger) ;

/// @brief Method ContainsMesh, addr 0xadcdc6c, size 0x244, virtual false, abstract: false, final false
inline bool ContainsMesh(::UnityEngine::Mesh*  m) ;

/// @brief Method GetActiveHull, addr 0xadcdbec, size 0x80, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Rigid::Hull* GetActiveHull() ;

/// @brief Method HasActiveHull, addr 0xadcdb8c, size 0x60, virtual false, abstract: false, final false
inline bool HasActiveHull() ;

/// @brief Method HasAutoHulls, addr 0xadcdeb0, size 0x134, virtual false, abstract: false, final false
inline bool HasAutoHulls() ;

static inline ::Technie::PhysicsCreator::PaintingData* New_ctor() ;

/// @brief Method RemoveAllHulls, addr 0xadcdad0, size 0xbc, virtual false, abstract: false, final false
inline void RemoveAllHulls() ;

/// @brief Method RemoveHull, addr 0xadcda20, size 0xac, virtual false, abstract: false, final false
inline void RemoveHull(int32_t  index) ;

/// @brief Method SetAssetDirty, addr 0xadcdfe4, size 0x4, virtual true, abstract: false, final true
inline void SetAssetDirty() ;

constexpr int32_t const& __cordl_internal_get_activeHull() const;

constexpr int32_t& __cordl_internal_get_activeHull() ;

constexpr ::Technie::PhysicsCreator::AutoHullPreset const& __cordl_internal_get_autoHullPreset() const;

constexpr ::Technie::PhysicsCreator::AutoHullPreset& __cordl_internal_get_autoHullPreset() ;

constexpr float_t const& __cordl_internal_get_faceThickness() const;

constexpr float_t& __cordl_internal_get_faceThickness() ;

constexpr bool const& __cordl_internal_get_hasLastVhacdTimings() const;

constexpr bool& __cordl_internal_get_hasLastVhacdTimings() ;

constexpr ::UnityW<::Technie::PhysicsCreator::HullData> const& __cordl_internal_get_hullData() const;

constexpr ::UnityW<::Technie::PhysicsCreator::HullData>& __cordl_internal_get_hullData() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>* const& __cordl_internal_get_hulls() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*& __cordl_internal_get_hulls() ;

constexpr float_t const& __cordl_internal_get_lastVhacdDurationSecs() const;

constexpr float_t& __cordl_internal_get_lastVhacdDurationSecs() ;

constexpr ::Technie::PhysicsCreator::AutoHullPreset const& __cordl_internal_get_lastVhacdPreset() const;

constexpr ::Technie::PhysicsCreator::AutoHullPreset& __cordl_internal_get_lastVhacdPreset() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_sourceMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_sourceMesh() ;

constexpr ::Technie::PhysicsCreator::Hash160* const& __cordl_internal_get_sourceMeshHash() const;

constexpr ::Technie::PhysicsCreator::Hash160*& __cordl_internal_get_sourceMeshHash() ;

constexpr bool const& __cordl_internal_get_suppressMeshModificationWarning() const;

constexpr bool& __cordl_internal_get_suppressMeshModificationWarning() ;

constexpr ::Technie::PhysicsCreator::VhacdParameters* const& __cordl_internal_get_vhacdParams() const;

constexpr ::Technie::PhysicsCreator::VhacdParameters*& __cordl_internal_get_vhacdParams() ;

constexpr void __cordl_internal_set_activeHull(int32_t  value) ;

constexpr void __cordl_internal_set_autoHullPreset(::Technie::PhysicsCreator::AutoHullPreset  value) ;

constexpr void __cordl_internal_set_faceThickness(float_t  value) ;

constexpr void __cordl_internal_set_hasLastVhacdTimings(bool  value) ;

constexpr void __cordl_internal_set_hullData(::UnityW<::Technie::PhysicsCreator::HullData>  value) ;

constexpr void __cordl_internal_set_hulls(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*  value) ;

constexpr void __cordl_internal_set_lastVhacdDurationSecs(float_t  value) ;

constexpr void __cordl_internal_set_lastVhacdPreset(::Technie::PhysicsCreator::AutoHullPreset  value) ;

constexpr void __cordl_internal_set_sourceMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_sourceMeshHash(::Technie::PhysicsCreator::Hash160*  value) ;

constexpr void __cordl_internal_set_suppressMeshModificationWarning(bool  value) ;

constexpr void __cordl_internal_set_vhacdParams(::Technie::PhysicsCreator::VhacdParameters*  value) ;

/// @brief Method .ctor, addr 0xadcdfe8, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedHash, addr 0xadcd57c, size 0x8, virtual true, abstract: false, final true
inline ::Technie::PhysicsCreator::Hash160* get_CachedHash() ;

/// @brief Method get_HasCachedData, addr 0xadcd58c, size 0x54, virtual true, abstract: false, final true
inline bool get_HasCachedData() ;

/// @brief Method get_HasSuppressMeshModificationWarning, addr 0xadcd638, size 0x8, virtual true, abstract: false, final true
inline bool get_HasSuppressMeshModificationWarning() ;

/// @brief Method get_Hulls, addr 0xadcd5e8, size 0x50, virtual true, abstract: false, final true
inline ::ArrayW<::Technie::PhysicsCreator::IHull*> get_Hulls() ;

/// @brief Method get_SourceMesh, addr 0xadcd5e0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Mesh> get_SourceMesh() ;

/// @brief Method get_TotalOutputColliders, addr 0xadcd424, size 0x158, virtual false, abstract: false, final false
inline int32_t get_TotalOutputColliders() ;

/// @brief Convert to "::Technie::PhysicsCreator::IEditorData"
constexpr ::Technie::PhysicsCreator::IEditorData* i___Technie__PhysicsCreator__IEditorData() noexcept;

/// @brief Method set_CachedHash, addr 0xadcd584, size 0x8, virtual true, abstract: false, final true
inline void set_CachedHash(::Technie::PhysicsCreator::Hash160*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaintingData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaintingData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PaintingData(PaintingData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaintingData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaintingData(PaintingData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30515};

/// @brief Field hullData, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Technie::PhysicsCreator::HullData>  ___hullData;

/// @brief Field sourceMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___sourceMesh;

/// @brief Field sourceMeshHash, offset: 0x28, size: 0x8, def value: None
 ::Technie::PhysicsCreator::Hash160*  ___sourceMeshHash;

/// @brief Field activeHull, offset: 0x30, size: 0x4, def value: None
 int32_t  ___activeHull;

/// @brief Field faceThickness, offset: 0x34, size: 0x4, def value: None
 float_t  ___faceThickness;

/// @brief Field hulls, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Rigid::Hull*>*  ___hulls;

/// @brief Field autoHullPreset, offset: 0x40, size: 0x4, def value: None
 ::Technie::PhysicsCreator::AutoHullPreset  ___autoHullPreset;

/// @brief Field vhacdParams, offset: 0x48, size: 0x8, def value: None
 ::Technie::PhysicsCreator::VhacdParameters*  ___vhacdParams;

/// @brief Field hasLastVhacdTimings, offset: 0x50, size: 0x1, def value: None
 bool  ___hasLastVhacdTimings;

/// @brief Field lastVhacdPreset, offset: 0x54, size: 0x4, def value: None
 ::Technie::PhysicsCreator::AutoHullPreset  ___lastVhacdPreset;

/// @brief Field lastVhacdDurationSecs, offset: 0x58, size: 0x4, def value: None
 float_t  ___lastVhacdDurationSecs;

/// @brief Field suppressMeshModificationWarning, offset: 0x5c, size: 0x1, def value: None
 bool  ___suppressMeshModificationWarning;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___hullData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___sourceMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___sourceMeshHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___activeHull) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___faceThickness) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___hulls) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___autoHullPreset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___vhacdParams) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___hasLastVhacdTimings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___lastVhacdPreset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___lastVhacdDurationSecs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::PaintingData, ___suppressMeshModificationWarning) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::PaintingData) == 0x60, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
