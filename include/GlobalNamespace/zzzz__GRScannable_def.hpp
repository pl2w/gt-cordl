#pragma once
// IWYU pragma private; include "GlobalNamespace/GRScannable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GRScannable)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactor;
}
// Forward declare root types
namespace GlobalNamespace {
class GRScannable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRScannable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRScannable*, "", "GRScannable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRScannable
class CORDL_TYPE GRScannable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field annotationText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_annotationText, put=__cordl_internal_set_annotationText)) ::StringW  annotationText;

/// @brief Field bodyText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyText, put=__cordl_internal_set_bodyText)) ::StringW  bodyText;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field titleText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleText, put=__cordl_internal_set_titleText)) ::StringW  titleText;

/// @brief Method GetAnnotationText, addr 0x58aa300, size 0x8, virtual true, abstract: false, final false
inline ::StringW GetAnnotationText(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method GetBodyText, addr 0x58aa2f8, size 0x8, virtual true, abstract: false, final false
inline ::StringW GetBodyText(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method GetTitleText, addr 0x58aa2f0, size 0x8, virtual true, abstract: false, final false
inline ::StringW GetTitleText(::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GRScannable* New_ctor() ;

/// @brief Method Start, addr 0x58aa24c, size 0xa4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::StringW const& __cordl_internal_get_annotationText() const;

constexpr ::StringW& __cordl_internal_get_annotationText() ;

constexpr ::StringW const& __cordl_internal_get_bodyText() const;

constexpr ::StringW& __cordl_internal_get_bodyText() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::StringW const& __cordl_internal_get_titleText() const;

constexpr ::StringW& __cordl_internal_get_titleText() ;

constexpr void __cordl_internal_set_annotationText(::StringW  value) ;

constexpr void __cordl_internal_set_bodyText(::StringW  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_titleText(::StringW  value) ;

/// @brief Method .ctor, addr 0x58aa308, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRScannable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRScannable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRScannable(GRScannable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRScannable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRScannable(GRScannable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2022};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [SerializeField]
/// @brief Field titleText, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___titleText;

/// [SerializeField]
/// @brief Field bodyText, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___bodyText;

/// [SerializeField]
/// @brief Field annotationText, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___annotationText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRScannable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRScannable, ___titleText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRScannable, ___bodyText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRScannable, ___annotationText) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRScannable) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
