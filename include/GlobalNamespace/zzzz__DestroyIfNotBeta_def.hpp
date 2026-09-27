#pragma once
// IWYU pragma private; include "GlobalNamespace/DestroyIfNotBeta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DestroyIfNotBeta)
// Forward declare root types
namespace GlobalNamespace {
class DestroyIfNotBeta;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DestroyIfNotBeta*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DestroyIfNotBeta*, "", "DestroyIfNotBeta");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DestroyIfNotBeta
class CORDL_TYPE DestroyIfNotBeta : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_shouldKeepIfBeta, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_shouldKeepIfBeta, put=__cordl_internal_set_m_shouldKeepIfBeta)) bool  m_shouldKeepIfBeta;

/// @brief Field m_shouldKeepIfCreatorBuild, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_shouldKeepIfCreatorBuild, put=__cordl_internal_set_m_shouldKeepIfCreatorBuild)) bool  m_shouldKeepIfCreatorBuild;

/// @brief Method Awake, addr 0x5799210, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::DestroyIfNotBeta* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_shouldKeepIfBeta() const;

constexpr bool& __cordl_internal_get_m_shouldKeepIfBeta() ;

constexpr bool const& __cordl_internal_get_m_shouldKeepIfCreatorBuild() const;

constexpr bool& __cordl_internal_get_m_shouldKeepIfCreatorBuild() ;

constexpr void __cordl_internal_set_m_shouldKeepIfBeta(bool  value) ;

constexpr void __cordl_internal_set_m_shouldKeepIfCreatorBuild(bool  value) ;

/// @brief Method .ctor, addr 0x579927c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestroyIfNotBeta() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestroyIfNotBeta", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DestroyIfNotBeta(DestroyIfNotBeta && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestroyIfNotBeta", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestroyIfNotBeta(DestroyIfNotBeta const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1468};

/// @brief Field m_shouldKeepIfBeta, offset: 0x20, size: 0x1, def value: None
 bool  ___m_shouldKeepIfBeta;

/// @brief Field m_shouldKeepIfCreatorBuild, offset: 0x21, size: 0x1, def value: None
 bool  ___m_shouldKeepIfCreatorBuild;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DestroyIfNotBeta, ___m_shouldKeepIfBeta) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestroyIfNotBeta, ___m_shouldKeepIfCreatorBuild) == 0x21, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DestroyIfNotBeta) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
