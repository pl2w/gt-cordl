#pragma once
// IWYU pragma private; include "Oculus/Interaction/VersionTextVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VersionTextVisual)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Oculus::Interaction {
class VersionTextVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::VersionTextVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::VersionTextVisual*, "Oculus.Interaction", "VersionTextVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.VersionTextVisual
class CORDL_TYPE VersionTextVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _format, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::StringW  _format;

/// @brief Field _text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Method InjectAllVersionTextVisual, addr 0xa48e688, size 0x30, virtual false, abstract: false, final false
inline void InjectAllVersionTextVisual(::TMPro::TMP_Text*  text, ::StringW  format) ;

/// @brief Method InjectFormat, addr 0xa48e6c0, size 0x8, virtual false, abstract: false, final false
inline void InjectFormat(::StringW  format) ;

/// @brief Method InjectText, addr 0xa48e6b8, size 0x8, virtual false, abstract: false, final false
inline void InjectText(::TMPro::TMP_Text*  text) ;

static inline ::Oculus::Interaction::VersionTextVisual* New_ctor() ;

/// @brief Method Reset, addr 0xa48e5a8, size 0x58, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa48e600, size 0x88, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::StringW const& __cordl_internal_get__format() const;

constexpr ::StringW& __cordl_internal_get__format() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__format(::StringW  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0xa48e6c8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionTextVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionTextVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionTextVisual(VersionTextVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionTextVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionTextVisual(VersionTextVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16046};

/// [SerializeField]
/// @brief Field _text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

/// [SerializeField]
/// @brief Field _format, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____format;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::VersionTextVisual, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::VersionTextVisual, ____format) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::VersionTextVisual) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
