#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataLocalization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TitleDataLocalization)
// Forward declare root types
namespace GlobalNamespace {
class TitleDataLocalization;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TitleDataLocalization*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleDataLocalization*, "", "TitleDataLocalization");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleDataLocalization
class CORDL_TYPE TitleDataLocalization : public ::System::Object {
public:
// Declarations
/// @brief Field English, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_English, put=__cordl_internal_set_English)) ::StringW  English;

/// @brief Field French, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_French, put=__cordl_internal_set_French)) ::StringW  French;

/// @brief Field German, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_German, put=__cordl_internal_set_German)) ::StringW  German;

/// @brief Field Italian, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Italian, put=__cordl_internal_set_Italian)) ::StringW  Italian;

/// @brief Field Japanese, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Japanese, put=__cordl_internal_set_Japanese)) ::StringW  Japanese;

/// @brief Field Spanish, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Spanish, put=__cordl_internal_set_Spanish)) ::StringW  Spanish;

/// @brief Method GetLocalizedText, addr 0x5a63104, size 0x1c8, virtual false, abstract: false, final false
inline ::StringW GetLocalizedText() ;

static inline ::GlobalNamespace::TitleDataLocalization* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_English() const;

constexpr ::StringW& __cordl_internal_get_English() ;

constexpr ::StringW const& __cordl_internal_get_French() const;

constexpr ::StringW& __cordl_internal_get_French() ;

constexpr ::StringW const& __cordl_internal_get_German() const;

constexpr ::StringW& __cordl_internal_get_German() ;

constexpr ::StringW const& __cordl_internal_get_Italian() const;

constexpr ::StringW& __cordl_internal_get_Italian() ;

constexpr ::StringW const& __cordl_internal_get_Japanese() const;

constexpr ::StringW& __cordl_internal_get_Japanese() ;

constexpr ::StringW const& __cordl_internal_get_Spanish() const;

constexpr ::StringW& __cordl_internal_get_Spanish() ;

constexpr void __cordl_internal_set_English(::StringW  value) ;

constexpr void __cordl_internal_set_French(::StringW  value) ;

constexpr void __cordl_internal_set_German(::StringW  value) ;

constexpr void __cordl_internal_set_Italian(::StringW  value) ;

constexpr void __cordl_internal_set_Japanese(::StringW  value) ;

constexpr void __cordl_internal_set_Spanish(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a6a6dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleDataLocalization() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleDataLocalization", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleDataLocalization(TitleDataLocalization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleDataLocalization", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleDataLocalization(TitleDataLocalization const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3093};

/// @brief Field English, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___English;

/// @brief Field French, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___French;

/// @brief Field German, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___German;

/// @brief Field Spanish, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Spanish;

/// @brief Field Italian, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Italian;

/// @brief Field Japanese, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Japanese;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleDataLocalization, ___English) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataLocalization, ___French) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataLocalization, ___German) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataLocalization, ___Spanish) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataLocalization, ___Italian) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleDataLocalization, ___Japanese) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleDataLocalization) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
