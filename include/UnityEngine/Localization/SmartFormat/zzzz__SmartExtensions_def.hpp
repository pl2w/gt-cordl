#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SmartExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SmartExtensions)
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatCache;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class SmartExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::SmartExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::SmartExtensions*, "UnityEngine.Localization.SmartFormat", "SmartExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.SmartExtensions
class CORDL_TYPE SmartExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AppendLineSmart, addr 0xb028888, size 0x24, virtual false, abstract: false, final false
static inline void AppendLineSmart(::System::Text::StringBuilder*  sb, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Extension]
/// @brief Method AppendSmart, addr 0xb02865c, size 0xe4, virtual false, abstract: false, final false
static inline void AppendSmart(::System::Text::StringBuilder*  sb, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Extension]
/// @brief Method FormatSmart, addr 0xb0289bc, size 0x64, virtual false, abstract: false, final false
static inline ::StringW FormatSmart(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Extension]
/// @brief Method FormatSmart, addr 0xb028a20, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW FormatSmart(::StringW  format, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Extension]
/// @brief Method WriteLineSmart, addr 0xb028990, size 0x2c, virtual false, abstract: false, final false
static inline void WriteLineSmart(::System::IO::TextWriter*  writer, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [Extension]
/// @brief Method WriteSmart, addr 0xb0288ac, size 0xe4, virtual false, abstract: false, final false
static inline void WriteSmart(::System::IO::TextWriter*  writer, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartExtensions(SmartExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartExtensions(SmartExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::SmartExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
