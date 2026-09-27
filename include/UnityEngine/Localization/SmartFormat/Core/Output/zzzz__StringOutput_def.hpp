#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Output/StringOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringOutput)
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class IOutput;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class StringOutput;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput*, "UnityEngine.Localization.SmartFormat.Core.Output", "StringOutput");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Output {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Output.StringOutput
class CORDL_TYPE StringOutput : public ::System::Object {
public:
// Declarations
/// @brief Field output, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::System::Text::StringBuilder*  output;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Output::IOutput"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*() noexcept;

/// @brief Method Clear, addr 0xb04838c, size 0x18, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput* New_ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput* New_ctor(int32_t  capacity) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput* New_ctor(::System::Text::StringBuilder*  output) ;

/// @brief Method SetCapacity, addr 0xb048308, size 0x54, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method ToString, addr 0xb0483a4, size 0x1c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0xb04835c, size 0x18, virtual true, abstract: false, final true
inline void Write(::StringW  text, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method Write, addr 0xb048374, size 0x18, virtual true, abstract: false, final true
inline void Write(::StringW  text, int32_t  startIndex, int32_t  length, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_output() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_output() ;

constexpr void __cordl_internal_set_output(::System::Text::StringBuilder*  value) ;

/// @brief Method .ctor, addr 0xb0481f0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb04825c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0xb0482d8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Text::StringBuilder*  output) ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Output::IOutput"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* i___UnityEngine__Localization__SmartFormat__Core__Output__IOutput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringOutput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringOutput(StringOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringOutput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringOutput(StringOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25232};

/// @brief Field output, offset: 0x10, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput, ___output) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Output::StringOutput) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Output
