#pragma once
// IWYU pragma private; include "GlobalNamespace/ImplosionExplosionMain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImplosionExplosionMain)
namespace BoingKit {
class BoingReactorField;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class ImplosionExplosionMain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ImplosionExplosionMain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImplosionExplosionMain*, "", "ImplosionExplosionMain");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ImplosionExplosionMain
class CORDL_TYPE ImplosionExplosionMain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Diamond, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Diamond, put=__cordl_internal_set_Diamond)) ::UnityW<::UnityEngine::GameObject>  Diamond;

/// @brief Field NumDiamonds, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumDiamonds, put=__cordl_internal_set_NumDiamonds)) int32_t  NumDiamonds;

/// @brief Field ReactorField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReactorField, put=__cordl_internal_set_ReactorField)) ::UnityW<::BoingKit::BoingReactorField>  ReactorField;

/// @brief Field kNumInstancedBushesPerDrawCall, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kNumInstancedBushesPerDrawCall, put=setStaticF_kNumInstancedBushesPerDrawCall)) int32_t  kNumInstancedBushesPerDrawCall;

/// @brief Field m_aaInstancedDiamondMatrix, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aaInstancedDiamondMatrix, put=__cordl_internal_set_m_aaInstancedDiamondMatrix)) ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  m_aaInstancedDiamondMatrix;

/// @brief Field m_diamondMaterialProps, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_diamondMaterialProps, put=__cordl_internal_set_m_diamondMaterialProps)) ::UnityEngine::MaterialPropertyBlock*  m_diamondMaterialProps;

static inline ::GlobalNamespace::ImplosionExplosionMain* New_ctor() ;

/// @brief Method Start, addr 0x55e83e8, size 0x324, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55e870c, size 0x1a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Diamond() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Diamond() ;

constexpr int32_t const& __cordl_internal_get_NumDiamonds() const;

constexpr int32_t& __cordl_internal_get_NumDiamonds() ;

constexpr ::UnityW<::BoingKit::BoingReactorField> const& __cordl_internal_get_ReactorField() const;

constexpr ::UnityW<::BoingKit::BoingReactorField>& __cordl_internal_get_ReactorField() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>> const& __cordl_internal_get_m_aaInstancedDiamondMatrix() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>& __cordl_internal_get_m_aaInstancedDiamondMatrix() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_diamondMaterialProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_diamondMaterialProps() ;

constexpr void __cordl_internal_set_Diamond(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_NumDiamonds(int32_t  value) ;

constexpr void __cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value) ;

constexpr void __cordl_internal_set_m_aaInstancedDiamondMatrix(::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  value) ;

constexpr void __cordl_internal_set_m_diamondMaterialProps(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0x55e88ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_kNumInstancedBushesPerDrawCall() ;

static inline void setStaticF_kNumInstancedBushesPerDrawCall(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImplosionExplosionMain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImplosionExplosionMain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImplosionExplosionMain(ImplosionExplosionMain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImplosionExplosionMain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImplosionExplosionMain(ImplosionExplosionMain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30};

/// @brief Field ReactorField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BoingKit::BoingReactorField>  ___ReactorField;

/// @brief Field Diamond, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Diamond;

/// @brief Field NumDiamonds, offset: 0x30, size: 0x4, def value: None
 int32_t  ___NumDiamonds;

/// @brief Field m_aaInstancedDiamondMatrix, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  ___m_aaInstancedDiamondMatrix;

/// @brief Field m_diamondMaterialProps, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_diamondMaterialProps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ImplosionExplosionMain, ___ReactorField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImplosionExplosionMain, ___Diamond) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImplosionExplosionMain, ___NumDiamonds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImplosionExplosionMain, ___m_aaInstancedDiamondMatrix) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImplosionExplosionMain, ___m_diamondMaterialProps) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ImplosionExplosionMain) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
