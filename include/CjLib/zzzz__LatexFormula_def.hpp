#pragma once
// IWYU pragma private; include "CjLib/LatexFormula.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LatexFormula)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace CjLib {
class LatexFormula;
}
// Write type traits
MARK_REF_T(::CjLib::LatexFormula*);
DEFINE_IL2CPP_CLASS(::CjLib::LatexFormula*, "CjLib", "LatexFormula");
// [ExecuteInEditMode]
// Dependencies UnityEngine.MonoBehaviour
namespace CjLib {
// Is value type: false
// CS Name: CjLib.LatexFormula
class CORDL_TYPE LatexFormula : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BaseUrl, put=setStaticF_BaseUrl)) ::StringW  BaseUrl;

/// @brief Field m_formula, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_formula, put=__cordl_internal_set_m_formula)) ::StringW  m_formula;

/// @brief Field m_hash, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hash, put=__cordl_internal_set_m_hash)) int32_t  m_hash;

/// @brief Field m_texture, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_texture, put=__cordl_internal_set_m_texture)) ::UnityW<::UnityEngine::Texture>  m_texture;

static inline ::CjLib::LatexFormula* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_m_formula() const;

constexpr ::StringW& __cordl_internal_get_m_formula() ;

constexpr int32_t const& __cordl_internal_get_m_hash() const;

constexpr int32_t& __cordl_internal_get_m_hash() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_m_texture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_m_texture() ;

constexpr void __cordl_internal_set_m_formula(::StringW  value) ;

constexpr void __cordl_internal_set_m_hash(int32_t  value) ;

constexpr void __cordl_internal_set_m_texture(::UnityW<::UnityEngine::Texture>  value) ;

/// @brief Method .ctor, addr 0x5e0c31c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_BaseUrl() ;

static inline void setStaticF_BaseUrl(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LatexFormula() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LatexFormula", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LatexFormula(LatexFormula && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LatexFormula", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LatexFormula(LatexFormula const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5146};

/// @brief Field m_hash, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_hash;

/// [SerializeField]
/// @brief Field m_formula, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_formula;

/// @brief Field m_texture, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___m_texture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CjLib::LatexFormula, ___m_hash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CjLib::LatexFormula, ___m_formula) == 0x28, "Offset mismatch!");

static_assert(offsetof(::CjLib::LatexFormula, ___m_texture) == 0x30, "Offset mismatch!");

static_assert(sizeof(::CjLib::LatexFormula) == 0x38, "Size mismatch!");

} // namespace end def CjLib
